// rea decompile_all
// name: CakeOrder.Shop.UIOfferIapStrip$$OnBuyPack
// address: 0x436b8cc
// body: available
// range: 0x436b8cc-0x436bb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436bb54 to 0x436b63c CakeOrder.Shop.UIOfferIapStrip$$UpdateSwipeEnabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436bb7c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436bb80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIOfferIapStrip__OnBuyPack(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_09517899 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b16d8);
    FUN_03f5c2a4(&DAT_091b16e0);
    FUN_03f5c2a4(&DAT_091b16e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517899 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = CakeOrder_Shop_UIOfferIapStrip__IsOfferedHere(param_1,param_2), (uVar2 & 1) != 0)) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0436bb80;
    uVar6 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(*(long *)(param_1 + 0x58),param_3,0,0,0);
    Utilities_AsyncExtension__RunWithLogException(uVar6,0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar5 = *(int *)(lVar4 + 0x18);
    if (-1 < iVar5 + -1) {
      do {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_0436bb80;
        iVar5 = iVar5 + -1;
        lVar4 = FUN_057e0998(*(long *)(param_1 + 0x48),iVar5,DAT_091b16e8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar4,0,0);
        if ((uVar2 & 1) == 0) {
LAB_0436ba0c:
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_0436bb80;
          FUN_057e251c(*(long *)(param_1 + 0x48),iVar5,DAT_091b16d8);
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0436bb80;
            iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(*(long *)(param_1 + 0x28),0);
            if (iVar5 < iVar1) {
              if (*(long *)(param_1 + 0x28) != 0) {
                Utilities_UIScrollSnap__Remove(*(long *)(param_1 + 0x28),iVar5,0);
                goto LAB_0436bb28;
              }
              goto LAB_0436bb80;
            }
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar2 & 1) != 0) {
            if ((lVar4 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar4,0), lVar3 == 0))
            goto LAB_0436bb80;
            uVar6 = UnityEngine_Transform__GetParent(lVar3,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
            if (((uVar2 & 1) != 0) &&
               ((lVar4 = UnityEngine_Component__get_transform(lVar4,0), lVar4 == 0 ||
                (lVar4 = UnityEngine_Transform__GetParent(lVar4,0), lVar4 == 0))))
            goto LAB_0436bb80;
            uVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            UnityEngine_Object__Destroy(uVar6,0);
          }
        }
        else {
          if (lVar4 == 0) goto LAB_0436bb80;
          uVar2 = CakeOrder_Shop_UIOfferIapStrip__IsOfferAvailable
                            (param_1,*(undefined8 *)(lVar4 + 0x48));
          if ((uVar2 & 1) == 0) goto LAB_0436ba0c;
        }
LAB_0436bb28:
      } while (0 < iVar5);
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) goto LAB_0436bb80;
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      CakeOrder_Shop_UIOfferIapStrip__UpdateSwipeEnabled(param_1);
      return;
    }
    lVar4 = CakeOrder_Shop_UIOfferIapStrip__get_Root(param_1);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      return;
    }
  }
LAB_0436bb80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

