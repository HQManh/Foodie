// rea decompile_all
// name: Utilities.UIImageFlyToCounter.<>c__DisplayClass29_0.<<ShowCurrencyFly>g__IEGoldFly|1>d$$MoveNext
// address: 0x452b09c
// body: available
// range: 0x452b09c-0x452b507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452b504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIImageFlyToCounter_<>c__DisplayClass29_0_<<ShowCurrencyFly>g__IEGoldFly_1>d__MoveNext
          (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_28;
  
  if ((DAT_0951861c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951861c = 1;
  }
  iVar1 = *(int *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x20);
  local_28 = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x88);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0452b504;
          uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x70);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar2 & 1) != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            if (lVar4 == 0) goto LAB_0452b504;
            Utilities_AudioSourceExtension__PlaySfx
                      (0x3f800000,0x3e4ccccd,*(undefined8 *)(lVar4 + 0x88),
                       *(undefined8 *)(lVar4 + 0x70),0);
          }
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x58) != 0)) {
          uVar5 = Utilities_UIFlyExplodeConfig__Play
                            (*(float *)(lVar6 + 0x38) * (float)*(int *)(param_3 + 0x30),
                             *(long *)(lVar6 + 0x58),*(undefined8 *)(param_3 + 0x28));
          *(undefined8 *)(param_3 + 0x18) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),uVar5);
          *(undefined4 *)(param_3 + 0x10) = 1;
          return 1;
        }
      }
      goto LAB_0452b504;
    }
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_0452b504;
    uVar7 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x28),0);
    *(undefined4 *)(param_3 + 0x54) = uVar7;
    *(float *)(param_3 + 0x58) = param_2;
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_0452b504;
    fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
    uVar5 = *(undefined8 *)(param_3 + 0x54);
    local_28 = CONCAT44(param_2 - (float)((ulong)uVar5 >> 0x20),fVar8 - (float)uVar5);
    uVar7 = UnityEngine_Vector2__Normalize(&local_28,0);
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_0452b504;
    fVar14 = *(float *)(param_3 + 0x54);
    fVar15 = *(float *)(param_3 + 0x58);
    fVar8 = (float)uVar5;
    fVar9 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
    if (DAT_09515fab == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515fab = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar15 = fVar15 - fVar8;
    fVar14 = fVar14 - fVar9;
    *(float *)(param_3 + 0x5c) = -(float)uVar5;
    *(undefined4 *)(param_3 + 0x60) = uVar7;
    fVar8 = SQRT(fVar14 * fVar14 + fVar15 * fVar15);
    param_2 = fVar8 * 0.5;
    uVar7 = UnityEngine_Random__Range(fVar8 * -0.5,0);
    *(undefined4 *)(param_3 + 100) = uVar7;
  }
  if ((lVar6 != 0) && (lVar4 = *(long *)(lVar6 + 0x10), lVar4 != 0)) {
    fVar8 = *(float *)(param_3 + 0x50);
    if (*(float *)(lVar4 + 0x3c) <= fVar8) {
      lVar3 = *(long *)(param_3 + 0x40);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                   *(undefined8 *)(lVar3 + 0x28));
        lVar4 = *(long *)(lVar6 + 0x10);
        if (lVar4 == 0) goto LAB_0452b504;
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0452b504;
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x78);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) goto LAB_0452b504;
          if ((*(char *)(lVar6 + 0x80) == '\0') || (*(int *)(param_3 + 0x30) == 0)) {
            Utilities_AudioSourceExtension__PlaySfx
                      (0x3f800000,0x3e4ccccd,*(undefined8 *)(lVar6 + 0x88),
                       *(undefined8 *)(lVar6 + 0x78),0);
          }
        }
      }
      return 0;
    }
    fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    fVar8 = fVar8 + fVar9;
    lVar4 = *(long *)(lVar6 + 0x10);
    *(float *)(param_3 + 0x50) = fVar8;
    if ((lVar4 != 0) && (*(long *)(param_3 + 0x38) != 0)) {
      fVar15 = *(float *)(lVar4 + 0x3c);
      lVar4 = *(long *)(param_3 + 0x28);
      uVar5 = *(undefined8 *)(param_3 + 0x54);
      fVar9 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
      if ((*(long *)(lVar6 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + 0x40), lVar3 != 0)) {
        fVar8 = fVar8 / fVar15;
        fVar15 = (float)UnityEngine_AnimationCurve__Evaluate(fVar8,lVar3,0);
        if ((*(long *)(lVar6 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + 0x48), lVar3 != 0)) {
          fVar14 = *(float *)(param_3 + 100);
          uVar13 = *(undefined8 *)(param_3 + 0x5c);
          fVar10 = (float)UnityEngine_AnimationCurve__Evaluate(fVar8,lVar3,0);
          if (lVar4 != 0) {
            fVar11 = (float)uVar5;
            fVar12 = (float)((ulong)uVar5 >> 0x20);
            UnityEngine_Transform__set_position
                      (fVar11 + (fVar9 - fVar11) * fVar15 + (float)uVar13 * fVar14 * fVar10,
                       fVar12 + (param_2 - fVar12) * fVar15 +
                       (float)((ulong)uVar13 >> 0x20) * fVar14 * fVar10,0,lVar4,0);
            lVar4 = *(long *)(param_3 + 0x28);
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if ((*(long *)(lVar6 + 0x10) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x50), lVar6 != 0)) {
              lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
              fVar9 = *(float *)(lVar3 + 0xc);
              fVar15 = *(float *)(lVar3 + 0x10);
              fVar14 = *(float *)(lVar3 + 0x14);
              fVar8 = (float)UnityEngine_AnimationCurve__Evaluate(fVar8,lVar6,0);
              if (lVar4 != 0) {
                UnityEngine_Transform__set_localScale
                          (fVar9 * fVar8,fVar15 * fVar8,fVar14 * fVar8,lVar4,0);
                *(undefined8 *)(param_3 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),0);
                *(undefined4 *)(param_3 + 0x10) = 2;
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_0452b504:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

