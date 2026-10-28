// rea decompile_all
// name: Utilities.DraggableObjectFeedback$$OnCollisionEnter2D
// address: 0x4512d60
// body: available
// range: 0x4512d60-0x4512f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4512f48 to 0x4535820 MoreMountains.NiceVibrations.MMVibrationManager$$Haptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4512f60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4512f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectFeedback__OnCollisionEnter2D
               (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09518546 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518546 = 1;
  }
  if (param_4 != 0) {
    fVar9 = (float)UnityEngine_Collision2D__get_relativeVelocity(param_4,0);
    fVar11 = param_2;
    lVar3 = UnityEngine_Collision2D__get_otherRigidbody(param_4,0);
    lVar4 = UnityEngine_Collision2D__get_contacts(param_4,0);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04512f60:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      UnityEngine_ContactPoint2D__get_point(lVar4 + 0x20,0);
      if (lVar3 == 0) goto LAB_04512f64;
      fVar10 = (float)UnityEngine_Rigidbody2D__GetPointVelocity(lVar3,0);
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
      *(float *)(param_3 + 0x80) =
           SQRT((fVar9 + fVar10) * (fVar9 + fVar10) + (param_2 + fVar11) * (param_2 + fVar11));
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = *(long *)(param_3 + 0x28);
        UnityEngine_Random__Range(*(undefined4 *)(param_3 + 0x78),*(undefined4 *)(param_3 + 0x7c),0)
        ;
        if (lVar3 == 0) goto LAB_04512f64;
        UnityEngine_AudioSource__SetPitch(lVar3,0);
        if (*(long *)(param_3 + 0x70) == 0) goto LAB_04512f64;
        lVar3 = *(long *)(param_3 + 0x28);
        uVar8 = *(undefined8 *)(param_3 + 0x58);
        UnityEngine_AnimationCurve__Evaluate
                  (*(undefined4 *)(param_3 + 0x80),*(long *)(param_3 + 0x70),0);
        if (lVar3 == 0) goto LAB_04512f64;
        UnityEngine_AudioSource__PlayOneShot(lVar3,uVar8,0);
      }
      lVar3 = *(long *)(param_3 + 0x60);
      if (lVar3 != 0) {
        uVar7 = *(ulong *)(lVar3 + 0x18);
        uVar5 = uVar7 & 0xffffffff;
        uVar6 = uVar7 & 0xffffffff;
        do {
          uVar5 = uVar5 - 1;
          uVar2 = (int)uVar6 - 1;
          uVar6 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            return;
          }
          if ((uint)uVar7 <= uVar2) goto LAB_04512f60;
        } while (*(float *)(param_3 + 0x80) <= *(float *)(lVar3 + (uVar5 & 0xffffffff) * 4 + 0x20));
        lVar3 = *(long *)(param_3 + 0x68);
        if (lVar3 != 0) {
          if (uVar2 < *(uint *)(lVar3 + 0x18)) {
            MoreMountains_NiceVibrations_MMVibrationManager__Haptic
                      (*(undefined4 *)(lVar3 + (uVar5 & 0xffffffff) * 4 + 0x20),0);
            return;
          }
          goto LAB_04512f60;
        }
      }
    }
  }
LAB_04512f64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

