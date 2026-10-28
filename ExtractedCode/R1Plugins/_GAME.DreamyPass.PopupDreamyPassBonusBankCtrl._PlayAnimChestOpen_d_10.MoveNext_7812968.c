// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassBonusBankCtrl.<PlayAnimChestOpen>d__10$$MoveNext
// address: 0x7812968
// body: available
// range: 0x7812968-0x7812f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7812f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7812f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassBonusBankCtrl_<PlayAnimChestOpen>d__10__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0952326c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20c0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09209dc0);
    FUN_03f5c2a4(&DAT_091f9dd8);
    FUN_03f5c2a4(&DAT_091f9e30);
    DAT_0952326c = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_07812d74;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar10 + 0xf0),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__SetEmptyAnimation(0,lVar4,0,0);
    if (*(long *)(lVar10 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar10 + 0xf0),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__SetAnimation(lVar4,0,DAT_091f9dd8,0,0);
    if (*(long *)(lVar10 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar10 + 0xf0),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__AddAnimation(0,lVar4,0,DAT_091f9e30,1,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3fa00000,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar9 = local_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07812ba8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07812ba8:
      iVar3 = (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b1f20(param_1 + 2,local_60,param_1,DAT_091c20c0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07812c3c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07812c3c:
    (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(lVar10 + 0xe8),DAT_09209dc0,0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar11 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3eb33333,0,8,0,0,0);
  local_50 = auVar11;
  thunk_FUN_03f5d7b8(local_50,0);
  local_60 = local_50;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07812d60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07812d60:
    iVar3 = (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
    if (iVar3 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 8) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_049b1f20(param_1 + 2,local_60,param_1,DAT_091c20c0);
      return;
    }
  }
LAB_07812d74:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07812df4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07812df4:
    (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07812e8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_07812e8c:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
  return;
}

