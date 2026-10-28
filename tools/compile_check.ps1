# Compiles DaivqUtilities -> CakeOrder -> Assembly-CSharp with Unity's bundled Roslyn, writing to tools\chk (the editor's build is untouched).
# Uses the response files from Library\Bee\artifacts (written by the last Unity build), so it follows the project's references and defines.
# Usage: powershell -File D:\Unity\Foodie\tools\compile_check.ps1
$ErrorActionPreference = "Continue"
$proj = "D:\Unity\Foodie\UnityProject"
$chk  = "D:\Unity\Foodie\tools\chk"
$dag  = "$proj\Library\Bee\artifacts\1300b0aE.dag"
$dn   = "C:\Program Files\Unity\Hub\Editor\6000.3.5f1\Editor\Data\NetCoreRuntime\dotnet.exe"
$csc  = "C:\Program Files\Unity\Hub\Editor\6000.3.5f1\Editor\Data\DotNetSdkRoslyn\csc.dll"
New-Item -ItemType Directory -Force $chk | Out-Null
function Build-Rsp($name, $swaps) {
  $t = Get-Content "$dag\$name.rsp"
  $t = $t -replace '^-out:.*', "-out:`"D:/Unity/Foodie/tools/chk/$name.dll`""
  $t = $t -replace '^-refout:.*', "-refout:`"D:/Unity/Foodie/tools/chk/$name.ref.dll`""
  foreach ($s in $swaps) { $t = $t -replace [regex]::Escape("-r:`"Library/Bee/artifacts/1300b0aE.dag/$s.ref.dll`""), "-r:`"D:/Unity/Foodie/tools/chk/$s.ref.dll`"" }
  Set-Content "$chk\$name.rsp" $t
}
Set-Location $proj
$total = 0
foreach ($step in @(@("DaivqUtilities", @()), @("CakeOrder", @("DaivqUtilities")), @("Assembly-CSharp", @("DaivqUtilities","CakeOrder")))) {
  $name = $step[0]; Build-Rsp $name $step[1]
  $out = & $dn exec $csc /nostdlib /noconfig "@$chk\$name.rsp" 2>&1 | Out-String
  $lines = $out -split "`n"
  $errs = @($lines | Select-String 'error CS')
  "== $name : errors=$($errs.Count), warnings=$(@($lines | Select-String 'warning CS').Count)"
  $errs | Select-Object -First 40 | ForEach-Object { "  " + $_.Line.Trim() }
  $total += $errs.Count
  if ($errs.Count -gt 0) { "stopping: fix $name first"; break }
}
"TOTAL ERRORS: $total"
