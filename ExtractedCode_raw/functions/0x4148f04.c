// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleIceCream$$OpenInit
// address: 0x4148f04
// body: available
// range: 0x4148f04-0x4148fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4148fc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleIceCream__OpenInit(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  long lStack_30;
  long local_28;
  
  if ((DAT_09516434 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a70);
    FUN_03f5c2a4(&DAT_091adca8);
    DAT_09516434 = 1;
  }
  (**(code **)(*param_1 + 0x2d8))(&local_38,param_1,param_2,*(undefined8 *)(*param_1 + 0x2e0));
  lVar2 = param_1[0x26];
  param_1[0x24] = lStack_30;
  param_1[0x23] = local_38;
  param_1[0x25] = local_28;
  lVar1 = DAT_09186a70;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_IceCreamScoopOrder__ReadOrder(param_2,lVar2);
    AnhPD_FoodOrder_FlexibleDragItem__MarkVisualDirty(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

