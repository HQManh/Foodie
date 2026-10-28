// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsBytesAsync>d__42$$MoveNext
// address: 0x7657a84
// body: available
// range: 0x7657a84-0x7657ecf inclusive
// range: 0x7657f18-0x7657f4f inclusive
// range: 0x7657f58-0x7658763 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7657e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657ec4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7657f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76581d4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658248 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765866c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658670 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsBytesAsync>d__42__MoveNext(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined4 local_84 [3];
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_095223c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091982e8);
    FUN_03f5c2a4(&DAT_09198318);
    FUN_03f5c2a4(&DAT_091982f8);
    FUN_03f5c2a4(&DAT_09198358);
    FUN_03f5c2a4(&DAT_091751b8);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b8f8);
    FUN_03f5c2a4(&DAT_0919b9b8);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9c0);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcb60);
    DAT_095223c9 = 1;
  }
  local_50._8_8_ = 0;
  local_50._0_8_ = 0;
  auVar8 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  iVar9 = *param_1;
  plVar17 = *(long **)(param_1 + 8);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_78 = 0;
  if (iVar9 < 5) {
    if (1 < iVar9) {
      if (iVar9 == 2) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
LAB_07658164:
        local_50 = auVar6;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_60,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar16 = (**(code **)(*plVar17 + 0x248))(plVar17,*(undefined8 *)(*plVar17 + 0x250));
        uVar12 = DAT_0917fc88;
        if (lVar16 == 0) {
          lVar11 = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
        }
        else {
          lVar11 = thunk_FUN_03f99350(lVar16,DAT_0917fc88);
          uVar13 = DAT_0917fc88;
          if (lVar11 == 0) {
LAB_076581cc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar16,uVar12);
          }
          *(long *)(param_1 + 0x12) = lVar11;
          lVar11 = thunk_FUN_03f99350(lVar16,uVar13);
          uVar12 = uVar13;
          if (lVar11 == 0) goto LAB_076581cc;
        }
        thunk_FUN_03f5d7b8(param_1 + 0x12,lVar11);
        if ((char)param_1[0xc] != '\0') {
          lVar16 = Newtonsoft_Json_JsonReader__ReaderReadAndAssertAsync
                             (plVar17,*(undefined8 *)(param_1 + 10),0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
          local_60 = auVar18;
          uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                             (local_60,0);
          auVar8 = local_50;
          if ((uVar10 & 1) == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
            return;
          }
          goto LAB_0765843c;
        }
      }
      else {
        if (iVar9 != 3) {
          if (iVar9 == 4) {
            local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            *param_1 = -1;
            local_50 = ZEXT816(0);
            goto LAB_07657f58;
          }
          goto LAB_07657c64;
        }
        local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
LAB_0765843c:
        local_50 = auVar8;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_60,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar9 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
        if (iVar9 != 0xd) {
          lVar16 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar16 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          local_84[0] = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
          uVar13 = thunk_FUN_03fc39d4(&DAT_09187478);
          uVar13 = FUN_03f5c42c(uVar13,local_84);
          uVar15 = thunk_FUN_03fc39d4(&DAT_09201978);
          uVar12 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar15,uVar12,uVar13,0);
          uVar12 = Newtonsoft_Json_JsonReaderException__Create(plVar17,uVar12,0);
          uVar13 = thunk_FUN_03fc39d4(&DAT_091ec080);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar12,uVar13);
        }
        Newtonsoft_Json_JsonReader__SetToken(plVar17,0x11,*(undefined8 *)(param_1 + 0x12),0,0);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x12);
      goto LAB_07658484;
    }
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_07657f18;
      }
      goto LAB_07657c64;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_07657d3c:
    uVar10 = FUN_06daae34(local_50,DAT_0919b9d8);
    if ((uVar10 & 1) == 0) {
LAB_07657f70:
      do {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar16 = plVar17[0x10];
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)((long)plVar17 + 0x8c);
        if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(ushort *)(lVar16 + (long)(int)uVar2 * 2 + 0x20);
        if (uVar1 < 0x28) {
          if (uVar1 < 0xe) {
            if (uVar1 == 0) {
              lVar16 = Newtonsoft_Json_JsonTextReader__ReadNullCharAsync
                                 (plVar17,*(undefined8 *)(param_1 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar18 = FUN_062e82b0(lVar16,0,DAT_091bcba0);
              local_50 = auVar18;
              uVar10 = FUN_06daadec(local_50,DAT_0919b9e0);
              auVar7 = local_60;
              if ((uVar10 & 1) == 0) {
                *param_1 = 1;
                *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0xe,0);
                if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045def90(param_1 + 2,local_50,param_1,DAT_091982f8);
                return;
              }
LAB_07657f18:
              local_60 = auVar7;
              uVar10 = FUN_06daae34(local_50,DAT_0919b9d8);
              if ((uVar10 & 1) != 0) {
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                Newtonsoft_Json_JsonReader__SetToken(plVar17,0,0,0,0);
                uVar12 = 0;
                goto LAB_07658484;
              }
            }
            else {
              if (uVar1 == 9) goto LAB_0765824c;
              if (uVar1 != 10) {
                if (uVar1 == 0xd) {
                  lVar16 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                                     (plVar17,0,*(undefined8 *)(param_1 + 10),0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
                  local_60 = auVar18;
                  uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_60,0);
                  auVar3 = local_50;
                  if ((uVar10 & 1) == 0) {
                    *param_1 = 8;
                    *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
                    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                    if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
                    return;
                  }
                  goto LAB_076583ac;
                }
                goto LAB_076581f0;
              }
              Newtonsoft_Json_JsonTextReader__ProcessLineFeed(plVar17,0);
            }
          }
          else {
            if (uVar1 != 0x20) {
              if ((uVar1 != 0x22) && (uVar1 != 0x27)) goto LAB_076581f0;
              lVar16 = Newtonsoft_Json_JsonTextReader__ParseStringAsync
                                 (plVar17,uVar1,3,*(undefined8 *)(param_1 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
              local_60 = auVar18;
              uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                 (local_60,0);
              auVar6 = local_50;
              if ((uVar10 & 1) == 0) {
                *param_1 = 2;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
                thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
                return;
              }
              goto LAB_07658164;
            }
LAB_0765824c:
            *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
          }
        }
        else if (uVar1 < 0x5c) {
          if (uVar1 == 0x2c) {
            Newtonsoft_Json_JsonTextReader__ProcessValueComma(plVar17,0);
          }
          else {
            if (uVar1 != 0x2f) {
              if (uVar1 != 0x5b) goto LAB_076581f0;
              *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
              Newtonsoft_Json_JsonReader__SetToken(plVar17,2,0);
              lVar16 = Newtonsoft_Json_JsonReader__ReadArrayIntoByteArrayAsync
                                 (plVar17,*(undefined8 *)(param_1 + 10),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_70 = FUN_062ee72c(lVar16,0,DAT_091bcb60);
              uVar10 = FUN_06dab310(local_70,DAT_0919b9c0);
              auVar4 = local_60;
              auVar5 = local_50;
              if ((uVar10 & 1) == 0) {
                *param_1 = 5;
                *(undefined1 (*) [16])(param_1 + 0x18) = local_70;
                thunk_FUN_03f5d7b8(param_1 + 0x18,0);
                if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045e0d40(param_1 + 2,local_70,param_1,DAT_091982e8);
                return;
              }
              goto LAB_07657d68;
            }
            lVar16 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                               (plVar17,0,*(undefined8 *)(param_1 + 10),0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
            local_60 = auVar18;
            uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                               (local_60,0);
            auVar3 = local_50;
            if ((uVar10 & 1) == 0) {
              *param_1 = 7;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
              return;
            }
LAB_076583ac:
            local_50 = auVar3;
            System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                      (local_60,0);
          }
        }
        else if (uVar1 == 0x7b) {
          *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
          Newtonsoft_Json_JsonReader__SetToken(plVar17,1,0);
          lVar16 = Newtonsoft_Json_JsonTextReader__ReadIntoWrappedTypeObjectAsync
                             (plVar17,*(undefined8 *)(param_1 + 10),0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
          local_60 = auVar18;
          uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                             (local_60,0);
          if ((uVar10 & 1) == 0) {
            *param_1 = 4;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
            return;
          }
LAB_07657f58:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_60,0);
          *(undefined1 *)(param_1 + 0xc) = 1;
        }
        else {
          if (uVar1 == 0x5d) {
            *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
            if ((1 < *(int *)((long)plVar17 + 0x24) - 5U) && (*(int *)((long)plVar17 + 0x24) != 8))
            {
              uVar12 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                                 (plVar17,0x5d,0);
              uVar13 = thunk_FUN_03fc39d4(&DAT_091ec080);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar12,uVar13);
            }
            Newtonsoft_Json_JsonReader__SetToken(plVar17,0xe,0);
            uVar12 = 0;
            goto LAB_07658484;
          }
          if (uVar1 == 0x6e) {
            lVar16 = Newtonsoft_Json_JsonTextReader__HandleNullAsync
                               (plVar17,*(undefined8 *)(param_1 + 10),0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar18 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
            local_60 = auVar18;
            uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                               (local_60,0);
            auVar18 = local_50;
            if ((uVar10 & 1) == 0) {
              *param_1 = 6;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
              return;
            }
            goto LAB_07657c48;
          }
LAB_076581f0:
          *(uint *)((long)plVar17 + 0x8c) = uVar2 + 1;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_Char__IsWhiteSpace(uVar1,0);
          if ((uVar10 & 1) == 0) {
            uVar12 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                               (plVar17,uVar1,0);
            uVar13 = thunk_FUN_03fc39d4(&DAT_091ec080);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar12,uVar13);
          }
        }
        piVar14 = param_1 + 0x12;
        piVar14[0] = 0;
        piVar14[1] = 0;
        thunk_FUN_03f5d7b8(piVar14,0);
      } while( true );
    }
    uVar12 = 0;
  }
  else {
    if (iVar9 < 7) {
      if (iVar9 == 5) {
        local_70 = *(undefined1 (*) [16])(param_1 + 0x18);
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        *param_1 = -1;
LAB_07657d68:
        local_60 = auVar4;
        local_50 = auVar5;
        uVar12 = FUN_06dab358(local_70,DAT_0919b9b8);
        goto LAB_07658484;
      }
      if (iVar9 == 6) goto LAB_07657c34;
LAB_07657c64:
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonTextReader__EnsureBuffer(plVar17,0);
      *(undefined1 *)(param_1 + 0xc) = 0;
      uVar2 = *(uint *)((long)plVar17 + 0x24);
      if (0xc < uVar2) {
LAB_07657e3c:
        lVar16 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_84[0] = *(undefined4 *)((long)plVar17 + 0x24);
        uVar13 = thunk_FUN_03fc39d4(&DAT_09191fb8);
        uVar13 = FUN_03f5c42c(uVar13,local_84);
        uVar15 = thunk_FUN_03fc39d4(&DAT_09211e30);
        uVar12 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar15,uVar12,uVar13,0);
        uVar12 = Newtonsoft_Json_JsonReaderException__Create(plVar17,uVar12,0);
        uVar13 = thunk_FUN_03fc39d4(&DAT_091ec080);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar12,uVar13);
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) != 0) goto LAB_07657f70;
      if (uVar2 == 8) {
        lVar16 = Newtonsoft_Json_JsonTextReader__ParsePostValueAsync
                           (plVar17,1,*(undefined8 *)(param_1 + 10),0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_50 = FUN_062e82b0(lVar16,0,DAT_091bcba0);
        uVar10 = FUN_06daadec(local_50,DAT_0919b9e0);
        if ((uVar10 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0xe,0);
          if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045def90(param_1 + 2,local_50,param_1,DAT_091982f8);
          return;
        }
        goto LAB_07657d3c;
      }
      if (uVar2 != 0xc) goto LAB_07657e3c;
      lVar16 = Newtonsoft_Json_JsonTextReader__ReadFinishedAsync
                         (plVar17,*(undefined8 *)(param_1 + 10),0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = System_Threading_Tasks_Task__ConfigureAwait(lVar16,0,0);
      uVar10 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                         (local_60,0);
      auVar18._8_8_ = local_50._8_8_;
      auVar18._0_8_ = local_50._0_8_;
      if ((uVar10 & 1) == 0) {
        *param_1 = 9;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045f23e8(param_1 + 2,local_60,param_1,DAT_09198318);
        return;
      }
    }
    else {
      if (iVar9 - 7U < 2) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        goto LAB_076583ac;
      }
      if (iVar9 != 9) goto LAB_07657c64;
LAB_07657c34:
      local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
    }
LAB_07657c48:
    local_50 = auVar18;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    uVar12 = 0;
  }
LAB_07658484:
  *param_1 = -2;
  if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar12,DAT_09198358);
  return;
}

