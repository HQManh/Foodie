// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsBooleanAsync>d__40$$MoveNext
// address: 0x7656b64
// body: available
// range: 0x7656b64-0x7656f97 inclusive
// range: 0x7656fe8-0x765701f inclusive
// range: 0x7657028-0x7657163 inclusive
// range: 0x7657190-0x7657873 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7656efc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7656f00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7656f8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7656f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7656f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765701c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765779c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76577a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76577cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76577d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsBooleanAsync>d__40__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined2 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_48;
  byte local_44 [4];
  
  if ((DAT_095223c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197d68);
    FUN_03f5c2a4(&DAT_09197d60);
    FUN_03f5c2a4(&DAT_09197d88);
    FUN_03f5c2a4(&DAT_09175100);
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_095223c7 = 1;
  }
  local_60._8_8_ = 0;
  local_70._8_8_ = 0;
  local_60._0_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  iVar1 = *param_1;
  local_70._0_8_ = 0;
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  plVar17 = *(long **)(param_1 + 8);
  if (4 < iVar1) {
    if (iVar1 - 6U < 2) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_076573c4;
    }
    if (iVar1 == 5) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
LAB_076575d8:
      local_70 = auVar4;
      uVar11 = FUN_06daae34(local_60,DAT_0919b9d8);
      if ((uVar11 & 1) == 0) {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = plVar17[0x10];
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)((long)plVar17 + 0x8c) < *(uint *)(lVar10 + 0x18)) {
          uVar14 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                             (plVar17,*(undefined2 *)
                                       (lVar10 + (long)(int)*(uint *)((long)plVar17 + 0x8c) * 2 +
                                       0x20),0);
          uVar15 = thunk_FUN_03fc39d4(&DAT_091ec078);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar14,uVar15);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      local_44[0] = *(byte *)(param_1 + 0x14);
      uVar14 = FUN_03f5c42c(DAT_09535400,local_44);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonReader__SetToken(plVar17,10,uVar14,0);
      local_48 = (uint)local_48._2_2_ << 0x10;
      FUN_05c290f8(&local_48,(char)param_1[0x14],DAT_091b6a48);
LAB_07657630:
      uVar9 = (undefined2)local_48;
      goto LAB_07657634;
    }
    if (iVar1 != 8) goto LAB_07656db8;
LAB_07656ccc:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_07656ce0:
    local_60 = auVar18;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_70,0);
LAB_07656cec:
    uVar9 = 0;
LAB_07657634:
    *param_1 = -2;
    if (*(int *)(DAT_09175100 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_065108c8(param_1 + 2,uVar9,DAT_09197d88);
    return;
  }
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = -1;
        goto LAB_07656fe8;
      }
      goto LAB_07656db8;
    }
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_07656da4:
    uVar11 = FUN_06daae34(local_60,DAT_0919b9d8);
    if ((uVar11 & 1) != 0) goto LAB_07656cec;
  }
  else {
    if (iVar1 == 2) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
LAB_07656d5c:
      local_60 = auVar7;
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_70,0);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = Newtonsoft_Json_Utilities_StringReference__ToString(plVar17 + 0x16,0);
      uVar9 = Newtonsoft_Json_JsonReader__ReadBooleanString(plVar17,uVar14,0);
      goto LAB_07657634;
    }
    if (iVar1 == 3) goto LAB_07656ccc;
    if (iVar1 == 4) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      local_60 = ZEXT816(0);
LAB_07657028:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_70,0);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = (long *)(**(code **)(*plVar17 + 0x248))(plVar17,*(undefined8 *)(*plVar17 + 0x250));
      if ((plVar13 == (long *)0x0) || (*plVar13 != DAT_09181b78)) {
        uVar14 = (**(code **)(*plVar17 + 0x248))(plVar17,*(undefined8 *)(*plVar17 + 0x250));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar8 = System_Convert__ToBoolean(uVar14,uVar15,0);
      }
      else {
        puVar16 = (undefined8 *)thunk_FUN_03f99594();
        uVar14 = *puVar16;
        *(undefined8 *)(param_1 + 0x12) = puVar16[1];
        *(undefined8 *)(param_1 + 0x10) = uVar14;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        uVar15 = *(undefined8 *)(param_1 + 0x12);
        if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar8 = System_Numerics_BigInteger__op_Inequality(uVar14,uVar15,0,0);
      }
      local_44[0] = bVar8 & 1;
      uVar14 = FUN_03f5c42c(DAT_09535400,local_44);
      Newtonsoft_Json_JsonReader__SetToken(plVar17,10,uVar14,0,0);
      local_48 = (uint)local_48._2_2_ << 0x10;
      FUN_05c290f8(&local_48,bVar8 & 1,DAT_091b6a48);
      goto LAB_07657630;
    }
LAB_07656db8:
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_JsonTextReader__EnsureBuffer(plVar17,0);
    uVar2 = *(uint *)((long)plVar17 + 0x24);
    if (0xc < uVar2) {
LAB_07656f04:
      lVar10 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_48 = *(undefined4 *)((long)plVar17 + 0x24);
      uVar15 = thunk_FUN_03fc39d4(&DAT_09191fb8);
      uVar15 = FUN_03f5c42c(uVar15,&local_48);
      uVar12 = thunk_FUN_03fc39d4(&DAT_09211e30);
      uVar14 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar14,uVar15,0);
      uVar14 = Newtonsoft_Json_JsonReaderException__Create(plVar17,uVar14,0);
      uVar15 = thunk_FUN_03fc39d4(&DAT_091ec078);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar14,uVar15);
    }
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) == 0) {
      if (uVar2 != 8) {
        if (uVar2 != 0xc) goto LAB_07656f04;
        lVar10 = Newtonsoft_Json_JsonTextReader__ReadFinishedAsync
                           (plVar17,*(undefined8 *)(param_1 + 10),0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_70 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
        uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_70,0);
        auVar18._8_8_ = local_60._8_8_;
        auVar18._0_8_ = local_60._0_8_;
        if ((uVar11 & 1) == 0) {
          *param_1 = 8;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09175100 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
          return;
        }
        goto LAB_07656ce0;
      }
      lVar10 = Newtonsoft_Json_JsonTextReader__ParsePostValueAsync
                         (plVar17,1,*(undefined8 *)(param_1 + 10),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = FUN_062e82b0(lVar10,0,DAT_091bcba0);
      uVar11 = FUN_06daadec(local_60,DAT_0919b9e0);
      if ((uVar11 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09175100 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045cf0fc(param_1 + 2,local_60,param_1,DAT_09197d60);
        return;
      }
      goto LAB_07656da4;
    }
  }
LAB_07657190:
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar10 = plVar17[0x10];
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)((long)plVar17 + 0x8c);
  if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar3 = *(ushort *)(lVar10 + (long)(int)uVar2 * 2 + 0x20);
  uVar11 = (ulong)uVar3;
  if (uVar3 < 0x3a) {
    if (uVar3 == 0) {
      lVar10 = Newtonsoft_Json_JsonTextReader__ReadNullCharAsync
                         (plVar17,*(undefined8 *)(param_1 + 10),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar18 = FUN_062e82b0(lVar10,0,DAT_091bcba0);
      local_60 = auVar18;
      uVar11 = FUN_06daadec(local_60,DAT_0919b9e0);
      auVar5 = local_70;
      if ((uVar11 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09175100 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045cf0fc(param_1 + 2,local_60,param_1,DAT_09197d60);
        return;
      }
LAB_07656fe8:
      local_70 = auVar5;
      uVar11 = FUN_06daae34(local_60,DAT_0919b9d8);
      if ((uVar11 & 1) != 0) {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        Newtonsoft_Json_JsonReader__SetToken(plVar17,0,0,0,0);
        uVar9 = 0;
        goto LAB_07657634;
      }
      goto LAB_076572e8;
    }
    if (uVar3 < 0x20) {
      if (uVar3 == 9) {
LAB_076573dc:
        *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
      }
      else if (uVar3 == 10) {
        Newtonsoft_Json_JsonTextReader__ProcessLineFeed(plVar17,0);
      }
      else {
        if (uVar3 != 0xd) goto LAB_076572c0;
        lVar10 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                           (plVar17,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
        local_70 = auVar18;
        uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_70,0);
        auVar6 = local_60;
        if ((uVar11 & 1) == 0) {
          *param_1 = 7;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09175100 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
          return;
        }
LAB_076573c4:
        local_60 = auVar6;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_70,0);
      }
      goto LAB_076572e8;
    }
    if (uVar3 < 0x2c) {
      if (uVar3 == 0x20) goto LAB_076573dc;
      if ((uVar3 == 0x22) || (uVar3 == 0x27)) {
        lVar10 = Newtonsoft_Json_JsonTextReader__ParseStringAsync
                           (plVar17,uVar3,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
        local_70 = auVar18;
        uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_70,0);
        auVar7 = local_60;
        if ((uVar11 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09175100 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
          return;
        }
        goto LAB_07656d5c;
      }
    }
    else if (uVar3 < 0x3a) {
      if (uVar11 == 0x2c) {
        Newtonsoft_Json_JsonTextReader__ProcessValueComma(plVar17,0);
        goto LAB_076572e8;
      }
      if (uVar11 == 0x2f) {
        lVar10 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                           (plVar17,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
        local_70 = auVar18;
        uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_70,0);
        auVar6 = local_60;
        if ((uVar11 & 1) == 0) {
          *param_1 = 6;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09175100 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
          return;
        }
        goto LAB_076573c4;
      }
      if ((1L << (uVar11 & 0x3f) & 0x3ff600000000000U) == 0) goto LAB_076572c0;
      lVar10 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                         (plVar17,0,*(undefined8 *)(param_1 + 10),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
      local_70 = auVar18;
      uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                         (local_70,0);
      if ((uVar11 & 1) == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        if (*(int *)(DAT_09175100 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
        return;
      }
      goto LAB_07657028;
    }
  }
  else if (uVar3 < 0x67) {
    if (uVar3 == 0x5d) {
      *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
      if ((1 < *(int *)((long)plVar17 + 0x24) - 5U) && (*(int *)((long)plVar17 + 0x24) != 8)) {
        uVar14 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(plVar17,0x5d,0);
        uVar15 = thunk_FUN_03fc39d4(&DAT_091ec078);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar14,uVar15);
      }
      Newtonsoft_Json_JsonReader__SetToken(plVar17,0xe,0);
      goto LAB_07656cec;
    }
    if (uVar3 == 0x66) {
      *(undefined1 *)(param_1 + 0x14) = 0;
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar16 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x10);
LAB_0765759c:
      lVar10 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparatorAsync
                         (plVar17,*puVar16,*(undefined8 *)(param_1 + 10),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar18 = FUN_062e82b0(lVar10,0,DAT_091bcba0);
      local_60 = auVar18;
      uVar11 = FUN_06daadec(local_60,DAT_0919b9e0);
      auVar4 = local_70;
      if ((uVar11 & 1) == 0) {
        *param_1 = 5;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09175100 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045cf0fc(param_1 + 2,local_60,param_1,DAT_09197d60);
        return;
      }
      goto LAB_076575d8;
    }
  }
  else {
    if (uVar3 == 0x6e) {
      lVar10 = Newtonsoft_Json_JsonTextReader__HandleNullAsync
                         (plVar17,*(undefined8 *)(param_1 + 10),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
      local_70 = auVar18;
      uVar11 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                         (local_70,0);
      auVar18 = local_60;
      if ((uVar11 & 1) == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        if (*(int *)(DAT_09175100 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045cf344(param_1 + 2,local_70,param_1,DAT_09197d68);
        return;
      }
      goto LAB_07656ce0;
    }
    if (uVar3 == 0x74) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar16 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 8);
      goto LAB_0765759c;
    }
  }
LAB_076572c0:
  *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = System_Char__IsWhiteSpace(uVar3,0);
  if ((uVar11 & 1) == 0) {
    uVar14 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(plVar17,uVar3,0);
    uVar15 = thunk_FUN_03fc39d4(&DAT_091ec078);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar14,uVar15);
  }
LAB_076572e8:
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  goto LAB_07657190;
}

