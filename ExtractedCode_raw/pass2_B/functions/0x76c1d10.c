// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
// address: 0x76c1d10
// body: available
// range: 0x76c1d10-0x76c1e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c1e38 to 0x76be144 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c1e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
               (long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((DAT_095226dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a60);
    DAT_095226dd = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_076c1e54;
  uVar1 = (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
  uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference
                    (uVar1,param_4,param_5,param_6,param_7);
  if ((uVar2 & 0xff) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076c1e54;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) != 0) goto LAB_076c1dc0;
  }
  else if (0xff < ((uint)uVar2 & 0xffff)) {
LAB_076c1dc0:
    if (((param_5 == 0) || (*(char *)(param_5 + 0x82) != '\0')) ||
       (uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter
                          (uVar2,param_6,param_5), (uVar2 & 1) != 0)) {
      if (param_4 == 0) goto LAB_076c1e54;
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
                (param_1,param_2,*(undefined8 *)(param_4 + 0x60),param_3);
    }
  }
  uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
                    (param_1,1,param_4,param_5,param_6,param_7);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_4 != 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
              (param_1,param_2,*(undefined8 *)(param_4 + 0x60));
    return;
  }
LAB_076c1e54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

