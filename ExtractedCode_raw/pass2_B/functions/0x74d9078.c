// rea decompile_all
// name: System.Resources.ResourceManager$$InternalGetResourceSet
// address: 0x74d9078
// body: available
// range: 0x74d9078-0x74d9407 inclusive
// range: 0x74d940c-0x74d940f inclusive
// range: 0x74d9450-0x74d9717 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d9404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d940c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d962c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96e8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d96fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d96b0) */
/* WARNING: Removing unreachable block (ram,0x074d96e4) */
/* WARNING: Removing unreachable block (ram,0x074d9710) */
/* WARNING: Removing unreachable block (ram,0x074d96f8) */
/* WARNING: Removing unreachable block (ram,0x074d970c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Resources_ResourceManager__InternalGetResourceSet
                 (long param_1,long *param_2,uint param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  char local_74 [4];
  long local_70;
  long *local_68;
  
  if ((DAT_0952156d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fdb0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917ab30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186498);
    FUN_03f5c2a4(&DAT_0918a108);
    FUN_03f5c2a4(&DAT_0918a138);
    DAT_0952156d = 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  local_68 = (long *)0x0;
  local_74[0] = '\0';
  local_70 = lVar10;
  System_Threading_Monitor__Enter(lVar10,local_74,0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar2 = FUN_06fd9fbc(lVar10,uVar1,&local_68,DAT_0919fdb0);
  uVar8 = 3;
  plVar12 = local_68;
  if ((uVar2 & 1) == 0) {
    uVar8 = 4;
    plVar12 = (long *)0x0;
  }
  if (local_74[0] != '\0') {
    System_Threading_Monitor__Exit(local_70,0);
  }
  if ((uVar8 | 4) == 4) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    lVar3 = thunk_FUN_03f9944c(DAT_0918a108);
    System_Resources_ResourceFallbackManager___ctor(lVar3,param_2,uVar1,param_4 & 1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)System_Resources_ResourceFallbackManager__GetEnumerator(lVar3);
    plVar11 = (long *)0x0;
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_074d9260;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_074d9260:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar2 & 1) == 0) {
        iVar13 = 9;
        goto LAB_074d9460;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917ab30) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_074d92cc;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ab30,0);
LAB_074d92cc:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      local_74[0] = '\0';
      local_70 = lVar10;
      System_Threading_Monitor__Enter(lVar10,local_74,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar1,uVar1);
      }
      uVar2 = FUN_06fd9fbc(lVar10,uVar1,&local_68,DAT_0919fdb0);
      plVar12 = (long *)0x0;
      if ((uVar2 & 1) == 0) {
        iVar13 = 10;
      }
      else {
        iVar13 = 9;
        if (plVar6 != param_2) {
          plVar11 = plVar6;
        }
      }
      if (local_74[0] != '\0') {
        System_Threading_Monitor__Exit(local_70,0);
      }
      if ((iVar13 != 10) && (iVar13 != 0)) goto LAB_074d9460;
      plVar12 = *(long **)(param_1 + 0x80);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar12;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186498) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_074d93d8;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186498,0);
LAB_074d93d8:
      local_68 = (long *)(*(code *)*puVar5)(plVar12,plVar6,lVar10,param_4 & 1,param_3 & 1,param_5,
                                            puVar5[1]);
    } while (local_68 == (long *)0x0);
    iVar13 = 9;
    plVar11 = plVar6;
LAB_074d9460:
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_074d94c4;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_074d94c4:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if ((((iVar13 == 9) || (iVar13 == 0)) && (plVar12 = local_68, local_68 != (long *)0x0)) &&
       (plVar11 != (long *)0x0)) {
      plVar4 = (long *)System_Resources_ResourceFallbackManager__GetEnumerator(lVar3);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_074d9568;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_074d9568:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar2 & 1) == 0) break;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917ab30) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_074d95d4;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ab30,0);
LAB_074d95d4:
        plVar12 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Resources_ResourceManager__AddResourceSet(lVar10,uVar1,&local_68);
      } while (plVar12 != plVar11);
      plVar12 = local_68;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185a58) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_074d9698;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_074d9698:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar12 = local_68;
      }
    }
  }
  return plVar12;
}

