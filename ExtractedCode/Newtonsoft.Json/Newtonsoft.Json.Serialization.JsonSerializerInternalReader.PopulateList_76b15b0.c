// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
// address: 0x76b15b0
// body: available
// range: 0x76b15b0-0x76b18b3 inclusive
// range: 0x76b1a24-0x76b1a7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b1a7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
                 (undefined8 param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_095226bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091869b8);
    FUN_03f5c2a4(&DAT_09211cf8);
    DAT_095226bd = 1;
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_2,DAT_091869b8);
  plVar4 = param_2;
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869b8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076b1690;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869b8,0);
LAB_076b1690:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (param_6 != 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
              (param_1,param_3,param_6,plVar4);
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185f80) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_076b1714;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f80,6);
LAB_076b1714:
    uVar7 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
                (param_1,param_3,param_4,plVar4);
      if ((param_3 != (long *)0x0) &&
         ((**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270)), param_4 != 0))
      {
        lVar6 = *(long *)(param_4 + 0x90);
        if (lVar6 == 0) {
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                            (param_1,*(undefined8 *)(param_4 + 0xc0));
          Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemContract(param_4,uVar5);
          lVar6 = *(long *)(param_4 + 0x90);
        }
        plVar2 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                                   (param_1,lVar6,0,param_4,param_5);
        while (uVar7 = Newtonsoft_Json_JsonReader__ReadForType
                                 (param_3,*(undefined8 *)(param_4 + 0x90),plVar2 != (long *)0x0,0),
              (uVar7 & 1) != 0) {
          iVar1 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
          if (iVar1 != 5) {
            if (iVar1 == 0xe) goto LAB_076b1a44;
            if ((plVar2 == (long *)0x0) ||
               (uVar7 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
               (uVar7 & 1) == 0)) {
              uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                                (param_1,param_3,*(undefined8 *)(param_4 + 0xc0),
                                 *(undefined8 *)(param_4 + 0x90),0,param_4,param_5,0);
            }
            else {
              uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                                (param_1,plVar2,param_3,*(undefined8 *)(param_4 + 0xc0),0);
            }
            lVar6 = *param_2;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_09185f80) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_076b18a0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f80,2);
LAB_076b18a0:
            (*(code *)*puVar3)(param_2,uVar5,puVar3[1]);
          }
        }
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
                  (param_1,param_3,param_4,plVar4,DAT_09211cf8);
LAB_076b1a44:
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
                  (param_1,param_3,param_4,plVar4);
        return plVar4;
      }
    }
    else if (param_3 != (long *)0x0) {
      Newtonsoft_Json_JsonReader__Skip(param_3,0);
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

