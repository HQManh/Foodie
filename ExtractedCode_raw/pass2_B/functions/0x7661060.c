// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadDataAsync>d__7$$MoveNext
// address: 0x7661060
// body: available
// range: 0x7661060-0x76612c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76612b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76612b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76612b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76612bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76612c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76612c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadDataAsync>d__7__MoveNext(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_50 [16];
  
  if ((DAT_09522401 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198b18);
    FUN_03f5c2a4(&DAT_09198bd8);
    FUN_03f5c2a4(&DAT_09175248);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_09522401 = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar5 + 0x98) != '\0') {
      iVar3 = 0;
      local_50 = ZEXT816(0);
      goto LAB_07661220;
    }
    Newtonsoft_Json_JsonTextReader__PrepareBufferForReadData(lVar5,(char)param_1[10],param_1[0xb],0)
    ;
    lVar6 = *(long *)(lVar5 + 0x80);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x78);
    uVar1 = *(uint *)(lVar5 + 0x88);
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__ReadAsync
                      (uVar8,lVar6,uVar1,*(int *)(lVar6 + 0x18) + ~uVar1,uVar7,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = FUN_062ebc5c(lVar6,0,DAT_091bcc68);
    uVar4 = FUN_06dab0dc(local_50,DAT_0919ba20);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09175248 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045da748(param_1 + 2,local_50,param_1,DAT_09198b18);
      return;
    }
  }
  iVar3 = FUN_06dab124(local_50,DAT_0919ba18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(int *)(lVar5 + 0x88) + iVar3;
  *(uint *)(lVar5 + 0x88) = uVar1;
  if (iVar3 == 0) {
    *(undefined1 *)(lVar5 + 0x98) = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x80);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2 + 0x20) = 0;
LAB_07661220:
  iVar2 = *(int *)(DAT_09175248 + 0xe4);
  *param_1 = -2;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  FUN_069f5d88(param_1 + 2,iVar3,DAT_09198bd8);
  return;
}

