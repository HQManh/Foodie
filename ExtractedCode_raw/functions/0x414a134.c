// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleIceCream$$DrawViews
// address: 0x414a134
// body: available
// range: 0x414a134-0x414a227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414a224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleIceCream__DrawViews(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_0951643c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951643c = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x100);
    if (plVar2 == (long *)0x0) goto LAB_0414a224;
    uStack_38 = *(undefined8 *)(param_1 + 0x120);
    local_40 = *(undefined8 *)(param_1 + 0x118);
    local_30 = *(undefined8 *)(param_1 + 0x128);
    (**(code **)(*plVar2 + 0x188))
              (plVar2,&local_40,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(*plVar2 + 400));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x108);
    if (plVar2 == (long *)0x0) {
LAB_0414a224:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x120);
    local_40 = *(undefined8 *)(param_1 + 0x118);
    local_30 = *(undefined8 *)(param_1 + 0x128);
    (**(code **)(*plVar2 + 0x188))
              (plVar2,&local_40,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(*plVar2 + 400));
  }
  return;
}

