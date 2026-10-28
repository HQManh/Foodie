// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
// address: 0x76b70ac
// body: available
// range: 0x76b70ac-0x76b743f inclusive
// range: 0x76b7444-0x76b7447 inclusive
// range: 0x76b7548-0x76b76c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b743c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b7444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b75d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b7640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b76c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic
               (long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((DAT_095226bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171bb0);
    FUN_03f5c2a4(&DAT_09185ad0);
    FUN_03f5c2a4(&DAT_09211d00);
    DAT_095226bf = 1;
  }
  if (param_3 == 0) goto LAB_076b7640;
  if (*(char *)(param_3 + 0x2a) == '\0') {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = &DAT_091ff3f0;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x80);
    if (lVar11 != 0) {
      if (*(char *)(param_3 + 0x88) != '\0') {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b7640;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) goto LAB_076b7644;
      }
      lVar11 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      uVar5 = DAT_09185ad0;
      if (lVar11 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_03f99350(lVar11,DAT_09185ad0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar11,uVar5);
        }
      }
      if (param_5 != 0) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                  (param_1,param_2,param_5,lVar3);
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
                (param_1,param_2,param_3,lVar3);
      if (param_2 == (long *)0x0) {
LAB_076b7640:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
      while (iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
            iVar1 == 4) {
        plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar4 == (long *)0x0) goto LAB_076b7640;
        uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        if ((uVar6 & 1) == 0) {
          lVar11 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_09211d38);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar7,uVar5);
          uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d1ad0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar7);
        }
        if (*(long *)(param_3 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = Newtonsoft_Json_Serialization_JsonPropertyCollection__GetClosestMatchProperty
                           (*(long *)(param_3 + 0xc0),uVar5);
        if (((lVar11 == 0) || (*(char *)(lVar11 + 0x82) == '\0')) ||
           (*(char *)(lVar11 + 0x80) != '\0')) {
          uVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          uVar6 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsPrimitiveToken(uVar7,0);
          uVar7 = DAT_09171bb0;
          if ((uVar6 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
          }
          else {
            uVar7 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
          }
          uVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                            (param_1,uVar7);
          plVar4 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                                     (param_1,uVar8,0,0,param_4);
          if ((plVar4 == (long *)0x0) ||
             (uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
             (uVar6 & 1) == 0)) {
            uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                              (param_1,param_2,uVar7,uVar8,0,0,param_4,0);
          }
          else {
            uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                              (param_1,plVar4,param_2,uVar7,0);
          }
          Newtonsoft_Json_Serialization_JsonDynamicContract__TrySetMember(param_3,lVar3,uVar5,uVar7)
          ;
        }
        else {
          plVar4 = (long *)(lVar11 + 0x48);
          lVar10 = *plVar4;
          if (lVar10 == 0) {
            lVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                               (param_1,*(undefined8 *)(lVar11 + 0x40));
            *plVar4 = lVar10;
            thunk_FUN_03f5d7b8(plVar4);
            lVar10 = *plVar4;
          }
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                            (param_1,lVar10,*(undefined8 *)(lVar11 + 0x78),0,0);
          uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
                            (param_1,lVar11,uVar5,0,param_4,param_2,lVar3);
          if ((uVar6 & 1) == 0) {
            Newtonsoft_Json_JsonReader__Skip(param_2,0);
          }
        }
        uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        if ((uVar6 & 1) == 0) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
                    (param_1,param_2,param_3,lVar3,DAT_09211d00);
LAB_076b75fc:
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
                    (param_1,param_2,param_3,lVar3);
          return lVar3;
        }
      }
      if (iVar1 == 0xd) goto LAB_076b75fc;
      FUN_039b1d98(param_2);
      uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      local_78 = thunk_FUN_03fc39d4(&DAT_09187478);
      uStack_70 = 0xffffffffffffffff;
      local_68 = uVar2;
      uVar5 = System_Enum__ToString(&local_78,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211ef8);
      uVar5 = System_String__Concat(uVar7,uVar5,0);
      goto LAB_076b75b0;
    }
LAB_076b7644:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = &DAT_092119d0;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar9);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar5,uVar7);
LAB_076b75b0:
  uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d1ad0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
}

