// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParseValueAsync>d__8$$MoveNext
// address: 0x765f7ac
// body: available
// range: 0x765f7ac-0x7660743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765fa9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766063c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660648 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766064c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660654 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660684 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660688 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76606bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76606f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8__MoveNext(int *param_1)

{
  ushort uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095223fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198420);
    FUN_03f5c2a4(&DAT_091984c0);
    FUN_03f5c2a4(&DAT_09198408);
    FUN_03f5c2a4(&DAT_091983e0);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc68);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_095223fb = 1;
  }
  auVar13 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar23 = ZEXT816(0);
  local_40 = ZEXT816(0);
  iVar15 = *param_1;
  auVar14 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  local_50 = ZEXT816(0);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar4 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  lVar20 = *(long *)(param_1 + 8);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (iVar15 < 8) {
    if (iVar15 < 4) {
      if (2 < iVar15 - 1U) {
        local_40 = ZEXT816(0);
        local_50 = ZEXT816(0);
        if (iVar15 != 0) goto LAB_0765f91c;
        local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = -1;
        local_50 = ZEXT816(0);
LAB_0765f904:
        iVar15 = FUN_06dab124(local_40,DAT_0919ba18);
        if (iVar15 != 0) {
LAB_0765f91c:
          do {
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar19 = *(long *)(lVar20 + 0x80);
joined_r0x0765f924:
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar18 = *(uint *)(lVar20 + 0x8c);
            if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar1 = *(ushort *)(lVar19 + (long)(int)uVar18 * 2 + 0x20);
            uVar21 = (uint)uVar1;
            if (0x4e < uVar1) {
              if (uVar1 < 0x67) {
                if (uVar21 == 0x5b) {
                  *(uint *)(lVar20 + 0x8c) = uVar18 + 1;
                  Newtonsoft_Json_JsonReader__SetToken(lVar20,2,0);
                  goto LAB_0765fb30;
                }
                if (uVar1 == 0x5d) {
                  *(uint *)(lVar20 + 0x8c) = uVar18 + 1;
                  Newtonsoft_Json_JsonReader__SetToken(lVar20,0xe,0);
                  goto LAB_0765fb30;
                }
                if (uVar1 == 0x66) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseFalseAsync
                                     (lVar20,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                  local_50 = auVar23;
                  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar4._8_8_ = local_60._8_8_;
                  auVar4._0_8_ = local_60._0_8_;
                  auVar23 = local_40;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 3;
                    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                    return;
                  }
                  goto LAB_0765fb24;
                }
              }
              else if (uVar21 < 0x75) {
                if (uVar21 == 0x6e) {
                  lVar19 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                                     (lVar20,1,1,*(undefined8 *)(param_1 + 10),0);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  local_60 = FUN_062e82b0(lVar19,0,DAT_091bcba0);
                  uVar16 = FUN_06daadec(local_60,DAT_0919b9e0);
                  auVar5 = local_40;
                  auVar6 = local_50;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 4;
                    *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
                    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d3628(param_1 + 2,local_60,param_1,DAT_091983e0);
                    return;
                  }
                  goto LAB_0765fcc4;
                }
                if (uVar21 == 0x74) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseTrueAsync
                                     (lVar20,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                  local_50 = auVar23;
                  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar4._8_8_ = local_60._8_8_;
                  auVar4._0_8_ = local_60._0_8_;
                  auVar23 = local_40;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 2;
                    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                    return;
                  }
                  goto LAB_0765fb24;
                }
              }
              else {
                if (uVar21 == 0x75) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseUndefinedAsync
                                     (lVar20,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                  local_50 = auVar23;
                  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar4._8_8_ = local_60._8_8_;
                  auVar4._0_8_ = local_60._0_8_;
                  auVar23 = local_40;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 0xd;
                    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                    return;
                  }
                  goto LAB_0765fb24;
                }
                if (uVar21 == 0x7b) {
                  uVar22 = 1;
                  *(uint *)(lVar20 + 0x8c) = uVar18 + 1;
                  Newtonsoft_Json_JsonReader__SetToken(lVar20,1,0);
                  goto LAB_0765fb34;
                }
              }
LAB_0765fa68:
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar16 = System_Char__IsWhiteSpace(uVar1,0);
              if ((uVar16 & 1) == 0) {
                if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar16 = System_Char__IsNumber(uVar1,0);
                if ((1 < (ushort)(uVar1 - 0x2d)) && ((uVar16 & 1) == 0)) {
                  uVar22 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                                     (lVar20,uVar1,0);
                  uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0c0);
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar22,uVar17);
                }
                lVar20 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                                   (lVar20,0,*(undefined8 *)(param_1 + 10),0);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                local_50 = auVar23;
                uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                   (local_50,0);
                auVar4._8_8_ = local_60._8_8_;
                auVar4._0_8_ = local_60._0_8_;
                auVar23 = local_40;
                if ((uVar16 & 1) == 0) {
                  *param_1 = 0xf;
                  *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                  thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                  if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                  return;
                }
                goto LAB_0765fb24;
              }
              uVar18 = *(uint *)(lVar20 + 0x8c);
LAB_0765fa8c:
              *(uint *)(lVar20 + 0x8c) = uVar18 + 1;
LAB_0765fa94:
              lVar19 = *(long *)(lVar20 + 0x80);
              goto joined_r0x0765f924;
            }
            if (0x20 < uVar1) {
              if (uVar21 < 0x30) {
                if (uVar1 == 0x22) {
LAB_07660058:
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseStringAsync
                                     (lVar20,uVar1,0,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                  local_50 = auVar23;
                  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar4._8_8_ = local_60._8_8_;
                  auVar4._0_8_ = local_60._0_8_;
                  auVar23 = local_40;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 1;
                    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                    return;
                  }
                  goto LAB_0765fb24;
                }
                if (uVar1 < 0x2c) {
                  if (uVar1 == 0x27) goto LAB_07660058;
                  if (uVar21 != 0x29) goto LAB_0765fa68;
                  *(uint *)(lVar20 + 0x8c) = uVar18 + 1;
                  Newtonsoft_Json_JsonReader__SetToken(lVar20,0xf,0);
                  goto LAB_0765fb30;
                }
                if (uVar21 == 0x2c) {
                  Newtonsoft_Json_JsonReader__SetToken(lVar20,0xc,0);
                  goto LAB_0765fb30;
                }
                if (uVar1 == 0x2d) {
                  lVar19 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                                     (lVar20,1,1,*(undefined8 *)(param_1 + 10),0);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  local_60 = FUN_062e82b0(lVar19,0,DAT_091bcba0);
                  uVar16 = FUN_06daadec(local_60,DAT_0919b9e0);
                  auVar11 = local_40;
                  auVar12 = local_50;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 9;
                    *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
                    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d3628(param_1 + 2,local_60,param_1,DAT_091983e0);
                    return;
                  }
                  goto LAB_0765fbd0;
                }
                if (uVar1 == 0x2f) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                                     (lVar20,1,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
                  local_50 = auVar23;
                  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar4._8_8_ = local_60._8_8_;
                  auVar4._0_8_ = local_60._0_8_;
                  auVar23 = local_40;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 0xc;
                    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
                    return;
                  }
                  goto LAB_0765fb24;
                }
              }
              else {
                if (uVar21 == 0x49) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinityAsync
                                     (lVar20,0,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  local_70 = FUN_062ee72c(lVar20,0,DAT_091bcca8);
                  uVar16 = FUN_06dab310(local_70,DAT_0919ba70);
                  auVar7 = local_40;
                  auVar9 = local_50;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 8;
                    *(undefined1 (*) [16])(param_1 + 0x18) = local_70;
                    thunk_FUN_03f5d7b8(param_1 + 0x18,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d4868(param_1 + 2,local_70,param_1,DAT_09198420);
                    return;
                  }
                  goto LAB_0765fdcc;
                }
                if (uVar21 == 0x4e) {
                  lVar20 = Newtonsoft_Json_JsonTextReader__ParseNumberNaNAsync
                                     (lVar20,0,*(undefined8 *)(param_1 + 10),0);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  local_70 = FUN_062ee72c(lVar20,0,DAT_091bcca8);
                  uVar16 = FUN_06dab310(local_70,DAT_0919ba70);
                  auVar8 = local_40;
                  auVar10 = local_50;
                  if ((uVar16 & 1) == 0) {
                    *param_1 = 7;
                    *(undefined1 (*) [16])(param_1 + 0x18) = local_70;
                    thunk_FUN_03f5d7b8(param_1 + 0x18,0);
                    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045d4868(param_1 + 2,local_70,param_1,DAT_09198420);
                    return;
                  }
                  goto LAB_0765faf8;
                }
              }
              goto LAB_0765fa68;
            }
            if (uVar1 == 0) {
              if (*(uint *)(lVar20 + 0x88) != uVar18) goto LAB_0765fa8c;
              lVar19 = Newtonsoft_Json_JsonTextReader__ReadDataAsync
                                 (lVar20,0,*(undefined8 *)(param_1 + 10),0);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar23 = FUN_062ebc5c(lVar19,0,DAT_091bcc68);
              local_40 = auVar23;
              uVar16 = FUN_06dab0dc(local_40,DAT_0919ba20);
              if ((uVar16 & 1) == 0) {
                *param_1 = 0;
                *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
                thunk_FUN_03f5d7b8(param_1 + 0xc,0);
                if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045d4190(param_1 + 2,local_40,param_1,DAT_09198408);
                return;
              }
              goto LAB_0765f904;
            }
            if (uVar1 < 0xb) {
              if (uVar21 == 9) goto LAB_0765fa8c;
              if (uVar21 != 10) goto LAB_0765fa60;
              Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar20,0);
              goto LAB_0765fa94;
            }
            if (uVar21 - 0xb < 2) goto LAB_0765fa68;
            if (uVar21 != 0xd) {
LAB_0765fa60:
              if (uVar1 != 0x20) goto LAB_0765fa68;
              goto LAB_0765fa8c;
            }
            lVar19 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                               (lVar20,0,*(undefined8 *)(param_1 + 10),0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar19,0,0);
            local_50 = auVar23;
            uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                               (local_50,0);
            auVar13 = local_40;
            if ((uVar16 & 1) == 0) {
              *param_1 = 0xe;
              *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
              thunk_FUN_03f5d7b8(param_1 + 0x10,0);
              if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
              return;
            }
LAB_0765fda8:
            local_40 = auVar13;
            System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                      (local_50,0);
          } while( true );
        }
        uVar22 = 0;
        goto LAB_0765fb34;
      }
LAB_0765fb10:
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
    else {
      if (iVar15 - 5U < 2) goto LAB_0765fb10;
      if (iVar15 != 4) {
        local_40 = ZEXT816(0);
        local_50 = ZEXT816(0);
        if (iVar15 != 7) goto LAB_0765f91c;
        local_70 = *(undefined1 (*) [16])(param_1 + 0x18);
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        *param_1 = -1;
LAB_0765faf8:
        local_40 = auVar8;
        local_50 = auVar10;
        FUN_06dab358(local_70,DAT_0919ba68);
        goto LAB_0765fb30;
      }
      local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
LAB_0765fcc4:
      local_40 = auVar5;
      local_50 = auVar6;
      uVar16 = FUN_06daae34(local_60,DAT_0919b9d8);
      if ((uVar16 & 1) == 0) {
        if (lVar20 != 0) {
          *(int *)(lVar20 + 0x8c) = *(int *)(lVar20 + 0x8c) + 1;
          uVar22 = Newtonsoft_Json_JsonReader__CreateUnexpectedEndException(lVar20,0);
          uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0c0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar22,uVar17);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar19 = *(long *)(lVar20 + 0x80);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar18 = *(uint *)(lVar20 + 0x8c);
      if (*(uint *)(lVar19 + 0x18) <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      sVar2 = *(short *)(lVar19 + (long)(int)(uVar18 + 1) * 2 + 0x20);
      if (sVar2 == 0x65) {
        lVar20 = Newtonsoft_Json_JsonTextReader__ParseConstructorAsync
                           (lVar20,*(undefined8 *)(param_1 + 10),0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
        local_50 = auVar23;
        uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_50,0);
        auVar23 = local_40;
        auVar4 = local_60;
        if ((uVar16 & 1) == 0) {
          *param_1 = 6;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
          return;
        }
      }
      else {
        if (sVar2 != 0x75) {
          if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar22 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                             (lVar20,*(undefined2 *)(lVar19 + (long)(int)uVar18 * 2 + 0x20),0);
          uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0c0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar22,uVar17);
        }
        lVar20 = Newtonsoft_Json_JsonTextReader__ParseNullAsync
                           (lVar20,*(undefined8 *)(param_1 + 10),0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
        local_50 = auVar23;
        uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_50,0);
        auVar23 = local_40;
        auVar4 = local_60;
        if ((uVar16 & 1) == 0) {
          *param_1 = 5;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
          return;
        }
      }
    }
LAB_0765fb24:
    local_40 = auVar23;
    local_60 = auVar4;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
  }
  else {
    if (10 < iVar15) {
      if (2 < iVar15 - 0xbU) {
        if (iVar15 == 0xe) {
          local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          *param_1 = -1;
          goto LAB_0765fda8;
        }
        if (iVar15 != 0xf) goto LAB_0765f91c;
      }
      goto LAB_0765fb10;
    }
    if (iVar15 == 8) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = -1;
LAB_0765fdcc:
      local_40 = auVar7;
      local_50 = auVar9;
      FUN_06dab358(local_70,DAT_0919ba68);
    }
    else {
      if (iVar15 == 9) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
LAB_0765fbd0:
        local_40 = auVar11;
        local_50 = auVar12;
        uVar16 = FUN_06daae34(local_60,DAT_0919b9d8);
        if ((uVar16 & 1) == 0) {
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        else {
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar19 = *(long *)(lVar20 + 0x80);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar18 = *(int *)(lVar20 + 0x8c) + 1;
          if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(short *)(lVar19 + (long)(int)uVar18 * 2 + 0x20) == 0x49) {
            lVar20 = Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinityAsync
                               (lVar20,0,*(undefined8 *)(param_1 + 10),0);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_70 = FUN_062ee72c(lVar20,0,DAT_091bcca8);
            uVar16 = FUN_06dab310(local_70,DAT_0919ba70);
            auVar3 = local_60;
            auVar13 = local_40;
            auVar14 = local_50;
            if ((uVar16 & 1) == 0) {
              *param_1 = 10;
              *(undefined1 (*) [16])(param_1 + 0x18) = local_70;
              thunk_FUN_03f5d7b8(param_1 + 0x18,0);
              if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045d4868(param_1 + 2,local_70,param_1,DAT_09198420);
              return;
            }
            goto LAB_0765fba4;
          }
        }
        lVar20 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                           (lVar20,0,*(undefined8 *)(param_1 + 10),0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar23 = System_Threading_Tasks_Task__ConfigureAwait(lVar20,0,0);
        local_50 = auVar23;
        uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_50,0);
        auVar23 = local_40;
        auVar4 = local_60;
        if ((uVar16 & 1) == 0) {
          *param_1 = 0xb;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045d7628(param_1 + 2,local_50,param_1,DAT_091984c0);
          return;
        }
        goto LAB_0765fb24;
      }
      local_40 = ZEXT816(0);
      local_50 = ZEXT816(0);
      if (iVar15 != 10) goto LAB_0765f91c;
      local_70 = *(undefined1 (*) [16])(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      *param_1 = -1;
LAB_0765fba4:
      local_60 = auVar3;
      local_40 = auVar13;
      local_50 = auVar14;
      FUN_06dab358(local_70,DAT_0919ba68);
    }
  }
LAB_0765fb30:
  uVar22 = 1;
LAB_0765fb34:
  iVar15 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar15 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar22,DAT_091985d0);
  return;
}

