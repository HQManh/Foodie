// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<EatWhitespaceAsync>d__17$$MoveNext
// address: 0x765a38c
// body: available
// range: 0x765a38c-0x765a6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765a52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a698 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a69c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a6a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a6a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<EatWhitespaceAsync>d__17__MoveNext(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095223d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14e8);
    FUN_03f5c2a4(&DAT_091c1270);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_095223d9 = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  local_60 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  local_70 = ZEXT816(0);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_0765a5b4;
  }
  if (*param_1 != 1) goto LAB_0765a484;
  local_70 = *(undefined1 (*) [16])(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = -1;
  local_60 = ZEXT816(0);
LAB_0765a568:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_70,0);
LAB_0765a484:
  do {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar6 + 0x80);
joined_r0x0765a48c:
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(lVar6 + 0x8c);
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(lVar5 + (long)(int)uVar4 * 2 + 0x20);
    if (0xc < uVar1) {
      if (uVar1 != 0x20) {
        if (uVar1 == 0xd) {
          lVar5 = Newtonsoft_Json_JsonTextReader__ProcessCarriageReturnAsync
                            (lVar6,0,*(undefined8 *)(param_1 + 10),0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
          local_70 = auVar7;
          uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_70,0);
          if ((uVar3 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x10) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x10,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049933e8(param_1 + 2,local_70,param_1,DAT_091c14e8);
            return;
          }
          goto LAB_0765a568;
        }
LAB_0765a4e8:
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Char__IsWhiteSpace(uVar1,0);
        if ((uVar3 & 1) == 0) goto LAB_0765a5c4;
        uVar4 = *(uint *)(lVar6 + 0x8c);
      }
LAB_0765a51c:
      *(uint *)(lVar6 + 0x8c) = uVar4 + 1;
LAB_0765a524:
      lVar5 = *(long *)(lVar6 + 0x80);
      goto joined_r0x0765a48c;
    }
    if (uVar1 != 0) {
      if (uVar1 != 10) goto LAB_0765a4e8;
      Newtonsoft_Json_JsonTextReader__ProcessLineFeed(lVar6,0);
      goto LAB_0765a524;
    }
    if (*(uint *)(lVar6 + 0x88) != uVar4) goto LAB_0765a51c;
    lVar5 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar6,0,*(undefined8 *)(param_1 + 10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = FUN_062ebc5c(lVar5,0,DAT_091bcc68);
    local_60 = auVar7;
    uVar3 = FUN_06dab0dc(local_60,DAT_0919ba20);
    auVar7 = local_70;
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990c2c(param_1 + 2,local_60,param_1,DAT_091c1270);
      return;
    }
LAB_0765a5b4:
    local_70 = auVar7;
    iVar2 = FUN_06dab124(local_60,DAT_0919ba18);
    if (iVar2 == 0) {
LAB_0765a5c4:
      lVar6 = DAT_09181780;
      *param_1 = -2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
  } while( true );
}

