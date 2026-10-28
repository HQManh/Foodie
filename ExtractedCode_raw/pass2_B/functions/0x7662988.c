// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadNumberIntoBufferAsync>d__32$$MoveNext
// address: 0x7662988
// body: available
// range: 0x7662988-0x7662a5b inclusive
// range: 0x7662a60-0x7662b9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7662a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662b90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662b94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadNumberIntoBufferAsync>d__32__MoveNext(int *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0952240b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1290);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_0952240b = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_07662afc;
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  param_1[0xc] = *(int *)(lVar6 + 0x8c);
  local_50 = ZEXT816(0);
  do {
    lVar5 = *(long *)(lVar6 + 0x80);
    if (lVar5 == 0) {
LAB_07662aac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = param_1[0xc];
    while( true ) {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      sVar2 = *(short *)(lVar5 + (long)(int)uVar1 * 2 + 0x20);
      if (sVar2 == 0) break;
      uVar4 = Newtonsoft_Json_JsonTextReader__ReadNumberCharIntoBuffer(lVar6,sVar2,uVar1,0);
      if ((uVar4 & 1) != 0) goto LAB_07662b0c;
      lVar5 = *(long *)(lVar6 + 0x80);
      uVar1 = param_1[0xc] + 1;
      param_1[0xc] = uVar1;
      if (lVar5 == 0) goto LAB_07662aac;
    }
    *(uint *)(lVar6 + 0x8c) = uVar1;
    if (*(uint *)(lVar6 + 0x88) != uVar1) {
LAB_07662b0c:
      lVar6 = DAT_09181780;
      *param_1 = -2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
    lVar5 = Newtonsoft_Json_JsonTextReader__ReadDataAsync(lVar6,1,*(undefined8 *)(param_1 + 10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = FUN_062ebc5c(lVar5,0,DAT_091bcc68);
    local_50 = auVar7;
    uVar4 = FUN_06dab0dc(local_50,DAT_0919ba20);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990e1c(param_1 + 2,local_50,param_1,DAT_091c1290);
      return;
    }
LAB_07662afc:
    iVar3 = FUN_06dab124(local_50,DAT_0919ba18);
    if (iVar3 == 0) goto LAB_07662b0c;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while( true );
}

