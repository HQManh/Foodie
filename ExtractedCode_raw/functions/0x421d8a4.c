// rea decompile_all
// name: AnhPD.FoodOrder.CustomerRunAnim$$PlayLap
// address: 0x421d8a4
// body: available
// range: 0x421d8a4-0x421d97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421d974 to 0x78c8724 Spine.TrackEntry$$add_Complete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421d978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerRunAnim__PlayLap(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_09516d02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c7020);
    FUN_03f5c2a4(&DAT_0918e418);
    DAT_09516d02 = 1;
  }
  lVar2 = AnhPD_FoodOrder_CustomerRunAnim__get_State(param_1);
  fVar4 = (float)UnityEngine_Random__get_value(0);
  if (lVar2 != 0) {
    lVar1 = 0x30;
    if (*(float *)(param_1 + 0x50) <= fVar4) {
      lVar1 = 0x28;
    }
    lVar2 = Spine_AnimationState__SetAnimation(lVar2,0,*(undefined8 *)(param_1 + lVar1),0,0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918e418);
    Spine_AnimationState_TrackEntryDelegate___ctor(uVar3,param_1,DAT_091c7020,0);
    if (lVar2 != 0) {
      Spine_TrackEntry__add_Complete(lVar2,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

