// rea decompile_all
// name: _GAME.GameUI.DropItemController$$ScheduleCloneToBag
// address: 0x774fd48
// body: available
// range: 0x774fd48-0x7750053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774fef4 to 0x774e470 _GAME.GameUI.DropItemController$$ScheduleItemToBag (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774ff7c to 0x7750af0 _GAME.GameUI.DropItemController$$RegisterCapacitySkip (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775004c to 0x774f604 _GAME.GameUI.DropItemController$$ScheduleRequest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7750050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__ScheduleCloneToBag
               (undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  
  if ((DAT_09522b9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091e9310);
    FUN_03f5c2a4(&DAT_09190300);
    FUN_03f5c2a4(&DAT_09179bb8);
    FUN_03f5c2a4(&DAT_091cda18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e92d8);
    FUN_03f5c2a4(&DAT_091902c8);
    FUN_03f5c2a4(&DAT_091fea80);
    DAT_09522b9d = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091902c8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_07750050:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_2);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_3 == 0) goto LAB_07750050;
  lVar3 = FUN_04b7c324(param_3,DAT_091cda18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) goto LAB_07750050;
    lVar3 = *(long *)(lVar3 + 0x38);
    if (lVar3 != 0) {
      uVar6 = *(uint *)(lVar3 + 0x10);
      if (((uVar6 < 6) && ((1 << (ulong)(uVar6 & 0x1f) & 0x26U) != 0)) &&
         (0 < *(int *)(lVar3 + 0x14))) {
        uVar4 = _GAME_GameItem_RwItemModel__Copy(lVar3,0);
        UnityEngine_GameObject__get_transform(param_3,0);
        _GAME_GameUI_DropItemController__ConvertUIWorldPos();
        _GAME_GameUI_DropItemController__ScheduleItemToBag(param_2,uVar4);
        return;
      }
      goto LAB_0774fefc;
    }
  }
  uVar6 = 0xffffffff;
LAB_0774fefc:
  uVar2 = _GAME_GameUI_DropItemController__TryResolveBagDestination
                    (param_2,uVar6,lVar1 + 0x20,lVar1 + 0x2c);
  if ((uVar2 & 1) != 0) {
    uVar2 = _GAME_GameUI_DropItemController__CanAcceptRequest(param_2);
    if ((uVar2 & 1) == 0) {
      _GAME_GameUI_DropItemController__RegisterCapacitySkip(param_2);
      return;
    }
    uVar4 = _GAME_GameUI_DropItemController__CloneItem(param_2,param_3);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_09190300);
      System_Object___ctor(lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar4);
      plVar7 = (long *)(lVar1 + 0x18);
      *plVar7 = lVar3;
      thunk_FUN_03f5d7b8(plVar7,lVar3);
      uVar4 = thunk_FUN_03f9944c(DAT_09179bb8);
      FUN_0532f9ec(uVar4,lVar1,DAT_091e92d8,0);
      lVar1 = *plVar7;
      uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar5,lVar1,DAT_091e9310,0);
      _GAME_GameUI_DropItemController__ScheduleRequest(param_1,param_2,DAT_091fea80,uVar4,0,uVar5);
      return;
    }
  }
  return;
}

