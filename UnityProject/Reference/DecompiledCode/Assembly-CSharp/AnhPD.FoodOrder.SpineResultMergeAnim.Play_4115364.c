// rea decompile_all
// name: AnhPD.FoodOrder.SpineResultMergeAnim$$Play
// address: 0x4115364
// body: available
// range: 0x4115364-0x411571b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411568c to 0x4114a68 AnhPD.FoodOrder.ItemResultMergeAnim$$PlayMergeSfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41156a8 to 0x4115724 AnhPD.FoodOrder.SpineResultMergeAnim.<>c__DisplayClass18_0$$<Play>g__Finish|0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4115714 to 0x78c885c Spine.TrackEntry$$add_Event (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4115718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpineResultMergeAnim__Play
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0951622d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_0918e420);
    FUN_03f5c2a4(&DAT_091f0390);
    FUN_03f5c2a4(&DAT_091f0398);
    FUN_03f5c2a4(&DAT_09194a40);
    DAT_0951622d = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194a40);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_2);
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_4);
    *(undefined1 *)(lVar1 + 0x10) = 0;
    lVar2 = AnhPD_FoodOrder_SpineResultMergeAnim__SkeletonFor(param_1,param_3);
    plVar6 = (long *)(lVar1 + 0x20);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    lVar2 = AnhPD_FoodOrder_SpineResultMergeAnim__EntryFor(param_1,param_3);
    lVar8 = *plVar6;
    puVar4 = (undefined8 *)(param_1 + 0x38);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x20);
    }
    uVar5 = *puVar4;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
    if (((uVar3 & 1) == 0) || (uVar3 = System_String__IsNullOrEmpty(uVar5,0), (uVar3 & 1) != 0))
    goto LAB_04115690;
    plVar9 = (long *)(param_1 + 0x68);
    lVar2 = *plVar9;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *plVar9;
      lVar8 = *plVar6;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar2,lVar8,0);
      if ((uVar3 & 1) != 0) {
        AnhPD_FoodOrder_SpineResultMergeAnim__Deactivate(param_1,*(undefined8 *)(param_1 + 0x68));
      }
    }
    *plVar9 = *plVar6;
    thunk_FUN_03f5d7b8(plVar9);
    if ((*plVar6 != 0) && (lVar2 = UnityEngine_Component__get_gameObject(*plVar6,0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      if (*plVar6 != 0) {
        lVar2 = Spine_Unity_SkeletonAnimation__get_AnimationState(*plVar6,0);
        if (lVar2 != 0) {
          AnhPD_FoodOrder_SpineResultMergeAnim__ApplySkin(param_1,*plVar6,param_3);
          if (*plVar6 == 0) goto LAB_04115718;
          lVar8 = Spine_Unity_SkeletonRenderer__get_Skeleton(*plVar6,0);
          if (lVar8 != 0) {
            Spine_Skeleton__SetToSetupPose(lVar8,0);
          }
          lVar2 = Spine_AnimationState__SetAnimation(lVar2,0,uVar5,0,0);
          if (lVar2 != 0) {
            uVar5 = thunk_FUN_03f9944c(DAT_0918e418);
            Spine_AnimationState_TrackEntryDelegate___ctor(uVar5,lVar1,DAT_091f0390,0);
            Spine_TrackEntry__add_Complete(lVar2,uVar5,0);
            uVar5 = AnhPD_FoodOrder_SpineResultMergeAnim__EntryFor(param_1,param_3);
            AnhPD_FoodOrder_SpineResultMergeAnim__Hide(param_1,uVar5);
            auVar10 = AnhPD_FoodOrder_SpineResultMergeAnim__SfxFor(param_1,param_3);
            puVar7 = (undefined8 *)(lVar1 + 0x40);
            *puVar7 = auVar10._0_8_;
            thunk_FUN_03f5d7b8(puVar7,auVar10._0_8_);
            puVar4 = (undefined8 *)(lVar1 + 0x48);
            *puVar4 = auVar10._8_8_;
            thunk_FUN_03f5d7b8(puVar4,auVar10._8_8_);
            uVar5 = *puVar4;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar3 & 1) != 0) {
              uVar3 = System_String__IsNullOrEmpty(*puVar7,0);
              if ((uVar3 & 1) != 0) {
                AnhPD_FoodOrder_ItemResultMergeAnim__PlayMergeSfx(param_1,*puVar4);
                return;
              }
              *(undefined1 *)(lVar1 + 0x38) = 0;
              uVar5 = thunk_FUN_03f9944c(DAT_0918e420);
              Spine_AnimationState_TrackEntryEventDelegate___ctor(uVar5,lVar1,DAT_091f0398,0);
              Spine_TrackEntry__add_Event(lVar2,uVar5,0);
              return;
            }
            return;
          }
        }
LAB_04115690:
        AnhPD_FoodOrder_SpineResultMergeAnim_<>c__DisplayClass18_0__<Play>g__Finish_0(lVar1);
        return;
      }
    }
  }
LAB_04115718:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

