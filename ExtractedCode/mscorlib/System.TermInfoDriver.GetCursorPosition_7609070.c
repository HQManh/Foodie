// rea decompile_all
// name: System.TermInfoDriver$$GetCursorPosition
// address: 0x7609070
// body: available
// range: 0x7609070-0x76092ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7609210 to 0x760993c System.TermInfoDriver$$AddToBuffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76092fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__GetCursorPosition(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  if ((DAT_09522010 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_091f5a68);
    DAT_09522010 = 1;
  }
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = thunk_FUN_03f8e428(0);
  if (0 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 == (long *)0x0) goto LAB_076092fc;
      uVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      System_TermInfoDriver__AddToBuffer(param_1,uVar2);
      iVar1 = iVar1 + -1;
    } while (1 < iVar1);
  }
  System_TermInfoDriver__WriteConsole(param_1,DAT_091f5a68);
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = thunk_FUN_03f8e428(1000);
  if (iVar1 < 1) {
    *(undefined1 *)(param_1 + 0xec) = 1;
    return;
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    while (iVar1 != 0x1b) {
      System_TermInfoDriver__AddToBuffer(param_1,iVar1);
      if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = thunk_FUN_03f8e428(100);
      if (iVar1 < 1) {
        return;
      }
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 == (long *)0x0) goto LAB_076092fc;
      iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    }
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      if (iVar1 != 0x5b) {
        System_TermInfoDriver__AddToBuffer(param_1,0x1b);
        System_TermInfoDriver__AddToBuffer(param_1,iVar1);
        return;
      }
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (iVar1 == 0x3b) {
          iVar1 = 0;
        }
        else {
          plVar5 = *(long **)(param_1 + 0x60);
          if (plVar5 == (long *)0x0) goto LAB_076092fc;
          iVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          while (iVar3 - 0x30U < 10) {
            plVar5 = *(long **)(param_1 + 0x60);
            if (plVar5 == (long *)0x0) goto LAB_076092fc;
            iVar1 = iVar3 + iVar1 * 10 + -0x1e0;
            iVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          }
          iVar1 = iVar1 + -0x31;
        }
        plVar5 = *(long **)(param_1 + 0x60);
        if (plVar5 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          if (iVar3 == 0x52) {
            iVar3 = 0;
          }
          else {
            plVar5 = *(long **)(param_1 + 0x60);
            if (plVar5 == (long *)0x0) goto LAB_076092fc;
            iVar4 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
            while (iVar4 - 0x30U < 10) {
              plVar5 = *(long **)(param_1 + 0x60);
              if (plVar5 == (long *)0x0) goto LAB_076092fc;
              iVar3 = iVar4 + iVar3 * 10 + -0x1e0;
              iVar4 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
            }
            iVar3 = iVar3 + -0x31;
          }
          *(int *)(param_1 + 0x18) = iVar3;
          *(int *)(param_1 + 0x1c) = iVar1;
          return;
        }
      }
    }
  }
LAB_076092fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

