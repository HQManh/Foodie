// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsync>d__3$$MoveNext
// address: 0x7659fac
// body: available
// range: 0x7659fac-0x765a217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765a20c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765a214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsync>d__3__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 local_30 [16];
  
  if ((DAT_095223d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091983c0);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_095223d7 = 1;
  }
  lVar4 = *(long *)(param_1 + 10);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (*param_1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_0765a0b4:
    uVar3 = FUN_06daae34(local_30,DAT_0919b9d8);
    if ((uVar3 & 1) != 0) {
      uVar2 = 1;
      goto LAB_0765a138;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = Newtonsoft_Json_JsonTextReader__DoReadAsync(lVar4,*(undefined8 *)(param_1 + 0xc),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar5 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
    local_30 = auVar5;
    uVar3 = FUN_06daadec(local_30,DAT_0919b9e0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d2d08(param_1 + 2,local_30,param_1,DAT_091983c0);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_30 = FUN_062e82b0(*(long *)(param_1 + 8),0,DAT_091bcba0);
      uVar3 = FUN_06daadec(local_30,DAT_0919b9e0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d2d08(param_1 + 2,local_30,param_1,DAT_091983c0);
        return;
      }
      goto LAB_0765a0b4;
    }
    local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  uVar2 = FUN_06daae34(local_30,DAT_0919b9d8);
LAB_0765a138:
  iVar1 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar2 & 1,DAT_091985d0);
  return;
}

