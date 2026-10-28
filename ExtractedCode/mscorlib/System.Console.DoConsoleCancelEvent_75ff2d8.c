// rea decompile_all
// name: System.Console$$DoConsoleCancelEvent
// address: 0x75ff2d8
// body: available
// range: 0x75ff2d8-0x75ff417 inclusive
// range: 0x75ff450-0x75ff493 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ff414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ff484 to 0x3f73414 FUN_03f73414 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ff488 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ff48c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ff490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Console__DoConsoleCancelEvent(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((DAT_09521fb0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a28);
    FUN_03f5c2a4(&DAT_09182a30);
    FUN_03f5c2a4(&DAT_09182a20);
    DAT_09521fb0 = 1;
  }
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(*(long *)(DAT_09182a20 + 0xb8) + 0x30) == 0) {
LAB_075ff470:
    FUN_03f73414(0x3a);
    return;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09182a28);
  System_ConsoleCancelEventArgs___ctor(lVar1,0,0);
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = *(long **)(*(long *)(DAT_09182a20 + 0xb8) + 0x30);
  if ((plVar2 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)), lVar3 != 0))
  {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar5 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2 = *(long **)(lVar3 + 0x20 + uVar5 * 8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar2 != DAT_09182a30) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        (*(code *)plVar2[3])(plVar2[8],0,lVar1,plVar2[5]);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x14) != '\0') {
        return;
      }
      goto LAB_075ff470;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

