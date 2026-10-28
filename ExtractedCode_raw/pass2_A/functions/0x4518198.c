// rea decompile_all
// name: Utilities.RenderersColorTransitionControl$$UpdateAllColors
// address: 0x4518198
// body: available
// range: 0x4518198-0x45182af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45182a4 to 0x6c83e48 FUN_06c83e48 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45182a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45182ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_RenderersColorTransitionControl__UpdateAllColors(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09518576 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b5b8);
    FUN_03f5c2a4(&DAT_0919b5a8);
    FUN_03f5c2a4(&DAT_0919b5c8);
    DAT_09518576 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        if (uVar2 <= (uint)lVar4) goto LAB_045182ac;
        lVar1 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
        if (lVar1 == 0) goto LAB_045182a8;
        FUN_06c83e48(*(undefined4 *)(param_1 + 0x20),lVar1,DAT_0919b5c8);
        uVar2 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          if (uVar2 <= (uint)lVar4) {
LAB_045182ac:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar1 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
          if (lVar1 == 0) goto LAB_045182a8;
          FUN_06c83e48(*(undefined4 *)(param_1 + 0x20),lVar1,DAT_0919b5b8);
          uVar2 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar2);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_06c83e48(*(undefined4 *)(param_1 + 0x20),*(long *)(param_1 + 0x38),DAT_0919b5a8);
        return;
      }
    }
  }
LAB_045182a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

