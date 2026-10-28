// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
// address: 0x76c1e58
// body: available
// range: 0x76c1e58-0x76c22b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c21d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c22b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5,
          long param_6,long *param_7,long *param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((DAT_095226dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09186938);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_091b7368);
    FUN_03f5c2a4(&DAT_091b7378);
    DAT_095226dc = 1;
  }
  if (param_6 == 0) goto LAB_076c21d4;
  if ((((*(char *)(param_6 + 0x80) != '\0') || (*(char *)(param_6 + 0x81) == '\0')) ||
      (uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
                         (param_1,param_2,param_6,param_3), (uVar1 & 1) == 0)) ||
     (uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified
                        (param_1,param_2,param_6,param_3), (uVar1 & 1) == 0)) goto LAB_076c1eec;
  plVar10 = (long *)(param_6 + 0x48);
  if (*plVar10 == 0) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x40), plVar11 == (long *)0x0))
    goto LAB_076c21d4;
    lVar7 = *plVar11;
    uVar12 = *(undefined8 *)(param_6 + 0x40);
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185890) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076c1fd8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185890,0);
LAB_076c1fd8:
    lVar7 = (*(code *)*puVar2)(plVar11,uVar12,puVar2[1]);
    *plVar10 = lVar7;
    thunk_FUN_03f5d7b8(plVar10,lVar7);
  }
  plVar11 = *(long **)(param_6 + 0x68);
  if (plVar11 == (long *)0x0) {
LAB_076c21d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar11;
  uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09186938) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_076c2058;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186938,1);
LAB_076c2058:
  lVar7 = (*(code *)*puVar2)(plVar11,param_3,puVar2[1]);
  *param_8 = lVar7;
  thunk_FUN_03f5d7b8(param_8,lVar7);
  lVar7 = *plVar10;
  if (lVar7 == 0) goto LAB_076c21d4;
  if ((*(char *)(lVar7 + 0x29) == '\0') && (lVar7 = 0, *param_8 != 0)) {
    lVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(param_1);
  }
  *param_7 = lVar7;
  thunk_FUN_03f5d7b8(param_7);
  if (param_4 == (long *)0x0) {
LAB_076c20d0:
    plVar10 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_09187388 + 0x130)) goto LAB_076c20d0;
    plVar10 = param_4;
    if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8) !=
        DAT_09187388) {
      plVar10 = (long *)0x0;
    }
  }
  uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty
                    (param_1,*param_8,plVar10,param_6);
  if ((uVar1 & 1) == 0) {
LAB_076c1eec:
    *param_7 = 0;
    thunk_FUN_03f5d7b8(param_7,0);
    *param_8 = 0;
    thunk_FUN_03f5d7b8(param_8,0);
    return 0;
  }
  uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                    (param_1,*param_8,param_6,*param_7,param_4,param_5);
  if ((uVar1 & 1) != 0) {
    Newtonsoft_Json_Serialization_JsonProperty__WritePropertyName(param_6,param_2,0);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
              (param_1,param_2,*param_8);
    return 0;
  }
  uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                    (param_1,param_2,*param_8,param_6,*param_7,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (*param_8 != 0) {
    return 1;
  }
  if (param_4 != (long *)0x0) {
    if (*(byte *)(DAT_09187388 + 0x130) <= *(byte *)(*param_4 + 0x130)) {
      if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8) !=
          DAT_09187388) {
        param_4 = (long *)0x0;
      }
      goto LAB_076c21a4;
    }
  }
  param_4 = (long *)0x0;
LAB_076c21a4:
  uVar1 = *(ulong *)(param_6 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    if (param_4 == (long *)0x0) {
      return 1;
    }
    uVar1 = param_4[0x19];
  }
  iVar6 = (int)(uVar1 >> 0x20);
  if (iVar6 == 3) {
    FUN_039b1d98(param_2);
    uVar12 = Newtonsoft_Json_JsonWriter__get_ContainerPath(param_2,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_6);
    uVar9 = *(undefined8 *)(param_6 + 0x30);
    puVar4 = &DAT_091fe560;
  }
  else {
    if (iVar6 != 2) {
      return 1;
    }
    FUN_039b1d98(param_2);
    uVar12 = Newtonsoft_Json_JsonWriter__get_ContainerPath(param_2,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_6);
    uVar9 = *(undefined8 *)(param_6 + 0x30);
    puVar4 = &DAT_091fe568;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar9,0);
  uVar12 = Newtonsoft_Json_JsonSerializationException__Create(0,uVar12,uVar3,0,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d1ba0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar3);
}

