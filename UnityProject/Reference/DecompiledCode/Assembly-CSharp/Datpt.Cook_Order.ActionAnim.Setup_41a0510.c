// rea decompile_all
// name: Datpt.Cook_Order.ActionAnim$$Setup
// address: 0x41a0510
// body: available
// range: 0x41a0510-0x41a05eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a05e4 to 0x85c54a4 UnityEngine.Animation$$set_playAutomatically (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a05e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ActionAnim__Setup(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_0951683b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c53b0);
    FUN_03f5c2a4(&DAT_091cd6a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951683b = 1;
  }
  Datpt_Cook_Order_ActionAnim__OnValidate(param_1);
  uVar1 = FUN_04a6a14c(param_1,DAT_091c53b0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 == 0) goto LAB_041a05e8;
    FUN_04b7c294(lVar3,DAT_091cd6a8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_Animation__set_playAutomatically(*(long *)(param_1 + 0x40),0,0);
    return;
  }
LAB_041a05e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

