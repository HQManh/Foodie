// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$RegisterChannel
// address: 0x7495ba8
// body: available
// range: 0x7495ba8-0x749630f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749618c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749619c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74961a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749622c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496274 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496280 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749628c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496308 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0749627c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Channels_ChannelServices__RegisterChannel(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_0952132f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09185770);
    FUN_03f5c2a4(&DAT_09185758);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09186588);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0952132f = 1;
  }
  local_68 = 0;
  local_6c[0] = '\0';
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09218c70);
    System_ArgumentNullException___ctor(uVar7,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c49f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  if ((param_2 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_03f99350(param_1,DAT_09186588);
    if (plVar4 == (long *)0x0) {
      FUN_039b1d98(param_1);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09185758);
      uVar7 = FUN_039afee4(0,uVar7,param_1);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091fe7f0);
      uVar7 = System_String__Format(uVar8,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_09189ec8);
      uVar8 = thunk_FUN_03f9944c();
      System_Runtime_Remoting_RemotingException___ctor(uVar8,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c49f8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar7);
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09186588) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_07495ca0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09186588,0);
LAB_07495ca0:
    (*(code *)*puVar5)(plVar4,1,puVar5[1]);
  }
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = (long *)**(long **)(DAT_09182498 + 0xb8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_68 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
  local_6c[0] = '\0';
  System_Threading_Monitor__Enter(local_68,local_6c,0);
  iVar15 = 0;
  iVar14 = -1;
  while( true ) {
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)**(long **)(DAT_09182498 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    if (iVar2 <= iVar15) break;
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)**(long **)(DAT_09182498 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = (**(code **)(*plVar4 + 0x2e8))(plVar4,iVar15,*(undefined8 *)(*plVar4 + 0x2f0));
    lVar11 = DAT_09185758;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)thunk_FUN_03f99350(lVar6,DAT_09185758);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar6,lVar11);
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185758) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_07495e0c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185758,0);
LAB_07495e0c:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    lVar11 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185758) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_07495e68;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185758,0);
LAB_07495e68:
    uVar8 = (*(code *)*puVar5)(param_1,puVar5[1]);
    uVar12 = System_String__op_Equality(uVar7,uVar8,0);
    if ((uVar12 & 1) != 0) {
      lVar11 = *param_1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185758) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_07495ed4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185758,0);
LAB_07495ed4:
      uVar7 = (*(code *)*puVar5)(param_1,puVar5[1]);
      uVar12 = System_String__op_Inequality(uVar7,DAT_091f5700,0);
      if ((uVar12 & 1) != 0) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_09185758);
        uVar7 = FUN_039afee4(0,uVar7,plVar4);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091fe7d0);
        uVar10 = thunk_FUN_03fc39d4(&DAT_091f60c0);
        uVar7 = System_String__Concat(uVar8,uVar7,uVar10,0);
        thunk_FUN_03fc39d4(&DAT_09189ec8);
        uVar8 = thunk_FUN_03f9944c();
        System_Runtime_Remoting_RemotingException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091c49f8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185758) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_07495f40;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185758,1);
LAB_07495f40:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    lVar11 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185758) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_07495fa0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185758,1);
LAB_07495fa0:
    iVar3 = (*(code *)*puVar5)(param_1,puVar5[1]);
    iVar1 = iVar15;
    if (iVar14 != -1 || iVar3 <= iVar2) {
      iVar1 = iVar14;
    }
    iVar15 = iVar15 + 1;
    iVar14 = iVar1;
  }
  if (iVar14 == -1) {
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)**(long **)(DAT_09182498 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar4 + 0x308))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x310));
  }
  else {
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)**(long **)(DAT_09182498 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar4 + 0x3a8))(plVar4,iVar14,param_1,*(undefined8 *)(*plVar4 + 0x3b0));
  }
  plVar4 = (long *)thunk_FUN_03f99350(param_1,DAT_09185770);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar16 = *(long **)(*(long *)(DAT_09182498 + 0xb8) + 0x20);
    plVar9 = (long *)System_Object__GetType(param_1,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar11 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185f80) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_074960d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185f80,3);
LAB_074960d4:
    uVar12 = (*(code *)*puVar5)(plVar16,uVar7,puVar5[1]);
    if ((uVar12 & 1) != 0) {
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185770) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_07496138;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185770,1);
LAB_07496138:
      (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    }
  }
  if (local_6c[0] != '\0') {
    System_Threading_Monitor__Exit(local_68,0);
  }
  return;
}

