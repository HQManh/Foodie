// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$GetDisplayName
// address: 0x42dd75c
// body: available
// range: 0x42dd75c-0x42dd93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dd93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Localization_CakeLocalization__GetDisplayName(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  if ((DAT_09517424 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_0919fee0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091897e0);
    FUN_03f5c2a4(&DAT_0920b138);
    FUN_03f5c2a4(&DAT_0921cb50);
    FUN_03f5c2a4(&DAT_09217908);
    DAT_09517424 = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    plVar3 = *(long **)(DAT_09535468 + 0xb8);
LAB_042dd820:
    return *plVar3;
  }
  if (param_1 == (long *)0x0) {
LAB_042dd93c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(DAT_091897e0 + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_091897e0 + 0x130) * 8 + -8) ==
      DAT_091897e0)) {
    plVar3 = &DAT_0920b138;
    goto LAB_042dd820;
  }
  lVar4 = param_1[3];
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_09182278 + 0xb8) + 0x30);
  if (lVar2 == 0) goto LAB_042dd93c;
  uVar1 = FUN_06fd9fbc(lVar2,lVar4,&local_28,DAT_0919fee0);
  if ((uVar1 & 1) == 0) goto LAB_042dd90c;
  uVar1 = System_String__op_Equality(lVar4,DAT_09217908,0);
  if ((uVar1 & 1) == 0) {
LAB_042dd8e4:
    uVar1 = System_String__op_Equality(lVar4,DAT_0921cb50,0);
    if ((uVar1 & 1) == 0) {
      return local_28;
    }
  }
  else {
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = CakeOrder_Localization_ComplexScriptText__get_IsRightToLeft();
    if ((uVar1 & 1) != 0) goto LAB_042dd8e4;
  }
  lVar4 = CakeOrder_Localization_LocaleFonts__GetPickerName(lVar4);
  if (lVar4 != 0) {
    return lVar4;
  }
LAB_042dd90c:
  lVar4 = UnityEngine_Localization_Locale__get_LocaleName(param_1,0);
  return lVar4;
}

