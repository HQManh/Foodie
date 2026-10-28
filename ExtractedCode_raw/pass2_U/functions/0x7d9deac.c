// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.<RunOnThreadPool>d__85$$MoveNext
// address: 0x7d9deac
// body: available
// range: 0x7d9deac-0x7d9e5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9e5f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9e5f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9e5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9e5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_<RunOnThreadPool>d__85__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  int local_28;
  undefined1 local_24 [4];
  
  if ((DAT_09525e46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f60);
    FUN_03f5c2a4(&DAT_091c22c0);
    FUN_03f5c2a4(&DAT_091c2218);
    FUN_03f5c2a4(&DAT_09194d50);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e46 = 1;
  }
  iVar2 = *param_1;
  local_24[0] = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_28 = 0;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      *param_1 = -1;
      local_24[0] = (undefined1)param_1[0xe];
      *(undefined1 *)(param_1 + 0xe) = 0;
      if (*(int *)(DAT_09194d50 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
      if ((char)param_1[8] == '\0') {
        lVar5 = *(long *)(param_1 + 10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_40 = (**(code **)(lVar5 + 0x18))
                             (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_1 + 0xc),
                              *(undefined8 *)(lVar5 + 0x28));
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        thunk_FUN_03f5d7b8(local_40,0);
        local_50 = local_40;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar4 = local_50._0_8_;
        if ((long *)local_50._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_50._0_8_;
          uVar9 = local_50._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091868c0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07d9e58c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_07d9e58c:
          iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
          if (iVar2 == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_049b30ec(param_1 + 2,local_50,param_1,DAT_091c2218);
            return;
          }
        }
LAB_07d9dffc:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar4 = local_50._0_8_;
        if ((long *)local_50._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_50._0_8_;
          uVar9 = local_50._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091868c0) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_07d9e448;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_07d9e448:
          (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        }
LAB_07d9e458:
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
        cVar1 = DAT_095162d8;
        *param_1 = -2;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_091866a8);
          DAT_095162d8 = '\x01';
        }
        plVar8 = *(long **)(param_1 + 2);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091866a8) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_07d9e504;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_07d9e504:
        (*(code *)*puVar3)(plVar8,puVar3[1]);
        return;
      }
      piVar7 = param_1 + 0x10;
      piVar7[0] = 0;
      piVar7[1] = 0;
      thunk_FUN_03f5d7b8(piVar7,0);
      lVar5 = *(long *)(param_1 + 10);
      param_1[0x12] = 0;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = (**(code **)(lVar5 + 0x18))
                           (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_1 + 0xc),
                            *(undefined8 *)(lVar5 + 0x28));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar4 = local_50._0_8_;
      if ((long *)local_50._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_50._0_8_;
        uVar9 = local_50._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07d9e530;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_07d9e530:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x14,0);
          FUN_049b30ec(param_1 + 2,local_50,param_1,DAT_091c2218);
          return;
        }
      }
    }
    else {
      if (iVar2 != 1) goto LAB_07d9e070;
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar4 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_50._0_8_;
      uVar9 = local_50._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_07d9e3dc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_07d9e3dc:
      (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *param_1 = 2;
    uVar4 = DAT_091c22c0;
    local_28 = 8;
    param_1[0x18] = 8;
    FUN_049b40a0(param_1 + 2,&local_28,param_1,uVar4);
  }
  else {
    if (iVar2 == 2) {
      local_28 = param_1[0x18];
      param_1[0x18] = 0;
      piVar7 = param_1 + 0x10;
      plVar8 = *(long **)piVar7;
      *param_1 = -1;
      if (plVar8 != (long *)0x0) {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
            DAT_091842a0)) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_091f1f08);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(plVar8,uVar4);
        }
        lVar5 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar8,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar5,0);
      }
      piVar7[0] = 0;
      piVar7[1] = 0;
      thunk_FUN_03f5d7b8(piVar7,0);
      goto LAB_07d9e458;
    }
    if (iVar2 == 3) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_07d9dffc;
    }
LAB_07d9e070:
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_24[0] = 0;
    if (*(int *)(DAT_09194d50 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_049b0c1c(param_1 + 2,local_24,param_1,DAT_091c1f60);
  }
  return;
}

