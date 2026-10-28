// rea decompile_all
// name: Utilities.DeviceTier$$UseTier
// address: 0x44f5f54
// body: available
// range: 0x44f5f54-0x44f60b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DeviceTier__UseTier(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_0951842e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09183b00);
    FUN_03f5c2a4(&DAT_091b6d10);
    FUN_03f5c2a4(&DAT_0917dc50);
    FUN_03f5c2a4(&DAT_09213ca0);
    DAT_0951842e = 1;
  }
  local_48 = 0;
  FUN_05c30b18(&local_48,param_1,DAT_091b6d10);
  **(undefined8 **)(DAT_09183b00 + 0xb8) = local_48;
  local_50 = **(undefined8 **)(DAT_09183b00 + 0xb8);
  uVar2 = FUN_03f5c42c(DAT_0917dc50,&local_50);
  iVar1 = Utilities_DeviceTier__get_Current();
  local_54 = 0x3c;
  if (iVar1 != 1) {
    local_54 = 0x1e;
  }
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
  uVar4 = Utilities_DeviceTier__DescribeHardware();
  uVar2 = System_String__Format(DAT_09213ca0,uVar2,uVar3,uVar4,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar2,0);
  return;
}

