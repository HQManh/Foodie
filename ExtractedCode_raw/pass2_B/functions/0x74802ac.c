// rea decompile_all
// name: System.Runtime.Remoting.RemotingConfiguration$$RegisterChannels
// address: 0x74802ac
// body: available
// range: 0x74802ac-0x7480733 inclusive
// range: 0x7480738-0x7480973 inclusive
// range: 0x7480978-0x7480a3f inclusive
// range: 0x7480a44-0x7480a4b inclusive
// range: 0x7480a50-0x7480a57 inclusive
// range: 0x7480a5c-0x7480a63 inclusive
// range: 0x7480a68-0x7480a6b inclusive
// range: 0x7480a70-0x7480a73 inclusive
// range: 0x7480a78-0x7480a7b inclusive
// range: 0x7480a80-0x7480a83 inclusive
// range: 0x7480a88-0x7480af7 inclusive
// range: 0x7480afc-0x7480aff inclusive
// range: 0x7480b04-0x7480b73 inclusive
// range: 0x7480b78-0x7480b7b inclusive
// range: 0x7480c40-0x7480cf3 inclusive
// range: 0x7480dac-0x7480e4f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7480730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a48 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a60 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480af4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7480afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074807c4) */
/* WARNING: Removing unreachable block (ram,0x07480c5c) */
/* WARNING: Removing unreachable block (ram,0x07480a04) */
/* WARNING: Removing unreachable block (ram,0x07480c68) */
/* WARNING: Removing unreachable block (ram,0x07480e4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_RemotingConfiguration__RegisterChannels(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0952126c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182488);
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091897c0);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_0952126c = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
joined_r0x07480374:
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar9 = *plVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_09185b10) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_074803e4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_074803e4:
  uVar10 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  if ((uVar10 & 1) != 0) {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0748044c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,1);
LAB_0748044c:
    plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar3 != (long *)0x0) goto code_r0x07480460;
    if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_074804bc;
  }
  plVar1 = (long *)thunk_FUN_03f99350(plVar1,DAT_09185a58);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar9 = *plVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 == 0) goto LAB_07480dfc;
  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
  goto LAB_07480de4;
code_r0x07480460:
  if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09182488 + 0x130)) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09182488 + 0x130) * 8 + -8) !=
      DAT_09182488)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar3);
  }
  if (((param_2 & 1) == 0) ||
     (uVar10 = System_String__op_Inequality(plVar3[5],DAT_09224438,0), (uVar10 & 1) == 0)) {
LAB_074804bc:
    if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09189ec0 + 0xb8) + 0x19) == '\0') {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = System_String__op_Equality(plVar3[5],DAT_09224438,0);
      if ((uVar10 & 1) != 0) goto joined_r0x07480374;
    }
    if (plVar3[2] != 0) {
      if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x40);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                 (plVar4,plVar3[2],*(undefined8 *)(*plVar4 + 0x310));
      if (plVar4 == (long *)0x0) {
        lVar9 = plVar3[2];
        uVar7 = thunk_FUN_03fc39d4(&DAT_091fe7e8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091f7850);
        uVar7 = System_String__Concat(uVar7,lVar9,uVar8,0);
        thunk_FUN_03fc39d4(&DAT_09189ec8);
        uVar8 = thunk_FUN_03f9944c();
        System_SystemException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d7400);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09182488 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09182488 + 0x130) * 8 + -8) !=
          DAT_09182488)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      System_Runtime_Remoting_ChannelData__CopyFrom(plVar3,plVar4);
    }
    plVar4 = (long *)System_Runtime_Remoting_ChannelData__get_ServerProviders(plVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
joined_r0x074805b4:
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07480604;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07480604:
    uVar10 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar10 & 1) != 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0748066c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_0748066c:
      plVar5 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
          DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      if (plVar5[2] != 0) {
        if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x50);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,plVar5[2],*(undefined8 *)(*plVar6 + 0x310));
        if (plVar6 == (long *)0x0) {
          lVar9 = plVar5[2];
          uVar7 = thunk_FUN_03fc39d4(&DAT_0920b0e8);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091f7850);
          uVar7 = System_String__Concat(uVar7,lVar9,uVar8,0);
          thunk_FUN_03fc39d4(&DAT_09189ec8);
          uVar8 = thunk_FUN_03f9944c();
          System_SystemException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d7400);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
            DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6);
        }
        System_Runtime_Remoting_ProviderData__CopyFrom(plVar5,plVar6);
      }
      goto joined_r0x074805b4;
    }
    plVar4 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185a58) {
            puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_074807ac;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_074807ac:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    plVar4 = (long *)System_Runtime_Remoting_ChannelData__get_ClientProviders(plVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
joined_r0x074807f4:
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07480844;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07480844:
    uVar10 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar10 & 1) != 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_074808ac;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_074808ac:
      plVar5 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
          DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      if (plVar5[2] != 0) {
        if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x48);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,plVar5[2],*(undefined8 *)(*plVar6 + 0x310));
        if (plVar6 == (long *)0x0) {
          lVar9 = plVar5[2];
          uVar7 = thunk_FUN_03fc39d4(&DAT_0920b0e8);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091f7850);
          uVar7 = System_String__Concat(uVar7,lVar9,uVar8,0);
          thunk_FUN_03fc39d4(&DAT_09189ec8);
          uVar8 = thunk_FUN_03f9944c();
          System_SystemException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d7400);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
            DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6);
        }
        System_Runtime_Remoting_ProviderData__CopyFrom(plVar5,plVar6);
      }
      goto joined_r0x074807f4;
    }
    plVar4 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185a58) {
            puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_074809ec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_074809ec:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_Remoting_Channels_ChannelServices__RegisterChannelConfig(plVar3,0);
  }
  goto joined_r0x07480374;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07480de4:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07480e18;
    }
  }
LAB_07480dfc:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_07480e18:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}

