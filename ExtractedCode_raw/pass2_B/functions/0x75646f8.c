// rea decompile_all
// name: System.Buffers.Text.NumberBuffer$$ToString
// address: 0x75646f8
// body: available
// range: 0x75646f8-0x756488b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7564888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffers_Text_NumberBuffer__ToString(long param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_095219d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f87b8);
    FUN_03f5c2a4(&DAT_091f8750);
    DAT_095219d2 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Text_StringBuilder__Append(plVar2,0x5b,0);
  System_Text_StringBuilder__Append(plVar2,0x22,0);
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  lVar4 = 5;
  do {
    pcVar1 = (char *)(param_1 + lVar4);
    if (*pcVar1 == '\0') break;
    lVar4 = lVar4 + 1;
    System_Text_StringBuilder__Append(plVar2,*pcVar1,0);
  } while (lVar4 != 0x38);
  System_Text_StringBuilder__Append(plVar2,0x22,0);
  uVar3 = System_Int32__ToString(param_1,0);
  uVar3 = System_String__Concat(DAT_091f87b8,uVar3,0);
  System_Text_StringBuilder__Append(plVar2,uVar3,0);
  if (*(int *)(DAT_09535400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Boolean__ToString(param_1 + 4,0);
  uVar3 = System_String__Concat(DAT_091f8750,uVar3,0);
  System_Text_StringBuilder__Append(plVar2,uVar3,0);
  System_Text_StringBuilder__Append(plVar2,0x5d,0);
                    /* WARNING: Could not recover jumptable at 0x07564884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  return;
}

