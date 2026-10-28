// rea decompile_all
// name: System.DateTimeOffset$$ParseExact
// address: 0x759a9ac
// body: available
// range: 0x759a9ac-0x759aab3 inclusive
// range: 0x759aab8-0x759aac3 inclusive
// range: 0x759aac8-0x759abc3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759aab0 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759aac0 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_DateTimeOffset__ParseExact(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_09521be6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09223728);
    DAT_09521be6 = 1;
  }
  local_48 = 0;
  local_68 = 0;
  if (*(int *)(DAT_09183590 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_DateTimeOffset__ValidateStyles(param_4,DAT_09223728);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0x31,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0x32,0);
  }
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (param_1 == 0) {
    uVar3 = 0;
    uVar7 = 0;
  }
  else {
    uVar3 = System_String__GetRawStringData(param_1,0);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
  }
  if (param_2 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = System_String__GetRawStringData(param_2,0);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Globalization_DateTimeFormatInfo__GetInstance(param_3,0);
  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835a8);
  }
  local_68 = System_DateTimeParse__ParseExact(uVar3,uVar7,uVar4,uVar6,uVar5,uVar2,&local_48);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  uVar3 = System_DateTime__get_Ticks(&local_68);
  local_60 = 0;
  uStack_58 = 0;
  System_DateTimeOffset___ctor(&local_60,uVar3,local_48);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}

