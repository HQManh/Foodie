// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression$$RegexEquals
// address: 0x7700188
// body: available
// range: 0x7700188-0x7700357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7700340 to 0x7ccbe40 System.Text.RegularExpressions.Regex$$IsMatch (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7700344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770034c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7700354 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__RegexEquals
          (long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09522937 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7508);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_09189db0);
    DAT_09522937 = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    if (iVar1 != 8) {
      return 0;
    }
    if (param_2 != (long *)0x0) {
      iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      if (iVar1 != 8) {
        return 0;
      }
      plVar7 = (long *)param_2[7];
      if (plVar7 != (long *)0x0) {
        if (*plVar7 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar7);
        }
        iVar1 = System_String__LastIndexOf(plVar7,0x2f,0);
        uVar3 = System_String__Substring(plVar7,1,iVar1 + -1,0);
        uVar4 = System_String__Substring(plVar7,iVar1 + 1,0);
        if ((param_3 == 0) || (*(char *)(param_3 + 0x10) == '\0')) {
          if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar5 = (undefined8 *)(*(long *)(DAT_09189db0 + 0xb8) + 0x38);
        }
        else {
          puVar5 = (undefined8 *)(param_3 + 0x18);
        }
        uVar6 = *puVar5;
        plVar7 = (long *)param_1[7];
        uVar2 = Newtonsoft_Json_Utilities_MiscellaneousUtils__GetRegexOptions(uVar4,0);
        if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189db0);
        }
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar7);
        }
        uVar3 = System_Text_RegularExpressions_Regex__IsMatch(plVar7,uVar3,uVar2,uVar6,0);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

