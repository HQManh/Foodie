// rea decompile_all
// name: System.Security.Util.TokenizerStream$$AddToken
// address: 0x7458944
// body: available
// range: 0x7458944-0x7458a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7458a3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7458a40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Util_TokenizerStream__AddToken(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_0952113a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918beb0);
    DAT_0952113a = 1;
  }
  plVar4 = (long *)(param_1 + 0x28);
  lVar3 = *plVar4;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_07458a3c;
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((int)uVar2 < *(int *)(*(long *)(lVar3 + 0x10) + 0x18)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    uVar1 = thunk_FUN_03f9944c(DAT_0918beb0);
    System_Security_Util_TokenizerShortBlock___ctor();
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),uVar1);
    if (*plVar4 == 0) goto LAB_07458a3c;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*plVar4 + 0x18);
    thunk_FUN_03f5d7b8(plVar4);
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (lVar3 == 0) goto LAB_07458a3c;
    uVar2 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  *(uint *)(param_1 + 0x30) = uVar2 + 1;
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(undefined2 *)(lVar3 + (long)(int)uVar2 * 2 + 0x20) = param_2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07458a3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

