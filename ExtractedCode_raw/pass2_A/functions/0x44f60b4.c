// rea decompile_all
// name: Utilities.DeviceTier$$DescribeHardware
// address: 0x44f60b4
// body: available
// range: 0x44f60b4-0x44f62a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DeviceTier__DescribeHardware(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09518431 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e60);
    FUN_03f5c2a4(&DAT_09226788);
    FUN_03f5c2a4(&DAT_09226460);
    FUN_03f5c2a4(&DAT_091fae68);
    DAT_09518431 = 1;
  }
  uVar1 = UnityEngine_SystemInfo__GetDeviceModel(0);
  local_44 = UnityEngine_SystemInfo__get_systemMemorySize(0);
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
  local_48 = UnityEngine_SystemInfo__get_processorCount(0);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
  uVar1 = System_String__Format(DAT_09226460,uVar1,uVar2,uVar3,0);
  local_4c = UnityEngine_SystemInfo__get_processorFrequency(0);
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_4c);
  uVar3 = UnityEngine_SystemInfo__GetGraphicsDeviceName(0);
  local_50 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  uVar4 = FUN_03f5c42c(DAT_09184e60,&local_50);
  uVar2 = System_String__Format(DAT_091fae68,uVar2,uVar3,uVar4,0);
  local_54 = UnityEngine_SystemInfo__get_graphicsMemorySize(0);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
  local_58 = UnityEngine_SystemInfo__get_graphicsShaderLevel(0);
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_58);
  local_5c = Utilities_DeviceTier__get_MaxRefreshRate();
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_5c);
  uVar3 = System_String__Format(DAT_09226788,uVar3,uVar4,uVar5,0);
  System_String__Concat(uVar1,uVar2,uVar3,0);
  return;
}

