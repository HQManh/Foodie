// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$GetBoard
// address: 0x422ca7c
// body: available
// range: 0x422ca7c-0x422cc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422cc24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422cc48 to 0x57e0998 FUN_057e0998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__GetBoard(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_09516da4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ae370);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091d4d70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5650);
    DAT_09516da4 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  while (lVar3 != 0) {
    if (param_2 < *(int *)(lVar3 + 0x18)) {
      FUN_057e0998(lVar3,param_2,DAT_091ae388);
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = UnityEngine_Component__get_transform(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar3 = FUN_04c353a8(uVar8,uVar4,0,DAT_091d4d70);
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,param_1,DAT_091d5650,0);
    if (lVar3 == 0) break;
    AnhPD_FoodOrder_ListIngredientBoardView__add_Resized(lVar3,uVar4);
    lVar2 = DAT_091ae370;
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = lVar3;
      thunk_FUN_03f5d7b8(plVar7,lVar3);
    }
    else {
      FUN_057e0c68(lVar5,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *(long *)(param_1 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

