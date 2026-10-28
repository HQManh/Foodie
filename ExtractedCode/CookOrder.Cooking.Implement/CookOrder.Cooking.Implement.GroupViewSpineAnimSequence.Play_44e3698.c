// rea decompile_all
// name: CookOrder.Cooking.Implement.GroupViewSpineAnimSequence$$Play
// address: 0x44e3698
// body: available
// range: 0x44e3698-0x44e3837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e3814 to 0x44e3fb4 CookOrder.Cooking.Implement.StationGroupView$$SetAudioPaused (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e3834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__Play(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09518378 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2dc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518378 = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar4 != 0) {
    UnityEngine_GameObject__SetActive(lVar4,1,0);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x30) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_2 + 0x30) + 0x18) == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0x20),0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(long *)(param_2 + 0x20) != 0) {
        lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_2 + 0x20),0);
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar6 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_2 + 0x20),0);
          if (((lVar6 == 0) || (lVar4 == 0)) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
            return;
          }
          if ((*(long *)(param_2 + 0x20) != 0) &&
             (lVar7 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_2 + 0x20),0),
             lVar7 != 0)) {
            Spine_Skeleton__SetToSetupPose(lVar7,0);
            fVar9 = (float)CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__QueueChain
                                     (param_2,lVar4,lVar6);
            fVar10 = fVar9 / param_1;
            bVar1 = false;
            bVar2 = true;
            bVar3 = false;
            if (0.0 < fVar9) {
              bVar1 = false;
              bVar2 = false;
              bVar3 = true;
              if (!NAN(param_1)) {
                bVar1 = param_1 < 0.0;
                bVar2 = param_1 == 0.0;
                bVar3 = false;
              }
            }
            if (bVar2 || bVar1 != bVar3) {
              fVar10 = 1.0;
            }
            *(float *)(param_2 + 0x68) = fVar10;
            CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__PlayStepSfx
                      (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),param_2,
                       *(undefined8 *)(param_2 + 0x48));
            CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__PlayFx(param_2);
            if (*(char *)(param_2 + 0x60) == '\0') {
              if (*(long *)(param_2 + 0x20) != 0) {
                *(float *)(*(long *)(param_2 + 0x20) + 0x15c) = fVar10;
                return;
              }
            }
            else {
              *(float *)(param_2 + 100) = fVar10;
              if (*(long *)(param_2 + 0x20) != 0) {
                uVar8 = *(undefined8 *)(param_2 + 0x40);
                *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x15c) = 0;
                CookOrder_Cooking_Implement_StationGroupView__SetAudioPaused(uVar8,1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

