// rea decompile_all
// name: System.Threading.CancellationTokenRegistration$$GetHashCode
// address: 0x761ca90
// body: available
// range: 0x761ca90-0x761cb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Threading_CancellationTokenRegistration__GetHashCode(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_14;
  
  if ((DAT_095220ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bae20);
    FUN_03f5c2a4(&DAT_091bae28);
    DAT_095220ff = 1;
  }
  plVar3 = *(long **)(param_1 + 8);
  local_14 = 0;
  if (plVar3 == (long *)0x0) {
    local_14 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = System_Int32__GetHashCode(&local_14,0);
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    local_14 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = System_Int32__GetHashCode(&local_14,0);
    uVar4 = (ulong)(uVar2 ^ uVar1);
  }
  return uVar4;
}

