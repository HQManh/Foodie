// rea decompile_all
// name: CakeOrder.Home.UIPopupPetAssistantEachMap$$SetUpOnCreate
// address: 0x433925c
// body: available
// range: 0x433925c-0x43395cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43395c8 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43395cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPopupPetAssistantEachMap__SetUpOnCreate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09517707 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d50);
    FUN_03f5c2a4(&DAT_091b15b8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4a48);
    FUN_03f5c2a4(&DAT_091d4d10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcfe8);
    DAT_09517707 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar4 + 0xb8),0);
    uVar5 = thunk_FUN_03f9944c(DAT_0917d000);
    FUN_058a14ac(uVar5,DAT_091b17f0);
    if (0 < iVar3) {
      iVar11 = 0;
      do {
        lVar4 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_043395cc;
        uVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(**(long **)(lVar4 + 0xb8),iVar11,0);
        uVar5 = *(undefined8 *)(param_1 + 200);
        uVar1 = *(undefined8 *)(param_1 + 0xd0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar4 = FUN_04c35338(uVar1,uVar5,DAT_091d4d10);
        lVar8 = *(long *)(DAT_091b4a48 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (lVar4 == 0) goto LAB_043395cc;
        CakeOrder_Home_UIListPetAssistantInMap__SetUp
                  (lVar4,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)(param_1 + 0xd8),uVar6);
        lVar8 = DAT_091b15b8;
        lVar7 = *(long *)(param_1 + 0xe0);
        if (lVar7 == 0) goto LAB_043395cc;
        lVar9 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_043395cc;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = lVar4;
          thunk_FUN_03f5d7b8(plVar10,lVar4);
        }
        else {
          FUN_057e0c68(lVar7,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        uVar5 = thunk_FUN_03f9944c(DAT_09174d50);
        FUN_071cd244(uVar5,param_1,DAT_091dcfe8,0);
        CakeOrder_Home_UIListPetAssistantInMap__add_onInspectPetAssistant(lVar4,uVar5);
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
        iVar11 = iVar11 + 1;
      } while (iVar3 != iVar11);
    }
    lVar8 = *(long *)(param_1 + 0xc0);
    lVar4 = *(long *)(DAT_091b4a48 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (lVar8 != 0) {
      CakeOrder_Home_UIPetAssistantDetails__SetUp(lVar8,param_2,**(undefined8 **)(lVar4 + 0xb8));
      if (*(long *)(param_1 + 0xc0) != 0) {
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0xc0),0);
        auVar12 = CakeOrder_Home_UIPopupPetAssistantEachMap__LoadContent(param_1);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar12._0_8_,auVar12._8_8_,0);
        return;
      }
    }
  }
LAB_043395cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

