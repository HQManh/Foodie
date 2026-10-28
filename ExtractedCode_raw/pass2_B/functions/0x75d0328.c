// rea decompile_all
// name: System.Type$$FilterNameImpl
// address: 0x75d0328
// body: available
// range: 0x75d0328-0x75d047f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d0414 to 0x742e624 System.String$$StartsWith (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75d0430 to 0x742df6c System.String$$Equals (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75d0434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d047c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Type__FilterNameImpl(long *param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((param_2 == (long *)0x0) || (*param_2 != DAT_09535468)) {
    thunk_FUN_03fc39d4(&DAT_091870c0);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_091faeb8);
    System_Reflection_InvalidFilterCriteriaException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091dc098);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  lVar3 = System_String__Trim(param_2,0);
  if (param_1 != (long *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    iVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    if (iVar2 == 0x80) {
      if (lVar4 == 0) goto LAB_075d0434;
      iVar2 = System_String__LastIndexOf(lVar4,0x2b,0);
      lVar4 = System_String__Substring(lVar4,iVar2 + 1,0);
    }
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x10)) {
        sVar1 = System_String__get_Chars(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
        if (sVar1 == 0x2a) {
          uVar5 = System_String__Substring(lVar3,0,*(int *)(lVar3 + 0x10) + -1,0);
          if (lVar4 != 0) {
            System_String__StartsWith(lVar4,uVar5,4,0);
            return;
          }
          goto LAB_075d0434;
        }
      }
      if (lVar4 != 0) {
        System_String__Equals(lVar4,lVar3,0);
        return;
      }
    }
  }
LAB_075d0434:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

