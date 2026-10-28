// rea decompile_all
// name: Newtonsoft.Json.Serialization.TraceJsonWriter$$WriteValue
// address: 0x76c7038
// body: available
// range: 0x76c7038-0x76c7143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c713c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c7140 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(long param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522713 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6cc0);
    FUN_03f5c2a4(&DAT_091b6cc8);
    DAT_09522713 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    uStack_48 = *(undefined8 *)(param_2 + 8);
    local_50 = *(undefined8 *)param_2;
    local_40 = *(undefined8 *)(param_2 + 0x10);
    (**(code **)(*plVar2 + 0x878))(plVar2,&local_50,*(undefined8 *)(*plVar2 + 0x880));
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar2 != (long *)0x0) {
      uStack_48 = *(undefined8 *)(param_2 + 8);
      local_50 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 0x10);
      (**(code **)(*plVar2 + 0x878))(plVar2,&local_50,*(undefined8 *)(*plVar2 + 0x880));
      if (*param_2 == '\0') {
        Newtonsoft_Json_JsonWriter__WriteUndefined(param_1,0);
      }
      else {
        Newtonsoft_Json_JsonWriter__WriteValue
                  (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),0);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_076c7140;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_076c7140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

