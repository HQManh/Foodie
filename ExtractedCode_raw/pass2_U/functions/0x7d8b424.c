// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$AddAction
// address: 0x7d8b424
// body: available
// range: 0x7d8b424-0x7d8b4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8b4b0 to 0x7dcbe5c Cysharp.Threading.Tasks.Internal.PlayerLoopRunner$$AddAction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d8b4b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8b4b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d8b560) */

void Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_09525d53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091892e0);
    DAT_09525d53 = 1;
  }
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_091892e0 + 0xb8) + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar2 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar2 = *(long *)(lVar2 + (long)(int)param_1 * 8 + 0x20);
  if (lVar2 == 0) {
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar3 = Cysharp_Threading_Tasks_PlayerLoopHelper__ThrowInvalidLoopTiming(param_1);
    lVar2 = auVar3._0_8_;
    if ((DAT_09525d2d & 1) == 0) {
      FUN_03f5c2a4(&DAT_091bdbd0);
      DAT_09525d2d = 1;
    }
    uVar1 = DAT_091bdbd0;
    *(undefined1 *)(lVar2 + 0x2d) = 1;
    FUN_064163c8(lVar2 + 0x30,auVar3._8_8_ & 0xffffffff,uVar1);
    if (*(char *)(lVar2 + 0x2c) == '\0') {
      Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__TryReturn();
    }
    return;
  }
  Cysharp_Threading_Tasks_Internal_PlayerLoopRunner__AddAction(lVar2,param_2,0);
  return;
}

