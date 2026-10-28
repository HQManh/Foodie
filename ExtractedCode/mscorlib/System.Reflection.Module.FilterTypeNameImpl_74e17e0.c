// rea decompile_all
// name: System.Reflection.Module$$FilterTypeNameImpl
// address: 0x74e17e0
// body: available
// range: 0x74e17e0-0x74e18ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e1878 to 0x742e624 System.String$$StartsWith (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e18a4 to 0x742df6c System.String$$Equals (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e18e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e18ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_Module__FilterTypeNameImpl(long *param_1,long *param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_2 != (long *)0x0) && (*param_2 == DAT_09535468)) {
    if (((int)param_2[2] < 1) ||
       (sVar1 = System_String__get_Chars(param_2,(int)param_2[2] + -1,0), sVar1 != 0x2a)) {
      if (param_1 != (long *)0x0) {
        lVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        if (lVar3 != 0) {
          System_String__Equals(lVar3,param_2,0);
          return;
        }
      }
    }
    else {
      uVar2 = System_String__Substring(param_2,0,(int)param_2[2] + -1,0);
      if (param_1 != (long *)0x0) {
        lVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        if (lVar3 != 0) {
          System_String__StartsWith(lVar3,uVar2,4,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_091870c0);
  uVar2 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_091faeb8);
  System_Reflection_InvalidFilterCriteriaException___ctor(uVar2,uVar4);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d3a30);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar4);
}

