// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
// address: 0x76b4680
// body: available
// range: 0x76b4680-0x76b508f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b4e60 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4e68 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4f20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_80 [4];
  char local_7c;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  local_58 = param_4;
  if ((DAT_095226ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a138);
    FUN_03f5c2a4(&DAT_0917a130);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_091869c0);
    FUN_03f5c2a4(&DAT_09187260);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187338);
    FUN_03f5c2a4(&DAT_09187340);
    FUN_03f5c2a4(&DAT_09187358);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_091873a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091f7238);
    DAT_095226ab = 1;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_7c = '\0';
  local_80[0] = '\0';
  local_68 = param_3;
  if (plVar4 == (long *)0x0) goto LAB_076b4f28;
  iVar2 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
  if (iVar2 == 2) {
    if (param_2 == (long *)0x0) goto LAB_076b4f28;
    uVar5 = Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
    local_60 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_076b4f28;
    iVar2 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
    if (iVar2 == 1) {
      if (param_2 == (long *)0x0) {
LAB_076b4844:
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = Newtonsoft_Json_Linq_JToken__ReadFrom(param_2,0);
        if (lVar6 == 0) goto LAB_076b4f28;
        plVar4 = (long *)Newtonsoft_Json_Linq_JToken__CreateReader(lVar6,0);
        if (plVar4 == (long *)0x0) {
          if (param_2 != (long *)0x0) {
            Newtonsoft_Json_JsonReader__get_Culture(param_2,0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_076b4f28;
        }
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09187260 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09187260 + 0x130) * 8 + -8) !=
            DAT_09187260)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        if (param_2 == (long *)0x0) goto LAB_076b4f28;
        lVar6 = Newtonsoft_Json_JsonReader__get_Culture(param_2,0);
        plVar4[8] = lVar6;
        thunk_FUN_03f5d7b8();
        plVar4[0xc] = param_2[0xc];
        thunk_FUN_03f5d7b8();
        Newtonsoft_Json_JsonReader__set_DateParseHandling(plVar4,(int)param_2[0xb],0);
        Newtonsoft_Json_JsonReader__set_DateTimeZoneHandling(plVar4,(int)param_2[9],0);
        Newtonsoft_Json_JsonReader__set_FloatParseHandling
                  (plVar4,*(undefined4 *)((long)param_2 + 0x5c),0);
        *(undefined1 *)((long)plVar4 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
        Newtonsoft_Json_JsonReader__ReadAndAssert(plVar4,0);
        param_2 = plVar4;
      }
      else if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187260 + 0x130)) ||
              (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187260 + 0x130) * 8 + -8
                        ) != DAT_09187260)) goto LAB_076b4844;
      uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
                        (param_1,param_2,&local_68,&local_58,param_5,param_6,param_7,param_8,
                         &local_70,&local_60);
      lVar6 = local_70;
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_076b4f28;
      Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
      uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
                        (param_1,param_2,&local_68,&local_58,param_5,param_6,param_7,param_8,
                         &local_78,&local_60);
      lVar6 = local_78;
    }
    if ((uVar5 & 1) != 0) {
      return lVar6;
    }
  }
  uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
                    (uVar5,local_58);
  plVar1 = local_58;
  plVar4 = local_68;
  if ((uVar5 & 1) != 0) {
    lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject
                      (param_1,param_2);
    return lVar6;
  }
  if (local_58 == (long *)0x0) goto LAB_076b4f28;
  iVar2 = *(int *)((long)local_58 + 0x24);
  if (iVar2 < 5) {
    if (iVar2 == 1) {
      local_7c = '\0';
      if ((*(byte *)(*local_58 + 0x130) < *(byte *)(DAT_09187388 + 0x130)) ||
         (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8) !=
          DAT_09187388)) goto LAB_076b4e5c;
      if (param_8 != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__op_Equality(plVar4,param_3,0);
        plVar4 = local_68;
        if ((uVar5 & 1) != 0) goto LAB_076b4ca8;
        uVar9 = System_Object__GetType(param_8,0);
        if (plVar4 == (long *)0x0) goto LAB_076b4f28;
        uVar5 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x2c0));
        if ((uVar5 & 1) != 0) goto LAB_076b4ca8;
      }
      param_8 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject
                          (param_1,param_2,plVar1,param_5);
      if (local_7c != '\0') {
        return param_8;
      }
LAB_076b4ca8:
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject
                (param_1,param_8,param_2,plVar1,param_5,local_60);
      return param_8;
    }
    if (iVar2 == 3) {
      if ((*(byte *)(*local_58 + 0x130) < *(byte *)(DAT_091873a0 + 0x130)) ||
         (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_091873a0 + 0x130) * 8 + -8) !=
          DAT_091873a0)) goto LAB_076b4e5c;
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_076b4f28;
      iVar2 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
      if ((iVar2 != 2) &&
         (iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
         iVar2 == 4)) {
        plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar4 == (long *)0x0) goto LAB_076b4f28;
        uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        uVar5 = System_String__Equals(uVar9,DAT_091f7238,4,0);
        if ((uVar5 & 1) != 0) {
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          if (iVar2 != 1) {
            lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                              (param_1,param_2,local_68,plVar1,param_5,0,0,param_8);
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            return lVar6;
          }
          FUN_039b1d98(param_2);
          uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_98 = thunk_FUN_03fc39d4(&DAT_09187478);
          uStack_90 = 0xffffffffffffffff;
          local_88 = uVar3;
          uVar9 = System_Enum__ToString(&local_98,0);
          uVar10 = thunk_FUN_03fc39d4(&DAT_09211f00);
          uVar9 = System_String__Concat(uVar10,uVar9,0);
          goto LAB_076b4ef8;
        }
      }
    }
  }
  else {
    if (iVar2 == 5) {
      if ((*(byte *)(*local_58 + 0x130) < *(byte *)(DAT_09187338 + 0x130)) ||
         (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_09187338 + 0x130) * 8 + -8) !=
          DAT_09187338)) goto LAB_076b4e5c;
      if (param_8 != 0) {
        if (((char)local_58[0x20] == '\0') &&
           (lVar6 = thunk_FUN_03f99350(param_8,DAT_09185a20), lVar6 != 0)) {
          uVar9 = FUN_039bcaa8(param_8,DAT_09185a20);
        }
        else {
          uVar9 = Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper
                            (plVar1,param_8);
        }
        lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
                          (param_1,uVar9,param_2,plVar1,param_5,local_60);
        return lVar6;
      }
      lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary
                        (param_1,param_2,local_58,local_80);
      if (local_80[0] == '\0') {
LAB_076b4d64:
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
                  (param_1,lVar6,param_2,plVar1,param_5,local_60);
        if (local_80[0] == '\0') {
          lVar7 = thunk_FUN_03f99350(lVar6,DAT_091869c0);
          if (lVar7 == 0) {
            return lVar6;
          }
          lVar6 = FUN_039afee4(0,DAT_091869c0,lVar7);
          return lVar6;
        }
        lVar7 = plVar1[0x22];
        if (lVar7 == 0) {
          lVar7 = Newtonsoft_Json_Serialization_JsonDictionaryContract__get_ParameterizedCreator
                            (plVar1);
        }
        lVar8 = FUN_03f5c394(DAT_09180318,1);
        if (lVar8 != 0) {
          FUN_039b0da0(lVar8,lVar6);
          FUN_039af17c(lVar8,0,lVar6);
          if (lVar7 != 0) {
            lVar6 = (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),lVar8,*(undefined8 *)(lVar7 + 0x28));
            return lVar6;
          }
        }
LAB_076b4f28:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (local_60 == 0) {
        if ((local_58 == (long *)0x0) ||
           (lVar7 = Newtonsoft_Json_Serialization_JsonContract__get_OnSerializingCallbacks(),
           lVar7 == 0)) goto LAB_076b4f28;
        iVar2 = FUN_039afee4(0,DAT_0917a130,lVar7);
        if (iVar2 < 1) {
          if ((local_58 == (long *)0x0) ||
             (lVar7 = Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks(), lVar7 == 0
             )) goto LAB_076b4f28;
          iVar2 = FUN_039afee4(0,DAT_0917a138,lVar7);
          if (iVar2 < 1) {
            uVar5 = Newtonsoft_Json_Serialization_JsonDictionaryContract__get_HasParameterizedCreatorInternal
                              (plVar1);
            if ((uVar5 & 1) != 0) goto LAB_076b4d64;
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            plVar4 = local_58;
            FUN_039b1d98(local_58);
            lVar6 = plVar4[0xc];
            puVar13 = &DAT_091fdce8;
          }
          else {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            plVar4 = local_58;
            FUN_039b1d98(local_58);
            lVar6 = plVar4[0xc];
            puVar13 = &DAT_091fda30;
          }
        }
        else {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          plVar4 = local_58;
          FUN_039b1d98(local_58);
          lVar6 = plVar4[0xc];
          puVar13 = &DAT_091fda40;
        }
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        plVar4 = local_58;
        FUN_039b1d98(local_58);
        lVar6 = plVar4[0xc];
        puVar13 = &DAT_091fe090;
      }
      uVar10 = thunk_FUN_03fc39d4(puVar13);
      uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar9,lVar6);
      goto LAB_076b4ef8;
    }
    if (iVar2 == 6) {
      if ((*(byte *)(DAT_09187340 + 0x130) <= *(byte *)(*local_58 + 0x130)) &&
         (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_09187340 + 0x130) * 8 + -8) ==
          DAT_09187340)) {
        lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic
                          (param_1,param_2,local_58,param_5,local_60);
        return lVar6;
      }
LAB_076b4e5c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(local_58);
    }
    if (iVar2 == 7) {
      if ((*(byte *)(DAT_09187358 + 0x130) <= *(byte *)(*local_58 + 0x130)) &&
         (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_09187358 + 0x130) * 8 + -8) ==
          DAT_09187358)) {
        lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable
                          (param_1,param_2,local_58,param_5,local_60);
        return lVar6;
      }
      goto LAB_076b4e5c;
    }
  }
  uVar9 = System_Environment__get_NewLine(0);
  uVar10 = System_Environment__get_NewLine(0);
  uVar11 = thunk_FUN_03fc39d4(&DAT_091fdd00);
  uVar12 = thunk_FUN_03fc39d4(&DAT_09210a28);
  uVar9 = System_String__Concat(uVar11,uVar9,uVar12,uVar10,0);
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  plVar4 = local_68;
  uVar11 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
                     (uVar10,local_58);
  uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar10,plVar4,uVar11);
LAB_076b4ef8:
  uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar9,0);
  uVar10 = thunk_FUN_03fc39d4(&DAT_091d1b10);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar10);
}

