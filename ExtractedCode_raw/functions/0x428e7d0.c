// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster.<IEShowBoosterFlyAndUnlock>d__35$$MoveNext
// address: 0x428e7d0
// body: available
// range: 0x428e7d0-0x428ec43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428ec40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_InGameUITutorialProcessBooster_<IEShowBoosterFlyAndUnlock>d__35__MoveNext
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  if ((DAT_0951718c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_0951718c = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  lVar6 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    fVar9 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar6 == 0) goto LAB_0428ec40;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
        uVar10 = *(undefined4 *)(*(long *)(lVar6 + 0x30) + 0x34);
        uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar10,uVar2,0);
        *(undefined8 *)(param_4 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),uVar2);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      goto LAB_0428ec40;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x90) == 0)) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x90),0), lVar3 == 0))
    goto LAB_0428ec40;
    UnityEngine_GameObject__SetActive(lVar3,1,0);
    if ((*(long *)(lVar6 + 0xe0) == 0) || (*(long *)(lVar6 + 0x90) == 0)) goto LAB_0428ec40;
    UnityEngine_UI_Image__set_sprite
              (*(long *)(lVar6 + 0x90),*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x38),0);
    uVar10 = UnityEngine_Time__get_unscaledTime(0);
    lVar3 = *(long *)(lVar6 + 0x90);
    *(undefined4 *)(param_4 + 0x28) = uVar10;
    if (lVar3 == 0) goto LAB_0428ec40;
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform(lVar3,0);
    if ((*(long *)(lVar6 + 0x90) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x90),0), lVar3 == 0))
    goto LAB_0428ec40;
    UnityEngine_Transform__get_position(lVar3,0);
    uVar10 = CakeOrder_InGame_InGameUITutorialProcessBooster__GetLastTouchWorldPosition(uVar2);
    *(undefined4 *)(param_4 + 0x2c) = uVar10;
    *(float *)(param_4 + 0x30) = param_2;
    *(float *)(param_4 + 0x34) = param_3;
    if ((*(long *)(lVar6 + 0xd0) == 0) ||
       ((((*(long *)(lVar6 + 0xe0) == 0 ||
          (lVar3 = *(long *)(*(long *)(lVar6 + 0xd0) + 0x18), lVar3 == 0)) ||
         (lVar3 = CakeOrder_InGame_UIInLevelCakeOrder__GetBoosterPlacement
                            (lVar3,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x18),0), lVar3 == 0))
        || ((*(long *)(lVar3 + 0x18) == 0 ||
            (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar3 + 0x18),0), lVar3 == 0))))
       )) goto LAB_0428ec40;
    uVar10 = UnityEngine_Transform__get_position(lVar3,0);
    *(undefined4 *)(param_4 + 0x38) = uVar10;
    *(float *)(param_4 + 0x3c) = param_2;
    *(float *)(param_4 + 0x40) = param_3;
    if ((*(long *)(lVar6 + 0x90) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x90),0), lVar3 == 0))
    goto LAB_0428ec40;
    lVar3 = UnityEngine_Transform__GetParent(lVar3,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
    if ((uVar4 & 1) == 0) {
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
      param_3 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
    }
    else {
      if (lVar3 == 0) goto LAB_0428ec40;
      fVar7 = (float)UnityEngine_Transform__get_up(lVar3,0);
      fVar9 = param_2;
      UnityEngine_Transform__get_lossyScale(lVar3,0);
      param_3 = param_3 * fVar9;
      uVar2 = CONCAT44(param_2 * fVar9,fVar7 * fVar9);
    }
    if (*(long *)(lVar6 + 0x30) == 0) goto LAB_0428ec40;
    fVar9 = *(float *)(*(long *)(lVar6 + 0x30) + 0x58);
    *(ulong *)(param_4 + 0x44) =
         CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar9,(float)uVar2 * fVar9);
    *(float *)(param_4 + 0x4c) = param_3 * fVar9;
    fVar9 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  if (*(long *)(lVar6 + 0x30) != 0) {
    if (fVar9 - *(float *)(param_4 + 0x28) < *(float *)(*(long *)(lVar6 + 0x30) + 0x38)) {
      fVar9 = (float)UnityEngine_Time__get_unscaledTime(0);
      if ((*(long *)(lVar6 + 0x30) != 0) && (*(long *)(lVar6 + 0x90) != 0)) {
        fVar11 = *(float *)(param_4 + 0x28);
        fVar7 = *(float *)(*(long *)(lVar6 + 0x30) + 0x38);
        lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x90),0);
        if ((*(long *)(lVar6 + 0x30) != 0) &&
           (lVar5 = *(long *)(*(long *)(lVar6 + 0x30) + 0x40), lVar5 != 0)) {
          fVar12 = *(float *)(param_4 + 0x34);
          uVar14 = *(undefined8 *)(param_4 + 0x38);
          fVar15 = *(float *)(param_4 + 0x40);
          fVar7 = (fVar9 - fVar11) / fVar7;
          uVar2 = *(undefined8 *)(param_4 + 0x2c);
          fVar9 = (float)UnityEngine_AnimationCurve__Evaluate(fVar7,lVar5,0);
          if ((*(long *)(lVar6 + 0x30) != 0) &&
             (lVar5 = *(long *)(*(long *)(lVar6 + 0x30) + 0x50), lVar5 != 0)) {
            uVar17 = *(undefined8 *)(param_4 + 0x44);
            fVar16 = *(float *)(param_4 + 0x4c);
            fVar11 = (float)UnityEngine_AnimationCurve__Evaluate(fVar7,lVar5,0);
            if (lVar3 != 0) {
              fVar13 = (float)uVar2;
              fVar8 = (float)((ulong)uVar2 >> 0x20);
              fVar8 = fVar8 + ((float)((ulong)uVar14 >> 0x20) - fVar8) * fVar9 +
                      (float)((ulong)uVar17 >> 0x20) * fVar11;
              UnityEngine_Transform__set_position
                        (CONCAT44(fVar8,fVar13 + ((float)uVar14 - fVar13) * fVar9 +
                                        (float)uVar17 * fVar11),fVar8,
                         fVar12 + (fVar15 - fVar12) * fVar9 + fVar16 * fVar11,lVar3,0);
              if (*(long *)(lVar6 + 0x90) != 0) {
                lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x90),0);
                if (DAT_09515cf3 == '\0') {
                  FUN_03f5c2a4(&DAT_0918cbd0);
                  DAT_09515cf3 = '\x01';
                }
                if ((*(long *)(lVar6 + 0x30) != 0) &&
                   (lVar6 = *(long *)(*(long *)(lVar6 + 0x30) + 0x48), lVar6 != 0)) {
                  lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
                  fVar11 = *(float *)(lVar5 + 0xc);
                  fVar12 = *(float *)(lVar5 + 0x10);
                  fVar15 = *(float *)(lVar5 + 0x14);
                  fVar9 = (float)UnityEngine_AnimationCurve__Evaluate(fVar7,lVar6,0);
                  if (lVar3 != 0) {
                    UnityEngine_Transform__set_localScale
                              (fVar11 * fVar9,fVar12 * fVar9,fVar15 * fVar9,lVar3,0);
                    *(undefined8 *)(param_4 + 0x18) = 0;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
                    *(undefined4 *)(param_4 + 0x10) = 2;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ((*(long *)(lVar6 + 0x90) != 0) &&
            (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x90),0), lVar6 != 0))
    {
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      return 0;
    }
  }
LAB_0428ec40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

