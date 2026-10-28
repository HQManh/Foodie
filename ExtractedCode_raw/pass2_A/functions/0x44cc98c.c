// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCompositeView$$Stop
// address: 0x44cc98c
// body: available
// range: 0x44cc98c-0x44cca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cca98 to 0x6ef19b4 FUN_06ef19b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44cca9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCompositeView__Stop(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095182b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d5a8);
    FUN_03f5c2a4(&DAT_0919d5b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182b2 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_06ef046c(*(long *)(param_1 + 0x38),param_2,DAT_0919d5b8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
    if ((uVar2 & 1) != 0) {
      if ((lVar1 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar1,0), lVar3 == 0))
      goto LAB_044cca9c;
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      uVar4 = UnityEngine_Component__get_gameObject(lVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar4,0);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_06ef19b4(*(long *)(param_1 + 0x38),param_2,DAT_0919d5a8);
      return;
    }
  }
LAB_044cca9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

