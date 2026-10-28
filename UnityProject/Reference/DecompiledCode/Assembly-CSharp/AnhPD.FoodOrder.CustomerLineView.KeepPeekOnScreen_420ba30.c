// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$KeepPeekOnScreen
// address: 0x420ba30
// body: available
// range: 0x420ba30-0x420c093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420c088 to 0x420c9e8 AnhPD.FoodOrder.CustomerLineView$$ShiftPeekTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420c08c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420c090 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__KeepPeekOnScreen
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6,uint param_7,uint param_8)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_09516c3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09516c3d = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0xa0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_4 + 0x13c) == '\0') {
    if (*(long *)(param_4 + 0xa0) == 0) goto LAB_0420c08c;
    uVar7 = UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0xa0),0);
    *(undefined4 *)(param_4 + 0x130) = uVar7;
    *(float *)(param_4 + 0x134) = param_2;
    *(float *)(param_4 + 0x138) = param_3;
  }
  if (*(long *)(param_4 + 0xa0) == 0) goto LAB_0420c08c;
  lVar3 = UnityEngine_Transform__GetParent(*(long *)(param_4 + 0xa0),0);
  if (*(long *)(param_4 + 0xa0) == 0) goto LAB_0420c08c;
  fVar8 = (float)UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0xa0),0);
  fVar16 = *(float *)(param_4 + 0x130);
  fVar17 = *(float *)(param_4 + 0x134);
  fVar18 = *(float *)(param_4 + 0x138);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar8 = fVar8 - fVar16;
  param_2 = param_2 - fVar17;
  param_3 = param_3 - fVar18;
  uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) goto LAB_0420c08c;
    fVar8 = (float)UnityEngine_Transform__TransformVector(fVar8,lVar3,0);
  }
  if (param_5 == 0) goto LAB_0420c08c;
  lVar4 = FUN_04a6a6d8(param_5,DAT_091c5630);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar2 & 1) != 0) {
    if (lVar4 == 0) goto LAB_0420c08c;
    lVar4 = UnityEngine_Canvas__get_rootCanvas(lVar4,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar2 & 1) == 0) {
LAB_0420bc20:
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) goto LAB_0420c08c;
      uVar6 = UnityEngine_Canvas__get_worldCamera(lVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar2 & 1) != 0) {
        uVar6 = UnityEngine_Canvas__get_worldCamera(lVar4,0);
        goto LAB_0420bc94;
      }
    }
    uVar6 = UnityEngine_Camera__get_main(0);
  }
  else {
    if (lVar4 == 0) goto LAB_0420c08c;
    iVar1 = UnityEngine_Canvas__get_renderMode(lVar4,0);
    if (iVar1 != 0) goto LAB_0420bc20;
    uVar6 = 0;
  }
LAB_0420bc94:
  lVar5 = FUN_03f5c394(DAT_091807f8,4);
  UnityEngine_RectTransform__GetWorldCorners(param_5,lVar5,0);
  if (lVar5 == 0) goto LAB_0420c08c;
  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) {
LAB_0420c090:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  fVar21 = *(float *)(lVar5 + 0x20);
  fVar20 = *(float *)(lVar5 + 0x24);
  fVar19 = *(float *)(lVar5 + 0x28);
  fVar18 = *(float *)(lVar5 + 0x44);
  fVar13 = *(float *)(lVar5 + 0x48);
  fVar17 = *(float *)(lVar5 + 0x4c);
  fVar16 = (float)AnhPD_FoodOrder_CustomerLineView__ScreenX
                            (fVar21 - fVar8,fVar20 - param_2,fVar19 - param_3,uVar6);
  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_0420c090;
  fVar9 = (float)AnhPD_FoodOrder_CustomerLineView__ScreenX
                           (*(float *)(lVar5 + 0x44) - fVar8,*(float *)(lVar5 + 0x48) - param_2,
                            *(float *)(lVar5 + 0x4c) - param_3,uVar6);
  fVar15 = fVar9 - fVar16;
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar14 = ABS(fVar15);
  fVar10 = fVar14;
  if (fVar14 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar12 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar11 = fVar10 * 1e-06;
  if (fVar10 * 1e-06 <= fVar12) {
    fVar11 = fVar12;
  }
  if (ABS(0.0 - fVar15) < fVar11) {
    return;
  }
  fVar18 = fVar18 - fVar21;
  fVar13 = fVar13 - fVar20;
  fVar20 = fVar16;
  if (fVar9 <= fVar16) {
    fVar20 = fVar9;
  }
  if (fVar16 <= fVar9) {
    fVar16 = fVar9;
  }
  fVar17 = fVar17 - fVar19;
  if ((param_7 & 1) != 0) {
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_0420c090;
    fVar12 = (fVar17 + *(float *)(lVar5 + 0x4c)) - param_3;
    fVar19 = (float)AnhPD_FoodOrder_CustomerLineView__ScreenX
                              ((fVar18 + *(float *)(lVar5 + 0x44)) - fVar8,
                               (fVar13 + *(float *)(lVar5 + 0x48)) - param_2,uVar6);
    if (fVar19 <= fVar20) {
      fVar20 = fVar19;
    }
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_6,0);
  if ((uVar2 & 1) != 0) {
    if (param_6 == 0) goto LAB_0420c08c;
    UnityEngine_RectTransform__GetWorldCorners(param_6,lVar5,0);
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (fVar19 = (float)AnhPD_FoodOrder_CustomerLineView__ScreenX
                                  (*(float *)(lVar5 + 0x20) - fVar8,
                                   *(float *)(lVar5 + 0x24) - param_2,
                                   *(float *)(lVar5 + 0x28) - param_3,uVar6),
       (*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0)) goto LAB_0420c090;
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    if (fVar19 <= fVar20) {
      fVar20 = fVar19;
    }
    fVar12 = *(float *)(lVar5 + 0x4c) - param_3;
    fVar8 = (float)AnhPD_FoodOrder_CustomerLineView__ScreenX
                             (*(float *)(lVar5 + 0x44) - fVar8,*(float *)(lVar5 + 0x48) - param_2,
                              uVar6);
    if (fVar8 <= fVar20) {
      fVar20 = fVar8;
    }
    if (fVar16 <= fVar8) {
      fVar16 = fVar8;
    }
  }
  fVar8 = (float)UnityEngine_Screen__get_safeArea(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
  fVar19 = 1.0;
  if ((uVar2 & 1) != 0) {
    if (lVar4 == 0) goto LAB_0420c08c;
    fVar19 = (float)UnityEngine_Canvas__get_scaleFactor(lVar4,0);
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar21 = (fVar12 + fVar8) - fVar19 * *(float *)(param_4 + 0x68);
  if (fVar16 <= fVar21) {
    fVar8 = fVar8 + fVar19 * *(float *)(param_4 + 100);
    if (fVar20 < fVar8) {
      fVar21 = fVar8 - fVar20;
      goto LAB_0420bf74;
    }
  }
  else {
    fVar21 = fVar21 - fVar16;
LAB_0420bf74:
    if (fVar21 != 0.0) {
      fVar16 = *(float *)(param_4 + 0x130);
      fVar19 = *(float *)(param_4 + 0x134);
      fVar8 = fVar14;
      if (fVar21 <= fVar14) {
        fVar8 = fVar21;
      }
      fVar9 = *(float *)(param_4 + 0x138);
      fVar20 = -fVar14;
      if (-fVar14 <= fVar21) {
        fVar20 = fVar8;
      }
      fVar20 = fVar20 / fVar15;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar18 = fVar18 * fVar20;
      fVar13 = fVar13 * fVar20;
      fVar17 = fVar17 * fVar20;
      uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) {
LAB_0420c08c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar18 = (float)UnityEngine_Transform__InverseTransformVector(fVar18,fVar13,fVar17,lVar3,0);
      }
      fVar16 = fVar16 + fVar18;
      fVar19 = fVar19 + fVar13;
      fVar9 = fVar9 + fVar17;
      goto LAB_0420c054;
    }
  }
  if (*(char *)(param_4 + 0x13c) == '\0') {
    return;
  }
  fVar16 = *(float *)(param_4 + 0x130);
  fVar19 = *(float *)(param_4 + 0x134);
  fVar9 = *(float *)(param_4 + 0x138);
LAB_0420c054:
  AnhPD_FoodOrder_CustomerLineView__ShiftPeekTo(fVar16,fVar19,fVar9,param_4,param_8 & 1);
  return;
}

