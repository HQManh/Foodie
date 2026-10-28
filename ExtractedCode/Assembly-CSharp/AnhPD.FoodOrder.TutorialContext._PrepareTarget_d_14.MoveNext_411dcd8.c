// rea decompile_all
// name: AnhPD.FoodOrder.TutorialContext.<PrepareTarget>d__14$$MoveNext
// address: 0x411dcd8
// body: available
// range: 0x411dcd8-0x411e12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411e124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411e128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411e12c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialContext_<PrepareTarget>d__14__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09516278 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2148);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f0f30);
    FUN_03f5c2a4(&DAT_09195260);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516278 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = thunk_FUN_03f9944c(DAT_09195260);
    System_Object___ctor(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar11 = (long *)(lVar6 + 0x20);
    *plVar11 = *(long *)(param_1 + 6);
    thunk_FUN_03f5d7b8(plVar11);
    auVar2._8_8_ = local_50._8_8_;
    auVar2._0_8_ = local_50._0_8_;
    auVar1._8_8_ = local_40._8_8_;
    auVar1._0_8_ = local_40._0_8_;
    if ((*plVar11 == 0) || (local_40 = auVar1, local_50 = auVar2, *(int *)(*plVar11 + 0x10) != 1))
    goto LAB_0411e024;
    uVar12 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar12,0);
    if ((uVar7 & 1) == 0) {
      lVar8 = 0;
    }
    else {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = AnhPD_FoodOrder_MessyController__get_Spawner(**(long **)(DAT_091881a0 + 0xb8),0);
    }
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = lVar8;
    thunk_FUN_03f5d7b8(plVar11);
    lVar8 = *plVar11;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar8,0);
    if ((uVar7 & 1) == 0) goto LAB_0411e024;
    lVar8 = *plVar11;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar8 + 0x1d8) == '\0') {
      AnhPD_FoodOrder_IngredientSpawnerController__Run(lVar8,0);
    }
    fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
    uVar12 = DAT_09177ab8;
    *(float *)(lVar6 + 0x18) = fVar14 + 15.0;
    uVar12 = thunk_FUN_03f9944c(uVar12);
    FUN_053007d8(uVar12,lVar6,DAT_091f0f30,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__WaitUntil(uVar12,8,0,0,0);
    thunk_FUN_03f5d7b8(local_40,0);
    uVar4 = local_40._8_8_;
    uVar12 = local_40._0_8_;
    local_50 = local_40;
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
    if ((long *)uVar12 != (long *)0x0) {
      lVar6 = *(long *)uVar12;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0411e0d8;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar12,DAT_091868c0,0);
LAB_0411e0d8:
      iVar5 = (*(code *)*puVar9)(uVar12,uVar4 & 0xffffffff,puVar9[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_041265f8(param_1 + 2,local_50,param_1,DAT_091c2148);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar12 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_50._0_8_;
    uVar13 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0411e014;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0411e014:
    (*(code *)*puVar9)(uVar12,uVar13,puVar9[1]);
  }
LAB_0411e024:
  cVar3 = DAT_095162d8;
  *param_1 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0411e0ac;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_0411e0ac:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
  return;
}

