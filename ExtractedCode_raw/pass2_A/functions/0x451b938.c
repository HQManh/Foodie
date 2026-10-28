// rea decompile_all
// name: Utilities.Vfx2dTransform.<IEPlayAnim>d__16$$MoveNext
// address: 0x451b938
// body: available
// range: 0x451b938-0x451bb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451bb88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_Vfx2dTransform_<IEPlayAnim>d__16__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_50;
  float local_48;
  
  lVar2 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_0451bb88;
    fVar7 = *(float *)(param_4 + 0x40);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    else {
      fVar4 = (float)UnityEngine_Time__get_deltaTime();
    }
    fVar7 = fVar7 + fVar4;
    *(float *)(param_4 + 0x40) = fVar7;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0451bb88;
    uVar3 = UnityEngine_Transform__get_localPosition(*(long *)(lVar2 + 0x20),0);
    *(undefined4 *)(param_4 + 0x28) = uVar3;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_0451bb88;
    uVar3 = UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar2 + 0x20),0);
    fVar7 = 0.0;
    *(undefined4 *)(param_4 + 0x34) = uVar3;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    *(undefined4 *)(param_4 + 0x40) = 0;
  }
  fVar4 = *(float *)(lVar2 + 0x28) / *(float *)(lVar2 + 0x2c);
  if (fVar7 < fVar4) {
    if (*(long *)(lVar2 + 0x40) != 0) {
      fVar7 = fVar7 / fVar4;
      uVar3 = UnityEngine_AnimationCurve__Evaluate(fVar7,*(long *)(lVar2 + 0x40),0);
      lVar1 = *(long *)(lVar2 + 0x48);
      *(undefined4 *)(param_4 + 0x28) = uVar3;
      if (lVar1 != 0) {
        uVar3 = UnityEngine_AnimationCurve__Evaluate(fVar7,lVar1,0);
        lVar1 = *(long *)(lVar2 + 0x50);
        *(undefined4 *)(param_4 + 0x2c) = uVar3;
        if (lVar1 != 0) {
          local_48 = (float)UnityEngine_AnimationCurve__Evaluate(fVar7,lVar1,0);
          lVar1 = *(long *)(lVar2 + 0x20);
          uVar8 = *(undefined4 *)(param_4 + 0x28);
          uVar9 = *(undefined4 *)(param_4 + 0x2c);
          uVar10 = *(undefined4 *)(param_4 + 0x30);
          uVar6 = 0x3c8efa35;
          *(float *)(param_4 + 0x3c) = local_48;
          fVar5 = (float)*(undefined8 *)(param_4 + 0x34) * 0.017453292;
          local_48 = local_48 * 0.017453292;
          local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x34) >> 0x20) * 0.017453292,
                              fVar5);
          fVar4 = local_48;
          uVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_50,0);
          if (lVar1 != 0) {
            UnityEngine_Transform__SetLocalPositionAndRotation
                      (uVar8,uVar9,uVar10,uVar3,fVar5,fVar4,uVar6,lVar1,0);
            if (*(long *)(lVar2 + 0x38) != 0) {
              lVar1 = *(long *)(lVar2 + 0x20);
              fVar7 = (float)UnityEngine_AnimationCurve__Evaluate(fVar7,*(long *)(lVar2 + 0x38),0);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              if (lVar1 != 0) {
                lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
                UnityEngine_Transform__set_localScale
                          (fVar7 * *(float *)(lVar2 + 0xc),fVar7 * *(float *)(lVar2 + 0x10),
                           fVar7 * *(float *)(lVar2 + 0x14),lVar1,0);
                *(undefined8 *)(param_4 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
                *(undefined4 *)(param_4 + 0x10) = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x60) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x60),0);
    lVar2 = UnityEngine_Component__get_gameObject(lVar2,0);
    if (lVar2 != 0) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      return 0;
    }
  }
LAB_0451bb88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

