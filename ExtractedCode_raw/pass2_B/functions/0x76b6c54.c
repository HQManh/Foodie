// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
// address: 0x76b6c54
// body: available
// range: 0x76b6c54-0x76b6e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b6df4 to 0x76ba32c Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b6df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b6e78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined1 *param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_095226c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ee8);
    FUN_03f5c2a4(&DAT_0919b4d0);
    DAT_095226c3 = 1;
  }
  if (param_3 == 0) {
LAB_076b6df8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(param_3 + 0x100) == 0) {
    lVar3 = *(long *)(param_3 + 0x80);
    if (lVar3 == 0) {
      if (*(long *)(param_3 + 0x108) == 0) goto LAB_076b6dfc;
LAB_076b6dc4:
      *param_7 = 1;
      uVar6 = *(undefined8 *)(param_3 + 0x108);
LAB_076b6dd0:
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
                (param_1,param_2,param_3,param_4,uVar6,param_6);
      return;
    }
    if (*(char *)(param_3 + 0x88) != '\0') {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b6df8;
      if ((*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) && (*(long *)(param_3 + 0x108) != 0))
      goto LAB_076b6dc4;
    }
    lVar3 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
  }
  else {
    lVar3 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_3);
    if (lVar3 == 0) goto LAB_076b6df8;
    iVar2 = FUN_06c773c8(lVar3,DAT_0919b4d0);
    lVar3 = DAT_091c4ee8;
    if (0 < iVar2) {
      *param_7 = 1;
      uVar6 = *(undefined8 *)(param_3 + 0x100);
      goto LAB_076b6dd0;
    }
    lVar9 = *(long *)(param_3 + 0x100);
    lVar7 = *(long *)(DAT_091c4ee8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c4ee8);
      lVar7 = *(long *)(lVar3 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (lVar9 == 0) goto LAB_076b6df8;
    lVar3 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),**(undefined8 **)(lVar3 + 0xb8),
                       *(undefined8 *)(lVar9 + 0x28));
  }
  if (lVar3 != 0) {
    *param_7 = 0;
    return;
  }
LAB_076b6dfc:
  cVar1 = *(char *)(param_3 + 0x2a);
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_3);
  uVar8 = *(undefined8 *)(param_3 + 0x60);
  if (cVar1 == '\0') {
    puVar4 = &DAT_091ff3f0;
  }
  else {
    puVar4 = &DAT_092119c8;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar6,uVar8);
  uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d1b08);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
}

