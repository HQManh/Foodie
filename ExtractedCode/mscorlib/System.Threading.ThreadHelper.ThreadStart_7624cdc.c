// rea decompile_all
// name: System.Threading.ThreadHelper$$ThreadStart
// address: 0x7624cdc
// body: available
// range: 0x7624cdc-0x7624dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7624d88 to 0x761e7e0 System.Threading.ExecutionContext$$Run (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7624dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7624dd0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ThreadHelper__ThreadStart(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09522162 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    FUN_03f5c2a4(&DAT_0918bcd0);
    FUN_03f5c2a4(&DAT_0918bd18);
    DAT_09522162 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(int *)(DAT_0918bcd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = **(undefined8 **)(DAT_0918bcd0 + 0xb8);
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184350);
    }
    System_Threading_ExecutionContext__Run(lVar2,uVar3,param_1,0);
    return;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*plVar1 == DAT_0918bd18) {
                    /* WARNING: Could not recover jumptable at 0x07624dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar1[3])(plVar1[8],plVar1[5]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0();
}

