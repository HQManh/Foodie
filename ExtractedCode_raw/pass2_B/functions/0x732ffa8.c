// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$LogAllCommandsWithName
// address: 0x732ffa8
// body: available
// range: 0x732ffa8-0x73303df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7330364 to 0x732fde0 IngameDebugConsole.DebugLogManager$$AdjustLatestPendingLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73303c0 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73303dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__LogAllCommandsWithName(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_0952060e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091abcf0);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091abd10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f5888);
    FUN_03f5c2a4(&DAT_092077d0);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_092010b0);
    DAT_0952060e = 1;
  }
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar6) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar6,0);
      lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
    }
    IngameDebugConsole_DebugLogConsole__FindCommands(param_1,0,lVar5);
    lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
        }
        IngameDebugConsole_DebugLogConsole__FindCommands(param_1,1,lVar5);
      }
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          uVar3 = System_String__Concat(DAT_092010b0,param_1,DAT_091f7320,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar3,0);
          return;
        }
        iVar6 = 0;
        iVar7 = 0x19;
        while( true ) {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_073303dc;
          if (*(int *)(lVar5 + 0x18) <= iVar6) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
            if (lVar5 == 0) goto LAB_073303dc;
          }
          lVar5 = FUN_057e0998(lVar5,iVar6,DAT_091abd10);
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) goto LAB_073303dc;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + *(int *)(*(long *)(lVar5 + 0x30) + 0x10) + 7;
        }
        plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
        System_Text_StringBuilder___ctor(plVar1,iVar7,0);
        if (plVar1 != (long *)0x0) {
          System_Text_StringBuilder__Append(plVar1,DAT_092077d0,0);
          iVar6 = 0;
          goto LAB_07330204;
        }
      }
    }
  }
LAB_073303dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07330204:
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_073303dc;
  if (*(int *)(lVar5 + 0x18) <= iVar6) {
    uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar3,0);
    if (DAT_0952068d == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068d = '\x01';
    }
    uVar3 = **(undefined8 **)(DAT_09183690 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (DAT_0952068d == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068d = '\x01';
    }
    if (**(long **)(DAT_09183690 + 0xb8) != 0) {
      IngameDebugConsole_DebugLogManager__AdjustLatestPendingLog
                (**(long **)(DAT_09183690 + 0xb8),1,1);
      return;
    }
    goto LAB_073303dc;
  }
  lVar5 = System_Text_StringBuilder__Append(plVar1,DAT_091f5888,0);
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183668);
  }
  lVar2 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  if (((lVar2 == 0) || (lVar2 = FUN_057e0998(lVar2,iVar6,DAT_091abd10), lVar2 == 0)) || (lVar5 == 0)
     ) goto LAB_073303dc;
  System_Text_StringBuilder__Append(lVar5,*(undefined8 *)(lVar2 + 0x30),0);
  iVar6 = iVar6 + 1;
  goto LAB_07330204;
}

