// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<MatchAndSetAsync>d__21$$MoveNext
// address: 0x765ac74
// body: available
// range: 0x765ac74-0x765aeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765ae3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ae40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ae44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ae48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765aeb0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_48;
  undefined1 local_40 [16];
  
  if ((DAT_095223dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1220);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_095223dd = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparatorAsync
                      (lVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = FUN_062e82b0(lVar1,0,DAT_091bcba0);
    uVar2 = FUN_06daadec(local_40,DAT_0919b9e0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990754(param_1 + 2,local_40,param_1,DAT_091c1220);
      return;
    }
  }
  uVar2 = FUN_06daae34(local_40,DAT_0919b9d8);
  if ((uVar2 & 1) == 0) {
    local_68 = thunk_FUN_03fc39d4(&DAT_09187478);
    local_58 = param_1[0xe];
    uStack_60 = 0xffffffffffffffff;
    lVar1 = System_Enum__ToString(&local_68,0);
    if (lVar1 != 0) {
      uVar3 = System_String__ToLowerInvariant(lVar1,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09201898);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091f6af0);
      uVar3 = System_String__Concat(uVar4,uVar3,uVar5,0);
      uVar3 = Newtonsoft_Json_JsonReaderException__Create(lVar6,uVar3,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ec090);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar6 != 0) {
    Newtonsoft_Json_JsonReader__SetToken(lVar6,param_1[0xe],*(undefined8 *)(param_1 + 0x10),0);
    lVar6 = DAT_09181780;
    *param_1 = -2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

