// rea decompile_all
// name: CW.Common.CwInput$$GetTouch
// address: 0x44ea4c0
// body: available
// range: 0x44ea4c0-0x44ea623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ea620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwInput__GetTouch
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09518406 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9440);
    FUN_03f5c2a4(&DAT_0918bf08);
    DAT_09518406 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_70 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_activeTouches(0);
  FUN_05e83c00(&local_88,local_70,param_3,DAT_091b9440);
  uStack_58 = uStack_80;
  local_60 = local_88;
  local_50 = local_78;
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *param_4 = *(undefined4 *)(local_88 + 0x18);
  uVar3 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_screenPosition(&local_60,0);
  *param_5 = uVar3;
  param_5[1] = param_2;
  uVar3 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_pressure(&local_60,0);
  *param_6 = uVar3;
  iVar2 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_60,0);
  if (iVar2 != 1) {
    if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_60,0);
    if (iVar2 != 5) {
      if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_60,0);
      bVar1 = iVar2 == 2;
      goto LAB_044ea604;
    }
  }
  bVar1 = true;
LAB_044ea604:
  *(bool *)param_7 = bVar1;
  return;
}

