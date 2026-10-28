// rea decompile_all
// name: System.Globalization.CultureData$$UnescapeNlsString
// address: 0x753c444
// body: available
// range: 0x753c444-0x753c5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753c5e0 to 0x7432114 System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x753c5e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureData__UnescapeNlsString(long param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  
  if ((DAT_095218de & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095218de = 1;
  }
  if (param_1 == 0) {
LAB_0753c5e4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)0x0;
  if ((param_2 <= param_3) && (param_2 < *(int *)(param_1 + 0x10))) {
    plVar3 = (long *)0x0;
    iVar4 = param_2;
    do {
      sVar1 = System_String__get_Chars(param_1,iVar4,0);
      if (sVar1 == 0x5c) {
        if (plVar3 == (long *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor(plVar3,param_1,param_2,iVar4 - param_2,uVar2,0);
        }
        iVar4 = iVar4 + 1;
        if (iVar4 < *(int *)(param_1 + 0x10)) {
          uVar2 = System_String__get_Chars(param_1,iVar4,0);
          if (plVar3 == (long *)0x0) goto LAB_0753c5e4;
LAB_0753c56c:
          System_Text_StringBuilder__Append(plVar3,uVar2,0);
        }
      }
      else if (sVar1 == 0x27) {
        if (plVar3 == (long *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor(plVar3,param_1,param_2,iVar4 - param_2,uVar2,0);
        }
      }
      else if (plVar3 != (long *)0x0) {
        uVar2 = System_String__get_Chars(param_1,iVar4,0);
        goto LAB_0753c56c;
      }
      iVar4 = iVar4 + 1;
    } while ((iVar4 <= param_3) && (iVar4 < *(int *)(param_1 + 0x10)));
  }
  if (plVar3 == (long *)0x0) {
    System_String__Substring(param_1,param_2,(param_3 - param_2) + 1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0753c5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  return;
}

