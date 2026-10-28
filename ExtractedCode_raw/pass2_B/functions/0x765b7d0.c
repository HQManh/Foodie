// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParseCommentAsync>d__16$$MoveNext
// address: 0x765b7d0
// body: available
// range: 0x765b7d0-0x765bb5b inclusive
// range: 0x765bba4-0x765bc17 inclusive
// range: 0x765bc28-0x765bf5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765ba94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ba98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ba9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765baa0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765baa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765baa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bb54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bb58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bc10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bc14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765bf38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16__MoveNext(int *param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined2 local_94 [6];
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095223e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14f8);
    FUN_03f5c2a4(&DAT_091c1278);
    FUN_03f5c2a4(&DAT_091c1228);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_095223e3 = 1;
  }
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  auVar7 = ZEXT816(0);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  iVar8 = *param_1;
  lVar16 = *(long *)(param_1 + 8);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar17 = ZEXT816(0);
  local_88 = 0;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      goto LAB_0765b9e4;
    }
    if (iVar8 == 1) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      local_80 = ZEXT816(0);
      local_60 = ZEXT816(0);
      goto LAB_0765bba4;
    }
  }
  else {
    if (iVar8 == 2) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      goto LAB_0765bd48;
    }
    if (iVar8 == 3) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_0765bcf8;
    }
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(int *)(lVar16 + 0x8c) = *(int *)(lVar16 + 0x8c) + 1;
  lVar14 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                     (lVar16,1,0,*(undefined8 *)(param_1 + 10),0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_60 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
  uVar12 = FUN_06daadec(local_60,DAT_0919b9e0);
  if ((uVar12 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049907d0(param_1 + 2,local_60,param_1,DAT_091c1228);
    return;
  }
LAB_0765b9e4:
  uVar12 = FUN_06daae34(local_60,DAT_0919b9d8);
  if ((uVar12 & 1) == 0) {
    uVar10 = thunk_FUN_03fc39d4(&DAT_09211d48);
    uVar10 = Newtonsoft_Json_JsonReaderException__Create(lVar16,uVar10,0);
    uVar11 = thunk_FUN_03fc39d4(&DAT_091ec098);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar11);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = *(long *)(lVar16 + 0x80);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(uint *)(lVar16 + 0x8c);
  if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  sVar2 = *(short *)(lVar14 + (long)(int)uVar4 * 2 + 0x20);
  if (sVar2 == 0x2a) {
    uVar15 = 0;
  }
  else {
    if (sVar2 != 0x2f) {
      lVar14 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar14 = *(long *)(lVar16 + 0x80);
      if (lVar14 != 0) {
        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_94[0] = *(undefined2 *)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x8c) * 2 + 0x20);
        uVar11 = FUN_03f5c42c(DAT_09535460,local_94);
        uVar9 = thunk_FUN_03fc39d4(&DAT_092018c8);
        uVar10 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar10,uVar11,0);
        uVar10 = Newtonsoft_Json_JsonReaderException__Create(lVar16,uVar10,0);
        uVar11 = thunk_FUN_03fc39d4(&DAT_091ec098);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x31) = uVar15;
  *(uint *)(lVar16 + 0x8c) = uVar4 + 1;
  param_1[0xd] = uVar4 + 1;
LAB_0765bc28:
  do {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0765bc2c:
    lVar14 = *(long *)(lVar16 + 0x80);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(lVar16 + 0x8c);
    lVar13 = (long)(int)uVar4;
    if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar3 = *(ushort *)(lVar14 + lVar13 * 2 + 0x20);
    if (10 < uVar3) {
      if (uVar3 == 0x2a) {
        cVar1 = *(char *)((long)param_1 + 0x31);
        *(uint *)(lVar16 + 0x8c) = uVar4 + 1;
        if (cVar1 == '\0') break;
        goto LAB_0765bc2c;
      }
      if (uVar3 != 0xd) goto LAB_0765bcac;
      if (*(char *)((long)param_1 + 0x31) != '\0') {
        Newtonsoft_Json_JsonTextReader__EndComment(lVar16,(char)param_1[0xc],param_1[0xd],lVar13,0);
        goto LAB_0765bdc0;
      }
      lVar14 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                         (lVar16,1,*(undefined8 *)(param_1 + 10),0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar17 = System_Threading_Tasks_Task__ConfigureAwait(lVar14,0,0);
      local_80 = auVar17;
      uVar12 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                         (local_80,0);
      auVar6 = local_70;
      auVar7 = local_60;
      if ((uVar12 & 1) == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049934e0(param_1 + 2,local_80,param_1,DAT_091c14f8);
        return;
      }
LAB_0765bcf8:
      local_70 = auVar6;
      local_60 = auVar7;
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_80,0);
      goto LAB_0765bc28;
    }
    if (uVar3 != 0) {
      if (uVar3 == 10) {
        if (*(char *)((long)param_1 + 0x31) != '\0') {
          Newtonsoft_Json_JsonTextReader__EndComment
                    (lVar16,(char)param_1[0xc],param_1[0xd],lVar13,0);
          goto LAB_0765bdc0;
        }
        Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar16,0);
        goto LAB_0765bc2c;
      }
LAB_0765bcac:
      *(uint *)(lVar16 + 0x8c) = uVar4 + 1;
      goto LAB_0765bc2c;
    }
    if (*(uint *)(lVar16 + 0x88) != uVar4) goto LAB_0765bcac;
    lVar14 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar16,1,*(undefined8 *)(param_1 + 10),0)
    ;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar17 = FUN_062ebc5c(lVar14,0,DAT_091bcc68);
    local_70 = auVar17;
    uVar12 = FUN_06dab0dc(local_70,DAT_0919ba20);
    if ((uVar12 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990ca8(param_1 + 2,local_70,param_1,DAT_091c1278);
      return;
    }
LAB_0765bba4:
    iVar8 = FUN_06dab124(local_70,DAT_0919ba18);
    if (iVar8 == 0) {
      if (*(char *)((long)param_1 + 0x31) == '\0') {
        uVar10 = thunk_FUN_03fc39d4(&DAT_09211d48);
        uVar10 = Newtonsoft_Json_JsonReaderException__Create(lVar16,uVar10,0);
        uVar11 = thunk_FUN_03fc39d4(&DAT_091ec098);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,uVar11);
      }
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonTextReader__EndComment
                (lVar16,(char)param_1[0xc],param_1[0xd],*(undefined4 *)(lVar16 + 0x8c),0);
      goto LAB_0765bdc0;
    }
  } while( true );
  lVar14 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                     (lVar16,0,1,*(undefined8 *)(param_1 + 10),0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar17 = FUN_062e82b0(lVar14,0,DAT_091bcba0);
  local_60 = auVar17;
  uVar12 = FUN_06daadec(local_60,DAT_0919b9e0);
  auVar17 = local_80;
  auVar5 = local_70;
  if ((uVar12 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049907d0(param_1 + 2,local_60,param_1,DAT_091c1228);
    return;
  }
LAB_0765bd48:
  local_80 = auVar17;
  local_70 = auVar5;
  uVar12 = FUN_06daae34(local_60,DAT_0919b9d8);
  if ((uVar12 & 1) != 0) {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *(long *)(lVar16 + 0x80);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(lVar16 + 0x8c);
    if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(short *)(lVar14 + (long)(int)uVar4 * 2 + 0x20) == 0x2f) {
      Newtonsoft_Json_JsonTextReader__EndComment(lVar16,(char)param_1[0xc],param_1[0xd],uVar4 - 1,0)
      ;
      *(int *)(lVar16 + 0x8c) = *(int *)(lVar16 + 0x8c) + 1;
LAB_0765bdc0:
      lVar16 = DAT_09181780;
      *param_1 = -2;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
  }
  goto LAB_0765bc28;
}

