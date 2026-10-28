// rea decompile_all
// name: AnhPD.FoodOrder.JuiceResultMergeAnim$$PlayMerge
// address: 0x4158748
// body: available
// range: 0x4158748-0x415894f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4158840 to 0x4158a80 AnhPD.FoodOrder.JuiceResultMergeAnim.<>c__DisplayClass13_0$$<PlayMerge>g__Finish|0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4158948 to 0x4114a68 AnhPD.FoodOrder.ItemResultMergeAnim$$PlayMergeSfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x415894c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_JuiceResultMergeAnim__PlayMerge(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095164e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091ec170);
    FUN_03f5c2a4(&DAT_09192068);
    DAT_095164e6 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192068);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_3);
    lVar3 = DAT_09188ad0;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0x10) = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x38),0), (uVar2 & 1) != 0))
    goto LAB_0415882c;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar3 != 0)) {
      UnityEngine_GameObject__SetActive(lVar3,1,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar3 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar4 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x30),0);
          if ((lVar3 != 0) && (lVar4 != 0)) {
            if (param_2 == 0) goto LAB_0415894c;
            lVar5 = (**(code **)(param_2 + 0x18))
                              (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + 0x10),
                               *(undefined8 *)(param_2 + 0x28));
            if (lVar5 != 0) {
              Spine_Skeleton__SetSkin(lVar4,lVar5,0);
            }
            Spine_Skeleton__SetToSetupPose(lVar4,0);
            lVar3 = Spine_AnimationState__SetAnimation(lVar3,0,*(undefined8 *)(param_1 + 0x38),0,0);
            if (lVar3 != 0) {
              uVar6 = thunk_FUN_03f9944c(DAT_0918e418);
              Spine_AnimationState_TrackEntryDelegate___ctor(uVar6,lVar1,DAT_091ec170,0);
              Spine_TrackEntry__add_Complete(lVar3,uVar6,0);
              AnhPD_FoodOrder_ItemResultMergeAnim__PlayMergeSfx
                        (param_1,*(undefined8 *)(param_1 + 0x50),0);
              return;
            }
          }
LAB_0415882c:
          AnhPD_FoodOrder_JuiceResultMergeAnim_<>c__DisplayClass13_0__<PlayMerge>g__Finish_0(lVar1);
          return;
        }
      }
    }
  }
LAB_0415894c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

