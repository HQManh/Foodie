// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadNullCharAsync>d__34$$MoveNext
// address: 0x766264c
// body: available
// range: 0x766264c-0x7662827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766281c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadNullCharAsync>d__34__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 local_40 [16];
  
  if ((DAT_09522409 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198418);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_09522409 = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x88) != *(int *)(lVar5 + 0x8c)) {
      uVar6 = 0;
      *(int *)(lVar5 + 0x8c) = *(int *)(lVar5 + 0x8c) + 1;
      goto LAB_076627d8;
    }
    lVar3 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar5,0,*(undefined8 *)(param_1 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = FUN_062ebc5c(lVar3,0,DAT_091bcc68);
    uVar4 = FUN_06dab0dc(local_40,DAT_0919ba20);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d4620(param_1 + 2,local_40,param_1,DAT_09198418);
      return;
    }
  }
  iVar2 = FUN_06dab124(local_40,DAT_0919ba18);
  auVar1 = local_40;
  if (iVar2 == 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = 1;
    *(undefined1 *)(lVar5 + 0x98) = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_076627d8:
  iVar2 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  local_40 = auVar1;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar6,DAT_091985d0);
  return;
}

