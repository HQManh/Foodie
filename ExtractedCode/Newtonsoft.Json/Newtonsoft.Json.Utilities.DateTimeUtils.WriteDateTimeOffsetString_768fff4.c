// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$WriteDateTimeOffsetString
// address: 0x768fff4
// body: available
// range: 0x768fff4-0x76901c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76901c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffsetString
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_09522594 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_091b74f8);
    DAT_09522594 = 1;
  }
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_5,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09183590 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_DateTimeOffset__ToString(&local_50,param_5,param_6,0);
    if (param_1 == (long *)0x0) goto LAB_076901c0;
    (**(code **)(*param_1 + 0x278))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x280));
  }
  else {
    uVar3 = FUN_03f5c394(DAT_0917fcc8,0x40);
    if (param_4 == 0) {
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183590);
      }
      uVar4 = System_DateTimeOffset__get_DateTime(&local_50,0);
    }
    else {
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183590);
      }
      uVar4 = System_DateTimeOffset__get_UtcDateTime(&local_50,0);
    }
    if (*(int *)(DAT_09183590 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_DateTimeOffset__get_Offset(&local_50,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_05c381f8(&local_60,uVar5,DAT_091b74f8);
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeString
                      (uVar3,0,uVar4,local_60,uStack_58,2,param_4);
    if (param_1 == (long *)0x0) {
LAB_076901c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,0,uVar1,*(undefined8 *)(*param_1 + 0x250));
  }
  return;
}

