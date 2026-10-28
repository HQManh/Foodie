// rea decompile_all
// name: AnhPD.FoodOrder.TutorialContext.<WaitIngredientTap>d__19$$MoveNext
// address: 0x411e228
// body: available
// range: 0x411e228-0x411ea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411e53c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411e9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411e9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411e9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ea00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ea04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ea08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ea0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ea10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialContext_<WaitIngredientTap>d__19__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 local_90 [16];
  int **local_80;
  undefined4 local_68;
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  undefined1 local_40 [16];
  
  local_48 = param_1;
  if ((DAT_09516279 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174798);
    FUN_03f5c2a4(&DAT_091c2150);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f0f58);
    FUN_03f5c2a4(&DAT_091f0f60);
    FUN_03f5c2a4(&DAT_09195280);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516279 = 1;
  }
  local_4c = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_4c == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    local_4c = -1;
    *param_1 = -1;
LAB_0411e30c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar3 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0411e638;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0411e638:
      (*(code *)*puVar4)(uVar3,uVar11,puVar4[1]);
    }
    goto LAB_0411e860;
  }
  if (local_4c == 1) {
LAB_0411e678:
    local_80 = &local_48;
    local_90._8_8_ = &local_4c;
    local_90._0_8_ = 0;
    local_4c = -1;
    local_60 = *(undefined1 (*) [16])(local_48 + 0x10);
    local_48[0x10] = 0;
    local_48[0x11] = 0;
    local_48[0x12] = 0;
    local_48[0x13] = 0;
    *local_48 = -1;
    goto LAB_0411e694;
  }
  lVar6 = *(long *)(param_1 + 10);
  uVar3 = thunk_FUN_03f9944c(DAT_09195280);
  System_Object___ctor(uVar3,0);
  *(undefined8 *)(local_48 + 0xc) = uVar3;
  thunk_FUN_03f5d7b8(local_48 + 0xc,uVar3);
  if (*(long *)(local_48 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*(long *)(local_48 + 0xc) + 0x10) = *(undefined8 *)(local_48 + 6);
  thunk_FUN_03f5d7b8();
  lVar5 = DAT_091881a0;
  lVar10 = *(long *)(local_48 + 0xc);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(char *)(lVar10 + 0x19) = (char)local_48[8];
  uVar3 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = AnhPD_FoodOrder_MessyController__get_Spawner(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x20));
  if (*(long *)(local_48 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(*(long *)(local_48 + 0xc) + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(local_48 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(local_48 + 0xc) + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x1b8);
  }
  *(undefined8 *)(local_48 + 0xe) = uVar3;
  thunk_FUN_03f5d7b8();
  lVar5 = *(long *)(local_48 + 0xe);
  if (lVar5 == 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_90 = AnhPD_FoodOrder_TutorialContext__WaitTapInFocus(lVar6);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_90,0);
    local_60 = local_90;
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
    uVar3 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0411e938;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0411e938:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar11,puVar4[1]);
      if (iVar2 == 0) {
        local_4c = 0;
        *local_48 = 0;
        *(undefined1 (*) [16])(local_48 + 0x10) = local_60;
        thunk_FUN_03f5d7b8(local_48 + 0x10,0);
        FUN_04126704(local_48 + 2,local_60,local_48,DAT_091c2150);
        return;
      }
    }
    goto LAB_0411e30c;
  }
  lVar6 = *(long *)(local_48 + 0xc);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar6 + 0x18) = 0;
  plVar9 = (long *)(lVar5 + 0x28);
  lVar5 = *plVar9;
  uVar3 = thunk_FUN_03f9944c(DAT_09174798);
  FUN_070a8c30(uVar3,lVar6,DAT_091f0f60,0);
  lVar6 = System_Delegate__Combine(lVar5,uVar3,0);
  uVar3 = DAT_09174798;
  if (lVar6 == 0) {
    lVar5 = 0;
    *plVar9 = 0;
  }
  else {
    lVar5 = thunk_FUN_03f99350(lVar6,DAT_09174798);
    uVar12 = DAT_09174798;
    if (lVar5 == 0) {
LAB_0411e534:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar6,uVar3);
    }
    *plVar9 = lVar5;
    lVar5 = thunk_FUN_03f99350(lVar6,uVar12);
    uVar3 = uVar12;
    if (lVar5 == 0) goto LAB_0411e534;
  }
  thunk_FUN_03f5d7b8(plVar9,lVar5);
  local_90._8_8_ = &local_4c;
  local_90._0_8_ = 0;
  local_80 = &local_48;
  if (local_4c == 1) goto LAB_0411e678;
  uVar12 = *(undefined8 *)(local_48 + 0xc);
  uVar3 = thunk_FUN_03f9944c(DAT_09177ab8);
  FUN_053007d8(uVar3,uVar12,DAT_091f0f58,0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_40 = Cysharp_Threading_Tasks_UniTask__WaitUntil(uVar3,8,0,0,0);
  thunk_FUN_03f5d7b8(local_40,0);
  local_60 = local_40;
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
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
LAB_0411e694:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar3 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0411e838;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0411e838:
      (*(code *)*puVar4)(uVar3,uVar11,puVar4[1]);
    }
    iVar2 = 0xe;
  }
  else {
    lVar6 = *(long *)local_60._0_8_;
    uVar11 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0411e998;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0411e998:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar11,puVar4[1]);
    if (iVar2 != 0) goto LAB_0411e694;
    local_4c = 1;
    *local_48 = 1;
    *(undefined1 (*) [16])(local_48 + 0x10) = local_60;
    thunk_FUN_03f5d7b8(local_48 + 0x10,0);
    FUN_04126704(local_48 + 2,local_60,local_48,DAT_091c2150);
    iVar2 = 10;
  }
  FUN_039b14ec(local_90);
  auVar1._8_8_ = local_90._8_8_;
  auVar1._0_8_ = local_90._0_8_;
  if ((iVar2 != 0) && (local_90 = auVar1, iVar2 != 0xe)) {
    return;
  }
LAB_0411e860:
  *local_48 = -2;
  piVar8 = local_48 + 0xc;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  piVar8 = local_48 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  piVar8 = local_48;
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(piVar8 + 2);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0411e90c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_0411e90c:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

