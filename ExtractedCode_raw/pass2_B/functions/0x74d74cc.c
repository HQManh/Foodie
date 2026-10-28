// rea decompile_all
// name: System.Resources.ManifestBasedResourceGroveler$$GetNeutralResourcesLanguage
// address: 0x74d74cc
// body: available
// range: 0x74d74cc-0x74d763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d7638 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ManifestBasedResourceGroveler__GetNeutralResourcesLanguage
               (undefined8 param_1,uint *param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort local_4c [6];
  undefined4 local_40;
  ushort local_34 [2];
  undefined8 local_28;
  
  if ((DAT_0952155e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_0952155e = 1;
  }
  local_28 = 0;
  local_34[0] = 0;
  local_40 = 0;
  uVar3 = System_Resources_ManifestBasedResourceGroveler__GetNeutralResourcesLanguageAttribute
                    (param_1,&local_28,local_34);
  uVar4 = local_28;
  uVar2 = local_34[0];
  lVar1 = DAT_09182ff8;
  if ((uVar3 & 1) == 0) {
    *param_2 = 0;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Globalization_CultureInfo__get_InvariantCulture(0);
  }
  else {
    if (1 < local_34[0]) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar4 = FUN_03f5c394(uVar4,1);
      local_4c[0] = uVar2;
      uVar5 = FUN_03f5c42c(DAT_09535410,local_4c);
      FUN_039b1d98(uVar4);
      FUN_039b0da0(uVar4,uVar5);
      FUN_039af17c(uVar4,0,uVar5);
      uVar5 = thunk_FUN_03fc39d4(&DAT_0920ee80);
      uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar5,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d28a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
    *param_2 = (uint)local_34[0];
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Globalization_CultureInfo__GetCultureInfo(uVar4,0);
  }
  return;
}

