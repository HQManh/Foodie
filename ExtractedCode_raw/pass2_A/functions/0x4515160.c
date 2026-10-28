// rea decompile_all
// name: Utilities.DraggableRigidbody2DJointFeedback$$OnEndDrag
// address: 0x4515160
// body: available
// range: 0x4515160-0x4515277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4515270 to 0x4535820 MoreMountains.NiceVibrations.MMVibrationManager$$Haptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4515274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2DJointFeedback__OnEndDrag
               (undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_09518560 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518560 = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_3 + 0x20) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0x20), lVar3 != 0)) {
      uVar4 = *(undefined8 *)(param_3 + 0x40);
      lVar1 = *(long *)(param_3 + 0x48);
      lVar5 = *(long *)(param_3 + 0x28);
      fVar6 = (float)UnityEngine_Rigidbody2D__get_linearVelocity(lVar3,0);
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((lVar1 != 0) &&
         (UnityEngine_AnimationCurve__Evaluate(SQRT(fVar6 * fVar6 + param_2 * param_2),lVar1,0),
         lVar5 != 0)) {
        UnityEngine_AudioSource__PlayOneShot(lVar5,uVar4,0);
        goto LAB_04515258;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04515258:
  MoreMountains_NiceVibrations_MMVibrationManager__Haptic(*(undefined4 *)(param_3 + 0x54),0);
  return;
}

