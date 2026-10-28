// rea decompile_all
// name: System.ParamsArray$$.ctor
// address: 0x75c5790
// body: available
// range: 0x75c5790-0x75c584f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c5844 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75c5848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c584c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ParamsArray___ctor(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    thunk_FUN_03f5d7b8(param_1,0);
LAB_075c5810:
    param_1[1] = 0;
    thunk_FUN_03f5d7b8(param_1 + 1,0);
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x20);
    thunk_FUN_03f5d7b8(param_1);
    if (uVar1 == 1) goto LAB_075c5810;
    if ((*(uint *)(param_2 + 0x18) & 0xfffffffe) == 0) {
LAB_075c584c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    thunk_FUN_03f5d7b8();
    if (2 < uVar1) {
      if (*(uint *)(param_2 + 0x18) < 3) goto LAB_075c584c;
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      goto LAB_075c5824;
    }
  }
  uVar2 = 0;
LAB_075c5824:
  param_1[2] = uVar2;
  thunk_FUN_03f5d7b8();
  param_1[3] = param_2;
  thunk_FUN_03f5d7b8(param_1 + 3,param_2);
  return;
}

