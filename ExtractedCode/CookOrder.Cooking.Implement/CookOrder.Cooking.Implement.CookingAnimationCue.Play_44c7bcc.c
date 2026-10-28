// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingAnimationCue$$Play
// address: 0x44c7bcc
// body: available
// range: 0x44c7bcc-0x44c7e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c7e5c to 0x44c7f48 CookOrder.Cooking.Implement.CookingAnimationCue$$SetPaused (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c7e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingAnimationCue__Play(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if ((DAT_09518290 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6338);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e420);
    DAT_09518290 = 1;
  }
  auVar16 = UnityEngine_Component__get_gameObject(param_2,0);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar16._8_8_;
  auVar18 = auVar17 << 0x40;
  if (auVar16._0_8_ != 0) {
    UnityEngine_GameObject__SetActive(auVar16._0_8_,1,0);
    fVar14 = (float)param_1;
    fVar12 = 0.0;
    *(undefined1 *)(param_2 + 0x6c) = 0;
    if (0.0 < fVar14) {
      fVar15 = *(float *)(param_2 + 0x48);
      fVar12 = (float)CookOrder_Cooking_Implement_CookingAnimationCue__get_AuthoredDuration(param_2)
      ;
      fVar12 = (fVar15 * fVar12) / fVar14;
    }
    lVar10 = *(long *)(param_2 + 0x60);
    *(float *)(param_2 + 0x68) = fVar12;
    auVar17 = UnityEngine_Component__get_transform(param_2,0);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar17._8_8_;
    auVar18 = auVar16 << 0x40;
    if ((auVar17._0_8_ != 0) &&
       (auVar18 = UnityEngine_Transform__get_position(auVar17._0_8_,0), lVar10 != 0)) {
      CookOrder_Cooking_Implement_CookingVisualFeedback__Play(lVar10,1,0);
      uVar11 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar18 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((auVar18._0_8_ & 1) != 0) {
        plVar7 = *(long **)(param_2 + 0x20);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar18._8_8_;
        auVar18 = auVar1 << 0x40;
        if (plVar7 == (long *)0x0) goto LAB_044c7e60;
        (**(code **)(*plVar7 + 0x1c8))(plVar7,0,0,*(undefined8 *)(*plVar7 + 0x1d0));
        auVar2._8_8_ = 0;
        auVar2._0_8_ = extraout_x1;
        auVar18 = auVar2 << 0x40;
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_044c7e60;
        auVar17 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_2 + 0x20),0);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar17._8_8_;
        auVar18 = auVar3 << 0x40;
        if (auVar17._0_8_ == 0) goto LAB_044c7e60;
        Spine_Skeleton__SetToSetupPose(auVar17._0_8_,0);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_x1_00;
        auVar18 = auVar4 << 0x40;
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_044c7e60;
        auVar17 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_2 + 0x20),0);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar17._8_8_;
        auVar18 = auVar5 << 0x40;
        if (auVar17._0_8_ == 0) goto LAB_044c7e60;
        auVar18 = Spine_AnimationState__SetAnimation
                            (auVar17._0_8_,0,*(undefined8 *)(param_2 + 0x28),0,0);
        lVar10 = auVar18._0_8_;
        if (fVar14 <= 0.0) {
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) goto LAB_044c7e60;
          *(undefined4 *)(lVar10 + 0x94) = *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x28);
        }
        uVar8 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x58),0);
        if ((uVar8 & 1) == 0) {
          uVar11 = thunk_FUN_03f9944c(DAT_0918e420);
          auVar18 = Spine_AnimationState_TrackEntryEventDelegate___ctor
                              (uVar11,param_2,DAT_091c6338,0);
          if (lVar10 == 0) goto LAB_044c7e60;
          Spine_TrackEntry__add_Event(lVar10,uVar11,0);
        }
      }
      uVar11 = *(undefined8 *)(param_2 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar8 & 1) != 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar8 & 1) != 0) {
          lVar10 = *(long *)(param_2 + 0x30);
          auVar18 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x40),0);
          uVar8 = auVar18._0_8_;
          if ((uVar8 & 1) == 0) {
            uVar9 = *(ulong *)(param_2 + 0x40);
          }
          else {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = auVar18._8_8_;
            auVar18 = auVar6 << 0x40;
            if (*(long *)(param_2 + 0x38) == 0) goto LAB_044c7e60;
            uVar8 = UnityEngine_Object__GetName(*(long *)(param_2 + 0x38),0);
            uVar9 = uVar8;
          }
          auVar18._8_8_ = uVar9;
          auVar18._0_8_ = uVar8;
          if (lVar10 == 0) goto LAB_044c7e60;
          uVar13 = 0;
          if (fVar14 <= 0.0) {
            uVar13 = 0x3f800000;
          }
          UnityEngine_Animator__Play(uVar13,lVar10,uVar9,0,0);
        }
      }
      uVar8 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x58),0);
      if ((uVar8 & 1) != 0) {
        CookOrder_Cooking_Implement_CookingAnimationCue__PlaySound(param_2);
      }
      CookOrder_Cooking_Implement_CookingAnimationCue__SetPaused(param_2,0);
      return;
    }
  }
LAB_044c7e60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar18._0_8_,auVar18._8_8_);
}

