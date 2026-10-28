// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadStringValueAsync>d__37$$MoveNext
// address: 0x7664b90
// body: available
// range: 0x7664b90-0x76651bb inclusive
// range: 0x766524c-0x76652df inclusive
// range: 0x76652f8-0x7665c1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7665104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766510c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766511c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7665124 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76651b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76651b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76651b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadStringValueAsync>d__37__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
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
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint uVar22;
  undefined1 auVar24 [16];
  undefined4 local_74 [3];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  uint uVar23;
  
  if ((DAT_09522411 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198dc8);
    FUN_03f5c2a4(&DAT_09198de0);
    FUN_03f5c2a4(&DAT_09198db8);
    FUN_03f5c2a4(&DAT_09198e28);
    FUN_03f5c2a4(&DAT_09175280);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_09522411 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar12 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar24 = ZEXT816(0);
  iVar1 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar13 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  plVar21 = *(long **)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (iVar1 < 7) {
    if (iVar1 < 3) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          *param_1 = -1;
          goto LAB_07665590;
        }
        if (iVar1 == 2) {
          local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          *param_1 = -1;
LAB_07664d0c:
          local_40 = auVar7;
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_50,0);
          if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar16 = Newtonsoft_Json_JsonTextReader__FinishReadQuotedStringValue
                             (plVar21,param_1[0xc],0);
          goto LAB_07665614;
        }
        goto LAB_07664efc;
      }
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_07664e6c:
      uVar15 = FUN_06daae34(local_40,DAT_0919b9d8);
      if ((uVar15 & 1) != 0) {
        uVar16 = 0;
        goto LAB_07665614;
      }
LAB_076652f8:
      while( true ) {
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar14 = plVar21[0x10];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)((long)plVar21 + 0x8c);
        if (*(uint *)(lVar14 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(ushort *)(lVar14 + (long)(int)uVar2 * 2 + 0x20);
        uVar22 = (uint)uVar3;
        uVar23 = (uint)uVar3;
        if (0x49 < uVar3) break;
        if (uVar3 < 0xe) {
          if (uVar22 != 0) {
            if (uVar23 == 9) {
LAB_076655d8:
              *(uint *)((long)plVar21 + 0x8c) = uVar2 + 1;
            }
            else {
              if (uVar23 != 10) {
                if (uVar22 == 0xd) {
                  lVar14 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                                     (plVar21,0,*(undefined8 *)(param_1 + 10),0);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
                  local_50 = auVar24;
                  uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                     (local_50,0);
                  auVar9 = local_40;
                  if ((uVar15 & 1) == 0) {
                    *param_1 = 0xb;
                    *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
                    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                    if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
                    return;
                  }
                  goto LAB_07665474;
                }
                goto LAB_076654ec;
              }
              Newtonsoft_Json_JsonTextReader__ProcessLineFeed(plVar21,0);
            }
            goto LAB_076655a8;
          }
          lVar14 = Newtonsoft_Json_JsonTextReader__ReadNullCharAsync
                             (plVar21,*(undefined8 *)(param_1 + 10),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar24 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
          local_40 = auVar24;
          uVar15 = FUN_06daadec(local_40,DAT_0919b9e0);
          auVar13 = local_50;
          if ((uVar15 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            if (*(int *)(DAT_09175280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045dfaf8(param_1 + 2,local_40,param_1,DAT_09198db8);
            return;
          }
LAB_07665590:
          local_50 = auVar13;
          uVar15 = FUN_06daae34(local_40,DAT_0919b9d8);
          if ((uVar15 & 1) != 0) {
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Newtonsoft_Json_JsonReader__SetToken(plVar21,0,0,0,0);
            uVar16 = 0;
            goto LAB_07665614;
          }
        }
        else if (uVar3 < 0x28) {
          if (uVar3 < 0x23) {
            if (uVar3 == 0x20) goto LAB_076655d8;
            if (uVar3 != 0x21) {
              if (uVar23 != 0x22) goto LAB_07665980;
              goto LAB_076658e8;
            }
          }
          else if (3 < uVar23 - 0x23) {
            if (uVar23 != 0x27) goto LAB_07665980;
LAB_076658e8:
            lVar14 = Newtonsoft_Json_JsonTextReader__ParseStringAsync
                               (plVar21,uVar23,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
            local_50 = auVar24;
            uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                               (local_50,0);
            auVar7 = local_40;
            if ((uVar15 & 1) == 0) {
              *param_1 = 2;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
              return;
            }
            goto LAB_07664d0c;
          }
LAB_076654ec:
          *(uint *)((long)plVar21 + 0x8c) = uVar2 + 1;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = System_Char__IsWhiteSpace(uVar22,0);
          if ((uVar15 & 1) == 0) {
            uVar16 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                               (plVar21,uVar23,0);
            uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar16,uVar17);
          }
        }
        else {
          if (uVar3 < 0x2c) goto LAB_076654ec;
          if (uVar3 < 0x2f) {
            if (uVar3 != 0x2c) {
              if (uVar3 != 0x2d) {
                if (uVar23 == 0x2e) goto LAB_0766567c;
                goto LAB_07665980;
              }
              lVar14 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                                 (plVar21,1,1,*(undefined8 *)(param_1 + 10),0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar24 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
              local_40 = auVar24;
              uVar15 = FUN_06daadec(local_40,DAT_0919b9e0);
              auVar8 = local_50;
              if ((uVar15 & 1) == 0) {
                *param_1 = 3;
                *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
                thunk_FUN_03f5d7b8(param_1 + 0xe,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045dfaf8(param_1 + 2,local_40,param_1,DAT_09198db8);
                return;
              }
              goto LAB_07664dc0;
            }
            Newtonsoft_Json_JsonTextReader__ProcessValueComma(plVar21,0);
          }
          else {
            if (uVar23 != 0x2f) {
              if (9 < uVar22 - 0x30) {
LAB_07665980:
                if (uVar22 != 0x49) goto LAB_076654ec;
                lVar14 = Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinityAsync
                                   (plVar21,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_60 = FUN_062ee72c(lVar14,0,DAT_091bcca8);
                uVar15 = FUN_06dab310(local_60,DAT_0919ba70);
                auVar11 = local_50;
                auVar12 = local_40;
                if ((uVar15 & 1) == 0) {
                  *param_1 = 7;
                  *(undefined1 (*) [16])(param_1 + 0x18) = local_60;
                  thunk_FUN_03f5d7b8(param_1 + 0x18,0);
                  if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  FUN_045e1418(param_1 + 2,local_60,param_1,DAT_09198dc8);
                  return;
                }
                goto LAB_07664eb8;
              }
LAB_0766567c:
              if (param_1[0xc] != 4) {
                *(uint *)((long)plVar21 + 0x8c) = uVar2 + 1;
                uVar16 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                                   (plVar21,uVar22,0);
                uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar16,uVar17);
              }
              lVar14 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                                 (plVar21,4,*(undefined8 *)(param_1 + 10),0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
              local_50 = auVar24;
              uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                 (local_50,0);
              auVar10 = local_40;
              if ((uVar15 & 1) == 0) {
                *param_1 = 5;
                *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0x14,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
                return;
              }
              goto LAB_07664e30;
            }
            lVar14 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                               (plVar21,0,*(undefined8 *)(param_1 + 10),0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
            local_50 = auVar24;
            uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                               (local_50,0);
            auVar9 = local_40;
            if ((uVar15 & 1) == 0) {
              *param_1 = 10;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
              return;
            }
LAB_07665474:
            local_40 = auVar9;
            System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                      (local_50,0);
          }
        }
LAB_076655a8:
        piVar19 = param_1 + 0x12;
        piVar19[0] = 0;
        piVar19[1] = 0;
        thunk_FUN_03f5d7b8(piVar19,0);
      }
      if (uVar3 < 0x5e) {
        if (uVar3 == 0x4e) {
          lVar14 = Newtonsoft_Json_JsonTextReader__ParseNumberNaNAsync
                             (plVar21,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_60 = FUN_062ee72c(lVar14,0,DAT_091bcca8);
          uVar15 = FUN_06dab310(local_60,DAT_0919ba70);
          auVar5 = local_50;
          auVar6 = local_40;
          if ((uVar15 & 1) == 0) {
            *param_1 = 8;
            *(undefined1 (*) [16])(param_1 + 0x18) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0x18,0);
            if (*(int *)(DAT_09175280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045e1418(param_1 + 2,local_60,param_1,DAT_09198dc8);
            return;
          }
          goto LAB_07664ee4;
        }
        if (uVar3 != 0x5d) goto LAB_076654ec;
        *(uint *)((long)plVar21 + 0x8c) = uVar2 + 1;
        if ((1 < *(int *)((long)plVar21 + 0x24) - 5U) && (*(int *)((long)plVar21 + 0x24) != 8)) {
          uVar16 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                             (plVar21,0x5d,0);
          uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar16,uVar17);
        }
        Newtonsoft_Json_JsonReader__SetToken(plVar21,0xe,0);
        uVar16 = 0;
        goto LAB_07665614;
      }
      if (uVar3 != 0x66) {
        if (uVar3 == 0x6e) {
          lVar14 = Newtonsoft_Json_JsonTextReader__HandleNullAsync
                             (plVar21,*(undefined8 *)(param_1 + 10),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
          local_50 = auVar24;
          uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                             (local_50,0);
          auVar24 = local_40;
          if ((uVar15 & 1) == 0) {
            *param_1 = 9;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_09175280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
            return;
          }
          goto LAB_07664d98;
        }
        if (uVar3 != 0x74) goto LAB_076654ec;
      }
      if (param_1[0xc] != 4) {
        *(uint *)((long)plVar21 + 0x8c) = uVar2 + 1;
        uVar16 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                           (plVar21,uVar23,0);
        uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar16,uVar17);
      }
      if (uVar23 == 0x74) {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar20 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 8);
      }
      else {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar20 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x10);
      }
      *(undefined8 *)(param_1 + 0x12) = *puVar20;
      thunk_FUN_03f5d7b8();
      lVar14 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparatorAsync
                         (plVar21,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 10),0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar24 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
      local_40 = auVar24;
      uVar15 = FUN_06daadec(local_40,DAT_0919b9e0);
      auVar4 = local_50;
      if ((uVar15 & 1) == 0) {
        *param_1 = 6;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09175280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045dfaf8(param_1 + 2,local_40,param_1,DAT_09198db8);
        return;
      }
    }
    else {
      if (iVar1 < 5) {
        if (iVar1 == 3) {
          local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          *param_1 = -1;
LAB_07664dc0:
          local_50 = auVar8;
          uVar15 = FUN_06daae34(local_40,DAT_0919b9d8);
          if ((uVar15 & 1) == 0) {
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          else {
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar14 = plVar21[0x10];
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(int *)((long)plVar21 + 0x8c) + 1;
            if (*(uint *)(lVar14 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(short *)(lVar14 + (long)(int)uVar2 * 2 + 0x20) == 0x49) {
              uVar16 = Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinity
                                 (plVar21,param_1[0xc],0);
              goto LAB_07665614;
            }
          }
          lVar14 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                             (plVar21,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar24 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
          local_50 = auVar24;
          uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                             (local_50,0);
          if ((uVar15 & 1) == 0) {
            *param_1 = 4;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_09175280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
            return;
          }
        }
        else {
          if (iVar1 != 4) goto LAB_07664efc;
          local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          *param_1 = -1;
          local_40 = ZEXT816(0);
        }
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_50,0);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar16 = (**(code **)(*plVar21 + 0x248))(plVar21,*(undefined8 *)(*plVar21 + 0x250));
        goto LAB_07665614;
      }
      if (iVar1 == 5) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
LAB_07664e30:
        local_40 = auVar10;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_50,0);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar16 = (**(code **)(*plVar21 + 0x248))(plVar21,*(undefined8 *)(*plVar21 + 0x250));
        goto LAB_07665614;
      }
      if (iVar1 != 6) goto LAB_07664efc;
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
    }
    local_50 = auVar4;
    uVar15 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar15 & 1) == 0) {
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar14 = plVar21[0x10];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)((long)plVar21 + 0x8c) < *(uint *)(lVar14 + 0x18)) {
        uVar16 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                           (plVar21,*(undefined2 *)
                                     (lVar14 + (long)(int)*(uint *)((long)plVar21 + 0x8c) * 2 + 0x20
                                     ),0);
        uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar16,uVar17);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_JsonReader__SetToken(plVar21,9,*(undefined8 *)(param_1 + 0x12),0);
    uVar16 = *(undefined8 *)(param_1 + 0x12);
  }
  else {
    if (iVar1 < 10) {
      if (iVar1 == 7) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x18);
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        *param_1 = -1;
LAB_07664eb8:
        local_50 = auVar11;
        local_40 = auVar12;
        uVar16 = FUN_06dab358(local_60,DAT_0919ba68);
        goto LAB_07665614;
      }
      if (iVar1 == 8) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x18);
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        *param_1 = -1;
LAB_07664ee4:
        local_50 = auVar5;
        local_40 = auVar6;
        uVar16 = FUN_06dab358(local_60,DAT_0919ba68);
        goto LAB_07665614;
      }
      if (iVar1 == 9) goto LAB_07664d84;
LAB_07664efc:
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonTextReader__EnsureBuffer(plVar21,0);
      uVar2 = *(uint *)((long)plVar21 + 0x24);
      if (0xc < uVar2) {
LAB_07665128:
        lVar14 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_74[0] = *(undefined4 *)((long)plVar21 + 0x24);
        uVar17 = thunk_FUN_03fc39d4(&DAT_09191fb8);
        uVar17 = FUN_03f5c42c(uVar17,local_74);
        uVar18 = thunk_FUN_03fc39d4(&DAT_09211e30);
        uVar16 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar18,uVar16,uVar17,0);
        uVar16 = Newtonsoft_Json_JsonReaderException__Create(plVar21,uVar16,0);
        uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar16,uVar17);
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) != 0) goto LAB_076652f8;
      if (uVar2 == 8) {
        lVar14 = Newtonsoft_Json_JsonTextReader__ParsePostValueAsync
                           (plVar21,1,*(undefined8 *)(param_1 + 10),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_40 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
        uVar15 = FUN_06daadec(local_40,DAT_0919b9e0);
        if ((uVar15 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 0xe,0);
          if (*(int *)(DAT_09175280 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045dfaf8(param_1 + 2,local_40,param_1,DAT_09198db8);
          return;
        }
        goto LAB_07664e6c;
      }
      if (uVar2 != 0xc) goto LAB_07665128;
      lVar14 = Newtonsoft_Json_JsonTextReader__ReadFinishedAsync
                         (plVar21,*(undefined8 *)(param_1 + 10),0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
      uVar15 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                         (local_50,0);
      auVar24._8_8_ = local_40._8_8_;
      auVar24._0_8_ = local_40._0_8_;
      if ((uVar15 & 1) == 0) {
        *param_1 = 0xc;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        if (*(int *)(DAT_09175280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045f2878(param_1 + 2,local_50,param_1,DAT_09198de0);
        return;
      }
    }
    else {
      if (iVar1 - 10U < 2) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        goto LAB_07665474;
      }
      if (iVar1 != 0xc) goto LAB_07664efc;
LAB_07664d84:
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
    }
LAB_07664d98:
    local_40 = auVar24;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    uVar16 = 0;
  }
LAB_07665614:
  iVar1 = *(int *)(DAT_09175280 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar16,DAT_09198e28);
  return;
}

