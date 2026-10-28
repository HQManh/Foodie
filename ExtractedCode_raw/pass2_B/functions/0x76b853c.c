// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
// address: 0x76b853c
// body: available
// range: 0x76b853c-0x76b87c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b85b8 to 0x76ad67c Newtonsoft.Json.Serialization.JsonArrayContract$$CreateTemporaryCollection (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b85f0 to 0x76ad26c Newtonsoft.Json.Serialization.JsonArrayContract$$CreateWrapper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b86e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b874c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b87b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
               (long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_095226b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09185f80);
    DAT_095226b7 = 1;
  }
  lVar2 = DAT_091c0270;
  if (param_3 == 0) {
LAB_076b874c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(param_3 + 0xf2) == '\0') {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_3);
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    puVar5 = &DAT_091fdc50;
    goto LAB_076b8780;
  }
  lVar9 = *(long *)(param_3 + 0x108);
  if (lVar9 != 0) {
    if (*(char *)(param_3 + 0x110) != '\0') goto LAB_076b85a0;
    lVar7 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar7 = *(long *)(lVar2 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),**(undefined8 **)(lVar2 + 0xb8),
                       *(undefined8 *)(lVar9 + 0x28));
    goto LAB_076b869c;
  }
  if (*(char *)(param_3 + 0x28) != '\0') {
    *param_4 = 1;
    lVar2 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateTemporaryCollection(param_3);
    if (*(char *)(param_3 + 0xf1) == '\0') {
      return lVar2;
    }
    lVar2 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(param_3);
    return lVar2;
  }
  lVar2 = *(long *)(param_3 + 0x80);
  if (lVar2 != 0) {
    if (*(char *)(param_3 + 0x88) != '\0') {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b874c;
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) goto LAB_076b8704;
    }
    lVar2 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
LAB_076b869c:
    if (*(char *)(param_3 + 0xf1) != '\0') {
      lVar2 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(param_3,lVar2);
    }
    *param_4 = 0;
    uVar4 = DAT_09185f80;
    if (lVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_03f99350(lVar2,DAT_09185f80);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar2,uVar4);
      }
    }
    return lVar9;
  }
LAB_076b8704:
  uVar3 = Newtonsoft_Json_Serialization_JsonArrayContract__get_HasParameterizedCreatorInternal
                    (param_3);
  if ((uVar3 & 1) != 0) {
LAB_076b85a0:
    *param_4 = 1;
    lVar2 = Newtonsoft_Json_Serialization_JsonArrayContract__CreateTemporaryCollection(param_3);
    return lVar2;
  }
  cVar1 = *(char *)(param_3 + 0x2a);
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_3);
  uVar8 = *(undefined8 *)(param_3 + 0x60);
  if (cVar1 == '\0') {
    puVar5 = &DAT_091ff3f0;
  }
  else {
    puVar5 = &DAT_092119c0;
  }
LAB_076b8780:
  uVar6 = thunk_FUN_03fc39d4(puVar5);
  uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar8);
  uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar4,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d1b00);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar8);
}

