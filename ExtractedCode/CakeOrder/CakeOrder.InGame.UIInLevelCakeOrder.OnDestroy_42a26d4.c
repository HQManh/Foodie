// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$OnDestroy
// address: 0x42a26d4
// body: available
// range: 0x42a26d4-0x42a2b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a2b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09517238 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09174c48);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a08);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197a10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcc28);
    FUN_03f5c2a4(&DAT_091dcc30);
    FUN_03f5c2a4(&DAT_091dcc38);
    FUN_03f5c2a4(&DAT_091dcc40);
    FUN_03f5c2a4(&DAT_091dcc50);
    FUN_03f5c2a4(&DAT_091dcc48);
    FUN_03f5c2a4(&DAT_091dcc60);
    FUN_03f5c2a4(&DAT_091dcc70);
    DAT_09517238 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcc70,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_InGame_UIInLevelHUDPuzzleStyle__remove_onSpeedBudgetRechargeRequested(lVar3,uVar2);
  }
  uVar1 = FUN_0640f598(param_1 + 0x120,DAT_09197a08);
  if ((uVar1 & 1) != 0) {
    FUN_0640f728(param_1 + 0x120,DAT_09197a10);
  }
  uVar1 = FUN_0640f598((undefined8 *)(param_1 + 0x1b8),DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x1c0);
    local_50 = *(undefined8 *)(param_1 + 0x1b8);
    local_40 = *(undefined8 *)(param_1 + 0x1c8);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_70,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    uVar2 = thunk_FUN_03f9944c(DAT_09174948);
    FUN_071c30b0(uVar2,param_1,DAT_091dcc48,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__remove_onFastForwardEndgame(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0xc0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcc50,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__remove_onFastForwardEndgameEnded(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0xc0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcc60,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__remove_onUseMoreServeSlot(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0xc0);
    uVar2 = thunk_FUN_03f9944c(DAT_09174c48);
    FUN_071cbbb8(uVar2,param_1,DAT_091dcc28,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__remove_onBoosterUsableChanged(lVar3,uVar2,0);
  }
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_042a2b48;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_042a2b48;
    lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcc30,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_UICurrencyCounter__remove_onClickMore(lVar3,uVar2,0);
  }
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_042a2b48;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_042a2b48;
    lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x20);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcc40,0);
    if (lVar3 == 0) goto LAB_042a2b48;
    CakeOrder_UICurrencyCounter__remove_onClickMore(lVar3,uVar2,0);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) == 0) {
LAB_042a2b28:
      CakeOrder_BaseUI_SceneMainUI__OnDestroy(param_1,0);
      return;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091dcc38,0);
      if (lVar3 != 0) {
        CakeOrder_UI_UIHeartCounter__remove_onClickMore(lVar3,uVar2,0);
        goto LAB_042a2b28;
      }
    }
  }
LAB_042a2b48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

