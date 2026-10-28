// rea decompile_all
// name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection$$NotifyMessage
// address: 0x7491f20
// body: available
// range: 0x7491f20-0x749245f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7492158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492434 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492438 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749243c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749244c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492454 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749245c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07492450) */
/* WARNING: Removing unreachable block (ram,0x07492458) */

void System_Runtime_Remoting_Contexts_DynamicPropertyCollection__NotifyMessage
               (long param_1,ulong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09521325 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190420);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185ac8);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09521325 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0749227c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0749227c:
        uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_074923ec;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_074923d4;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_074922e4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_074922e4:
        plVar2 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09190420 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09190420 + 0x130) * 8 + -8) !=
            DAT_09190420)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        plVar2 = (long *)plVar2[3];
        if (plVar2 != (long *)0x0) {
          lVar3 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09185ac8) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_07492374;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185ac8,0);
LAB_07492374:
          (*(code *)*puVar1)(plVar2,param_3,param_4 & 1,param_5 & 1,puVar1[1]);
        }
      } while( true );
    }
  }
  else if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0749203c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0749203c:
      uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_074921b4;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0749219c;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_074920a4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_074920a4:
      plVar2 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09190420 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09190420 + 0x130) * 8 + -8) !=
          DAT_09190420)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      plVar2 = (long *)plVar2[3];
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185ac8) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_07492138;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185ac8,1);
LAB_07492138:
        (*(code *)*puVar1)(plVar2,param_3,param_4 & 1,param_5 & 1,puVar1[1]);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_0749219c:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_074921d0;
    }
  }
LAB_074921b4:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_074921d0:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_074923d4:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_07492408;
    }
  }
LAB_074923ec:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_07492408:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  return;
}

