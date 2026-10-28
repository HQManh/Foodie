// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$ShowOrder
// address: 0x4226860
// body: available
// range: 0x4226860-0x4226993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422693c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422698c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4226990 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderBoard__ShowOrder(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09516d60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed48);
    DAT_09516d60 = 1;
  }
  plVar6 = (long *)(param_1 + 0x80);
  if (*plVar6 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*plVar6,0);
  }
  AnhPD_FoodOrder_OrderBoard__StopIngredientPreview(param_1);
  AnhPD_FoodOrder_OrderBoard__SetPreviewOrders(param_1,param_2,param_3);
  if ((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar3 = *(uint *)(lVar5 + 0x18);
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    lVar7 = (long)(int)uVar2;
    if ((long)(int)uVar3 <= (long)(int)uVar2) {
      lVar7 = (long)(int)uVar3;
    }
    lVar7 = lVar7 * 8 + 0x20;
    uVar2 = uVar1;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar2) {
        if ((int)uVar1 < 1) {
          lVar5 = 0;
        }
        else {
          uVar4 = AnhPD_FoodOrder_OrderBoard__LoadOrderRoutine(param_1,param_2,uVar1);
          lVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar4,0);
        }
        *plVar6 = lVar5;
        thunk_FUN_03f5d7b8(plVar6);
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if ((*(long *)(lVar5 + lVar7) == 0) ||
         (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + lVar7),0), lVar5 == 0))
      break;
      UnityEngine_GameObject__SetActive(lVar5,0,0);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

