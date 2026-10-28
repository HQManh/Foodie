// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$UpdateOffersHeaderVisibility
// address: 0x4366750
// body: available
// range: 0x4366750-0x43669ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43669f8 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43669fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__UpdateOffersHeaderVisibility(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if ((DAT_09517877 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5568);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517877 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x118) == 0) ||
     (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x118),0), lVar5 == 0))
  goto LAB_043669fc;
  lVar6 = UnityEngine_Transform__GetParent(lVar5,0);
  iVar1 = UnityEngine_Transform__GetSiblingIndex(lVar5,0);
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar4 & 1) == 0) {
LAB_0436689c:
    if (lVar6 == 0) goto LAB_043669fc;
    iVar2 = UnityEngine_Transform__get_childCount(lVar6,0);
  }
  else {
    if ((*(long *)(param_1 + 0x120) == 0) ||
       (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x120),0), lVar5 == 0))
    goto LAB_043669fc;
    uVar7 = UnityEngine_Transform__GetParent(lVar5,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar7,lVar6,0);
    if ((uVar4 & 1) == 0) goto LAB_0436689c;
    if ((*(long *)(param_1 + 0x120) == 0) ||
       (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x120),0), lVar5 == 0))
    goto LAB_043669fc;
    iVar2 = UnityEngine_Transform__GetSiblingIndex(lVar5,0);
  }
  iVar1 = iVar1 + 1;
  if (iVar1 < iVar2) {
    if (lVar6 == 0) goto LAB_043669fc;
    uVar8 = 0;
    do {
      lVar5 = UnityEngine_Transform__GetChild(lVar6,iVar1,0);
      if (lVar5 == 0) goto LAB_043669fc;
      lVar5 = FUN_04a6a14c(lVar5,DAT_091c5568);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x140);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar7,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x148);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Equality(lVar5,uVar7,0);
          if ((uVar4 & 1) != 0) goto LAB_0436696c;
          uVar4 = CakeOrder_Shop_UICookOrderShop__IsSoldOut(lVar5);
        }
        else {
LAB_0436696c:
          uVar4 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
        }
        if ((uVar4 & 1) == 0) {
          if (lVar5 == 0) goto LAB_043669fc;
          uVar3 = CakeOrder_Shop_UICookOrderShop__IsHiddenByOfferRules
                            (param_1,*(undefined8 *)(lVar5 + 0x48));
          uVar8 = 1;
          uVar3 = uVar3 ^ 1;
        }
        else {
          uVar3 = 0;
          uVar8 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
      iVar1 = iVar1 + 1;
    } while ((iVar1 < iVar2) && ((uVar3 & 1) == 0));
    uVar8 = uVar8 ^ 1;
  }
  else {
    uVar3 = 0;
    uVar8 = 1;
  }
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x118),0), lVar5 != 0)) {
    UnityEngine_GameObject__SetActive(lVar5,uVar3 & 1 | uVar8,0);
    return;
  }
LAB_043669fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

