// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$SetupReferences
// address: 0x429dd60
// body: available
// range: 0x429dd60-0x429e0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429e0b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__SetupReferences
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09517219 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09174c48);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcc28);
    FUN_03f5c2a4(&DAT_091dcc50);
    FUN_03f5c2a4(&DAT_091dcc48);
    FUN_03f5c2a4(&DAT_091dcc60);
    DAT_09517219 = 1;
  }
  plVar4 = (long *)(param_1 + 200);
  *plVar4 = param_2;
  thunk_FUN_03f5d7b8(plVar4,param_2);
  plVar6 = (long *)(param_1 + 0xc0);
  *plVar6 = param_3;
  thunk_FUN_03f5d7b8(plVar6,param_3);
  lVar5 = *plVar6;
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,param_1,DAT_091dcc60,0);
  if (lVar5 != 0) {
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onUseMoreServeSlot(lVar5,uVar2,0);
    lVar5 = *(long *)(param_1 + 0xc0);
    uVar2 = thunk_FUN_03f9944c(DAT_09174948);
    FUN_071c30b0(uVar2,param_1,DAT_091dcc48,0);
    if (lVar5 != 0) {
      CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onFastForwardEndgame(lVar5,uVar2,0);
      lVar5 = *(long *)(param_1 + 0xc0);
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091dcc50,0);
      if (lVar5 != 0) {
        CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onFastForwardEndgameEnded(lVar5,uVar2,0);
        lVar5 = *(long *)(param_1 + 0xc0);
        uVar2 = thunk_FUN_03f9944c(DAT_09174c48);
        FUN_071cbbb8(uVar2,param_1,DAT_091dcc28,0);
        if (lVar5 != 0) {
          CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onBoosterUsableChanged(lVar5,uVar2,0);
          if ((*plVar4 != 0) && (lVar5 = *(long *)(*plVar4 + 0x30), lVar5 != 0)) {
            if (*(long *)(lVar5 + 0xe0) != 0) {
              if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0429e0b8;
              CakeOrder_InGame_UIInLevelGeneralReferences__SetUpCounters();
            }
            lVar5 = *(long *)(param_1 + 0xd8);
            if (lVar5 != 0) {
              plVar4 = *(long **)(lVar5 + 0x20);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
                lVar5 = *(long *)(param_1 + 0xd8);
                if (lVar5 == 0) goto LAB_0429e0b8;
              }
              plVar4 = *(long **)(lVar5 + 0x28);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
                lVar5 = *(long *)(param_1 + 0xd8);
                if (lVar5 == 0) goto LAB_0429e0b8;
              }
              if (*(long *)(lVar5 + 0x18) != 0) {
                CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar5 + 0x18),0);
              }
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Inequality(param_4,0,0);
              plVar4 = (long *)(param_1 + 0xf8);
              lVar5 = *plVar4;
              if ((uVar3 & 1) == 0) {
                if ((lVar5 == 0) ||
                   (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0))
                goto LAB_0429e0b8;
                UnityEngine_GameObject__SetActive(lVar5,0,0);
                *plVar4 = 0;
                thunk_FUN_03f5d7b8(plVar4,0);
              }
              else {
                if (lVar5 == 0) goto LAB_0429e0b8;
                CakeOrder_InGame_UI_UIComboBar__SetUp(lVar5,param_4,0);
              }
              uVar3 = FUN_05a8eda4(DAT_091b4950);
              if ((uVar3 & 1) == 0) {
                bVar1 = 1;
              }
              else {
                lVar5 = *(long *)(DAT_091b4948 + 0x20);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_03f95a6c();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_03f95a6c();
                }
                if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_0429e0b8;
                bVar1 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsMechanicAvailable
                                  (**(long **)(lVar5 + 0xb8),2,0);
              }
              *(byte *)(param_1 + 0x188) = bVar1 & 1;
              return;
            }
          }
        }
      }
    }
  }
LAB_0429e0b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

