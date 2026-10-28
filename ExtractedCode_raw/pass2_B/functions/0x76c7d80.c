// rea decompile_all
// name: Newtonsoft.Json.Serialization.TraceJsonWriter$$WriteValue
// address: 0x76c7d80
// body: available
// range: 0x76c7d80-0x76c7e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c7e20 to 0x768045c Newtonsoft.Json.JsonWriter$$WriteUndefined (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c7e70 to 0x7680444 Newtonsoft.Json.JsonWriter$$InternalWriteValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c7e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_0952271e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    DAT_0952271e = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != DAT_09181b78)) {
    plVar1 = *(long **)(param_1 + 0x68);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x8e8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x8f0));
      plVar1 = *(long **)(param_1 + 0x60);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x8e8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x8f0));
        if (param_2 == (long *)0x0) {
          Newtonsoft_Json_JsonWriter__WriteUndefined(param_1,0);
          return;
        }
        uVar2 = 9;
LAB_076c7e64:
        Newtonsoft_Json_JsonWriter__InternalWriteValue(param_1,uVar2,0);
        return;
      }
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x68);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x8e8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x8f0));
      plVar1 = *(long **)(param_1 + 0x60);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x8e8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x8f0));
        uVar2 = 7;
        goto LAB_076c7e64;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

