// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewTeapot$$Play
// address: 0x4168410
// body: available
// range: 0x4168410-0x41686cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41686c4 to 0x78c8724 Spine.TrackEntry$$add_Complete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41686c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewTeapot__Play(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09516589 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091eaff0);
    FUN_03f5c2a4(&DAT_091eaff8);
    FUN_03f5c2a4(&DAT_091eb000);
    FUN_03f5c2a4(&DAT_091911a0);
    DAT_09516589 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091911a0);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_041686c8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
  lVar2 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar2 == 0) goto LAB_041686c8;
  UnityEngine_GameObject__SetActive(lVar2,1,0);
  lVar2 = AnhPD_FoodOrder_GroupViewTeapot__StateOf(param_2);
  if ((lVar2 != 0) &&
     (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x78),0), (uVar3 & 1) == 0)) {
    fVar7 = (float)AnhPD_FoodOrder_GroupViewTeapot__LengthOf
                             (param_2,*(undefined8 *)(param_2 + 0x78));
    fVar8 = (float)AnhPD_FoodOrder_GroupViewTeapot__LengthOf
                             (param_2,*(undefined8 *)(param_2 + 0x80));
    fVar9 = (float)AnhPD_FoodOrder_GroupViewTeapot__RemainingOfCurrent(lVar2);
    fVar11 = 1.0;
    if ((0.0 < param_1) && (0.0 < fVar7 + fVar8)) {
      fVar10 = 0.1;
      if (0.1 <= param_1 - fVar9) {
        fVar10 = param_1 - fVar9;
      }
      fVar10 = (fVar7 + fVar8) / fVar10;
      fVar11 = 1.0;
      if (1.0 <= fVar10) {
        fVar11 = fVar10;
      }
    }
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    *(float *)(lVar1 + 0x18) = fVar11;
    lVar4 = AnhPD_FoodOrder_GroupViewTeapot__Enqueue(param_2,lVar2,uVar6);
    if (lVar4 == 0) {
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x80),0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar4 + 0xa4) = *(undefined4 *)(lVar1 + 0x18);
      lVar5 = Spine_AnimationState__GetCurrent(lVar2,0,0);
      if (lVar5 == lVar4) {
        AnhPD_FoodOrder_GroupViewTeapot__PlayCupPour(*(undefined4 *)(lVar1 + 0x18),param_2);
      }
      else {
        uVar6 = thunk_FUN_03f9944c(DAT_0918e418);
        Spine_AnimationState_TrackEntryDelegate___ctor(uVar6,lVar1,DAT_091eaff0,0);
        Spine_TrackEntry__add_Start(lVar4,uVar6,0);
      }
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x80),0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
          return;
        }
        uVar6 = thunk_FUN_03f9944c(DAT_0918e418);
        Spine_AnimationState_TrackEntryDelegate___ctor(uVar6,lVar1,DAT_091eaff8,0);
        goto LAB_041686ac;
      }
    }
    lVar4 = Spine_AnimationState__AddAnimation(0,lVar2,0,*(undefined8 *)(param_2 + 0x80),0,0);
    uVar6 = DAT_0918e418;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0xa4) = *(undefined4 *)(lVar1 + 0x18);
      uVar6 = thunk_FUN_03f9944c(uVar6);
      Spine_AnimationState_TrackEntryDelegate___ctor(uVar6,lVar1,DAT_091eb000,0);
LAB_041686ac:
      Spine_TrackEntry__add_Complete(lVar4,uVar6,0);
      return;
    }
  }
  return;
}

