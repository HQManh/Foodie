// rea decompile_all
// name: System.DateTimeOffset$$TryParse
// address: 0x759bb64
// body: available
// range: 0x759bb64-0x759bd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DateTimeOffset__TryParse
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09521bf1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09223728);
    DAT_09521bf1 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09183590 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_DateTimeOffset__ValidateStyles(param_3,DAT_09223728);
  if (param_1 == 0) {
    uVar3 = 0;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    uVar4 = System_String__GetRawStringData(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183570);
    }
    uVar5 = System_Globalization_DateTimeFormatInfo__GetInstance(param_2,0);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835a8);
    }
    uVar3 = System_DateTimeParse__TryParse(uVar4,uVar1,uVar5,uVar2,&local_50,&local_48);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar4 = System_DateTime__get_Ticks(&local_50);
    local_60 = 0;
    uStack_58 = 0;
    System_DateTimeOffset___ctor(&local_60,uVar4,local_48);
    param_4[1] = uStack_58;
    *param_4 = local_60;
  }
  return uVar3 & 1;
}

