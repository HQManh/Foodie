// rea decompile_all
// name: System.IO.StreamWriter.<FlushAsyncInternal>d__74$$MoveNext
// address: 0x7572c78
// body: available
// range: 0x7572c78-0x7572fbb inclusive
// range: 0x7572fc4-0x757311b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7572dcc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572fb8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757310c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudo
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter_<FlushAsyncInternal>d__74__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  unkbyte10 Var6;
  long local_90;
  long local_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09521a46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1628);
    FUN_03f5c2a4(&DAT_091c16a8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091b9630);
    FUN_03f5c2a4(&DAT_091b9638);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521a46 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  iVar1 = *param_1;
  local_70._8_8_ = 0;
  local_70._0_8_ = 0;
  local_78 = 0;
  if (iVar1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x1e);
    local_60 = *(undefined8 *)(param_1 + 0x1c);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *param_1 = -1;
LAB_07572d5c:
    FUN_06fb78b0(&local_60,0);
LAB_07572d74:
    plVar3 = *(long **)(param_1 + 0x12);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar3 + 0x1a8))
                      (plVar3,*(undefined8 *)(param_1 + 0x14),0,param_1[0x16],
                       *(undefined8 *)(param_1 + 0x18),0,(char)param_1[0x1a],
                       *(undefined8 *)(*plVar3 + 0x1b0));
    if (0 < (int)uVar2) {
      lVar5 = *(long *)(param_1 + 0x18);
      plVar3 = *(long **)(param_1 + 0xe);
      local_90 = 0;
      local_88 = 0;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if (*(uint *)(lVar5 + 0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_90 = lVar5;
      thunk_FUN_03f5d7b8(&local_90,lVar5);
      local_88 = (ulong)uVar2 << 0x20;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Var6 = (**(code **)(*plVar3 + 0x338))
                       (plVar3,local_90,local_88,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(*plVar3 + 0x340));
      if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_48 = 0;
      local_50 = (long)Var6;
      thunk_FUN_03f5d7b8(&local_50,(long)Var6);
      uStack_48._0_3_ = (uint3)(ushort)((unkuint10)Var6 >> 0x40);
      uStack_38 = uStack_48;
      local_40 = local_50;
      thunk_FUN_03f5d7b8(&local_40,0);
      thunk_FUN_03f5d7b8(&local_40,0);
      uStack_58 = uStack_38;
      local_60 = local_40;
      uVar4 = FUN_06fb7770(&local_60,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x1e) = uStack_58;
        *(undefined8 *)(param_1 + 0x1c) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x1c,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04995000(param_1 + 2,&local_60,param_1,DAT_091c16a8);
        return;
      }
LAB_07572e84:
      FUN_06fb78b0(&local_60,0);
    }
    if (*(char *)((long)param_1 + 0x69) == '\0') goto LAB_07572ee4;
    plVar3 = *(long **)(param_1 + 0xe);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar3 + 0x2b8))
                      (plVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar3 + 0x2c0));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_70,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x20) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x20,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049947c4(param_1 + 2,local_70,param_1,DAT_091c1628);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      uStack_58 = *(undefined8 *)(param_1 + 0x1e);
      local_60 = *(undefined8 *)(param_1 + 0x1c);
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      goto LAB_07572e84;
    }
    if (iVar1 != 2) {
      if ((char)param_1[8] == '\0') {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined1 *)(*(long *)(param_1 + 10) + 0x61) = 1;
        plVar3 = *(long **)(param_1 + 0xc);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar5 + 0x18) != 0) {
          plVar3 = *(long **)(param_1 + 0xe);
          local_88 = 0;
          local_90 = lVar5;
          thunk_FUN_03f5d7b8(&local_90,lVar5);
          local_88 = *(long *)(lVar5 + 0x18) << 0x20;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Var6 = (**(code **)(*plVar3 + 0x338))
                           (plVar3,local_90,local_88,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(*plVar3 + 0x340));
          local_50 = (undefined8)Var6;
          if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_48 = 0;
          thunk_FUN_03f5d7b8(&local_50,local_50);
          uStack_48._0_3_ = (uint3)(ushort)((unkuint10)Var6 >> 0x40);
          uStack_38 = uStack_48;
          local_40 = local_50;
          thunk_FUN_03f5d7b8(&local_40,0);
          thunk_FUN_03f5d7b8(&local_40,0);
          uStack_58 = uStack_38;
          local_60 = local_40;
          uVar4 = FUN_06fb7770(&local_60,0);
          if ((uVar4 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x1e) = uStack_58;
            *(undefined8 *)(param_1 + 0x1c) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0x1c,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04995000(param_1 + 2,&local_60,param_1,DAT_091c16a8);
            return;
          }
          goto LAB_07572d5c;
        }
      }
      goto LAB_07572d74;
    }
    local_70 = *(undefined1 (*) [16])(param_1 + 0x20);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_70,0);
LAB_07572ee4:
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

