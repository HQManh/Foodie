// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$ReadTokenFrom
// address: 0x76d876c
// body: available
// range: 0x76d876c-0x76d88d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d87f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d88d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer__ReadTokenFrom
               (undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
  uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  if ((uVar3 & 1) == 0) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    plVar5 = (long *)System_Object__GetType(param_1,0);
    FUN_039b1d98();
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    puVar7 = &DAT_092019d0;
  }
  else {
    Newtonsoft_Json_Linq_JContainer__ReadContentFrom(param_1,param_2,param_3);
    iVar2 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    if (iVar2 <= iVar1) {
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    plVar5 = (long *)System_Object__GetType(param_1,0);
    FUN_039b1d98();
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    puVar7 = &DAT_09211c90;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar4,uVar6,0);
  uVar4 = Newtonsoft_Json_JsonReaderException__Create(param_2,uVar4,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d1250);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar6);
}

