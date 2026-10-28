// rea decompile_all
// name: System.String$$Compare
// address: 0x742d320
// body: available
// range: 0x742d320-0x742d463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742d460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__Compare
               (long param_1,int param_2,long param_3,int param_4,undefined4 param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if ((DAT_09520ffa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520ffa = 1;
  }
  uVar2 = param_5;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Math__Min(param_5,iVar1 - param_2,0);
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x10);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_5 = System_Math__Min(param_5,iVar1 - param_4,0);
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1b8))
                (plVar3,param_1,param_2,uVar2,param_3,param_4,param_5,param_6 & 1,
                 *(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

