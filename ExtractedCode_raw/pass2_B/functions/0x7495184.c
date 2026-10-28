// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$CreateClientChannelSinkChain
// address: 0x7495184
// body: available
// range: 0x7495184-0x74957eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749524c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749543c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74957dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074957e0) */
/* WARNING: Removing unreachable block (ram,0x074957d4) */
/* WARNING: Removing unreachable block (ram,0x074957cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Runtime_Remoting_Channels_ChannelServices__CreateClientChannelSinkChain
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_0952132c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09185778);
    FUN_03f5c2a4(&DAT_09185758);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189ec0);
    DAT_0952132c = 1;
  }
  uVar1 = DAT_09180318;
  local_68 = 0;
  local_6c[0] = '\0';
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_03f99350(param_2,DAT_09180318);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2,uVar1);
    }
  }
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)**(long **)(DAT_09182498 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_68 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
  local_6c[0] = '\0';
  System_Threading_Monitor__Enter(local_68,local_6c,0);
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)**(long **)(DAT_09182498 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
  do {
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07495360;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07495360:
      uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        lVar8 = 0;
        uVar11 = 5;
        goto LAB_07495458;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_074953c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_074953c8:
      lVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar1 = DAT_09185758;
      if (lVar8 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_03f99350(lVar8,DAT_09185758);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar8,uVar1);
        }
      }
      lVar8 = thunk_FUN_03f99350(lVar5,DAT_09185778);
    } while (lVar8 == 0);
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = System_Runtime_Remoting_Channels_ChannelServices__CreateClientChannelSinkChain
                      (lVar8,param_1,lVar2,param_3);
  } while (lVar8 == 0);
  uVar11 = 4;
LAB_07495458:
  plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_074954cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_074954cc:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if ((uVar11 == 5) || (uVar11 == 0)) {
    if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_Remoting_RemotingConfiguration__LoadDefaultDelayedChannels(0);
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = *(long **)(*(long *)(DAT_09182498 + 0xb8) + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074955a0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_074955a0:
      uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        uVar11 = 8;
        goto LAB_074956c4;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_07495608;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07495608:
      lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar1 = DAT_09185778;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = thunk_FUN_03f99350(lVar5,DAT_09185778);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,uVar1);
        }
      }
      if (*(int *)(DAT_09182498 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = System_Runtime_Remoting_Channels_ChannelServices__CreateClientChannelSinkChain
                        (lVar6,param_1,lVar2,param_3);
    } while (lVar5 == 0);
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = *(long **)(*(long *)(DAT_09182498 + 0xb8) + 8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar7 + 0x3c8))(plVar7,lVar6,*(undefined8 *)(*plVar7 + 0x3d0));
    System_Runtime_Remoting_Channels_ChannelServices__RegisterChannel(lVar6);
    uVar11 = 4;
    lVar8 = lVar5;
LAB_074956c4:
    plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0749572c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0749572c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  if (local_6c[0] != '\0') {
    System_Threading_Monitor__Exit(local_68,0);
  }
  if ((uVar11 | 8) == 8) {
    *param_3 = 0;
    thunk_FUN_03f5d7b8(param_3,0);
    lVar8 = 0;
  }
  return lVar8;
}

