// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$GetAutoCompleteCommand
// address: 0x73320b4
// body: available
// range: 0x73320b4-0x73323ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73323ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IngameDebugConsole_DebugLogConsole__GetAutoCompleteCommand(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((DAT_0952061f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091abd10);
    DAT_0952061f = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(param_2,0);
  uVar7 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar7 = param_2;
  }
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = IngameDebugConsole_DebugLogConsole__FindCommandIndex(uVar7);
  uVar6 = uVar1;
  if ((int)uVar1 < 0) {
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = *(long **)(DAT_09183668 + 0xb8);
    lVar4 = *plVar5;
    if (lVar4 == 0) goto LAB_073323ec;
    uVar6 = ~uVar1;
    if (*(int *)(lVar4 + 0x18) <= (int)uVar6) {
      return 0;
    }
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
      plVar5 = *(long **)(DAT_09183668 + 0xb8);
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_073323ec;
    }
    plVar5 = (long *)plVar5[6];
    lVar4 = FUN_057e0998(lVar4,uVar6,DAT_091abd10);
    if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_073323ec;
    uVar3 = (**(code **)(*plVar5 + 0x1c8))
                      (plVar5,*(undefined8 *)(lVar4 + 0x28),param_1,3,
                       *(undefined8 *)(*plVar5 + 0x1d0));
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09183668 + 0xb8);
  }
  else {
    do {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar5 = *(long **)(DAT_09183668 + 0xb8);
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_073323ec;
      uVar6 = uVar6 + 1;
      if (*(int *)(lVar4 + 0x18) <= (int)uVar6) goto LAB_0733225c;
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar5 = *(long **)(DAT_09183668 + 0xb8);
        lVar4 = *plVar5;
        if (lVar4 == 0) goto LAB_073323ec;
      }
      plVar5 = (long *)plVar5[6];
      lVar4 = FUN_057e0998(lVar4,uVar6,DAT_091abd10);
      if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_073323ec;
      iVar2 = (**(code **)(*plVar5 + 0x1a8))
                        (plVar5,*(undefined8 *)(lVar4 + 0x28),param_2,3,
                         *(undefined8 *)(*plVar5 + 0x1b0));
    } while (iVar2 == 0);
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09183668 + 0xb8);
    if (lVar4 == 0) goto LAB_073323ec;
    plVar5 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
    lVar4 = FUN_057e0998(lVar4,uVar6,DAT_091abd10);
    if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_073323ec;
    uVar3 = (**(code **)(*plVar5 + 0x1c8))
                      (plVar5,*(undefined8 *)(lVar4 + 0x28),param_1,3,
                       *(undefined8 *)(*plVar5 + 0x1d0));
    if ((uVar3 & 1) == 0) {
LAB_0733225c:
      if (uVar1 == 0) {
        return 0;
      }
      uVar7 = 0;
      iVar2 = uVar1 + 1;
      while( true ) {
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = **(long **)(DAT_09183668 + 0xb8);
        if (lVar4 == 0) break;
        plVar5 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
        lVar4 = FUN_057e0998(lVar4,iVar2 + -2,DAT_091abd10);
        if ((lVar4 == 0) || (plVar5 == (long *)0x0)) break;
        uVar3 = (**(code **)(*plVar5 + 0x1c8))
                          (plVar5,*(undefined8 *)(lVar4 + 0x28),param_1,3,
                           *(undefined8 *)(*plVar5 + 0x1d0));
        if ((uVar3 & 1) == 0) {
          return uVar7;
        }
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((**(long **)(DAT_09183668 + 0xb8) == 0) ||
           (lVar4 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),iVar2 + -2,DAT_091abd10),
           lVar4 == 0)) break;
        iVar2 = iVar2 + -1;
        uVar7 = *(undefined8 *)(lVar4 + 0x28);
        if (iVar2 < 2) {
          return uVar7;
        }
      }
      goto LAB_073323ec;
    }
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09183668 + 0xb8);
  }
  if ((lVar4 != 0) && (lVar4 = FUN_057e0998(lVar4,uVar6,DAT_091abd10), lVar4 != 0)) {
    return *(undefined8 *)(lVar4 + 0x28);
  }
LAB_073323ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

