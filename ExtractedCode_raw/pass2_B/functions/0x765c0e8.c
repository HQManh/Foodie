// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParseConstructorAsync>d__25$$MoveNext
// address: 0x765c0e8
// body: available
// range: 0x765c0e8-0x765c423 inclusive
// range: 0x765c460-0x765c9ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765c3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c410 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c4d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c578 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c85c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765c864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25__MoveNext(int *param_1)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095223e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1500);
    FUN_03f5c2a4(&DAT_091c1280);
    FUN_03f5c2a4(&DAT_091c1230);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc68);
    FUN_03f5c2a4(&DAT_0921fc18);
    DAT_095223e5 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar5 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  iVar6 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar2 = ZEXT816(0);
  lVar13 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar4 = ZEXT816(0);
  local_68 = 0;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
    }
    else {
      if (iVar6 == 1) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        goto LAB_0765c318;
      }
LAB_0765c270:
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparatorAsync
                         (lVar13,DAT_0921fc18,*(undefined8 *)(param_1 + 10),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = FUN_062e82b0(lVar12,0,DAT_091bcba0);
      uVar7 = FUN_06daadec(local_40,DAT_0919b9e0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499084c(param_1 + 2,local_40,param_1,DAT_091c1230);
        return;
      }
    }
    uVar7 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar7 & 1) == 0) {
      uVar8 = thunk_FUN_03fc39d4(&DAT_09211c70);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(lVar13,uVar8,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ec0a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = Newtonsoft_Json_JsonTextReader__EatWhitespaceAsync
                       (lVar13,*(undefined8 *)(param_1 + 10),0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar12,0,0);
    uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    auVar15 = local_40;
    if ((uVar7 & 1) != 0) {
LAB_0765c318:
      local_40 = auVar15;
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_50,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      param_1[0x10] = *(int *)(lVar13 + 0x8c);
      do {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *(long *)(lVar13 + 0x80);
        if (lVar12 == 0) {
LAB_0765c4d8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = *(uint *)(lVar13 + 0x8c);
        while( true ) {
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          sVar1 = *(short *)(lVar12 + (long)(int)uVar11 * 2 + 0x20);
          if (sVar1 == 0) break;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Char__IsLetterOrDigit(sVar1,0);
          if ((uVar7 & 1) == 0) {
            if (sVar1 == 10) {
              param_1[0x11] = *(int *)(lVar13 + 0x8c);
              Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar13,0);
              goto LAB_0765c63c;
            }
            if (sVar1 == 0xd) {
              param_1[0x11] = *(int *)(lVar13 + 0x8c);
              lVar12 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                                 (lVar13,1,*(undefined8 *)(param_1 + 10),0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar15 = System_Threading_Tasks_Task__ConfigureAwait(lVar12,0,0);
              local_50 = auVar15;
              uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                (local_50,0);
              auVar4 = local_60;
              auVar5 = local_40;
              if ((uVar7 & 1) == 0) {
                *param_1 = 3;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_0499355c(param_1 + 2,local_50,param_1,DAT_091c1500);
                return;
              }
              goto LAB_0765c5cc;
            }
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Char__IsWhiteSpace(sVar1,0);
            if ((uVar7 & 1) != 0) {
              uVar11 = *(uint *)(lVar13 + 0x8c);
              goto LAB_0765c61c;
            }
            if (sVar1 != 0x28) {
              lVar12 = thunk_FUN_03fc39d4(&DAT_09182ff8);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              local_80 = CONCAT62(local_80._2_6_,sVar1);
              uVar9 = FUN_03f5c42c(DAT_09535460,&local_80);
              uVar10 = thunk_FUN_03fc39d4(&DAT_09211c50);
              uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar8,uVar9,0);
              uVar8 = Newtonsoft_Json_JsonReaderException__Create(lVar13,uVar8,0);
              uVar9 = thunk_FUN_03fc39d4(&DAT_091ec0a0);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar8,uVar9);
            }
            param_1[0x11] = *(int *)(lVar13 + 0x8c);
            goto LAB_0765c63c;
          }
          lVar12 = *(long *)(lVar13 + 0x80);
          uVar11 = *(int *)(lVar13 + 0x8c) + 1;
          *(uint *)(lVar13 + 0x8c) = uVar11;
          if (lVar12 == 0) goto LAB_0765c4d8;
        }
        if (*(uint *)(lVar13 + 0x88) != uVar11) {
LAB_0765c61c:
          param_1[0x11] = uVar11;
          *(uint *)(lVar13 + 0x8c) = uVar11 + 1;
          goto LAB_0765c63c;
        }
        lVar12 = Newtonsoft_Json_JsonTextReader__ReadDataAsync
                           (lVar13,1,*(undefined8 *)(param_1 + 10),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar15 = FUN_062ebc5c(lVar12,0,DAT_091bcc68);
        local_60 = auVar15;
        uVar7 = FUN_06dab0dc(local_60,DAT_0919ba20);
        auVar2 = local_50;
        auVar3 = local_40;
        if ((uVar7 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x18) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x18,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04990d24(param_1 + 2,local_60,param_1,DAT_091c1280);
          return;
        }
LAB_0765c534:
        local_50 = auVar2;
        local_40 = auVar3;
        iVar6 = FUN_06dab124(local_60,DAT_0919ba18);
        if (iVar6 == 0) {
          uVar8 = thunk_FUN_03fc39d4(&DAT_09211d50);
          uVar8 = Newtonsoft_Json_JsonReaderException__Create(lVar13,uVar8,0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091ec0a0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar9);
        }
      } while( true );
    }
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0499355c(param_1 + 2,local_50,param_1,DAT_091c1500);
  }
  else {
    if (iVar6 == 2) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = -1;
      goto LAB_0765c534;
    }
    if (iVar6 == 3) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
LAB_0765c5cc:
      local_60 = auVar4;
      local_40 = auVar5;
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_50,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
LAB_0765c63c:
      local_80 = 0;
      uStack_78 = 0;
      Newtonsoft_Json_Utilities_StringReference___ctor
                (&local_80,*(undefined8 *)(lVar13 + 0x80),param_1[0x10],
                 param_1[0x11] - param_1[0x10],0);
      *(undefined8 *)(lVar13 + 0xb8) = uStack_78;
      *(undefined8 *)(lVar13 + 0xb0) = local_80;
      thunk_FUN_03f5d7b8(lVar13 + 0xb0,0);
      uVar8 = Newtonsoft_Json_Utilities_StringReference__ToString(lVar13 + 0xb0,0);
      *(undefined8 *)(param_1 + 0x12) = uVar8;
      thunk_FUN_03f5d7b8();
      lVar12 = Newtonsoft_Json_JsonTextReader__EatWhitespaceAsync
                         (lVar13,*(undefined8 *)(param_1 + 10),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar15 = System_Threading_Tasks_Task__ConfigureAwait(lVar12,0,0);
      local_50 = auVar15;
      uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_50,0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499355c(param_1 + 2,local_50,param_1,DAT_091c1500);
        return;
      }
    }
    else {
      if (iVar6 != 4) goto LAB_0765c270;
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      local_60 = ZEXT816(0);
      local_40 = ZEXT816(0);
    }
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(lVar13 + 0x80);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(uint *)(lVar13 + 0x8c);
    if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(short *)(lVar12 + (long)(int)uVar11 * 2 + 0x20) != 0x28) {
      lVar12 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar12 = *(long *)(lVar13 + 0x80);
      if (lVar12 != 0) {
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar13 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_80 = CONCAT62(local_80._2_6_,
                            *(undefined2 *)(lVar12 + (long)(int)*(uint *)(lVar13 + 0x8c) * 2 + 0x20)
                           );
        uVar9 = FUN_03f5c42c(DAT_09535460,&local_80);
        uVar10 = thunk_FUN_03fc39d4(&DAT_09211c50);
        uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar8,uVar9,0);
        uVar8 = Newtonsoft_Json_JsonReaderException__Create(lVar13,uVar8,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091ec0a0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(uint *)(lVar13 + 0x8c) = uVar11 + 1;
    Newtonsoft_Json_JsonTextReader__ClearRecentString(lVar13,0);
    piVar14 = param_1 + 0x12;
    Newtonsoft_Json_JsonReader__SetToken(lVar13,3,*(undefined8 *)piVar14,0);
    piVar14[0] = 0;
    piVar14[1] = 0;
    thunk_FUN_03f5d7b8(piVar14,0);
    *param_1 = -2;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}

