// rea decompile_all
// name: Newtonsoft.Json.JsonReader.<SkipAsync>d__1$$MoveNext
// address: 0x76486fc
// body: available
// range: 0x76486fc-0x76488d3 inclusive
// range: 0x7648904-0x7648a07 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76487e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76488cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76488d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648a00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader_<SkipAsync>d__1__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0952231c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1210);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_0952231c = 1;
  }
  plVar6 = *(long **)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_07648958;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (iVar1 != 4) goto LAB_07648890;
    lVar4 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar6 + 400));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
    uVar5 = FUN_06daadec(local_50,DAT_0919b9e0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499065c(param_1 + 2,local_50,param_1,DAT_091c1210);
      return;
    }
  }
  FUN_06daae34(local_50,DAT_0919b9d8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_07648890:
  uVar3 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  uVar5 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsStartToken(uVar3,0);
  if ((uVar5 & 1) != 0) {
    iVar1 = (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
    param_1[0x10] = iVar1;
    do {
      lVar4 = (**(code **)(*plVar6 + 0x188))
                        (plVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar6 + 400));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar7 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
      local_50 = auVar7;
      uVar5 = FUN_06daadec(local_50,DAT_0919b9e0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499065c(param_1 + 2,local_50,param_1,DAT_091c1210);
        return;
      }
LAB_07648958:
      uVar5 = FUN_06daae34(local_50,DAT_0919b9d8);
      if ((uVar5 & 1) == 0) break;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = param_1[0x10];
      iVar2 = (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
    } while (iVar1 < iVar2);
  }
  lVar4 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

