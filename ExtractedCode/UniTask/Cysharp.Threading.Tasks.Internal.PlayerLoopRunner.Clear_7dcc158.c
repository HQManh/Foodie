// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner$$Clear
// address: 0x7dcc158
// body: available
// range: 0x7dcc158-0x7dcc23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcc1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc234 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcc238 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dcc238) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int Cysharp_Threading_Tasks_Internal_PlayerLoopRunner__Clear(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char local_3c [4];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_3c[0] = '\0';
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar4 = 0;
    iVar3 = 0;
    lVar5 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        if (local_3c[0] != '\0') {
          System_Threading_Monitor__Exit(local_38,0);
        }
        return iVar3;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar1 = lVar2 + uVar4 * 8;
      lVar6 = *(long *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      thunk_FUN_03f5d7b8(lVar2 + lVar5,0);
      lVar2 = *(long *)(param_1 + 0x38);
      uVar4 = uVar4 + 1;
      if (lVar6 != 0) {
        iVar3 = iVar3 + 1;
      }
      lVar5 = lVar5 + 8;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

