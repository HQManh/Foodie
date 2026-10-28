// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadStringIntoBufferAsync>d__9$$MoveNext
// address: 0x7663df4
// body: available
// range: 0x7663df4-0x766400f inclusive
// range: 0x7664014-0x7664067 inclusive
// range: 0x7664078-0x7664717 inclusive
// range: 0x766489c-0x7664ad3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766400c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766451c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766452c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76645b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76645bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7664650 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadStringIntoBufferAsync>d__9__MoveNext(int *param_1)

{
  uint uVar1;
  ushort uVar2;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined2 uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined2 local_38 [2];
  ushort local_34 [2];
  
  if ((DAT_0952240f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1528);
    FUN_03f5c2a4(&DAT_091c1298);
    FUN_03f5c2a4(&DAT_091c1248);
    FUN_03f5c2a4(&DAT_091c1268);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919b918);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919b9f8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba00);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcbd0);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_0952240f = 1;
  }
  local_34[0] = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar18 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar29 = ZEXT816(0);
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  auVar15 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar13 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  iVar20 = *param_1;
  lVar28 = *(long *)(param_1 + 8);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar19 = ZEXT816(0);
  auVar17 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (iVar20 < 3) {
    if (iVar20 == 0) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_0766432c;
    }
    if (iVar20 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_076641b8;
    }
    if (iVar20 == 2) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
      local_60 = auVar6;
      local_50 = ZEXT816(0);
      local_80 = ZEXT816(0);
      goto LAB_07664014;
    }
  }
  else {
    if (iVar20 == 3) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_076648e4;
    }
    if (iVar20 == 4) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
      goto LAB_07664994;
    }
    if (iVar20 == 5) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *param_1 = -1;
      goto LAB_076642c0;
    }
  }
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar20 = *(int *)(lVar28 + 0x8c);
  param_1[0xd] = iVar20;
  param_1[0xe] = iVar20;
  param_1[0xf] = iVar20;
  *(undefined4 *)(lVar28 + 0xa8) = 0;
LAB_07664078:
  do {
    if (lVar28 == 0) {
      local_50 = auVar29;
      local_80 = auVar3;
      local_70 = auVar4;
      local_60 = auVar6;
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar26 = param_1[0xd];
    lVar27 = *(long *)(lVar28 + 0x80);
LAB_07664088:
    uVar1 = uVar26 + 1;
    param_1[0xd] = uVar1;
    local_60 = auVar6;
    local_80 = auVar3;
    local_50 = auVar29;
    local_70 = auVar4;
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar27 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = *(ushort *)(lVar27 + (long)(int)uVar26 * 2 + 0x20);
    if (0xd < uVar2) {
      if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
        if (uVar2 == *(ushort *)(param_1 + 0xc)) {
          Newtonsoft_Json_JsonTextReader__FinishReadStringIntoBuffer
                    (lVar28,uVar26,param_1[0xe],param_1[0xf],0);
          *param_1 = -2;
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
          return;
        }
      }
      else if (uVar2 == 0x5c) {
        *(uint *)(lVar28 + 0x8c) = uVar1;
        lVar27 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                           (lVar28,0,1,*(undefined8 *)(param_1 + 10),0);
        if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar29 = FUN_062e82b0(lVar27,0,DAT_091bcba0);
        local_60 = auVar29;
        uVar22 = FUN_06daadec(local_60,DAT_0919b9e0);
        auVar7 = local_50;
        auVar8 = local_80;
        auVar9 = local_70;
        if ((uVar22 & 1) == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_049909c0(param_1 + 2,local_60,param_1,DAT_091c1248);
          return;
        }
LAB_076641b8:
        local_50 = auVar7;
        local_80 = auVar8;
        local_70 = auVar9;
        uVar22 = FUN_06daae34(local_60,DAT_0919b9d8);
        if ((uVar22 & 1) == 0) {
          lVar27 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar27 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar21 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          local_38[0] = (undefined2)param_1[0xc];
          uVar23 = FUN_03f5c42c(DAT_09535460,local_38);
          uVar24 = thunk_FUN_03fc39d4(&DAT_09212738);
          uVar21 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar24,uVar21,uVar23,0);
          uVar21 = Newtonsoft_Json_JsonReaderException__Create(lVar28,uVar21,0);
          uVar23 = thunk_FUN_03fc39d4(&DAT_091ec0e8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar21,uVar23);
        }
        uVar26 = param_1[0xd];
        param_1[0x10] = uVar26 - 1;
        if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar27 = *(long *)(lVar28 + 0x80);
        if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar20 = uVar26 + 1;
        local_34[0] = *(ushort *)(lVar27 + (long)(int)uVar26 * 2 + 0x20);
        param_1[0xd] = iVar20;
        if (local_34[0] < 0x5d) {
          if (local_34[0] < 0x28) {
            if ((local_34[0] != 0x22) && (local_34[0] != 0x27)) {
LAB_07664654:
              *(int *)(lVar28 + 0x8c) = iVar20;
              lVar27 = thunk_FUN_03fc39d4(&DAT_09182ff8);
              if (*(int *)(lVar27 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar21 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar23 = System_Char__ToString(local_34,0);
              uVar24 = thunk_FUN_03fc39d4(&DAT_092145e0);
              uVar23 = System_String__Concat(uVar24,uVar23,0);
              uVar24 = thunk_FUN_03fc39d4(&DAT_091fc850);
              uVar21 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar24,uVar21,uVar23,0);
              uVar21 = Newtonsoft_Json_JsonReaderException__Create(lVar28,uVar21,0);
              uVar23 = thunk_FUN_03fc39d4(&DAT_091ec0e8);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar21,uVar23);
            }
          }
          else if (local_34[0] != 0x2f) {
            if (local_34[0] != 0x5c) goto LAB_07664654;
            uVar25 = 0x5c;
            goto LAB_07664408;
          }
          *(ushort *)(param_1 + 0x11) = local_34[0];
        }
        else {
          if (local_34[0] < 0x67) {
            if (local_34[0] == 0x62) {
              uVar25 = 8;
            }
            else {
              if (local_34[0] != 0x66) goto LAB_07664654;
              uVar25 = 0xc;
            }
          }
          else if (local_34[0] < 0x74) {
            if (local_34[0] == 0x6e) {
              uVar25 = 10;
            }
            else {
              if (local_34[0] != 0x72) goto LAB_07664654;
              uVar25 = 0xd;
            }
          }
          else {
            if (local_34[0] != 0x74) {
              if (local_34[0] != 0x75) goto LAB_07664654;
              *(int *)(lVar28 + 0x8c) = iVar20;
              lVar27 = Newtonsoft_Json_JsonTextReader__ParseUnicodeAsync
                                 (lVar28,*(undefined8 *)(param_1 + 10),0);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar29 = FUN_062e9f88(lVar27,0,DAT_091bcbd0);
              local_70 = auVar29;
              uVar22 = FUN_06daaf64(local_70,DAT_0919ba00);
              if ((uVar22 & 1) == 0) {
                *param_1 = 2;
                *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
                thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
                if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_04990bb0(param_1 + 2,local_70,param_1,DAT_091c1268);
                return;
              }
LAB_07664014:
              uVar21 = FUN_06daafac(local_70,DAT_0919b9f8);
              *(short *)(param_1 + 0x11) = (short)uVar21;
              uVar22 = Newtonsoft_Json_Utilities_StringUtils__IsLowSurrogate(uVar21,0);
              if ((uVar22 & 1) == 0) {
                uVar22 = Newtonsoft_Json_Utilities_StringUtils__IsHighSurrogate
                                   ((short)param_1[0x11],0);
                if ((uVar22 & 1) != 0) {
                  do {
                    *(undefined1 *)(param_1 + 0x1e) = 0;
                    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar27 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                                       (lVar28,2,1,*(undefined8 *)(param_1 + 10),0);
                    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    auVar29 = FUN_062e82b0(lVar27,0,DAT_091bcba0);
                    local_60 = auVar29;
                    uVar22 = FUN_06daadec(local_60,DAT_0919b9e0);
                    auVar5 = local_70;
                    auVar16 = local_50;
                    auVar17 = local_80;
                    if ((uVar22 & 1) == 0) {
                      *param_1 = 3;
                      *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
                      thunk_FUN_03f5d7b8(param_1 + 0x16,0);
                      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      FUN_049909c0(param_1 + 2,local_60,param_1,DAT_091c1248);
                      return;
                    }
LAB_076648e4:
                    local_70 = auVar5;
                    local_50 = auVar16;
                    local_80 = auVar17;
                    uVar22 = FUN_06daae34(local_60,DAT_0919b9d8);
                    if ((uVar22 & 1) == 0) {
LAB_07664a08:
                      *(undefined2 *)(param_1 + 0x11) = 0xfffd;
                    }
                    else {
                      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar27 = *(long *)(lVar28 + 0x80);
                      if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar26 = *(uint *)(lVar28 + 0x8c);
                      if (*(uint *)(lVar27 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      if (*(short *)(lVar27 + (long)(int)uVar26 * 2 + 0x20) != 0x5c)
                      goto LAB_07664a08;
                      if (*(uint *)(lVar27 + 0x18) <= uVar26 + 1) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      if (*(short *)(lVar27 + (long)(int)(uVar26 + 1) * 2 + 0x20) != 0x75)
                      goto LAB_07664a08;
                      *(short *)((long)param_1 + 0x7a) = (short)param_1[0x11];
                      *(uint *)(lVar28 + 0x8c) = uVar26 + 2;
                      lVar27 = Newtonsoft_Json_JsonTextReader__ParseUnicodeAsync
                                         (lVar28,*(undefined8 *)(param_1 + 10),0);
                      if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      auVar29 = FUN_062e9f88(lVar27,0,DAT_091bcbd0);
                      local_70 = auVar29;
                      uVar22 = FUN_06daaf64(local_70,DAT_0919ba00);
                      auVar6 = local_60;
                      auVar18 = local_50;
                      auVar19 = local_80;
                      if ((uVar22 & 1) == 0) {
                        *param_1 = 4;
                        *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
                        thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
                        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        FUN_04990bb0(param_1 + 2,local_70,param_1,DAT_091c1268);
                        return;
                      }
LAB_07664994:
                      local_60 = auVar6;
                      local_50 = auVar18;
                      local_80 = auVar19;
                      uVar21 = FUN_06daafac(local_70,DAT_0919b9f8);
                      *(short *)(param_1 + 0x11) = (short)uVar21;
                      uVar22 = Newtonsoft_Json_Utilities_StringUtils__IsLowSurrogate(uVar21,0);
                      if ((uVar22 & 1) == 0) {
                        uVar22 = Newtonsoft_Json_Utilities_StringUtils__IsHighSurrogate
                                           ((short)param_1[0x11],0);
                        *(undefined2 *)((long)param_1 + 0x7a) = 0xfffd;
                        if ((uVar22 & 1) != 0) {
                          *(undefined1 *)(param_1 + 0x1e) = 1;
                        }
                      }
                      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      Newtonsoft_Json_JsonTextReader__EnsureBufferNotEmpty(lVar28,0);
                      Newtonsoft_Json_JsonTextReader__WriteCharToBuffer
                                (lVar28,*(undefined2 *)((long)param_1 + 0x7a),param_1[0xf],
                                 param_1[0x10],0);
                      param_1[0xf] = *(int *)(lVar28 + 0x8c);
                    }
                  } while ((char)param_1[0x1e] != '\0');
                }
              }
              else {
                *(undefined2 *)(param_1 + 0x11) = 0xfffd;
              }
              if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              param_1[0xd] = *(int *)(lVar28 + 0x8c);
              goto LAB_0766440c;
            }
            uVar25 = 9;
          }
LAB_07664408:
          *(undefined2 *)(param_1 + 0x11) = uVar25;
        }
LAB_0766440c:
        Newtonsoft_Json_JsonTextReader__EnsureBufferNotEmpty(lVar28,0);
        Newtonsoft_Json_JsonTextReader__WriteCharToBuffer
                  (lVar28,(short)param_1[0x11],param_1[0xf],param_1[0x10],0);
        param_1[0xf] = param_1[0xd];
        auVar29 = local_50;
        auVar3 = local_80;
        auVar4 = local_70;
        auVar6 = local_60;
        goto LAB_07664078;
      }
LAB_07664118:
      uVar26 = uVar1;
      lVar27 = *(long *)(lVar28 + 0x80);
      goto LAB_07664088;
    }
    if (uVar2 != 0) {
      if (uVar2 == 10) {
        *(uint *)(lVar28 + 0x8c) = uVar26;
        Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar28,0);
        uVar1 = *(uint *)(lVar28 + 0x8c);
        param_1[0xd] = uVar1;
        auVar29 = local_50;
        auVar3 = local_80;
        auVar4 = local_70;
        auVar6 = local_60;
      }
      else if (uVar2 == 0xd) break;
      goto LAB_07664118;
    }
    if (*(uint *)(lVar28 + 0x88) != uVar26) goto LAB_07664118;
    param_1[0xd] = uVar26;
    lVar27 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar28,1,*(undefined8 *)(param_1 + 10),0)
    ;
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar29 = FUN_062ebc5c(lVar27,0,DAT_091bcc68);
    local_50 = auVar29;
    uVar22 = FUN_06dab0dc(local_50,DAT_0919ba20);
    auVar10 = local_80;
    auVar12 = local_70;
    auVar14 = local_60;
    if ((uVar22 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990e98(param_1 + 2,local_50,param_1,DAT_091c1298);
      return;
    }
LAB_0766432c:
    local_80 = auVar10;
    local_70 = auVar12;
    local_60 = auVar14;
    iVar20 = FUN_06dab124(local_50,DAT_0919ba18);
    auVar29 = local_50;
    auVar3 = local_80;
    auVar4 = local_70;
    auVar6 = local_60;
    if (iVar20 == 0) {
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(int *)(lVar28 + 0x8c) = param_1[0xd];
      lVar27 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar27 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar21 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_38[0] = (undefined2)param_1[0xc];
      uVar23 = FUN_03f5c42c(DAT_09535460,local_38);
      uVar24 = thunk_FUN_03fc39d4(&DAT_09212738);
      uVar21 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar24,uVar21,uVar23,0);
      uVar21 = Newtonsoft_Json_JsonReaderException__Create(lVar28,uVar21,0);
      uVar23 = thunk_FUN_03fc39d4(&DAT_091ec0e8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar21,uVar23);
    }
  } while( true );
  *(uint *)(lVar28 + 0x8c) = uVar26;
  lVar27 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                     (lVar28,1,*(undefined8 *)(param_1 + 10),0);
  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar29 = System_Threading_Tasks_Task__ConfigureAwait(lVar27,0,0);
  local_80 = auVar29;
  uVar22 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                     (local_80,0);
  auVar11 = local_50;
  auVar13 = local_70;
  auVar15 = local_60;
  if ((uVar22 & 1) == 0) {
    *param_1 = 5;
    *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
    thunk_FUN_03f5d7b8(param_1 + 0x20,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049937c8(param_1 + 2,local_80,param_1,DAT_091c1528);
    return;
  }
LAB_076642c0:
  local_50 = auVar11;
  local_70 = auVar13;
  local_60 = auVar15;
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_80,0);
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  param_1[0xd] = *(int *)(lVar28 + 0x8c);
  auVar29 = local_50;
  auVar3 = local_80;
  auVar4 = local_70;
  auVar6 = local_60;
  goto LAB_07664078;
}

