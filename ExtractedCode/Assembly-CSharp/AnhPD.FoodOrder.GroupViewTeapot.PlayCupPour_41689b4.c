// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewTeapot$$PlayCupPour
// address: 0x41689b4
// body: available
// range: 0x41689b4-0x4168b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4168a2c to 0x4168e94 AnhPD.FoodOrder.GroupViewTeapot$$PlaySfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4168b50 to 0x78c7370 Spine.AnimationState$$AddAnimation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4168b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewTeapot__PlayCupPour(undefined4 param_1,long param_2)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_0951658e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ce460);
    FUN_03f5c2a4(&DAT_0918e420);
    DAT_0951658e = 1;
  }
  lVar2 = AnhPD_FoodOrder_GroupViewTeapot__CupStateOf(param_2);
  if ((lVar2 == 0) ||
     (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x90),0), (uVar3 & 1) != 0)) {
    AnhPD_FoodOrder_GroupViewTeapot__PlaySfx(*(undefined8 *)(param_2 + 0xd8));
    return;
  }
  AnhPD_FoodOrder_GroupViewTeapot__ShowCup(param_2,1);
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x88),0);
  if ((uVar3 & 1) == 0) {
    lVar4 = Spine_AnimationState__SetAnimation(lVar2,0,*(undefined8 *)(param_2 + 0x88),1,0);
  }
  else {
    lVar4 = Spine_AnimationState__SetEmptyAnimation(0,lVar2,0,0);
  }
  if (lVar4 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0xb0);
    uVar6 = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(lVar4 + 0xa4) = param_1;
    AnhPD_FoodOrder_GroupViewTeapot__StartCupSlide(uVar6,uVar7,param_2);
    fVar1 = *(float *)(param_2 + 0xb0);
    if (*(float *)(param_2 + 0xb0) <= 0.0001) {
      fVar1 = 0.0001;
    }
    lVar4 = Spine_AnimationState__AddAnimation(fVar1,lVar2,0,*(undefined8 *)(param_2 + 0x90),0,0);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0xa4) = param_1;
      uVar5 = thunk_FUN_03f9944c(DAT_0918e420);
      Spine_AnimationState_TrackEntryEventDelegate___ctor(uVar5,param_2,DAT_091ce460,0);
      Spine_TrackEntry__add_Event(lVar4,uVar5,0);
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x98),0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      Spine_AnimationState__AddAnimation(0,lVar2,0,*(undefined8 *)(param_2 + 0x98),1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

