// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation.Motion$$Cancel
// address: 0x44d6990
// body: available
// range: 0x44d6990-0x44d6abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingFlightPresentation_Motion__Cancel(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_095182fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182fc = 1;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xa4) = 1;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_044d6abc;
    UnityEngine_Transform__SetParent(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),0,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_044d6abc;
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c),*(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_044d6abc;
    UnityEngine_Transform__set_localRotation
              (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               *(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_044d6abc;
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),*(long *)(param_1 + 0x10),0);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_044d6abc;
      UnityEngine_Rendering_SortingGroup__set_sortingOrder
                (*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80),0);
    }
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x044d6ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
LAB_044d6abc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

