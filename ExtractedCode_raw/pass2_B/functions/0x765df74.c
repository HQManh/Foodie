// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
// address: 0x765df74
// body: available
// range: 0x765df74-0x765e0af inclusive
// range: 0x765e0b8-0x765e4e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765e0ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e454 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e4d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e4e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765e4e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(int *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  ushort local_64 [6];
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095223f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091984b0);
    FUN_03f5c2a4(&DAT_09198400);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_095223f1 = 1;
  }
  iVar3 = *param_1;
  plVar10 = *(long **)(param_1 + 8);
  auVar12 = ZEXT816(0);
  local_40 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  local_50 = ZEXT816(0);
  local_58 = 0;
  if (iVar3 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_0765e080;
  }
  if (iVar3 == 1) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    goto LAB_0765e23c;
  }
  if (iVar3 != 2) goto LAB_0765e0b8;
  local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = -1;
  local_40 = ZEXT816(0);
LAB_0765e044:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
LAB_0765e0b8:
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = plVar10[0x10];
joined_r0x0765e0c0:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(uint *)((long)plVar10 + 0x8c);
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(lVar9 + (long)(int)uVar8 * 2 + 0x20);
    if (uVar1 < 0x2a) {
      if (uVar1 < 0xe) {
        if (uVar1 == 0) {
          if (*(uint *)(plVar10 + 0x11) != uVar8) goto LAB_0765e17c;
          lVar9 = Newtonsoft_Json_JsonTextReader__ReadDataAsync
                            (plVar10,0,*(undefined8 *)(param_1 + 10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar12 = FUN_062ebc5c(lVar9,0,DAT_091bcc68);
          local_40 = auVar12;
          uVar4 = FUN_06dab0dc(local_40,DAT_0919ba20);
          auVar2 = local_50;
          if ((uVar4 & 1) == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045d3f48(param_1 + 2,local_40,param_1,DAT_09198400);
            return;
          }
LAB_0765e080:
          local_50 = auVar2;
          iVar3 = FUN_06dab124(local_40,DAT_0919ba18);
          if (iVar3 == 0) {
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar11 = 0;
            *(undefined4 *)((long)plVar10 + 0x24) = 0xc;
LAB_0765e2a8:
            iVar3 = *(int *)(DAT_091751c8 + 0xe4);
            *param_1 = -2;
            if (iVar3 == 0) {
              FUN_03f5c424();
            }
            FUN_069f2e3c(param_1 + 2,uVar11,DAT_091985d0);
            return;
          }
          goto LAB_0765e0b8;
        }
        if (uVar1 == 9) goto LAB_0765e17c;
        if (uVar1 != 10) {
          if (uVar1 != 0xd) goto LAB_0765e158;
          lVar9 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                            (plVar10,0,*(undefined8 *)(param_1 + 10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
          local_50 = auVar12;
          uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_50,0);
          if ((uVar4 & 1) == 0) {
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x12,0);
            if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045d7198(param_1 + 2,local_50,param_1,DAT_091984b0);
            return;
          }
          goto LAB_0765e044;
        }
        Newtonsoft_Json_JsonTextReader__ProcessLineFeed(plVar10,0);
      }
      else {
        if (uVar1 != 0x20) {
          if (uVar1 != 0x29) goto LAB_0765e158;
          *(uint *)((long)plVar10 + 0x8c) = uVar8 + 1;
          Newtonsoft_Json_JsonReader__SetToken(plVar10,0xf,0);
          goto LAB_0765e2a4;
        }
LAB_0765e17c:
        *(uint *)((long)plVar10 + 0x8c) = uVar8 + 1;
      }
      lVar9 = plVar10[0x10];
      goto joined_r0x0765e0c0;
    }
    if (0x2f < uVar1) {
      if (uVar1 == 0x5d) {
        *(uint *)((long)plVar10 + 0x8c) = uVar8 + 1;
        Newtonsoft_Json_JsonReader__SetToken(plVar10,0xe,0);
        goto LAB_0765e2a4;
      }
      if (uVar1 == 0x7d) {
        *(uint *)((long)plVar10 + 0x8c) = uVar8 + 1;
        Newtonsoft_Json_JsonReader__SetToken(plVar10,0xd,0);
        goto LAB_0765e2a4;
      }
LAB_0765e158:
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Char__IsWhiteSpace(uVar1,0);
      if ((uVar4 & 1) != 0) {
        uVar8 = *(uint *)((long)plVar10 + 0x8c);
        goto LAB_0765e17c;
      }
      if (*(char *)((long)plVar10 + 0x71) == '\0') {
LAB_0765e45c:
        lVar9 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_64[0] = uVar1;
        uVar6 = FUN_03f5c42c(DAT_09535460,local_64);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091fb688);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
        uVar5 = Newtonsoft_Json_JsonReaderException__Create(plVar10,uVar5,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091ec0a8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
      iVar3 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
      if (iVar3 != 0) goto LAB_0765e45c;
      Newtonsoft_Json_JsonReader__SetStateBasedOnCurrent(plVar10,0);
LAB_0765e284:
      uVar11 = 0;
      goto LAB_0765e2a8;
    }
    if (uVar1 == 0x2c) {
      *(uint *)((long)plVar10 + 0x8c) = uVar8 + 1;
      Newtonsoft_Json_JsonReader__SetStateBasedOnCurrent(plVar10,0);
      goto LAB_0765e284;
    }
    if (uVar1 != 0x2f) goto LAB_0765e158;
    lVar9 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                      (plVar10,(char)param_1[0xc] == '\0',*(undefined8 *)(param_1 + 10),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
    local_50 = auVar12;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    auVar12 = local_40;
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d7198(param_1 + 2,local_50,param_1,DAT_091984b0);
      return;
    }
LAB_0765e23c:
    local_40 = auVar12;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    if ((char)param_1[0xc] == '\0') {
LAB_0765e2a4:
      uVar11 = 1;
      goto LAB_0765e2a8;
    }
  } while( true );
}

