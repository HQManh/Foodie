// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$RollDish
// address: 0x4134e5c
// body: available
// range: 0x4134e5c-0x413518f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41350ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4135118 to 0x4135454 AnhPD.FoodOrder.BurgerOrderStrategy$$RollBurger (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4135164 to 0x41357f0 AnhPD.FoodOrder.BurgerOrderStrategy$$RollChicken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4135178 to 0x4135a40 AnhPD.FoodOrder.BurgerOrderStrategy$$RollPotato (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x413518c to 0x4135b48 AnhPD.FoodOrder.BurgerOrderStrategy$$RollDrink (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_BurgerOrderStrategy__RollDish(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0951635a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917bd88);
    DAT_0951635a = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar5,DAT_091adc70);
  uVar6 = AnhPD_FoodOrder_BurgerOrderStrategy__Has(param_1,0);
  lVar2 = DAT_091adc88;
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) goto LAB_041350ac;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_041350ac;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0;
    }
    else {
      FUN_057971a8(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar6 = AnhPD_FoodOrder_BurgerOrderStrategy__HasAnyChicken(param_1);
  lVar2 = DAT_091adc88;
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) goto LAB_041350ac;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_041350ac;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 1;
    }
    else {
      FUN_057971a8(lVar5,1,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar6 = AnhPD_FoodOrder_BurgerOrderStrategy__Has(param_1,0xd);
  lVar2 = DAT_091adc88;
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) goto LAB_041350ac;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_041350ac;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
    }
    else {
      FUN_057971a8(lVar5,2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar6 = AnhPD_FoodOrder_BurgerOrderStrategy__Has(param_1,7);
  lVar2 = DAT_091adc88;
  if ((uVar6 & 1) == 0) {
    if (lVar5 != 0) {
LAB_041350c8:
      if (*(int *)(lVar5 + 0x18) == 0) {
        uVar7 = thunk_FUN_03f9944c(DAT_0917bd88);
        FUN_0579924c(uVar7,DAT_091ab600);
        return uVar7;
      }
      uVar3 = UnityEngine_Random__Range(0,*(int *)(lVar5 + 0x18),0);
      iVar4 = FUN_05796eb0(lVar5,uVar3,DAT_091add20);
      if (iVar4 == 2) {
        uVar7 = AnhPD_FoodOrder_BurgerOrderStrategy__RollPotato(param_1);
        return uVar7;
      }
      if (iVar4 == 1) {
        uVar7 = AnhPD_FoodOrder_BurgerOrderStrategy__RollChicken(param_1);
        return uVar7;
      }
      if (iVar4 == 0) {
        uVar7 = AnhPD_FoodOrder_BurgerOrderStrategy__RollBurger(param_1);
        return uVar7;
      }
      uVar7 = AnhPD_FoodOrder_BurgerOrderStrategy__RollDrink(param_1);
      return uVar7;
    }
  }
  else if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
      }
      else {
        FUN_057971a8(lVar5,3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_041350c8;
    }
  }
LAB_041350ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

