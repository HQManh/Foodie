// rea decompile_all
// name: AnhPD.PointerInput$$PollTouch
// address: 0x41cade8
// body: available
// range: 0x41cade8-0x41cb0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cb0f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_PointerInput__PollTouch(undefined1 param_1 [16],undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_50 [16];
  
  if ((DAT_09516a02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091893b8);
    FUN_03f5c2a4(&DAT_091b9438);
    FUN_03f5c2a4(&DAT_091b9440);
    FUN_03f5c2a4(&DAT_0918bf08);
    DAT_09516a02 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  uVar3 = UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport__get_enabled(0);
  if ((uVar3 & 1) == 0) {
    UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport__Enable(0);
  }
  if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar8 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_activeTouches(0);
  local_50 = auVar8;
  if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(int **)(DAT_091893b8 + 0xb8) == -1) {
    if (0 < auVar8._12_4_) {
      iVar2 = 0;
      do {
        FUN_05e83c00(&local_a8,local_50,iVar2,DAT_091b9440);
        uStack_88 = uStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_90,0);
        if (iVar1 == 1) {
          if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (local_90 != 0) {
            uVar7 = *(undefined4 *)(local_90 + 0x18);
            if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            **(undefined4 **)(DAT_091893b8 + 0xb8) = uVar7;
            uVar7 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_screenPosition(&local_90,0);
            lVar5 = DAT_091893b8;
            lVar6 = *(long *)(DAT_091893b8 + 0xb8);
            *(undefined4 *)(lVar6 + 8) = uVar7;
            *(undefined4 *)(lVar6 + 0xc) = param_2;
            *(undefined2 *)(*(long *)(lVar5 + 0xb8) + 0x10) = 0x101;
            return 1;
          }
          goto LAB_041cb0f4;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_50._12_4_);
    }
    uVar4 = 0;
  }
  else {
    if (0 < auVar8._12_4_) {
      iVar2 = 0;
      do {
        FUN_05e83c00(&local_a8,local_50,iVar2,DAT_091b9440);
        uStack_68 = uStack_a0;
        local_70 = local_a8;
        local_60 = local_98;
        if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (local_70 == 0) {
LAB_041cb0f4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(local_70 + 0x18);
        if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (iVar1 == **(int **)(DAT_091893b8 + 0xb8)) {
          if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_screenPosition(&local_70,0);
          if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(DAT_091893b8 + 0xb8);
          *(undefined4 *)(lVar5 + 8) = uVar7;
          *(undefined4 *)(lVar5 + 0xc) = param_2;
          iVar2 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_70,0);
          if (iVar2 != 3) {
            if (*(int *)(DAT_0918bf08 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = UnityEngine_InputSystem_EnhancedTouch_Touch__get_phase(&local_70,0);
            if (iVar2 != 4) {
              if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              *(undefined1 *)(*(long *)(DAT_091893b8 + 0xb8) + 0x10) = 1;
              return 1;
            }
          }
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_50._12_4_);
    }
    if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_PointerInput__EndGesture();
    uVar4 = 1;
  }
  return uVar4;
}

