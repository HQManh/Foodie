// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
// address: 0x76af4a4
// body: available
// range: 0x76af4a4-0x76af5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76af584 to 0x76b3490 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76af5c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                    (param_1,param_3);
  plVar2 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                             (param_1,uVar1,0,param_4,param_5);
  if (param_2 != 0) {
    lVar3 = Newtonsoft_Json_Linq_JToken__CreateReader(param_2,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if ((plVar6 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar6 + 0x508))(plVar6,*(undefined8 *)(*plVar6 + 0x510)), lVar3 != 0)
       ) {
      Newtonsoft_Json_JsonReader__set_MaxDepth(lVar3,uVar4,0);
      Newtonsoft_Json_JsonReader__ReadAndAssert(lVar3,0);
      if (plVar2 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        if ((uVar5 & 1) != 0) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                    (param_1,plVar2,lVar3,param_3,0);
          return;
        }
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                (param_1,lVar3,param_3,uVar1,0,param_4,param_5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

