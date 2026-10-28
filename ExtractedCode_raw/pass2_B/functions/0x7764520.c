// rea decompile_all
// name: _GAME.Bridge.R1LevelWatcher$$Raise
// address: 0x7764520
// body: available
// range: 0x7764520-0x77645eb inclusive
// range: 0x776464c-0x776466b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77645e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7764660 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7764664 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7764668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelWatcher__Raise(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((DAT_09522c5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    DAT_09522c5a = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2 = *(long **)(lVar1 + 0x20 + uVar4 * 8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar2 != DAT_09180e78) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        (*(code *)plVar2[3])(plVar2[8],plVar2[5]);
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
  }
  return;
}

