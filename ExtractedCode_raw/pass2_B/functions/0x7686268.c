// rea decompile_all
// name: Newtonsoft.Json.Utilities.Base64Encoder.<EncodeAsync>d__13$$MoveNext
// address: 0x7686268
// body: available
// range: 0x7686268-0x7686443 inclusive
// range: 0x768646c-0x7686487 inclusive
// range: 0x768648c-0x76865b3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7686324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768643c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7686440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76865ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76865b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_Base64Encoder_<EncodeAsync>d__13__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_60 [16];
  
  piVar4 = param_1;
  if ((DAT_0952254f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1488);
    FUN_03f5c2a4(&DAT_09181780);
    piVar4 = (int *)FUN_03f5c2a4(&DAT_09182b88);
    DAT_0952254f = 1;
  }
  lVar7 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_07686314:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_07686514;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_Utilities_Base64Encoder__ValidateEncode
              (piVar4,*(undefined8 *)(param_1 + 10),param_1[0xc],param_1[0xd]);
    if (0 < *(int *)(lVar7 + 0x28)) {
      uVar6 = Newtonsoft_Json_Utilities_Base64Encoder__FulfillFromLeftover
                        (lVar7,*(undefined8 *)(param_1 + 10),param_1[0xc],param_1 + 0xd);
      if ((uVar6 & 1) != 0) goto LAB_07686538;
      uVar11 = *(undefined8 *)(lVar7 + 0x20);
      uVar10 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Convert__ToBase64CharArray(uVar11,0,3,uVar10,0,0);
      lVar5 = Newtonsoft_Json_Utilities_Base64Encoder__WriteCharsAsync
                        (lVar7,*(undefined8 *)(lVar7 + 0x10),0,uVar3,*(undefined8 *)(param_1 + 0xe))
      ;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
      uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_60,0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04992e18(param_1 + 2,local_60,param_1,DAT_091c1488);
        return;
      }
      goto LAB_07686314;
    }
  }
  Newtonsoft_Json_Utilities_Base64Encoder__StoreLeftOverBytes
            (lVar7,*(undefined8 *)(param_1 + 10),param_1[0xc],param_1 + 0xd);
  iVar8 = param_1[0xc];
  iVar9 = 0x39;
  iVar1 = param_1[0xd] + iVar8;
  param_1[0x10] = iVar1;
  param_1[0x11] = 0x39;
  while (iVar2 = iVar1 - iVar8, iVar2 != 0 && iVar8 <= iVar1) {
    if (iVar1 < iVar9 + iVar8) {
      param_1[0x11] = iVar2;
      iVar9 = iVar2;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(param_1 + 10);
    uVar10 = *(undefined8 *)(lVar7 + 0x10);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Convert__ToBase64CharArray(uVar11,iVar8,iVar9,uVar10,0,0);
    lVar5 = Newtonsoft_Json_Utilities_Base64Encoder__WriteCharsAsync
                      (lVar7,*(undefined8 *)(lVar7 + 0x10),0,uVar3,*(undefined8 *)(param_1 + 0xe));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    local_60 = auVar12;
    uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_60,0);
    if ((uVar6 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04992e18(param_1 + 2,local_60,param_1,DAT_091c1488);
      return;
    }
LAB_07686514:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    iVar1 = param_1[0x10];
    iVar9 = param_1[0x11];
    iVar8 = iVar9 + param_1[0xc];
    param_1[0xc] = iVar8;
  }
LAB_07686538:
  lVar7 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

