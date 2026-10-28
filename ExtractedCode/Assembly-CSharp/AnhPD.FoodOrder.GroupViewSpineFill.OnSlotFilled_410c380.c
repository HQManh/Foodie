// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$OnSlotFilled
// address: 0x410c380
// body: available
// range: 0x410c380-0x410c4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410c470 to 0x410c7ac AnhPD.FoodOrder.GroupViewSpineFill$$ShowSkin (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410c4d8 to 0x410ca6c AnhPD.FoodOrder.GroupViewSpineFill$$Run (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410c4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__OnSlotFilled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_095161c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091eafd0);
    FUN_03f5c2a4(&DAT_09191188);
    DAT_095161c9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191188);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    lVar2 = AnhPD_FoodOrder_GroupViewSpineFill__FindFill(param_1,param_3);
    plVar6 = (long *)(lVar1 + 0x18);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    if (*plVar6 == 0) {
      return;
    }
    lVar2 = AnhPD_FoodOrder_GroupViewSpineFill__StateOf(param_1);
    lVar5 = *plVar6;
    if (lVar2 != 0) {
      if (lVar5 == 0) goto LAB_0410c4dc;
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0410c45c;
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10),0);
      lVar5 = *plVar6;
      if ((uVar3 & 1) == 0) {
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x20);
          uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar4,lVar1,DAT_091eafd0,0);
          AnhPD_FoodOrder_GroupViewSpineFill__Run(0x3f800000,param_1,lVar2,uVar7,uVar4);
          return;
        }
        goto LAB_0410c4dc;
      }
    }
    if (lVar5 != 0) {
LAB_0410c45c:
      AnhPD_FoodOrder_GroupViewSpineFill__ShowSkin(param_1,*(undefined8 *)(lVar5 + 0x18));
      return;
    }
  }
LAB_0410c4dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

