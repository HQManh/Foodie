// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$System.ComponentModel.IBindingList.AddNew
// address: 0x76dd540
// body: available
// range: 0x76dd540-0x76dd703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dd67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dd700 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Linq_JContainer__System_ComponentModel_IBindingList_AddNew(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_095227c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f58);
    FUN_03f5c2a4(&DAT_09187250);
    DAT_095227c2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09180f58);
  System_ComponentModel_AddingNewEventArgs___ctor(lVar1,0);
  (**(code **)(*param_1 + 0x608))(param_1,lVar1,*(undefined8 *)(*param_1 + 0x610));
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 0x10);
    if (plVar5 == (long *)0x0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = System_Object__GetType(param_1,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ff460);
    }
    else {
      if ((*(byte *)(DAT_09187250 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187250 + 0x130) * 8 + -8) ==
          DAT_09187250)) {
        (**(code **)(*param_1 + 0x6e8))(param_1,plVar5,*(undefined8 *)(*param_1 + 0x6f0));
        return plVar5;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_09172150);
      FUN_039afb80(DAT_095354b8);
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_092087f8);
    }
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09187348);
    uVar3 = thunk_FUN_03f9944c();
    Newtonsoft_Json_JsonException___ctor(uVar3,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d1268);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

