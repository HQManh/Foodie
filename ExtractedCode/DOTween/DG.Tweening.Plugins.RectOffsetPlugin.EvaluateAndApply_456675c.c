// rea decompile_all
// name: DG.Tweening.Plugins.RectOffsetPlugin$$EvaluateAndApply
// address: 0x456675c
// body: available
// range: 0x456675c-0x4566e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4566e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectOffsetPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
               long param_10)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double local_78;
  
  if ((DAT_0951884b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189c70);
    FUN_03f5c2a4(&DAT_09189c68);
    DAT_0951884b = 1;
  }
  if (*(int *)(DAT_09189c70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_9 == 0) goto LAB_04566e74;
  lVar8 = **(long **)(DAT_09189c70 + 0xb8);
  uVar3 = UnityEngine_RectOffset__get_left(param_9,0);
  if (lVar8 == 0) goto LAB_04566e74;
  UnityEngine_RectOffset__set_left(lVar8,uVar3,0);
  lVar8 = **(long **)(DAT_09189c70 + 0xb8);
  uVar3 = UnityEngine_RectOffset__get_right(param_9,0);
  if (lVar8 == 0) goto LAB_04566e74;
  UnityEngine_RectOffset__set_right(lVar8,uVar3,0);
  lVar8 = **(long **)(DAT_09189c70 + 0xb8);
  uVar3 = UnityEngine_RectOffset__get_top(param_9,0);
  if (lVar8 == 0) goto LAB_04566e74;
  UnityEngine_RectOffset__set_top(lVar8,uVar3,0);
  lVar8 = **(long **)(DAT_09189c70 + 0xb8);
  uVar3 = UnityEngine_RectOffset__get_bottom(param_9,0);
  if ((lVar8 == 0) || (UnityEngine_RectOffset__set_bottom(lVar8,uVar3,0), param_5 == 0))
  goto LAB_04566e74;
  if (*(int *)(param_5 + 0xa8) == 2) {
    cVar2 = *(char *)(param_5 + 0x111);
    iVar6 = *(int *)(param_5 + 0x10c);
    if (*(int *)(DAT_09189c70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = **(long **)(DAT_09189c70 + 0xb8);
    if ((lVar8 == 0) || (iVar4 = UnityEngine_RectOffset__get_left(lVar8,0), param_10 == 0))
    goto LAB_04566e74;
    iVar6 = iVar6 - cVar2;
    iVar5 = UnityEngine_RectOffset__get_left(param_10,0);
    UnityEngine_RectOffset__set_left(lVar8,iVar4 + iVar5 * iVar6,0);
    lVar8 = **(long **)(DAT_09189c70 + 0xb8);
    if (lVar8 == 0) goto LAB_04566e74;
    iVar4 = UnityEngine_RectOffset__get_right(lVar8,0);
    iVar5 = UnityEngine_RectOffset__get_right(param_10,0);
    UnityEngine_RectOffset__set_right(lVar8,iVar4 + iVar5 * iVar6,0);
    lVar8 = **(long **)(DAT_09189c70 + 0xb8);
    if (lVar8 == 0) goto LAB_04566e74;
    iVar4 = UnityEngine_RectOffset__get_top(lVar8,0);
    iVar5 = UnityEngine_RectOffset__get_top(param_10,0);
    UnityEngine_RectOffset__set_top(lVar8,iVar4 + iVar5 * iVar6,0);
    lVar8 = **(long **)(DAT_09189c70 + 0xb8);
    if (lVar8 == 0) goto LAB_04566e74;
    iVar4 = UnityEngine_RectOffset__get_bottom(lVar8,0);
    iVar5 = UnityEngine_RectOffset__get_bottom(param_10,0);
    UnityEngine_RectOffset__set_bottom(lVar8,iVar4 + iVar5 * iVar6,0);
  }
  if (*(char *)(param_5 + 0xe9) != '\0') {
    lVar8 = *(long *)(param_5 + 0xf0);
    if (lVar8 == 0) goto LAB_04566e74;
    if (*(int *)(lVar8 + 0xa8) == 2) {
      if (*(int *)(param_5 + 0xa8) == 2) {
        iVar6 = *(int *)(param_5 + 0xa4);
      }
      else {
        iVar6 = 1;
      }
      cVar2 = *(char *)(lVar8 + 0x111);
      iVar4 = *(int *)(lVar8 + 0x10c);
      if (*(int *)(DAT_09189c70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = **(long **)(DAT_09189c70 + 0xb8);
      if ((lVar8 == 0) || (iVar5 = UnityEngine_RectOffset__get_left(lVar8,0), param_10 == 0))
      goto LAB_04566e74;
      iVar6 = (iVar4 - cVar2) * iVar6;
      iVar4 = UnityEngine_RectOffset__get_left(param_10,0);
      UnityEngine_RectOffset__set_left(lVar8,iVar5 + iVar4 * iVar6,0);
      lVar8 = **(long **)(DAT_09189c70 + 0xb8);
      if (lVar8 == 0) goto LAB_04566e74;
      iVar4 = UnityEngine_RectOffset__get_right(lVar8,0);
      iVar5 = UnityEngine_RectOffset__get_right(param_10,0);
      UnityEngine_RectOffset__set_right(lVar8,iVar4 + iVar5 * iVar6,0);
      lVar8 = **(long **)(DAT_09189c70 + 0xb8);
      if (lVar8 == 0) goto LAB_04566e74;
      iVar4 = UnityEngine_RectOffset__get_top(lVar8,0);
      iVar5 = UnityEngine_RectOffset__get_top(param_10,0);
      UnityEngine_RectOffset__set_top(lVar8,iVar4 + iVar5 * iVar6,0);
      lVar8 = **(long **)(DAT_09189c70 + 0xb8);
      if (lVar8 == 0) goto LAB_04566e74;
      iVar4 = UnityEngine_RectOffset__get_bottom(lVar8,0);
      iVar5 = UnityEngine_RectOffset__get_bottom(param_10,0);
      UnityEngine_RectOffset__set_bottom(lVar8,iVar4 + iVar5 * iVar6,0);
    }
  }
  fVar9 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                            *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                            *(undefined8 *)(param_5 + 0xb8),0);
  if (*(int *)(DAT_09189c70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_09189c70 + 0xb8) == 0) ||
     (iVar6 = UnityEngine_RectOffset__get_left(**(long **)(DAT_09189c70 + 0xb8),0), param_10 == 0))
  goto LAB_04566e74;
  iVar4 = UnityEngine_RectOffset__get_left(param_10,0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e80);
  }
  fVar15 = fVar9 * (float)iVar4 + (float)iVar6;
  dVar12 = (double)fVar15;
  dVar10 = modf(dVar12,&local_78);
  if (0.0 <= fVar15) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04566bd0;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_04566bd0:
    dVar12 = local_78;
    if (((long)local_78 & 1U) != 0) {
      dVar12 = local_78 + dVar10;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  if (**(long **)(DAT_09189c70 + 0xb8) == 0) goto LAB_04566e74;
  iVar6 = UnityEngine_RectOffset__get_right(**(long **)(DAT_09189c70 + 0xb8),0);
  iVar4 = UnityEngine_RectOffset__get_right(param_10,0);
  fVar15 = fVar9 * (float)iVar4 + (float)iVar6;
  dVar13 = (double)fVar15;
  dVar10 = modf(dVar13,&local_78);
  if (0.0 <= fVar15) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04566c74;
    }
    dVar13 = (double)(long)(dVar13 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_04566c74:
    dVar13 = local_78;
    if (((long)local_78 & 1U) != 0) {
      dVar13 = local_78 + dVar10;
    }
  }
  else {
    dVar13 = (double)(long)(dVar13 + -0.5);
  }
  if (**(long **)(DAT_09189c70 + 0xb8) == 0) goto LAB_04566e74;
  iVar6 = UnityEngine_RectOffset__get_top(**(long **)(DAT_09189c70 + 0xb8),0);
  iVar4 = UnityEngine_RectOffset__get_top(param_10,0);
  fVar15 = fVar9 * (float)iVar4 + (float)iVar6;
  dVar14 = (double)fVar15;
  dVar10 = modf(dVar14,&local_78);
  if (0.0 <= fVar15) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04566d18;
    }
    dVar14 = (double)(long)(dVar14 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_04566d18:
    dVar14 = local_78;
    if (((long)local_78 & 1U) != 0) {
      dVar14 = local_78 + dVar10;
    }
  }
  else {
    dVar14 = (double)(long)(dVar14 + -0.5);
  }
  if (**(long **)(DAT_09189c70 + 0xb8) == 0) goto LAB_04566e74;
  iVar6 = UnityEngine_RectOffset__get_bottom(**(long **)(DAT_09189c70 + 0xb8),0);
  iVar4 = UnityEngine_RectOffset__get_bottom(param_10,0);
  fVar9 = fVar9 * (float)iVar4 + (float)iVar6;
  dVar11 = (double)fVar9;
  dVar10 = modf(dVar11,&local_78);
  if (0.0 <= fVar9) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04566dc4;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_04566dc4:
    dVar11 = local_78;
    if (((long)local_78 & 1U) != 0) {
      dVar11 = local_78 + dVar10;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09189c68);
  iVar6 = -0x80000000;
  if (dVar12 != INFINITY) {
    iVar6 = (int)dVar12;
  }
  iVar4 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar4 = (int)dVar13;
  }
  iVar5 = -0x80000000;
  if (dVar14 != INFINITY) {
    iVar5 = (int)dVar14;
  }
  iVar1 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar1 = (int)dVar11;
  }
  UnityEngine_RectOffset___ctor(uVar7,iVar6,iVar4,iVar5,iVar1,0);
  if (param_8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04566e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_8 + 0x18))
              (*(undefined8 *)(param_8 + 0x40),uVar7,*(undefined8 *)(param_8 + 0x28));
    return;
  }
LAB_04566e74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

