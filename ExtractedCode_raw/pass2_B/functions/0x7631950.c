// rea decompile_all
// name: System.Threading.Tasks.Task$$FinishContinuations
// address: 0x7631950
// body: available
// range: 0x7631950-0x7631f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7631f00 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__FinishContinuations(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_90;
  undefined1 *local_88;
  long **local_80;
  undefined1 local_74 [4];
  long *local_70;
  long *local_68;
  
  if ((DAT_095221fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182858);
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_091867c0);
    FUN_03f5c2a4(&DAT_0917d9c8);
    FUN_03f5c2a4(&DAT_091b4608);
    FUN_03f5c2a4(&DAT_091b4610);
    FUN_03f5c2a4(&DAT_091b4618);
    FUN_03f5c2a4(&DAT_0918b1a8);
    FUN_03f5c2a4(&DAT_0918b8e0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221fb = 1;
  }
  local_70 = (long *)0x0;
  local_74[0] = 0;
  thunk_FUN_03f6a5cc();
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_68 = (long *)0x0;
  local_90 = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 8);
  FUN_03f9581c(param_1 + 0x40,&local_90,&local_68);
  plVar2 = local_68;
  if (local_68 == (long *)0x0) {
    return;
  }
  if (*(int *)(DAT_09183708 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = *(uint *)(param_1 + 0x38);
  thunk_FUN_03f6a5cc();
  if ((uVar10 >> 0x1b & 1) == 0) {
    uVar10 = *(uint *)(param_1 + 0x38);
    thunk_FUN_03f6a5cc();
    uVar10 = (uVar10 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar10 = 0;
  }
  if (*plVar2 == DAT_09180e78) {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = FUN_03f5c2c0(DAT_0918b8c8);
    System_Threading_Tasks_AwaitTaskContinuation__RunOrScheduleAction(plVar2,uVar10,uVar5);
  }
  else {
    plVar3 = (long *)thunk_FUN_03f99350(plVar2,DAT_091867c0);
    if (plVar3 == (long *)0x0) {
      lVar6 = *plVar2;
      if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_0918b8e0 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918b8e0 + 0x130) * 8 + -8) !=
          DAT_0918b8e0)) {
        if (lVar6 == DAT_0917d9c8) {
          local_88 = local_74;
          local_90 = 0;
          local_80 = &local_70;
          local_70 = plVar2;
          local_74[0] = 0;
          System_Threading_Monitor__Enter(plVar2,local_74);
          FUN_03eba2d8(&local_90);
          iVar1 = (int)plVar2[3];
          if (0 < iVar1) {
            iVar11 = 0;
            do {
              plVar3 = (long *)FUN_05a1c584(plVar2,iVar11,DAT_091b4610);
              if (plVar3 != (long *)0x0) {
                if (((*(byte *)(DAT_0918b1a8 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918b1a8 + 0x130) * 8
                              + -8) == DAT_0918b1a8)) &&
                   ((*(byte *)((long)plVar3 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_05a1c5f4(plVar2,iVar11,0,DAT_091b4618);
                  (**(code **)(*plVar3 + 0x178))
                            (plVar3,param_1,uVar10,*(undefined8 *)(*plVar3 + 0x180));
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar1 != iVar11);
            if (0 < iVar1) {
              iVar11 = 0;
              do {
                plVar3 = (long *)FUN_05a1c584(plVar2,iVar11,DAT_091b4610);
                if (plVar3 != (long *)0x0) {
                  FUN_05a1c5f4(plVar2,iVar11,0,DAT_091b4618);
                  lVar6 = DAT_091867c0;
                  lVar7 = *plVar3;
                  if (lVar7 == DAT_09180e78) {
                    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar5 = FUN_03f5c2c0(DAT_0918b8c8);
                    System_Threading_Tasks_AwaitTaskContinuation__RunOrScheduleAction
                              (plVar3,uVar10,uVar5);
                  }
                  else if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_0918b8e0 + 0x130)) ||
                          (*(long *)(*(long *)(lVar7 + 200) +
                                     (ulong)*(byte *)(DAT_0918b8e0 + 0x130) * 8 + -8) !=
                           DAT_0918b8e0)) {
                    lVar7 = thunk_FUN_03f99350(plVar3,DAT_091867c0);
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(plVar3,lVar6);
                    }
                    if ((uVar10 == 0) &&
                       (uVar8 = FUN_039afee4(1,DAT_091867c0,lVar7), (uVar8 & 1) != 0)) {
                      uVar5 = thunk_FUN_03f9944c(DAT_09182858);
                      System_Threading_Tasks_CompletionActionInvoker___ctor(uVar5,lVar7,param_1);
                      System_Threading_ThreadPool__UnsafeQueueCustomWorkItem(uVar5,0);
                    }
                    else {
                      FUN_039aff78(0,DAT_091867c0,lVar7,param_1);
                    }
                  }
                  else {
                    (**(code **)(lVar7 + 0x178))
                              (plVar3,param_1,uVar10,*(undefined8 *)(lVar7 + 0x180));
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar1 != iVar11);
            }
          }
        }
        FUN_0763ca48(param_1,0);
        return;
      }
      (**(code **)(lVar6 + 0x178))(plVar2,param_1,uVar10,*(undefined8 *)(lVar6 + 0x180));
    }
    else {
      if (uVar10 == 0) {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091867c0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07631df4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091867c0,1);
LAB_07631df4:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) != 0) {
          uVar5 = thunk_FUN_03f9944c(DAT_09182858);
          System_Threading_Tasks_CompletionActionInvoker___ctor(uVar5,plVar3,param_1);
          System_Threading_ThreadPool__UnsafeQueueCustomWorkItem(uVar5,0);
          goto LAB_07631e90;
        }
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091867c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07631e80;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091867c0,0);
LAB_07631e80:
      (*(code *)*puVar4)(plVar3,param_1,puVar4[1]);
    }
  }
LAB_07631e90:
  if (DAT_0952226e == '\0') {
    FUN_03f5c2a4(&DAT_09183708);
    DAT_0952226e = '\x01';
  }
  if (*(int *)(DAT_09183708 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return;
}

