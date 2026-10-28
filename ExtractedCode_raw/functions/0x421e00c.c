// rea decompile_all
// name: AnhPD.FoodOrder.FOrderItem$$DisplayOrder
// address: 0x421e00c
// body: available
// range: 0x421e00c-0x421e0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421e0c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FOrderItem__DisplayOrder(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
    AnhPD_FoodOrder_FOrderItem__SetMysteryMark(param_1,0);
    AnhPD_FoodOrder_FOrderItem__RestoreFade(param_1);
    AnhPD_FoodOrder_FOrderItem__RestoreTint(param_1);
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        plVar1 = *(long **)(param_1 + 0x20);
        if (plVar1 != (long *)0x0) {
          lVar2 = *plVar1;
          pcVar3 = *(code **)(lVar2 + 0x188);
          memcpy(auStack_78,(void *)(param_1 + 0x50),0x48);
          (*pcVar3)(plVar1,auStack_78,*(undefined8 *)(lVar2 + 400));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

