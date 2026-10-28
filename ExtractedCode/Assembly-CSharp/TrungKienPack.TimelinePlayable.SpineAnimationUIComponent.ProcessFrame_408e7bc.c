// rea decompile_all
// name: TrungKienPack.TimelinePlayable.SpineAnimationUIComponent$$ProcessFrame
// address: 0x408e7bc
// body: available
// range: 0x408e7bc-0x408e8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408e8e8 to 0x792af34 Spine.Unity.SkeletonGraphic$$UpdateMesh (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408e8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_TimelinePlayable_SpineAnimationUIComponent__ProcessFrame
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar1 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(param_2 + 0x28),0);
    if (((*(long *)(param_2 + 0x28) != 0) &&
        (lVar2 = Spine_Unity_SkeletonGraphic__get_Skeleton(*(long *)(param_2 + 0x28),0), lVar2 != 0)
        ) && (Spine_Skeleton__SetToSetupPose(lVar2,0), lVar1 != 0)) {
      Spine_AnimationState__ClearTracks(lVar1,0);
      lVar2 = Spine_AnimationState__SetAnimation
                        (lVar1,0,*(undefined8 *)(param_2 + 0x30),*(undefined1 *)(param_2 + 0x38),0);
      if (*(char *)(param_2 + 0x39) == '\0') {
        fVar7 = param_1;
        if (lVar2 == 0) goto LAB_0408e8ec;
      }
      else {
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) goto LAB_0408e8ec;
        fVar6 = *(float *)(*(long *)(lVar2 + 0x10) + 0x28);
        fVar7 = 0.0;
        if (0.0 < fVar6) {
          if (*(char *)(param_2 + 0x38) != '\0') {
            param_1 = param_1 - fVar6 * (float)(int)(param_1 / fVar6);
          }
          fVar7 = fVar6;
          if (param_1 <= fVar6) {
            fVar7 = param_1;
          }
          fVar8 = 0.0;
          if (0.0 <= param_1) {
            fVar8 = fVar7;
          }
          fVar7 = fVar6 - fVar8;
        }
      }
      lVar5 = *(long *)(param_2 + 0x28);
      *(float *)(lVar2 + 0x94) = fVar7;
      if (lVar5 != 0) {
        uVar3 = Spine_Unity_SkeletonGraphic__get_Skeleton(lVar5,0);
        Spine_AnimationState__Apply(lVar1,uVar3,0);
        plVar4 = *(long **)(param_2 + 0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x678))(0,plVar4,*(undefined8 *)(*plVar4 + 0x680));
          if (*(long *)(param_2 + 0x28) != 0) {
            Spine_Unity_SkeletonGraphic__UpdateMesh(*(long *)(param_2 + 0x28),0);
            return;
          }
        }
      }
    }
  }
LAB_0408e8ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

