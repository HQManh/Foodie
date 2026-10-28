// rea decompile_all
// name: System.TimeZoneInfo$$ParseTimeOfDay
// address: 0x7511af8
// body: available
// range: 0x7511af8-0x7511d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_TimeZoneInfo__ParseTimeOfDay(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_38;
  
  if ((DAT_095216e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b74f8);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216e7 = 1;
  }
  local_38 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_58 = 0;
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = System_TimeZoneInfo__TZif_ParseOffsetString(param_1);
  if ((local_50._0_8_ & 0xff) == 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DateTime___ctor(&local_38,1,1,1,2,0,0,0);
  }
  else {
    local_58 = FUN_05c38210(local_50,DAT_091b7518);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar1 = System_TimeSpan__get_Hours(&local_58,0);
    local_58 = FUN_05c38210(local_50,DAT_091b7518);
    uVar2 = System_TimeSpan__get_Minutes(&local_58,0);
    local_58 = FUN_05c38210(local_50,DAT_091b7518);
    uVar3 = System_TimeSpan__get_Seconds(&local_58,0);
    local_60 = 0;
    System_TimeSpan___ctor(&local_60,uVar1,uVar2,uVar3,0);
    FUN_05c381f8(local_50,local_60,DAT_091b74f8);
    uVar4 = FUN_05c38210(local_50,DAT_091b7518);
    uVar5 = System_TimeSpan__op_LessThan(uVar4,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    uVar1 = 1;
    if ((uVar5 & 1) != 0) {
      uVar1 = 2;
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(1);
    }
    System_DateTime___ctor(&local_38,1,1,uVar1,0,0,0,0);
    uVar4 = local_38;
    uVar6 = FUN_05c38210(local_50,DAT_091b7518);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    local_38 = System_DateTime__op_Addition(uVar4,uVar6,0);
  }
  return local_38;
}

