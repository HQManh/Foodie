// rea decompile_all
// name: AnhPD.FoodOrder.UIHint$$ShowHolderOnly
// address: 0x41272c8
// body: available
// range: 0x41272c8-0x412742f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412741c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHint__ShowHolderOnly(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_095162df & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b13c0);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b13c8);
    FUN_03f5c2a4(&DAT_091b0610);
    DAT_095162df = 1;
  }
  if (param_2 < 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x138);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= param_2) {
      return;
    }
    uVar2 = FUN_057e0998(lVar1,param_2,DAT_091b0610);
    lVar5 = *(long *)(param_1 + 0xd0);
    lVar1 = AnhPD_FoodOrder_UIHint__get_Info();
    if ((lVar1 != 0) &&
       (uVar3 = AnhPD_FoodOrder_LevelInfo__GetIngredientSprite(lVar1,uVar2,0), lVar5 != 0)) {
      UnityEngine_UI_Image__set_sprite(lVar5,uVar3,0);
      plVar6 = *(long **)(param_1 + 0xe8);
      lVar1 = AnhPD_FoodOrder_UIHint__get_Info();
      uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(uVar2,0);
      if ((lVar1 != 0) &&
         (uVar2 = AnhPD_FoodOrder_LevelInfo__GetIngredientName(lVar1,uVar2,0), plVar6 != (long *)0x0
         )) {
        (**(code **)(*plVar6 + 0x558))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x560));
        lVar1 = *(long *)(param_1 + 0x118);
        if (lVar1 != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(lVar1 + 0x18) <= iVar4) {
              return;
            }
            lVar1 = FUN_057e0998(lVar1,iVar4,DAT_091b13c8);
            if ((lVar1 == 0) || (lVar1 = UnityEngine_Component__get_gameObject(lVar1,0), lVar1 == 0)
               ) break;
            UnityEngine_GameObject__SetActive(lVar1,param_2 == iVar4,0);
            lVar1 = *(long *)(param_1 + 0x118);
            iVar4 = iVar4 + 1;
          } while (lVar1 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

