// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$ExpandCapacity
// address: 0x43f6c88
// body: available
// range: 0x43f6c88-0x43f6d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f6d30 to 0x5894558 FUN_05894558 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f6d40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__ExpandCapacity(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((DAT_09517e2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1740);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1758);
    DAT_09517e2b = 1;
  }
  if (param_1 != 0) {
    uVar2 = *(int *)(param_1 + 0x18) * param_2 - 1;
    uVar2 = uVar2 | (int)uVar2 >> 0x10;
    uVar2 = uVar2 | (int)uVar2 >> 8;
    uVar2 = uVar2 | (int)uVar2 >> 4;
    uVar2 = uVar2 | (int)uVar2 >> 2;
    iVar1 = (uVar2 | (int)uVar2 >> 1) + 1;
    iVar3 = FUN_05894540(param_1,DAT_091b1740);
    if (iVar3 < iVar1) {
      FUN_05894558(param_1,iVar1,DAT_091b1758);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

