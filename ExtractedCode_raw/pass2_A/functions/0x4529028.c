// rea decompile_all
// name: Utilities.UIFlyExplodeConfig.<Play>d__11$$MoveNext
// address: 0x4529028
// body: available
// range: 0x4529028-0x45293cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45293c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIFlyExplodeConfig_<Play>d__11__MoveNext
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    lVar7 = *(long *)(param_4 + 0x20);
    if (iVar1 == 1) {
      fVar9 = *(float *)(param_4 + 0x5c);
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar7 == 0) goto LAB_045293c8;
      uVar10 = *(ulong *)(lVar7 + 0x1c);
      *(ulong *)(param_4 + 0x34) =
           uVar10 ^ (uVar10 ^ 0x3c23d70a) &
                    CONCAT44(-(uint)((float)(uVar10 >> 0x20) < 0.0),-(uint)((float)uVar10 < 0.01));
      fVar11 = *(float *)(lVar7 + 0x10);
      fVar12 = *(float *)(lVar7 + 0x14);
      fVar9 = fVar11;
      if (fVar12 <= fVar11) {
        fVar9 = fVar12;
      }
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      param_3 = (float)UnityEngine_Random__Range(fVar9,0);
      uVar8 = UnityEngine_Random__get_insideUnitCircle(0);
      local_28 = CONCAT44(fVar11,uVar8);
      fVar9 = (float)UnityEngine_Vector2__Normalize(&local_28,0);
      cVar2 = DAT_09515ce8;
      *(float *)(param_4 + 0x3c) = fVar9;
      *(float *)(param_4 + 0x40) = fVar11;
      if (cVar2 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      pfVar4 = *(float **)(DAT_0918cb68 + 0xb8);
      if ((fVar9 - *pfVar4) * (fVar9 - *pfVar4) + (fVar11 - pfVar4[1]) * (fVar11 - pfVar4[1]) <
          9.9999994e-11) {
        if (DAT_09516afb == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09516afb = '\x01';
          pfVar4 = *(float **)(DAT_0918cb68 + 0xb8);
        }
        *(undefined8 *)(param_4 + 0x3c) = *(undefined8 *)(pfVar4 + 4);
      }
      fVar11 = *(float *)(param_4 + 0x34);
      param_3 = param_3 + param_3;
      *(float *)(param_4 + 0x44) = param_3 / (fVar11 * (*(float *)(param_4 + 0x38) + 1.0));
      uVar3 = Utilities_UIFlyExplodeConfig__GetAlphaGroup(*(undefined8 *)(param_4 + 0x28));
      *(undefined8 *)(param_4 + 0x48) = uVar3;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_045293c8;
      uVar8 = UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x28),0);
      fVar9 = 0.0;
      *(undefined4 *)(param_4 + 0x50) = uVar8;
      *(float *)(param_4 + 0x54) = fVar11;
      *(float *)(param_4 + 0x58) = param_3;
      *(undefined4 *)(param_4 + 0x5c) = 0;
    }
    if (fVar9 < *(float *)(param_4 + 0x34)) {
      fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      fVar12 = (fVar9 + fVar11) / *(float *)(param_4 + 0x34);
      *(float *)(param_4 + 0x5c) = fVar9 + fVar11;
      fVar9 = 1.0;
      if (fVar12 <= 1.0) {
        fVar9 = fVar12;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar9;
      }
      if (*(long *)(param_4 + 0x28) != 0) {
        fVar9 = *(float *)(param_4 + 0x34) * *(float *)(param_4 + 0x44) *
                (fVar11 + fVar11 * fVar11 * (1.0 - *(float *)(param_4 + 0x38)) * -0.5);
        fVar12 = (float)((ulong)*(undefined8 *)(param_4 + 0x50) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_4 + 0x3c) >> 0x20) * fVar9;
        UnityEngine_Transform__set_localPosition
                  (CONCAT44(fVar12,(float)*(undefined8 *)(param_4 + 0x50) +
                                   (float)*(undefined8 *)(param_4 + 0x3c) * fVar9),fVar12,
                   *(float *)(param_4 + 0x58) + 0.0,*(long *)(param_4 + 0x28),0);
        lVar6 = *(long *)(param_4 + 0x28);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x28) != 0)) {
          lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
          fVar12 = *(float *)(lVar5 + 0xc);
          fVar13 = *(float *)(lVar5 + 0x10);
          fVar14 = *(float *)(lVar5 + 0x14);
          fVar9 = (float)UnityEngine_AnimationCurve__Evaluate(fVar11,*(long *)(lVar7 + 0x28),0);
          if (lVar6 != 0) {
            UnityEngine_Transform__set_localScale
                      (fVar12 * fVar9,fVar13 * fVar9,fVar14 * fVar9,lVar6,0);
            if (*(long *)(lVar7 + 0x30) != 0) {
              lVar6 = *(long *)(param_4 + 0x48);
              UnityEngine_AnimationCurve__Evaluate(fVar11,*(long *)(lVar7 + 0x30),0);
              if (lVar6 != 0) {
                UnityEngine_CanvasGroup__set_alpha(lVar6,0);
                *(undefined8 *)(param_4 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
                *(undefined4 *)(param_4 + 0x10) = 1;
                return 1;
              }
            }
          }
        }
      }
      goto LAB_045293c8;
    }
    *(undefined4 *)(param_4 + 0x68) = 0;
    fVar9 = *(float *)(param_4 + 0x44) * *(float *)(param_4 + 0x38);
    *(ulong *)(param_4 + 0x60) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x3c) >> 0x20) * fVar9,
                  (float)*(undefined8 *)(param_4 + 0x3c) * fVar9);
  }
  if (0.0 < *(float *)(param_4 + 0x30)) {
    fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    fVar11 = *(float *)(param_4 + 0x30);
    lVar7 = *(long *)(param_4 + 0x28);
    *(float *)(param_4 + 0x30) = fVar11 - fVar9;
    if (lVar7 != 0) {
      fVar12 = (float)UnityEngine_Transform__get_localPosition(lVar7,0);
      UnityEngine_Transform__set_localPosition
                (fVar12 + fVar9 * *(float *)(param_4 + 0x60),
                 fVar11 + fVar9 * *(float *)(param_4 + 100),
                 param_3 + fVar9 * *(float *)(param_4 + 0x68),lVar7,0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 2;
      return 1;
    }
  }
  else if (*(long *)(param_4 + 0x48) != 0) {
    UnityEngine_CanvasGroup__set_alpha(0x3f800000,*(long *)(param_4 + 0x48),0);
    return 0;
  }
LAB_045293c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

