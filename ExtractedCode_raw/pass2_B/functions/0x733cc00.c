// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$ClearLogs
// address: 0x733cc00
// body: available
// range: 0x733cc00-0x733cdaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733cda8 to 0x733b0f8 IngameDebugConsole.DebugLogManager$$OnLogEntriesUpdated (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733cdac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__ClearLogs(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_09520661 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c9a8);
    FUN_03f5c2a4(&DAT_091a1bc0);
    FUN_03f5c2a4(&DAT_091a1b78);
    FUN_03f5c2a4(&DAT_091a1b80);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09520661 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x160);
  *(undefined1 *)(param_1 + 0x209) = 1;
  *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x5e8))(plVar1,DAT_091f95f0,*(undefined8 *)(*plVar1 + 0x5f0));
    plVar1 = *(long **)(param_1 + 0x168);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x5e8))(plVar1,DAT_091f95f0,*(undefined8 *)(*plVar1 + 0x5f0));
      plVar1 = *(long **)(param_1 + 0x170);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x5e8))(plVar1,DAT_091f95f0,*(undefined8 *)(*plVar1 + 0x5f0));
        if (*(long *)(param_1 + 0x210) != 0) {
          FUN_070dd8f8(*(long *)(param_1 + 0x210),*(undefined8 *)(param_1 + 800),DAT_091a1b80);
          if (*(long *)(param_1 + 0x210) != 0) {
            FUN_070dd7ec(*(long *)(param_1 + 0x210),DAT_091a1b78);
            if (*(long *)(param_1 + 0x220) != 0) {
              FUN_06fd85dc(*(long *)(param_1 + 0x220),DAT_0919c9a8);
              if (*(long *)(param_1 + 0x228) != 0) {
                FUN_070dd7ec(*(long *)(param_1 + 0x228),DAT_091a1b78);
                if (*(long *)(param_1 + 0x238) != 0) {
                  FUN_070dd7ec(*(long *)(param_1 + 0x238),DAT_091a1b78);
                  if (*(long *)(param_1 + 0x218) != 0) {
                    FUN_070dce84(*(long *)(param_1 + 0x218),DAT_091a1bc0);
                    if (*(long *)(param_1 + 0x230) == 0) goto LAB_0733cdac;
                    FUN_070dce84(*(long *)(param_1 + 0x230),DAT_091a1bc0);
                    if (*(long *)(param_1 + 0x240) == 0) goto LAB_0733cdac;
                    FUN_070dce84(*(long *)(param_1 + 0x240),DAT_091a1bc0);
                  }
                  lVar2 = *(long *)(param_1 + 0x1c8);
                  if (lVar2 != 0) {
                    *(undefined8 *)(lVar2 + 0x88) = 0;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x88),0);
                    *(undefined8 *)(lVar2 + 0x90) = 0x7fffffff;
                    IngameDebugConsole_DebugLogManager__OnLogEntriesUpdated(param_1,1,1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0733cdac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

