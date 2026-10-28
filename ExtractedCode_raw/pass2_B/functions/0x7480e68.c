// rea decompile_all
// name: System.Runtime.Remoting.ChannelData$$CopyFrom
// address: 0x7480e68
// body: available
// range: 0x7480e68-0x74815e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74810c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481590 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748159c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74815c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074815d8) */
/* WARNING: Removing unreachable block (ram,0x07481554) */
/* WARNING: Removing unreachable block (ram,0x07481558) */
/* WARNING: Removing unreachable block (ram,0x074815e0) */
/* WARNING: Removing unreachable block (ram,0x07481158) */

void System_Runtime_Remoting_ChannelData__CopyFrom(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09521286 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091897c0);
    DAT_09521286 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_2 == 0) goto LAB_074815d4;
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) goto LAB_074815d4;
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) goto LAB_074815d4;
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (param_2 == 0) goto LAB_074815d4;
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
    thunk_FUN_03f5d7b8();
  }
  else if (param_2 == 0) {
LAB_074815d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = *(long **)(param_2 + 0x40);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07480fe0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07480fe0:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
        if (plVar3 == (long *)0x0) break;
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_07481124;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0748110c;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_07481048;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07481048:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar4 = (undefined8 *)thunk_FUN_03f99594();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_CustomProperties(param_1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = (**(code **)(*plVar5 + 0x2e8))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x2f0));
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_CustomProperties(param_1);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar5 + 0x318))(plVar5,uVar1,uVar2,*(undefined8 *)(*plVar5 + 800));
      }
    } while( true );
  }
  goto LAB_0748115c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0748110c:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07481140;
    }
  }
LAB_07481124:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07481140:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_0748115c:
  if ((*(long *)(param_1 + 0x30) == 0) &&
     (plVar3 = *(long **)(param_2 + 0x30), plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07481378;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07481378:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
        if (plVar3 == (long *)0x0) break;
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_074814bc;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_074814a4;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_074813e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_074813e0:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
            DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
      }
      lVar6 = thunk_FUN_03f9944c(DAT_091897c0);
      System_Runtime_Remoting_ProviderData___ctor();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_Remoting_ProviderData__CopyFrom(lVar6,plVar5);
      plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ServerProviders(param_1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar5 + 0x308))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x310));
    } while( true );
  }
LAB_07481164:
  if ((*(long *)(param_1 + 0x38) != 0) ||
     (plVar3 = *(long **)(param_2 + 0x38), plVar3 == (long *)0x0)) {
    return;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_074811fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_074811fc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_07481520;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_07481508;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_07481264;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07481264:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
          DAT_091897c0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
    }
    lVar6 = thunk_FUN_03f9944c(DAT_091897c0);
    System_Runtime_Remoting_ProviderData___ctor();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_Remoting_ProviderData__CopyFrom(lVar6,plVar5);
    plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ClientProviders(param_1);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar5 + 0x308))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x310));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_074814a4:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0748153c;
    }
  }
LAB_074814bc:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0748153c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  goto LAB_07481164;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_07481508:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07481568;
    }
  }
LAB_07481520:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07481568:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

