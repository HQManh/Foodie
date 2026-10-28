// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Dispatch
// address: 0x4456790
// body: available
// range: 0x4456790-0x4456ca7 inclusive
// range: 0x4456d44-0x4456d47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4456bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456bec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456c00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456ca4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456d44 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__Dispatch
               (long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5,
               long *param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  int local_138 [4];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09518070 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_091c98d0);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091a27e0);
    FUN_03f5c2a4(&DAT_091a27e8);
    FUN_03f5c2a4(&DAT_091a27f0);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_0917b448);
    FUN_03f5c2a4(&DAT_091ac0a0);
    FUN_03f5c2a4(&DAT_091ac0b8);
    FUN_03f5c2a4(&DAT_091e7648);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518070 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_70 = 0;
  local_d8 = 0;
  iStack_a8 = 0;
  uStack_a4 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x18) == 0) && ((param_3 & 1) == 0)) {
LAB_04456b84:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_04456d44;
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar5 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar10 = puVar8[0xaa];
      if (lVar10 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar11 = *puVar8;
        lVar10 = thunk_FUN_03f9944c(DAT_09178748);
        FUN_05323c00(lVar10,uVar11,DAT_091e7648,0);
        lVar7 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar7 + 0x550) = lVar10;
        thunk_FUN_03f5d7b8(lVar7 + 0x550,lVar10);
      }
      uVar5 = FUN_04af73b4(uVar5,lVar10,DAT_091ca398);
      uVar5 = FUN_04adcce4(uVar5,0,DAT_091c98d0);
      lVar10 = System_Linq_Enumerable__Max(uVar5,0);
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar6 = CookingGraph_Execution_CookingExecution__TryDispatch
                          (*(long *)(param_1 + 0x178),param_2,param_3 & 1,&local_80,param_4,param_5,
                           0);
        uVar5 = local_80;
        if ((uVar6 & 1) == 0) {
          uVar11 = thunk_FUN_03fc39d4(&DAT_0920a2e0);
          uVar5 = System_String__Concat(uVar11,uVar5,0);
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar11 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar11,uVar5,0);
          uVar5 = thunk_FUN_03fc39d4(&DAT_091c6838);
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,uVar5);
          }
          goto LAB_04456d44;
        }
        CookingGraph_CookingLevelSimulation__TagMoment(param_1,lVar10 + 1,param_3 & 1);
        if (param_6 != (long *)0x0) {
          FUN_057461d8(&local_120,param_2,DAT_091ac0a0);
          memcpy(&local_d0,&local_120,0x48);
          local_120 = 0;
          puStack_118 = &local_d0;
          while (uVar6 = FUN_0719a0b8(&local_d0,DAT_091a27e8), uVar11 = local_90, uVar5 = local_98,
                iVar2 = iStack_a8, (uVar6 & 1) != 0) {
            local_78 = CONCAT44(uStack_a0,uStack_a4);
            lVar10 = *param_6;
            uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
            local_70 = local_9c;
            if (uVar6 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b448) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_04456a8c;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b448,1);
LAB_04456a8c:
            uVar6 = (*(code *)*puVar8)(param_6,uVar11,&local_d8,puVar8[1]);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0xc0) == 0) {
                if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04456d44;
              }
              FUN_06f533bc(*(long *)(param_1 + 0xc0),uVar11,local_d8,DAT_0919e628);
              local_138[0] = iVar2;
              *(undefined8 *)((ulong)local_138 | 4) = local_78;
              *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) = local_70;
              local_128 = uVar5;
              uVar3 = CookingGraph_CookingLevelSimulation__ToolOf(local_138);
              if (iVar2 == 1) {
                if (-1 < (int)uVar3) {
                  if (*(long *)(param_1 + 0x78) == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04456d44;
                  }
                  lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x20);
                  if (lVar10 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04456d44;
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    goto LAB_04456d44;
                  }
                  lVar10 = *(long *)(lVar10 + (ulong)uVar3 * 8 + 0x20);
                  if (lVar10 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04456d44;
                  }
                  lVar10 = *(long *)(lVar10 + 0x10);
                  if (lVar10 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_04456d44;
                  }
                  if ((int)uVar5 < *(int *)(lVar10 + 0x18)) {
                    uVar4 = CookingGraph_CookingLevelSimulation__LaneOf(param_1,uVar3);
                    CookingGraph_CookingLevelSimulation__PinLane(param_1,uVar3,uVar4,local_d8);
                  }
                }
              }
            }
          }
          FUN_0719a0b4(&local_d0,DAT_091a27e0);
        }
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
        goto LAB_04456b84;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04456d44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

