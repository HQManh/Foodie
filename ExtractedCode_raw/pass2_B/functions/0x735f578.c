// rea decompile_all
// name: LiveOpsR1.LiveOpsManager.<LoadBehaviorControl>d__14$$MoveNext
// address: 0x735f578
// body: available
// range: 0x735f578-0x73601d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7360148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736014c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736015c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736016c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360170 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7360174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpsManager_<LoadBehaviorControl>d__14__MoveNext(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_38;
  int iStack_34;
  
  if ((DAT_09520849 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_091c2280);
    FUN_03f5c2a4(&DAT_091c20a0);
    FUN_03f5c2a4(&DAT_0919f818);
    FUN_03f5c2a4(&DAT_091cb6c8);
    FUN_03f5c2a4(&DAT_091cd958);
    FUN_03f5c2a4(&DAT_09185fb0);
    FUN_03f5c2a4(&DAT_091aa4e8);
    FUN_03f5c2a4(&DAT_091879f8);
    FUN_03f5c2a4(&DAT_09187a08);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09207060);
    FUN_03f5c2a4(&DAT_09206ef0);
    FUN_03f5c2a4(&DAT_09206ee8);
    FUN_03f5c2a4(&DAT_09202588);
    DAT_09520849 = 1;
  }
  iVar3 = *param_1;
  lVar15 = *(long *)(param_1 + 8);
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar16 = ZEXT816(0);
  local_38 = 0;
  iStack_34 = 0;
  if (iVar3 == 0) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0735f79c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar11 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar7 = *(long *)local_90._0_8_;
      uVar13 = local_90._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0735fac0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_0735fac0:
      (*(code *)*puVar5)(uVar11,uVar13,puVar5[1]);
    }
    iVar3 = FUN_0640f818(param_1 + 10,DAT_09197808);
    if (iVar3 != 1) {
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar15 = **(long **)(DAT_09187a08 + 0xb8);
      plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar10 == (long *)0x0) {
LAB_07360158:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x18);
      if (lVar7 != 0) {
        lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar4 == 0) {
          uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar11,0);
        }
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar10[4] = lVar7;
      thunk_FUN_03f5d7b8(plVar10 + 4,lVar7);
      if (lVar15 == 0) goto LAB_07360158;
      EssentialSystemR1_R1Logger__LogErrorFormat(lVar15,DAT_09202588,plVar10,0);
      goto LAB_0735fe3c;
    }
    uVar11 = FUN_0640f7ac(param_1 + 10,DAT_09197800);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar15 = **(long **)(DAT_09187a08 + 0xb8);
      plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar10 != (long *)0x0) {
        lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x18);
        if (lVar7 != 0) {
          lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar4 == 0) {
            uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,0);
          }
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10[4] = lVar7;
        thunk_FUN_03f5d7b8(plVar10 + 4,lVar7);
        if (lVar15 != 0) {
          EssentialSystemR1_R1Logger__LogErrorFormat(lVar15,DAT_09207060,plVar10,0);
          goto LAB_0735fe3c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = FUN_0640f7ac(param_1 + 10,DAT_09197800);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = *(undefined8 *)(lVar15 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = FUN_04c35338(uVar11,uVar12,DAT_091d4bc0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = FUN_04b7c324(lVar7,DAT_091cd958);
    plVar10 = (long *)(param_1 + 0x10);
    *plVar10 = lVar4;
    thunk_FUN_03f5d7b8(plVar10);
    if (*plVar10 == 0) {
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar15 = **(long **)(DAT_09187a08 + 0xb8);
      plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar10 != (long *)0x0) {
        lVar4 = *(long *)(*(long *)(param_1 + 6) + 0x18);
        if (lVar4 != 0) {
          lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar6 == 0) {
            uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,0);
          }
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10[4] = lVar4;
        thunk_FUN_03f5d7b8(plVar10 + 4,lVar4);
        if (lVar15 != 0) {
          EssentialSystemR1_R1Logger__LogErrorFormat(lVar15,DAT_09206ee8,plVar10,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(lVar7,0);
          goto LAB_0735fe3c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Cysharp_Threading_Tasks_UniTask__Yield(0);
    _local_38 = CONCAT44(iStack_34,uVar2);
    iVar3 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_38,0);
    iStack_34 = iVar3;
    uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_34,0);
    auVar16 = local_90;
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      uVar11 = DAT_091c2280;
      param_1[0x16] = iStack_34;
      FUN_049b394c(param_1 + 2,&iStack_34,param_1,uVar11);
      return;
    }
LAB_0735f6f4:
    local_90 = auVar16;
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_34,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = *(undefined8 *)(lVar15 + 0x20);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 6) + 0x18);
    uVar11 = thunk_FUN_03f9944c(DAT_091879f8);
    LiveOpsR1_LiveOpsDataAccessWrapper___ctor(uVar11,uVar12,uVar14);
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar10;
    uVar12 = *(undefined8 *)(param_1 + 6);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185fb0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0735f9c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185fb0,0);
LAB_0735f9c0:
    auVar16 = (*(code *)*puVar5)(plVar10,uVar11,uVar12,puVar5[1]);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = auVar16;
    thunk_FUN_03f5d7b8(local_60,0);
    local_90 = local_60;
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
    uVar11 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar7 = *(long *)local_90._0_8_;
      uVar13 = local_90._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0735fd68;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_0735fd68:
      iVar3 = (*(code *)*puVar5)(uVar11,uVar13,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        FUN_049b1d08(param_1 + 2,local_90,param_1,DAT_091c20a0);
        return;
      }
    }
  }
  else {
    if (iVar3 == 1) {
      iStack_34 = param_1[0x16];
      param_1[0x16] = 0;
      *param_1 = -1;
      local_38 = 0;
      goto LAB_0735f6f4;
    }
    if (iVar3 != 2) {
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar10 = *(long **)(*(long *)(param_1 + 6) + 0x20);
      if ((plVar10 == (long *)0x0) ||
         (uVar8 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250)),
         (uVar8 & 1) == 0)) {
        if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar15 = **(long **)(DAT_09187a08 + 0xb8);
        plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (plVar10 == (long *)0x0) {
LAB_07360154:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x18);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar4 == 0)) {
          uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar11,0);
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10[4] = lVar7;
        thunk_FUN_03f5d7b8(plVar10 + 4,lVar7);
        if (lVar15 == 0) goto LAB_07360154;
        EssentialSystemR1_R1Logger__LogErrorFormat(lVar15,DAT_09206ef0,plVar10,0);
        goto LAB_0735fe3c;
      }
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 6) + 0x20);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(local_60,uVar11,DAT_091bf638);
      *(undefined8 *)(param_1 + 0xc) = local_60._8_8_;
      *(undefined8 *)(param_1 + 10) = local_60._0_8_;
      *(undefined8 *)(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      lVar7 = DAT_091aa4e8;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(lVar15 + 0x48);
      if (lVar4 == 0) {
LAB_07360174:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_78 = *(undefined8 *)(param_1 + 0xc);
      local_80 = *(undefined8 *)(param_1 + 10);
      local_70 = *(undefined8 *)(param_1 + 0xe);
      lVar6 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_07360174;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x28) = uStack_78;
        *(undefined8 *)(lVar6 + 0x20) = local_80;
        *(undefined8 *)(lVar6 + 0x30) = local_70;
        thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
      }
      else {
        local_60._0_8_ = local_80;
        local_60._8_8_ = uStack_78;
        local_50 = local_70;
        FUN_0564eb10(lVar4,local_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      local_60._8_8_ = *(undefined8 *)(param_1 + 0xc);
      local_60._0_8_ = *(undefined8 *)(param_1 + 10);
      local_50 = *(undefined8 *)(param_1 + 0xe);
      local_90 = FUN_04b1b458(local_60,DAT_091cb6c8);
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
      uVar11 = local_90._0_8_;
      if ((long *)local_90._0_8_ != (long *)0x0) {
        lVar7 = *(long *)local_90._0_8_;
        uVar13 = local_90._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_073600fc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_073600fc:
        iVar3 = (*(code *)*puVar5)(uVar11,uVar13,puVar5[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
          thunk_FUN_03f5d7b8(param_1 + 0x12,0);
          FUN_049b1d08(param_1 + 2,local_90,param_1,DAT_091c20a0);
          return;
        }
      }
      goto LAB_0735f79c;
    }
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar11 = local_90._0_8_;
  if ((long *)local_90._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_90._0_8_;
    uVar13 = local_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0735fe00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_0735fe00:
    (*(code *)*puVar5)(uVar11,uVar13,puVar5[1]);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06fd8454(*(long *)(lVar15 + 0x38),*(undefined8 *)(*(long *)(param_1 + 6) + 0x18),
               *(undefined8 *)(param_1 + 0x10),DAT_0919f818);
LAB_0735fe3c:
  *param_1 = -2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x10,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar15 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0735fedc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_0735fedc:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  return;
}

