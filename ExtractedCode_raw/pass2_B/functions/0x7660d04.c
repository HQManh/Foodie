// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadCharsAsync>d__14$$MoveNext
// address: 0x7660d04
// body: available
// range: 0x7660d04-0x7660dff inclusive
// range: 0x7660e04-0x7660f03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7660dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660efc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7660f00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadCharsAsync>d__14__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095223ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198410);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_095223ff = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
    goto LAB_07660e44;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = ((*(int *)(lVar5 + 0x8c) + param_1[10]) - *(int *)(lVar5 + 0x88)) + 1;
  param_1[0xe] = iVar4;
  local_60 = ZEXT816(0);
  while( true ) {
    lVar2 = Newtonsoft_Json_JsonTextReader__ReadDataAsync
                      (lVar5,(char)param_1[0xb],iVar4,*(undefined8 *)(param_1 + 0xc),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar6 = FUN_062ebc5c(lVar2,0,DAT_091bcc68);
    local_60 = auVar6;
    uVar3 = FUN_06dab0dc(local_60,DAT_0919ba20);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d43d8(param_1 + 2,local_60,param_1,DAT_09198410);
      return;
    }
LAB_07660e44:
    iVar1 = FUN_06dab124(local_60,DAT_0919ba18);
    if (iVar1 == 0) break;
    iVar4 = param_1[0xe] - iVar1;
    param_1[0xe] = iVar4;
    if (iVar4 < 1) break;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar5 = DAT_091751c8;
  *param_1 = -2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,iVar1 != 0,DAT_091985d0);
  return;
}

