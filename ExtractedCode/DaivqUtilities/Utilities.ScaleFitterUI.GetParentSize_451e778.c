// rea decompile_all
// name: Utilities.ScaleFitterUI$$GetParentSize
// address: 0x451e778
// body: available
// range: 0x451e778-0x451e8a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451e8a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Utilities_ScaleFitterUI__GetParentSize
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((DAT_095185ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095185ab = 1;
  }
  lVar1 = Utilities_ScaleFitterUI__get_rectTransform(param_4);
  if (lVar1 == 0) {
LAB_0451e8a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)UnityEngine_Transform__GetParent(lVar1,0);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else if (*plVar2 != DAT_09189c98) {
    plVar2 = (long *)0x0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(plVar2,0);
  if ((uVar3 & 1) == 0) {
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    param_3 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0451e8a0;
    UnityEngine_RectTransform__get_rect(plVar2,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  return param_3;
}

