// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$UpdateTransformScale
// address: 0x4400820
// body: available
// range: 0x4400820-0x4400a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44009fc to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4400a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticle__UpdateTransformScale
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  UnityEngine_DrivenRectTransformTracker__Clear(param_4 + 0x144,0);
  lVar1 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
  if (((lVar1 != 0) && (lVar1 = UnityEngine_Canvas__get_rootCanvas(lVar1,0), lVar1 != 0)) &&
     (lVar1 = UnityEngine_Component__get_transform(lVar1,0), lVar1 != 0)) {
    UnityEngine_Transform__get_localScale(lVar1,0);
    uVar3 = Coffee_UIParticleInternal_Vector3Extensions__Inverse();
    *(undefined4 *)(param_4 + 0x154) = uVar3;
    *(float *)(param_4 + 0x158) = param_2;
    *(float *)(param_4 + 0x15c) = param_3;
    lVar1 = UnityEngine_Component__get_transform(param_4,0);
    if ((lVar1 != 0) && (lVar1 = UnityEngine_Transform__GetParent(lVar1,0), lVar1 != 0)) {
      uVar3 = UnityEngine_Transform__get_lossyScale(lVar1,0);
      *(undefined4 *)(param_4 + 0x148) = uVar3;
      *(float *)(param_4 + 0x14c) = param_2;
      *(float *)(param_4 + 0x150) = param_3;
      if (*(int *)(param_4 + 0x10c) != 2) {
        if (*(char *)(param_4 + 0x134) != '\0') {
          lVar1 = UnityEngine_Component__get_transform(param_4,0);
          if (lVar1 == 0) goto LAB_04400a48;
          UnityEngine_Transform__set_localScale
                    (*(undefined4 *)(param_4 + 0x138),*(undefined4 *)(param_4 + 0x13c),
                     *(undefined4 *)(param_4 + 0x140),lVar1,0);
        }
        *(undefined1 *)(param_4 + 0x134) = 0;
        return;
      }
      lVar1 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar1 != 0) {
        fVar4 = (float)UnityEngine_Transform__get_localScale(lVar1,0);
        if (*(char *)(param_4 + 0x134) == '\0') {
          fVar5 = param_3 * fVar4 * param_2;
          fVar6 = param_3;
          fVar7 = param_2;
          fVar8 = fVar4;
          if ((0.0 <= fVar5) && (fVar5 == 0.0)) {
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
            fVar8 = *(float *)(lVar1 + 0xc);
            fVar7 = *(float *)(lVar1 + 0x10);
            fVar6 = *(float *)(lVar1 + 0x14);
          }
          *(float *)(param_4 + 0x138) = fVar8;
          *(float *)(param_4 + 0x13c) = fVar7;
          *(float *)(param_4 + 0x140) = fVar6;
          *(undefined1 *)(param_4 + 0x134) = 1;
        }
        uVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_4,0);
        UnityEngine_DrivenRectTransformTracker__Add(param_4 + 0x144,param_4,uVar2,0xe0,0);
        fVar7 = *(float *)(param_4 + 0x14c);
        fVar8 = *(float *)(param_4 + 0x150);
        fVar6 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse
                                 (*(undefined4 *)(param_4 + 0x148));
        if ((param_3 - fVar8) * (param_3 - fVar8) +
            (fVar4 - fVar6) * (fVar4 - fVar6) + (param_2 - fVar7) * (param_2 - fVar7) <
            9.9999994e-11) {
          return;
        }
        lVar1 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar1 != 0) {
          UnityEngine_Transform__set_localScale(fVar6,fVar7,fVar8,lVar1,0);
          return;
        }
      }
    }
  }
LAB_04400a48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

