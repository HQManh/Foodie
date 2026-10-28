// rea decompile_all
// name: MessagePack.SequencePool$$Return
// address: 0x73a4360
// body: available
// range: 0x73a4360-0x73a4477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a4468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a4470 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a4474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073a446c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MessagePack_SequencePool__Return(long param_1,long param_2)

{
  long lVar1;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_09520b74 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba030);
    FUN_03f5c2a4(&DAT_091ba050);
    FUN_03f5c2a4(&DAT_091baf38);
    FUN_03f5c2a4(&DAT_091baf40);
    DAT_09520b74 = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  if (param_2 != 0) {
    FUN_060c95c4(param_2,DAT_091ba030);
    local_28 = *(undefined8 *)(param_1 + 0x18);
    local_2c[0] = '\0';
    System_Threading_Monitor__Enter(local_28,local_2c,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) < *(int *)(param_1 + 0x10)) {
        *(undefined4 *)(param_2 + 0x38) = 0x8000;
        FUN_061a19e4(lVar1,param_2,DAT_091baf38);
      }
      if (local_2c[0] != '\0') {
        System_Threading_Monitor__Exit(local_28,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

