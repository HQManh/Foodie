// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
// address: 0x76b5e48
// body: available
// range: 0x76b5e48-0x76b65a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b6498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b649c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b64a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b65a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
          (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
          undefined8 *param_10)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_095226ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186440);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091f7238);
    FUN_03f5c2a4(&DAT_091f7220);
    FUN_03f5c2a4(&DAT_091f7240);
    FUN_03f5c2a4(&DAT_0920be60);
    FUN_03f5c2a4(&DAT_091f71a8);
    FUN_03f5c2a4(&DAT_091f71e8);
    DAT_095226ac = 1;
  }
  *param_10 = 0;
  thunk_FUN_03f5d7b8(param_10,0);
  *param_9 = 0;
  thunk_FUN_03f5d7b8(param_9,0);
  if (param_2 == (long *)0x0) goto LAB_076b6498;
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 1) {
    plVar12 = (long *)param_2[0x12];
    if (plVar12 == (long *)0x0) goto LAB_076b6498;
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
        DAT_09187220)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar12);
    }
    lVar2 = Newtonsoft_Json_Linq_JObject__Property(plVar12,DAT_091f71e8,4,0);
    if (lVar2 == 0) {
LAB_076b60b0:
      lVar2 = Newtonsoft_Json_Linq_JObject__get_Item(plVar12,DAT_091f7220,0);
      if (lVar2 != 0) {
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar2,0);
        lVar2 = Newtonsoft_Json_Linq_JToken__CreateReader(lVar2,0);
        if (lVar2 == 0) goto LAB_076b6498;
        Newtonsoft_Json_JsonReader__ReadAndAssert(lVar2,0);
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
                  (param_1,lVar2,param_3,param_4,param_5,param_6,param_7,uVar6);
        lVar2 = Newtonsoft_Json_Linq_JObject__get_Item(plVar12,DAT_091f7238,0);
        if (lVar2 != 0) {
          do {
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
            if (iVar1 == 4) {
              plVar12 = (long *)(**(code **)(*param_2 + 0x248))
                                          (param_2,*(undefined8 *)(*param_2 + 0x250));
              if ((plVar12 != (long *)0x0) && (*plVar12 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
              uVar10 = System_String__op_Equality(plVar12,DAT_091f7238,0);
              if ((uVar10 & 1) != 0) goto LAB_076b62a4;
            }
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            Newtonsoft_Json_JsonReader__Skip(param_2,0);
          } while( true );
        }
      }
      lVar2 = Newtonsoft_Json_Linq_JObject__get_Item(plVar12,DAT_091f71a8,0);
      if (lVar2 != 0) {
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar2,0);
        *param_10 = uVar6;
        thunk_FUN_03f5d7b8(param_10,uVar6);
      }
      lVar2 = Newtonsoft_Json_Linq_JObject__get_Item(plVar12,DAT_091f7240,0);
      if (lVar2 == 0) goto LAB_076b6298;
      lVar2 = Newtonsoft_Json_Linq_JToken__CreateReader(lVar2,0);
      if (lVar2 == 0) {
LAB_076b6498:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonReader__ReadAndAssert(lVar2,0);
      lVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
                        (param_1,lVar2,*param_3,*param_4,param_5,param_8,*param_10);
      *param_9 = lVar2;
      thunk_FUN_03f5d7b8(param_9,lVar2);
    }
    else {
      plVar3 = (long *)Newtonsoft_Json_Linq_JProperty__get_Value(lVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_076b6498;
      iVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
      if ((iVar1 != 8) &&
         (iVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230)),
         iVar1 != 10)) {
        FUN_039b1d98(plVar3);
        uVar6 = Newtonsoft_Json_Linq_JToken__get_Path(plVar3,0);
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09206338);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091f71e8);
        uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar7,uVar9);
LAB_076b657c:
        uVar6 = Newtonsoft_Json_JsonSerializationException__Create(plVar3,uVar6,uVar7,0,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d1b78);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      if (*(int *)(DAT_09187250 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar2,0);
      if (lVar4 == 0) goto LAB_076b60b0;
      plVar3 = *(long **)(lVar2 + 0x20);
      if ((plVar3 != (long *)0x0) || (plVar3 = *(long **)(lVar2 + 0x18), plVar3 != (long *)0x0)) {
        FUN_039b1d98(plVar3);
        uVar6 = Newtonsoft_Json_Linq_JToken__get_Path(plVar3,0);
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091fb548);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091f71e8);
        uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar7,uVar9);
        goto LAB_076b657c;
      }
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (plVar12 = (long *)Newtonsoft_Json_JsonSerializer__GetReferenceResolver
                                      (*(long *)(param_1 + 0x20),0), plVar12 == (long *)0x0))
      goto LAB_076b6498;
      lVar2 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09186440) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076b62b8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186440,0);
LAB_076b62b8:
      lVar2 = (*(code *)*puVar5)(plVar12,param_1,lVar4,puVar5[1]);
      *param_9 = lVar2;
      thunk_FUN_03f5d7b8(param_9,lVar2);
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 != (long *)0x0) {
        lVar2 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09186850) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076b6338;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186850,0);
LAB_076b6338:
        iVar1 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (2 < iVar1) {
          plVar12 = *(long **)(param_1 + 0x28);
          uVar6 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*param_9 == 0) goto LAB_076b6498;
          uVar8 = System_Object__GetType(*param_9,0);
          uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920be60,uVar7,lVar4,uVar8);
          if (*(int *)(DAT_09187398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187398);
          }
          uVar6 = Newtonsoft_Json_JsonPosition__FormatMessage(param_2,uVar6,uVar7,0);
          if (plVar12 == (long *)0x0) goto LAB_076b6498;
          lVar2 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09186850) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_076b6450;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186850,1);
LAB_076b6450:
          (*(code *)*puVar5)(plVar12,3,uVar6,0,puVar5[1]);
        }
      }
    }
    Newtonsoft_Json_JsonReader__Skip(param_2,0);
    uVar6 = 1;
  }
  else {
LAB_076b6298:
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
LAB_076b62a4:
    uVar6 = 0;
  }
  return uVar6;
}

