// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderDisplay$$Display
// address: 0x413319c
// body: available
// range: 0x413319c-0x41332fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41332c0 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41332f4 to 0x4133124 AnhPD.FoodOrder.BurgerOrderDisplay$$ShowBurger (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41332f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerOrderDisplay__Display(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0951634f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_09184720);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_0951634f = 1;
  }
  uVar1 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      return;
    }
  }
  else if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    lVar4 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_2,0);
    if (lVar4 != 0) {
      plVar3 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar4,uVar2,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar4 != 0)) {
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        if (plVar3 != (long *)0x0) {
          if ((*(byte *)(DAT_09184720 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09184720 + 0x130) * 8 + -8)
              == DAT_09184720)) {
            if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = AnhPD_FoodOrder_BurgerPieceTable__FillingsOfId(param_2);
            AnhPD_FoodOrder_BurgerOrderDisplay__ShowBurger(param_1,uVar2);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

