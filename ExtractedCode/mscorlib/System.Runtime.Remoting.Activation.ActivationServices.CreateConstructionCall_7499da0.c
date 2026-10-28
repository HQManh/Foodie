// rea decompile_all
// name: System.Runtime.Remoting.Activation.ActivationServices$$CreateConstructionCall
// address: 0x7499da0
// body: available
// range: 0x7499da0-0x749a62f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749a5cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5f4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a604 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749a610 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0749a528) */
/* WARNING: Removing unreachable block (ram,0x0749a628) */
/* WARNING: Removing unreachable block (ram,0x0749a620) */

long System_Runtime_Remoting_Activation_ActivationServices__CreateConstructionCall
               (long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  
  if ((DAT_0952134c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181368);
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09182aa0);
    FUN_03f5c2a4(&DAT_09182b30);
    FUN_03f5c2a4(&DAT_09185878);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_0952134c = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09182aa0);
  System_Runtime_Remoting_Messaging_ConstructionCall___ctor(lVar2,param_1);
  if (param_1 == (long *)0x0) goto LAB_0749a5d0;
  uVar3 = System_Type__get_IsContextful(param_1,0);
  uVar4 = System_Runtime_Remoting_Activation_ActivationServices__get_ConstructionActivator();
  if ((uVar3 & 1) == 0) {
    uVar12 = thunk_FUN_03f9944c(DAT_09181368);
    System_Runtime_Remoting_Activation_AppDomainLevelActivator___ctor(uVar12,param_2,uVar4);
    if (lVar2 == 0) goto LAB_0749a5d0;
    *(undefined8 *)(lVar2 + 0x68) = uVar12;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x68),uVar12);
    bVar1 = 0;
    goto LAB_0749a59c;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09182b30);
  System_Object___ctor(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar4);
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar6,0);
  if (param_3 != 0) {
    if (plVar6 == (long *)0x0) goto LAB_0749a5d0;
    (**(code **)(*plVar6 + 0x318))(plVar6,param_3,*(undefined8 *)(*plVar6 + 800));
  }
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_String__op_Equality
                    (param_2,*(undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 0x18),0);
  uVar4 = System_Threading_Thread__get_CurrentContext(0);
  if ((uVar3 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_0749a5d0;
    plVar7 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar3 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_07499fbc;
          }
          uVar3 = uVar3 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_07499fbc:
      bVar1 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((bVar1 & 1) == 0) break;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar3 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0749a028;
          }
          uVar3 = uVar3 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_0749a028:
      lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      lVar15 = DAT_09185878;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = thunk_FUN_03f99350(lVar9,DAT_09185878);
      lVar13 = DAT_09185878;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar9,lVar15);
      }
      plVar11 = (long *)thunk_FUN_03f99350(lVar9,DAT_09185878);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar9,lVar13);
      }
      lVar15 = *plVar11;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar3 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0749a0b8;
          }
          uVar3 = uVar3 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar11,lVar13,1);
LAB_0749a0b8:
      uVar3 = (*(code *)*puVar8)(plVar11,uVar4,lVar2,puVar8[1]);
    } while ((uVar3 & 1) != 0);
    bVar1 = bVar1 ^ 1;
    plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
    if (plVar7 != (long *)0x0) {
      lVar15 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar3 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_09185a58) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0749a194;
          }
          uVar3 = uVar3 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0749a194:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  lVar15 = (**(code **)(*param_1 + 0x208))(param_1,1,*(undefined8 *)(*param_1 + 0x210));
  if (lVar15 == 0) goto LAB_0749a5d0;
  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
    uVar3 = 0;
    uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    do {
      if (uVar16 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar10 = *(long *)(lVar15 + uVar3 * 8 + 0x20);
      lVar13 = thunk_FUN_03f99350(lVar10,DAT_09185878);
      lVar9 = DAT_09185878;
      if (lVar13 != 0) {
        if ((bVar1 & 1) == 0) {
          bVar1 = 0;
        }
        else {
          if (lVar10 == 0) goto LAB_0749a5d0;
          lVar14 = thunk_FUN_03f99350(lVar10,DAT_09185878);
          lVar13 = DAT_09185878;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar10,lVar9);
          }
          plVar7 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185878);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar10,lVar13);
          }
          lVar9 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0749a28c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar7,lVar13,1);
LAB_0749a28c:
          bVar1 = (*(code *)*puVar8)(plVar7,uVar4,lVar2,puVar8[1]);
        }
        if (plVar6 == (long *)0x0) goto LAB_0749a5d0;
        (**(code **)(*plVar6 + 0x308))(plVar6,lVar10,*(undefined8 *)(*plVar6 + 0x310));
      }
      uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  if ((bVar1 & 1) == 0) {
    if ((plVar6 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar6 + 0x418))(plVar6,*(undefined8 *)(*plVar6 + 0x420)), lVar2 != 0)
       ) {
      *(undefined8 *)(lVar2 + 0x70) = uVar4;
      thunk_FUN_03f5d7b8();
      plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar3 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == DAT_09185b10) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0749a38c;
            }
            uVar3 = uVar3 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0749a38c:
        uVar3 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        if ((uVar3 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
          if (plVar6 == (long *)0x0) goto LAB_0749a52c;
          lVar15 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar3 == 0) goto LAB_0749a4f4;
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_0749a4dc;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar3 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == DAT_09185b10) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_0749a3f4;
            }
            uVar3 = uVar3 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_0749a3f4:
        lVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        lVar15 = DAT_09185878;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = thunk_FUN_03f99350(lVar9,DAT_09185878);
        lVar13 = DAT_09185878;
        if ((lVar10 == 0) ||
           (plVar7 = (long *)thunk_FUN_03f99350(lVar9,DAT_09185878), lVar15 = lVar13,
           plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar9,lVar15);
        }
        lVar15 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar3 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar13) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0749a480;
            }
            uVar3 = uVar3 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar7,lVar13,0);
LAB_0749a480:
        (*(code *)*puVar8)(plVar7,lVar2,puVar8[1]);
      } while( true );
    }
    goto LAB_0749a5d0;
  }
  goto LAB_0749a52c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar17 = piVar17 + 4;
    if (uVar3 == 0) break;
LAB_0749a4dc:
    if (*(long *)(piVar17 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0749a510;
    }
  }
LAB_0749a4f4:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0749a510:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_0749a52c:
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_String__op_Inequality
                    (param_2,*(undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 0x18),0);
  lVar15 = lVar5;
  if ((uVar3 & 1) != 0) {
    lVar15 = thunk_FUN_03f9944c(DAT_09181368);
    System_Runtime_Remoting_Activation_AppDomainLevelActivator___ctor(lVar15,param_2,lVar5);
  }
  if (lVar2 == 0) {
LAB_0749a5d0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar2 + 0x68) = lVar15;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x68),lVar15);
  bVar1 = bVar1 & 1;
LAB_0749a59c:
  *(byte *)(lVar2 + 0x90) = bVar1;
  return lVar2;
}

