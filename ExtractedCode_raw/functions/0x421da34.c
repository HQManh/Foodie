// rea decompile_all
// name: AnhPD.FoodOrder.CustomerRunAnim$$Stop
// address: 0x421da34
// body: available
// range: 0x421da34-0x421dbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421db90 to 0x78c837c Spine.TrackEntry$$add_Interrupt (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421dbc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerRunAnim__Stop(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_09516d03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091e8440);
    FUN_03f5c2a4(&DAT_091e8448);
    FUN_03f5c2a4(&DAT_0918f9c8);
    DAT_09516d03 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f9c8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 0x18);
    *plVar5 = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
    AnhPD_FoodOrder_CustomerRunAnim__SetEff(param_1,0);
    lVar2 = AnhPD_FoodOrder_CustomerRunAnim__get_State(param_1);
    if ((lVar2 == 0) ||
       (uVar3 = AnhPD_FoodOrder_CustomerRunAnim__Has(param_1,*(undefined8 *)(param_1 + 0x38)),
       (uVar3 & 1) == 0)) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0421dbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    *(undefined1 *)(lVar1 + 0x10) = 0;
    lVar2 = AnhPD_FoodOrder_CustomerRunAnim__get_State(param_1);
    if (lVar2 != 0) {
      lVar2 = Spine_AnimationState__SetAnimation(lVar2,0,*(undefined8 *)(param_1 + 0x38),0,0);
      uVar4 = thunk_FUN_03f9944c(DAT_0918e418);
      Spine_AnimationState_TrackEntryDelegate___ctor(uVar4,lVar1,DAT_091e8440,0);
      if (lVar2 != 0) {
        Spine_TrackEntry__add_Complete(lVar2,uVar4,0);
        uVar4 = thunk_FUN_03f9944c(DAT_0918e418);
        Spine_AnimationState_TrackEntryDelegate___ctor(uVar4,lVar1,DAT_091e8448,0);
        Spine_TrackEntry__add_Interrupt(lVar2,uVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

