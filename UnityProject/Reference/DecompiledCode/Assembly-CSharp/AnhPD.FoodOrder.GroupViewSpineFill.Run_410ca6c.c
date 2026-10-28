// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$Run
// address: 0x410ca6c
// body: available
// range: 0x410ca6c-0x410ccdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410cbb0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410ccdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__Run
               (float param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_095161cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091eafd8);
    FUN_03f5c2a4(&DAT_091eafe0);
    FUN_03f5c2a4(&DAT_09191190);
    DAT_095161cd = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191190);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 0x18);
    *plVar5 = param_5;
    thunk_FUN_03f5d7b8(plVar5,param_5);
    if (param_4 == 0) goto LAB_0410ccdc;
    lVar2 = AnhPD_FoodOrder_GroupViewSpineFill__AnimSfxOf(param_2,*(undefined8 *)(param_4 + 0x10));
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    if (*plVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar3,lVar1,DAT_091eafd8,0);
      plVar6 = (long *)System_Delegate__Combine(uVar7,uVar3,0);
      lVar2 = DAT_09180e78;
      if (plVar6 == (long *)0x0) {
        *plVar5 = 0;
      }
      else if ((*plVar6 != DAT_09180e78) || (*plVar5 = (long)plVar6, *plVar6 != lVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6);
      }
      thunk_FUN_03f5d7b8(plVar5,plVar6);
    }
    if (param_3 == 0) goto LAB_0410ccdc;
    lVar2 = Spine_AnimationState__GetCurrent(param_3,0,0);
    if (((lVar2 == 0) || ((*(char *)(lVar2 + 0x6c) != '\0' && (*(long *)(lVar2 + 0x20) == 0)))) ||
       ((uVar4 = Spine_TrackEntry__get_IsComplete(lVar2,0), (uVar4 & 1) != 0 &&
        (*(long *)(lVar2 + 0x20) == 0)))) {
      lVar2 = Spine_AnimationState__SetAnimation(param_3,0,*(undefined8 *)(param_4 + 0x10),0,0);
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      }
    }
    else {
      lVar2 = Spine_AnimationState__AddAnimation(0,param_3,0,*(undefined8 *)(param_4 + 0x10),0,0);
      if (*plVar5 != 0) {
        uVar3 = thunk_FUN_03f9944c(DAT_0918e418);
        Spine_AnimationState_TrackEntryDelegate___ctor(uVar3,lVar1,DAT_091eafe0,0);
        if (lVar2 == 0) goto LAB_0410ccdc;
        Spine_TrackEntry__add_Start(lVar2,uVar3,0);
        goto LAB_0410ccac;
      }
    }
    if (lVar2 != 0) {
LAB_0410ccac:
      fVar8 = *(float *)(param_4 + 0x18);
      if (*(float *)(param_4 + 0x18) <= 0.01) {
        fVar8 = 0.01;
      }
      *(float *)(lVar2 + 0xa4) = fVar8 * param_1;
      return;
    }
  }
LAB_0410ccdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

