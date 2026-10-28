// rea decompile_all
// name: IapAdsSystem.ConsentConfig$$GetDebugGeography
// address: 0x730c480
// body: available
// range: 0x730c480-0x730c53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 IapAdsSystem_ConsentConfig__GetDebugGeography(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_24;
  
  if ((DAT_095204c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091714b0);
    DAT_095204c8 = 1;
  }
  uVar2 = DAT_091714b0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  uVar4 = System_Enum__IsDefined(uVar2,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}

