// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSashimi$$Redraw
// address: 0x4165758
// body: available
// range: 0x4165758-0x416575b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSashimi__Redraw(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((DAT_09516567 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516567 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_30 = *(undefined8 *)(param_1 + 0x118);
    uStack_38 = *(undefined8 *)(param_1 + 0x110);
    uStack_40 = *(undefined8 *)(param_1 + 0x108);
    AnhPD_FoodOrder_FlexibleSashimiDisplay__Display(*(long *)(param_1 + 0x100),&uStack_40);
  }
  uVar2 = UnityEngine_Component__get_transform(param_1,0);
  DG_Tweening_ShortcutExtensions__DOComplete(uVar2,0,0);
  uVar2 = UnityEngine_Component__get_transform(param_1,0);
  AnhPD_APDUtilities__Appear(0x3dcccccd,uVar2,0);
  return;
}

