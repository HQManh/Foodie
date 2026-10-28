// rea decompile_all
// name: AnhPD.FoodOrder.TutorialStepWait.<WaitOrderCompleted>d__4$$MoveNext
// address: 0x411b4f4
// body: available
// range: 0x411b4f4-0x411bb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411bb14 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411bb2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0411bb10) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_TutorialStepWait_<WaitOrderCompleted>d__4__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  undefined1 local_60 [16];
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_0951625f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174868);
    FUN_03f5c2a4(&DAT_091c2180);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cd548);
    FUN_03f5c2a4(&DAT_091cd588);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f0fa0);
    FUN_03f5c2a4(&DAT_091f0fa8);
    FUN_03f5c2a4(&DAT_091952c0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951625f = 1;
  }
  local_44 = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (local_44 == 0) {
LAB_0411b660:
    local_44 = -1;
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_0411b67c;
  }
  lVar8 = *(long *)(param_1 + 8);
  uVar2 = thunk_FUN_03f9944c(DAT_091952c0);
  System_Object___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 10) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 10,uVar2);
  uVar2 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = AnhPD_FoodOrder_MessyController__get_LineHandle(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar3 & 1) == 0) goto LAB_0411b84c;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveCustomerTransform(lVar4,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) goto LAB_0411b84c;
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*(long *)(param_1 + 10) + 0x10) = *(undefined8 *)(*(long *)(param_1 + 6) + 0x28);
  thunk_FUN_03f5d7b8();
  lVar4 = *(long *)(param_1 + 10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar4 + 0x18) = 0;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(float *)(lVar8 + 0x24) <= 0.0) {
    fVar11 = INFINITY;
    lVar8 = lVar4;
  }
  else {
    fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
    fVar11 = fVar11 + *(float *)(lVar8 + 0x24);
    lVar8 = *(long *)(param_1 + 10);
  }
  *(float *)(lVar4 + 0x1c) = fVar11;
  uVar2 = thunk_FUN_03f9944c(DAT_09174868);
  FUN_070a8ff8(uVar2,lVar8,DAT_091f0fa8,0);
  if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b7a25c(uVar2,DAT_091cd548);
  if (local_44 == 0) goto LAB_0411b660;
  uVar9 = *(undefined8 *)(param_1 + 10);
  uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
  FUN_053007d8(uVar2,uVar9,DAT_091f0fa0,0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_40 = Cysharp_Threading_Tasks_UniTask__WaitUntil(uVar2,8,0,0,0);
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
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
LAB_0411b67c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0411b7b4;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0411b7b4:
      (*(code *)*puVar5)(uVar2,uVar10,puVar5[1]);
    }
    iVar1 = 0xd;
  }
  else {
    lVar8 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0411bab4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0411bab4:
    iVar1 = (*(code *)*puVar5)(uVar2,uVar10,puVar5[1]);
    if (iVar1 != 0) goto LAB_0411b67c;
    local_44 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_041264ec(param_1 + 2,local_60,param_1,DAT_091c2180);
    iVar1 = 0xc;
  }
  if (local_44 < 0) {
    uVar9 = *(undefined8 *)(param_1 + 10);
    uVar2 = thunk_FUN_03f9944c(DAT_09174868);
    FUN_070a8ff8(uVar2,uVar9,DAT_091f0fa8,0);
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b7b704(uVar2,DAT_091cd588);
  }
  if ((iVar1 != 0) && (iVar1 != 0xd)) {
    return;
  }
LAB_0411b84c:
  *param_1 = -2;
  piVar6 = param_1 + 10;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_03f5d7b8(piVar6,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0411b8e8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0411b8e8:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}

