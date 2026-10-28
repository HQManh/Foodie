// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalDeserializeEachPropertyStringKey
// address: 0x73cb13c
// body: available
// range: 0x73cb13c-0x73cb27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cb27c to 0x73cbf50 MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalAssignFieldFromLocalVariableStringKey (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeEachPropertyStringKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               byte param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_7;
  uStack_68 = param_8;
  if ((DAT_09520ca3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e88);
    DAT_09520ca3 = 1;
  }
  if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializationInfoArrayStringKey
                    (param_1,param_3,param_5 & 1);
  MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeLoopStringKey
            (param_2,param_3,param_4,param_6,&local_70,uVar1,param_9,param_10,param_11,param_5 & 1,
             param_1);
  if ((param_5 & 1) != 0) {
    return;
  }
  if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalCreateInstanceWithArguments
            (param_1,param_3,uVar1,param_10);
  MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalAssignFieldFromLocalVariableStringKey
            (param_1,param_2,param_3,uVar1,param_10);
  return;
}

