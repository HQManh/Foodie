// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain$$Awake
// address: 0x431e5e4
// body: available
// range: 0x431e5e4-0x431eb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431eb6c to 0x4326574 CakeOrder.Home.UIHomeTabPageMainLockedMode$$add_onUnlockedByPlayer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431eb70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431eb74 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain__Awake(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_0951763f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174b18);
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c5308);
    FUN_03f5c2a4(&DAT_091cd608);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcab0);
    FUN_03f5c2a4(&DAT_091dcab8);
    FUN_03f5c2a4(&DAT_091dcac0);
    FUN_03f5c2a4(&DAT_091dcad0);
    FUN_03f5c2a4(&DAT_091dcad8);
    FUN_03f5c2a4(&DAT_091dcae0);
    FUN_03f5c2a4(&DAT_091dcae8);
    FUN_03f5c2a4(&DAT_091dca98);
    FUN_03f5c2a4(&DAT_091dcaa0);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0951763f = 1;
  }
  uVar2 = FUN_04a6a14c(param_1,DAT_091c5308);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x150,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar4 == 0) goto LAB_0431eb70;
    uVar2 = FUN_04b7c294(lVar4,DAT_091cd608);
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x150,uVar2);
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
    lVar6 = 0;
    do {
      if (uVar1 <= (uint)lVar6) goto LAB_0431eb74;
      lVar5 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
      uVar2 = thunk_FUN_03f9944c(DAT_09174b18);
      FUN_071c4cc8(uVar2,param_1,DAT_091dcad0,0);
      if (lVar5 == 0) goto LAB_0431eb70;
      Utilities_SwipeDetectUI__add_onSwipe(lVar5,uVar2,0);
      uVar1 = *(uint *)(lVar4 + 0x18);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)uVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0431eb70;
    lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dca98,0);
    if (lVar4 == 0) goto LAB_0431eb70;
    UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_0431eb70;
    lVar4 = *(long *)(*(long *)(param_1 + 0xe0) + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcaa0,0);
    if (lVar4 == 0) goto LAB_0431eb70;
    UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
    lVar6 = 0;
    do {
      if (uVar1 <= (uint)lVar6) goto LAB_0431eb74;
      lVar5 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
      if (lVar5 == 0) goto LAB_0431eb70;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
      UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcae8,0);
      if (lVar5 == 0) goto LAB_0431eb70;
      UnityEngine_Events_UnityEvent__AddListener(lVar5,uVar2,0);
      uVar1 = *(uint *)(lVar4 + 0x18);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)uVar1);
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
    lVar6 = 0;
    do {
      if (uVar1 <= (uint)lVar6) {
LAB_0431eb74:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
      if (lVar5 == 0) goto LAB_0431eb70;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
      UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcae0,0);
      if (lVar5 == 0) goto LAB_0431eb70;
      UnityEngine_Events_UnityEvent__AddListener(lVar5,uVar2,0);
      uVar1 = *(uint *)(lVar4 + 0x18);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)uVar1);
  }
  lVar4 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar2,param_1,DAT_091dcac0,0);
  if (lVar4 != 0) {
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onMapBuildingUnlocked(lVar4,uVar2,0)
    ;
    lVar4 = *(long *)(param_1 + 0xa0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091dcab0,0);
    if (lVar4 != 0) {
      CakeOrder_Home_UIHomeTabPageMainNormalMode__add_onClickPlay(lVar4,uVar2,0);
      lVar4 = *(long *)(param_1 + 0xa0);
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091dcae0,0);
      if (lVar4 != 0) {
        CakeOrder_Home_UIHomeTabPageMainNormalMode__add_onGoToDetailsMode(lVar4,uVar2,0);
        lVar4 = *(long *)(param_1 + 0xa8);
        uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar2,param_1,DAT_091dcae8,0);
        if (lVar4 != 0) {
          CakeOrder_Home_UIHomeTabPageMainDetailsMode__add_onClickGoToNormalMode(lVar4,uVar2);
          lVar4 = *(long *)(param_1 + 0xa8);
          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar2,param_1,DAT_091dcab8,0);
          if (lVar4 != 0) {
            CakeOrder_Home_UIHomeTabPageMainDetailsMode__add_onFullUpgradeCelebrationRequested
                      (lVar4,uVar2);
            lVar4 = *(long *)(param_1 + 0xb0);
            uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar2,param_1,DAT_091dcad8,0);
            if (lVar4 != 0) {
              CakeOrder_Home_UIHomeTabPageMainLockedMode__add_onUnlockedByPlayer(lVar4,uVar2,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0431eb70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

