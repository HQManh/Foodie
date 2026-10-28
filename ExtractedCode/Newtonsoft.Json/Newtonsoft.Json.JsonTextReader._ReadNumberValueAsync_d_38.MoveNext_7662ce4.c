// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadNumberValueAsync>d__38$$MoveNext
// address: 0x7662ce4
// body: available
// range: 0x7662ce4-0x766337b inclusive
// range: 0x7663418-0x7663487 inclusive
// range: 0x7663494-0x7663497 inclusive
// range: 0x766349c-0x766349f inclusive
// range: 0x76634a4-0x7663bd7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76632c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76632e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7663370 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7663374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7663378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38__MoveNext(int *param_1)

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
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined4 local_74 [3];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0952240d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198dc0);
    FUN_03f5c2a4(&DAT_09198dd8);
    FUN_03f5c2a4(&DAT_09198db0);
    FUN_03f5c2a4(&DAT_09198e28);
    FUN_03f5c2a4(&DAT_09175280);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_0952240d = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar10 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  iVar1 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar12 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  plVar19 = *(long **)(param_1 + 8);
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
          goto LAB_0766373c;
        }
        if (iVar1 == 2) {
          local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          *param_1 = -1;
LAB_07662e7c:
          local_40 = auVar9;
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_50,0);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar14 = Newtonsoft_Json_JsonTextReader__FinishReadQuotedNumber(plVar19,param_1[0xc],0);
          goto LAB_07663440;
        }
        goto LAB_076630c0;
      }
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
    }
    else {
      if (iVar1 < 5) {
        if (iVar1 == 3) goto LAB_07662fdc;
        if (iVar1 == 4) {
          local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          *param_1 = -1;
          local_40 = ZEXT816(0);
          local_50 = ZEXT816(0);
LAB_07662e04:
          uVar14 = FUN_06dab358(local_60,DAT_0919ba68);
          goto LAB_07663440;
        }
      }
      else {
        if (iVar1 == 5) {
          local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          *param_1 = -1;
LAB_07663018:
          local_40 = auVar5;
          local_50 = auVar6;
          uVar14 = FUN_06dab358(local_60,DAT_0919ba68);
          goto LAB_07663440;
        }
        if (iVar1 == 6) {
          local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          *param_1 = -1;
LAB_07662ef4:
          local_50 = auVar11;
          uVar16 = FUN_06daae34(local_40,DAT_0919b9d8);
          if ((uVar16 & 1) == 0) {
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          else {
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar15 = plVar19[0x10];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(int *)((long)plVar19 + 0x8c) + 1;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(short *)(lVar15 + (long)(int)uVar2 * 2 + 0x20) == 0x49) {
              lVar15 = Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinityAsync
                                 (plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_60 = FUN_062ee72c(lVar15,0,DAT_091bcca8);
              uVar16 = FUN_06dab310(local_60,DAT_0919ba70);
              auVar21 = local_40;
              auVar12 = local_50;
              if ((uVar16 & 1) == 0) {
                *param_1 = 7;
                *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
                thunk_FUN_03f5d7b8(param_1 + 0x16,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045e11d0(param_1 + 2,local_60,param_1,DAT_09198dc0);
                return;
              }
              goto LAB_07663090;
            }
          }
          lVar15 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                             (plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
          local_50 = auVar21;
          uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                             (local_50,0);
          auVar4 = local_40;
          if ((uVar16 & 1) == 0) {
            *param_1 = 8;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x12,0);
            if (*(int *)(DAT_09175280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
            return;
          }
          goto LAB_076631bc;
        }
      }
LAB_076630c0:
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonTextReader__EnsureBuffer(plVar19,0);
      uVar2 = *(uint *)((long)plVar19 + 0x24);
      if (0xc < uVar2) {
LAB_076632e8:
        lVar15 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_74[0] = *(undefined4 *)((long)plVar19 + 0x24);
        uVar17 = thunk_FUN_03fc39d4(&DAT_09191fb8);
        uVar17 = FUN_03f5c42c(uVar17,local_74);
        uVar18 = thunk_FUN_03fc39d4(&DAT_09211e30);
        uVar14 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar18,uVar14,uVar17,0);
        uVar14 = Newtonsoft_Json_JsonReaderException__Create(plVar19,uVar14,0);
        uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0e0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar14,uVar17);
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) != 0) goto LAB_07663754;
      if (uVar2 != 8) {
        if (uVar2 != 0xc) goto LAB_076632e8;
        lVar15 = Newtonsoft_Json_JsonTextReader__ReadFinishedAsync
                           (plVar19,*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
        uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                           (local_50,0);
        auVar4._8_8_ = local_40._8_8_;
        auVar4._0_8_ = local_40._0_8_;
        if ((uVar16 & 1) == 0) {
          *param_1 = 0xc;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x12,0);
          if (*(int *)(DAT_09175280 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
          return;
        }
        goto LAB_07662ff0;
      }
      lVar15 = Newtonsoft_Json_JsonTextReader__ParsePostValueAsync
                         (plVar19,1,*(undefined8 *)(param_1 + 10),0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = FUN_062e82b0(lVar15,0,DAT_091bcba0);
      uVar16 = FUN_06daadec(local_40,DAT_0919b9e0);
      if ((uVar16 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09175280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045df8b0(param_1 + 2,local_40,param_1,DAT_09198db0);
        return;
      }
    }
    uVar16 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar16 & 1) == 0) {
LAB_07663754:
      do {
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = plVar19[0x10];
        lVar13 = DAT_09535460;
joined_r0x0766375c:
        DAT_09535460 = lVar13;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)((long)plVar19 + 0x8c);
        if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(ushort *)(lVar15 + (long)(int)uVar2 * 2 + 0x20);
        uVar20 = (uint)uVar3;
        if (0x39 < uVar3) {
          if (uVar3 < 0x4f) {
            if (uVar20 == 0x49) {
              lVar15 = Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinityAsync
                                 (plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_60 = FUN_062ee72c(lVar15,0,DAT_091bcca8);
              uVar16 = FUN_06dab310(local_60,DAT_0919ba70);
              auVar5 = local_40;
              auVar6 = local_50;
              if ((uVar16 & 1) == 0) {
                *param_1 = 5;
                *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
                thunk_FUN_03f5d7b8(param_1 + 0x16,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045e11d0(param_1 + 2,local_60,param_1,DAT_09198dc0);
                return;
              }
              goto LAB_07663018;
            }
            if (uVar3 == 0x4e) {
              lVar15 = Newtonsoft_Json_JsonTextReader__ParseNumberNaNAsync
                                 (plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_60 = FUN_062ee72c(lVar15,0,DAT_091bcca8);
              uVar16 = FUN_06dab310(local_60,DAT_0919ba70);
              if ((uVar16 & 1) == 0) {
                *param_1 = 4;
                *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
                thunk_FUN_03f5d7b8(param_1 + 0x16,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045e11d0(param_1 + 2,local_60,param_1,DAT_09198dc0);
                return;
              }
              goto LAB_07662e04;
            }
          }
          else {
            if (uVar3 == 0x5d) {
              *(uint *)((long)plVar19 + 0x8c) = uVar2 + 1;
              if ((1 < *(int *)((long)plVar19 + 0x24) - 5U) && (*(int *)((long)plVar19 + 0x24) != 8)
                 ) {
                uVar14 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                                   (plVar19,0x5d,0);
                uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0e0);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar14,uVar17);
              }
              Newtonsoft_Json_JsonReader__SetToken(plVar19,0xe,0);
              uVar14 = 0;
              goto LAB_07663440;
            }
            if (uVar20 == 0x6e) {
              lVar15 = Newtonsoft_Json_JsonTextReader__HandleNullAsync
                                 (plVar19,*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
              local_50 = auVar21;
              uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                 (local_50,0);
              auVar4 = local_40;
              if ((uVar16 & 1) == 0) {
                *param_1 = 3;
                *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0x12,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
                return;
              }
              goto LAB_07662ff0;
            }
          }
LAB_07663524:
          *(uint *)((long)plVar19 + 0x8c) = uVar2 + 1;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar16 = System_Char__IsWhiteSpace(uVar20,0);
          if ((uVar16 & 1) == 0) {
            uVar14 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException
                               (plVar19,uVar20,0);
            uVar17 = thunk_FUN_03fc39d4(&DAT_091ec0e0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar14,uVar17);
          }
LAB_07663580:
          lVar15 = plVar19[0x10];
          lVar13 = DAT_09535460;
          goto joined_r0x0766375c;
        }
        if (uVar3 != 0) {
          if (uVar3 < 0x20) {
            if (uVar3 == 9) {
LAB_07663578:
              *(uint *)((long)plVar19 + 0x8c) = uVar2 + 1;
            }
            else {
              if (uVar3 != 10) {
                if (uVar3 != 0xd) goto LAB_07663524;
                lVar15 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                                   (plVar19,0,*(undefined8 *)(param_1 + 10),0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
                local_50 = auVar21;
                uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                   (local_50,0);
                auVar8 = local_40;
                if ((uVar16 & 1) == 0) {
                  *param_1 = 0xb;
                  *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
                  thunk_FUN_03f5d7b8(param_1 + 0x12,0);
                  if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
                  return;
                }
                goto LAB_07662ec0;
              }
              Newtonsoft_Json_JsonTextReader__ProcessLineFeed(plVar19,0);
            }
            goto LAB_07663580;
          }
          if (uVar3 < 0x2c) {
            if (uVar3 == 0x20) goto LAB_07663578;
            if ((uVar20 == 0x22) || (uVar20 == 0x27)) {
              lVar15 = Newtonsoft_Json_JsonTextReader__ParseStringAsync
                                 (plVar19,uVar3,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
              local_50 = auVar21;
              uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                 (local_50,0);
              auVar9 = local_40;
              if ((uVar16 & 1) == 0) {
                *param_1 = 2;
                *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0x12,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
                return;
              }
              goto LAB_07662e7c;
            }
          }
          else {
            if (uVar3 < 0x2e) {
              if (uVar20 == 0x2c) {
                Newtonsoft_Json_JsonTextReader__ProcessValueComma(plVar19,0);
                goto LAB_07663580;
              }
              if (uVar20 != 0x2d) goto LAB_07663524;
              lVar15 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                                 (plVar19,1,1,*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar21 = FUN_062e82b0(lVar15,0,DAT_091bcba0);
              local_40 = auVar21;
              uVar16 = FUN_06daadec(local_40,DAT_0919b9e0);
              auVar11 = local_50;
              if ((uVar16 & 1) == 0) {
                *param_1 = 6;
                *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
                thunk_FUN_03f5d7b8(param_1 + 0xe,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045df8b0(param_1 + 2,local_40,param_1,DAT_09198db0);
                return;
              }
              goto LAB_07662ef4;
            }
            if ((uVar20 - 0x30 < 10) || (uVar20 == 0x2e)) {
              lVar15 = Newtonsoft_Json_JsonTextReader__ParseNumberAsync
                                 (plVar19,param_1[0xc],*(undefined8 *)(param_1 + 10),0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
              local_50 = auVar21;
              uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                                 (local_50,0);
              auVar10 = local_40;
              if ((uVar16 & 1) == 0) {
                *param_1 = 9;
                *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
                thunk_FUN_03f5d7b8(param_1 + 0x12,0);
                if (*(int *)(DAT_09175280 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
                return;
              }
              goto LAB_07663418;
            }
            if (uVar20 == 0x2f) goto LAB_076639dc;
          }
          goto LAB_07663524;
        }
        lVar15 = Newtonsoft_Json_JsonTextReader__ReadNullCharAsync
                           (plVar19,*(undefined8 *)(param_1 + 10),0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar21 = FUN_062e82b0(lVar15,0,DAT_091bcba0);
        local_40 = auVar21;
        uVar16 = FUN_06daadec(local_40,DAT_0919b9e0);
        auVar7 = local_50;
        if ((uVar16 & 1) == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 0xe,0);
          if (*(int *)(DAT_09175280 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045df8b0(param_1 + 2,local_40,param_1,DAT_09198db0);
          return;
        }
LAB_0766373c:
        local_50 = auVar7;
        uVar16 = FUN_06daae34(local_40,DAT_0919b9d8);
        if ((uVar16 & 1) != 0) {
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Newtonsoft_Json_JsonReader__SetToken(plVar19,0,0,0,0);
          uVar14 = 0;
          goto LAB_07663440;
        }
      } while( true );
    }
    uVar14 = 0;
  }
  else {
    if (iVar1 < 10) {
      if (iVar1 == 7) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
LAB_07663090:
        local_40 = auVar21;
        local_50 = auVar12;
        uVar14 = FUN_06dab358(local_60,DAT_0919ba68);
        goto LAB_07663440;
      }
      if (iVar1 == 8) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        *param_1 = -1;
LAB_076631bc:
        local_40 = auVar4;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_50,0);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar14 = (**(code **)(*plVar19 + 0x248))(plVar19,*(undefined8 *)(*plVar19 + 0x250));
        goto LAB_07663440;
      }
      if (iVar1 == 9) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        *param_1 = -1;
LAB_07663418:
        local_40 = auVar10;
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_50,0);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar14 = (**(code **)(*plVar19 + 0x248))(plVar19,*(undefined8 *)(*plVar19 + 0x250));
        goto LAB_07663440;
      }
      goto LAB_076630c0;
    }
    if (iVar1 - 10U < 2) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_07662ec0;
    }
    if (iVar1 != 0xc) goto LAB_076630c0;
LAB_07662fdc:
    local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_07662ff0:
    local_40 = auVar4;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    uVar14 = 0;
  }
LAB_07663440:
  iVar1 = *(int *)(DAT_09175280 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar14,DAT_09198e28);
  return;
LAB_076639dc:
  lVar15 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                     (plVar19,0,*(undefined8 *)(param_1 + 10),0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar21 = System_Threading_Tasks_Task__ConfigureAwait(lVar15,0,0);
  local_50 = auVar21;
  uVar16 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                     (local_50,0);
  auVar8 = local_40;
  if ((uVar16 & 1) == 0) {
    *param_1 = 10;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    if (*(int *)(DAT_09175280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045f2630(param_1 + 2,local_50,param_1,DAT_09198dd8);
    return;
  }
LAB_07662ec0:
  local_40 = auVar8;
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  goto LAB_07663754;
}

