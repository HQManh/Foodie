// rea decompile_all
// name: Newtonsoft.Json.JsonReader.<ReaderReadAndAssertAsync>d__2$$MoveNext
// address: 0x7648404
// body: available
// range: 0x7648404-0x76485b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7648588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x764858c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76485b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 local_30 [16];
  
  if ((DAT_0952231a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1208);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_0952231a = 1;
  }
  plVar5 = *(long **)(param_1 + 8);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (*param_1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar5 + 400));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_30 = FUN_062e82b0(lVar1,0,DAT_091bcba0);
    uVar2 = FUN_06daadec(local_30,DAT_0919b9e0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049905e0(param_1 + 2,local_30,param_1,DAT_091c1208);
      return;
    }
  }
  uVar2 = FUN_06daae34(local_30,DAT_0919b9d8);
  lVar1 = DAT_09181780;
  if ((uVar2 & 1) != 0) {
    *param_1 = -2;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
  if (plVar5 != (long *)0x0) {
    uVar3 = Newtonsoft_Json_JsonReader__CreateUnexpectedEndException(plVar5);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ebff0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

