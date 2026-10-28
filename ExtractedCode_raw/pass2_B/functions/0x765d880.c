// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParseObjectAsync>d__15$$MoveNext
// address: 0x765d880
// body: available
// range: 0x765d880-0x765ddbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765dda0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765dda4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765dda8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ddac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ddb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ddb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ddb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParseObjectAsync>d__15__MoveNext(int *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095223ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091984a8);
    FUN_03f5c2a4(&DAT_091983f8);
    FUN_03f5c2a4(&DAT_091983d8);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_095223ef = 1;
  }
  auVar4 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  local_40 = ZEXT816(0);
  iVar6 = *param_1;
  auVar3 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  local_50 = ZEXT816(0);
  lVar9 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_0765dc58;
    }
    local_40 = ZEXT816(0);
    local_50 = ZEXT816(0);
    if (iVar6 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      local_40 = ZEXT816(0);
LAB_0765d9e8:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_50,0);
LAB_0765d9f4:
      uVar5 = 1;
      goto LAB_0765db24;
    }
  }
  else {
    if (iVar6 == 2) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_0765dcfc;
    }
    if (iVar6 == 3) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
LAB_0765db0c:
      local_50 = auVar3;
      local_40 = auVar4;
      uVar5 = FUN_06daae34(local_60,DAT_0919b9d8);
      goto LAB_0765db24;
    }
  }
LAB_0765d9fc:
  do {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(lVar9 + 0x80);
joined_r0x0765da04:
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(uint *)(lVar9 + 0x8c);
    if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(lVar8 + (long)(int)uVar5 * 2 + 0x20);
    if (0xd < uVar1) {
      if (uVar1 != 0x20) {
        if (uVar1 == 0x2f) {
          lVar9 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                            (lVar9,1,*(undefined8 *)(param_1 + 10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
          local_50 = auVar10;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_50,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0x10,0);
            if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045d6f50(param_1 + 2,local_50,param_1,DAT_091984a8);
            return;
          }
          goto LAB_0765d9e8;
        }
        if (uVar1 == 0x7d) {
          Newtonsoft_Json_JsonReader__SetToken(lVar9,0xd,0);
          *(int *)(lVar9 + 0x8c) = *(int *)(lVar9 + 0x8c) + 1;
          goto LAB_0765d9f4;
        }
LAB_0765da6c:
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Char__IsWhiteSpace(uVar1,0);
        if ((uVar7 & 1) == 0) {
          lVar9 = Newtonsoft_Json_JsonTextReader__ParsePropertyAsync
                            (lVar9,*(undefined8 *)(param_1 + 10),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_60 = FUN_062e82b0(lVar9,0,DAT_091bcba0);
          uVar7 = FUN_06daadec(local_60,DAT_0919b9e0);
          auVar3 = local_50;
          auVar4 = local_40;
          if ((uVar7 & 1) == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045d33e0(param_1 + 2,local_60,param_1,DAT_091983d8);
            return;
          }
          goto LAB_0765db0c;
        }
        uVar5 = *(uint *)(lVar9 + 0x8c);
      }
LAB_0765daa0:
      *(uint *)(lVar9 + 0x8c) = uVar5 + 1;
LAB_0765daa8:
      lVar8 = *(long *)(lVar9 + 0x80);
      goto joined_r0x0765da04;
    }
    if (uVar1 != 0) {
      if (uVar1 == 9) goto LAB_0765daa0;
      if (uVar1 == 10) {
        Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar9,0);
        goto LAB_0765daa8;
      }
      if (uVar1 != 0xd) goto LAB_0765da6c;
      lVar8 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                        (lVar9,0,*(undefined8 *)(param_1 + 10),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar8,0,0);
      local_50 = auVar10;
      uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_50,0);
      auVar2 = local_40;
      if ((uVar7 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d6f50(param_1 + 2,local_50,param_1,DAT_091984a8);
        return;
      }
LAB_0765dcfc:
      local_40 = auVar2;
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_50,0);
      goto LAB_0765d9fc;
    }
    if (*(uint *)(lVar9 + 0x88) != uVar5) goto LAB_0765daa0;
    lVar8 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar9,0,*(undefined8 *)(param_1 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = FUN_062ebc5c(lVar8,0,DAT_091bcc68);
    local_40 = auVar10;
    uVar7 = FUN_06dab0dc(local_40,DAT_0919ba20);
    auVar10 = local_50;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d3d00(param_1 + 2,local_40,param_1,DAT_091983f8);
      return;
    }
LAB_0765dc58:
    local_50 = auVar10;
    iVar6 = FUN_06dab124(local_40,DAT_0919ba18);
  } while (iVar6 != 0);
  uVar5 = 0;
LAB_0765db24:
  iVar6 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar6 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar5 & 1,DAT_091985d0);
  return;
}

