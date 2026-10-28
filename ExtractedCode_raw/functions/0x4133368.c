// rea decompile_all
// name: AnhPD.FoodOrder.UIFlexibleBurgerDisplay$$Display
// address: 0x4133368
// body: available
// range: 0x4133368-0x41336d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41336bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41336c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41336c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41336c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41336cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41336d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIFlexibleBurgerDisplay__Display(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  int local_84;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_095163b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a1730);
    FUN_03f5c2a4(&DAT_091a1738);
    FUN_03f5c2a4(&DAT_091a1740);
    FUN_03f5c2a4(&DAT_091a5288);
    FUN_03f5c2a4(&DAT_091a5290);
    FUN_03f5c2a4(&DAT_091a5298);
    FUN_03f5c2a4(&DAT_091b2ac8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095163b8 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_84 = 0;
  AnhPD_FoodOrder_UIFlexibleBurgerDisplay__HideAllFillings(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_BurgerPieceTable__InterleaveFillings(param_2,uVar6);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_041336c4;
  FUN_06f2d49c(*(long *)(param_1 + 0x40),DAT_091a1730);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) == 0) {
    iVar5 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), lVar2 == 0))
    goto LAB_041336c4;
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0), lVar2 == 0))
    goto LAB_041336c4;
    UnityEngine_Transform__SetSiblingIndex(lVar2,0,0);
    iVar5 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0579a6a8(&local_a0,*(long *)(param_1 + 0x38),DAT_091b2ac8);
    local_70 = local_90;
    puStack_78 = puStack_98;
    local_80 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_80;
    while (uVar3 = FUN_071aef5c(&local_80,DAT_091a5290), uVar1 = local_70, (uVar3 & 1) != 0) {
      lVar2 = AnhPD_FoodOrder_UIFlexibleBurgerDisplay__FindFilling(param_1,local_70 & 0xffffffff);
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(lVar2 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06f2ec88(*(long *)(param_1 + 0x40),uVar1 & 0xffffffff,&local_84,DAT_091a1738);
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06f2d308(*(long *)(param_1 + 0x40),uVar1 & 0xffffffff,local_84 + 1,DAT_091a1740);
          lVar2 = AnhPD_FoodOrder_UIFlexibleBurgerDisplay__GetRender(param_1,lVar2,local_84);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
          if ((uVar1 & 1) != 0) {
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = UnityEngine_Component__get_gameObject(lVar2,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_GameObject__SetActive(lVar4,1,0);
            lVar2 = UnityEngine_Component__get_transform(lVar2,0);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__SetSiblingIndex(lVar2,iVar5,0);
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
    FUN_071aef58(&local_80,DAT_091a5288);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive(lVar2,param_3 & 1,0);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar2 != 0)) {
        UnityEngine_Transform__SetSiblingIndex(lVar2,iVar5,0);
        return;
      }
    }
  }
LAB_041336c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

