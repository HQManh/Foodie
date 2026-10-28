// rea decompile_all
// name: FUN_04571d7c
// address: 0x4571d7c
// body: available
// range: 0x4571d7c-0x4571ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4571e9c to 0x7430c30 System.String$$Format (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4571ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04571d7c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (DAT_095188b8 == '\0') {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09202150);
    FUN_03f5c2a4(&DAT_091f83b8);
    DAT_095188b8 = '\x01';
  }
  uVar1 = System_String__IsNullOrEmpty(param_2,0);
  uVar5 = DAT_09202150;
  if (param_3 == 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
  }
  if ((uVar1 & 1) == 0) {
    uVar5 = param_2;
  }
  uVar3 = System_Single__ToString(param_1,uVar5,param_3,0);
  uVar4 = System_Single__ToString(param_1 + 4,uVar5,param_3,0);
  uVar5 = System_Single__ToString(param_1 + 8,uVar5,param_3,0);
  System_String__Format(DAT_091f83b8,uVar3,uVar4,uVar5,0);
  return;
}

