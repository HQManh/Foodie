// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
// address: 0x76bd53c
// body: available
// range: 0x76bd53c-0x76bdbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bd6b8 to 0x76be3c4 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bd7b0 to 0x76bf708 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bd84c to 0x76c020c Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bd8b8 to 0x76bf914 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bd9b8 to 0x76be8e8 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bda4c to 0x76bf998 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bdab4 to 0x76bde00 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bdb38 to 0x76c09c8 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bdba0 to 0x76bf024 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bdba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bdbac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not a
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
               (long param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6,
               long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_095226d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cae48);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185ad0);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_091865b0);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091872e0);
    FUN_03f5c2a4(&DAT_09187338);
    FUN_03f5c2a4(&DAT_09187340);
    FUN_03f5c2a4(&DAT_09187358);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_091873a0);
    FUN_03f5c2a4(&DAT_09187458);
    DAT_095226d1 = 1;
  }
  if (param_3 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x076bd6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
      return;
    }
    goto LAB_076bdba4;
  }
  if ((((param_5 == 0) || (plVar6 = *(long **)(param_5 + 0x78), plVar6 == (long *)0x0)) &&
      ((param_7 == 0 || (plVar6 = *(long **)(param_7 + 0xd0), plVar6 == (long *)0x0)))) &&
     ((param_6 == 0 || (plVar6 = *(long **)(param_6 + 0xa0), plVar6 == (long *)0x0)))) {
    if (param_4 == (long *)0x0) goto LAB_076bdba4;
    plVar6 = (long *)param_4[0xe];
    if (plVar6 != (long *)0x0) goto LAB_076bd674;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076bdba4;
    plVar6 = (long *)Newtonsoft_Json_JsonSerializer__GetMatchingConverter
                               (*(long *)(param_1 + 0x20),param_4[0xc],0);
    if ((plVar6 != (long *)0x0) || (plVar6 = (long *)param_4[0xf], plVar6 != (long *)0x0))
    goto LAB_076bd674;
  }
  else {
LAB_076bd674:
    uVar3 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
                (param_1,param_2,plVar6,param_3,param_4,param_6,param_7);
      return;
    }
    if (param_4 == (long *)0x0) goto LAB_076bdba4;
  }
  uVar7 = DAT_091865b0;
  uVar2 = DAT_09185b08;
  uVar4 = DAT_09185ad0;
  iVar1 = *(int *)((long)param_4 + 0x24);
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        if ((*(byte *)(DAT_09187388 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
           (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8)
            == DAT_09187388)) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          return;
        }
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        if ((*(byte *)(DAT_091872e0 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
           (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_091872e0 + 0x130) * 8 + -8)
            == DAT_091872e0)) {
          if ((char)param_4[0x19] != '\0') {
            if ((*(byte *)(DAT_09535478 + 0x130) <= *(byte *)(*param_3 + 0x130)) &&
               (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 +
                         -8) == DAT_09535478)) {
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
              return;
            }
            goto LAB_076bdbb0;
          }
          lVar5 = thunk_FUN_03f99350(param_3,DAT_09185b08);
          uVar7 = uVar2;
          if (lVar5 != 0) {
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList
                      (param_1,param_2,lVar5,param_4,param_5,param_6,param_7);
            return;
          }
          goto LAB_076bdbb8;
        }
      }
    }
    else if (iVar1 == 3) {
      if ((*(byte *)(DAT_091873a0 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
         (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_091873a0 + 0x130) * 8 + -8) ==
          DAT_091873a0)) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
    }
    else {
      if (iVar1 != 4) {
        return;
      }
      if ((*(byte *)(DAT_09187458 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
         (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187458 + 0x130) * 8 + -8) ==
          DAT_09187458)) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
                  (param_1,param_2,param_3,param_4);
        return;
      }
    }
  }
  else if (iVar1 < 7) {
    if (iVar1 == 5) {
      if ((*(byte *)(DAT_09187338 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
         (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187338 + 0x130) * 8 + -8) ==
          DAT_09187338)) {
        lVar5 = thunk_FUN_03f99350(param_3,DAT_09185a20);
        if (lVar5 == 0) {
          lVar5 = Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper
                            (param_4,param_3,0);
        }
        if (param_1 != 0) {
          Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary
                    (param_1,param_2,lVar5,param_4,param_5,param_6,param_7);
          return;
        }
        goto LAB_076bdba4;
      }
    }
    else {
      if (iVar1 != 6) {
        return;
      }
      lVar5 = thunk_FUN_03f99350(param_3,DAT_09185ad0);
      uVar7 = uVar4;
      if (lVar5 == 0) {
LAB_076bdbb8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,uVar7);
      }
      if ((*(byte *)(DAT_09187340 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
         (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187340 + 0x130) * 8 + -8) ==
          DAT_09187340)) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
                  (param_1,param_2,lVar5,param_4,param_5,param_6,param_7);
        return;
      }
    }
  }
  else {
    if (iVar1 != 7) {
      if (iVar1 != 8) {
        return;
      }
      plVar6 = *(long **)(param_1 + 0x20);
      if (plVar6 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
        uVar4 = FUN_04b049e4(uVar4,DAT_091cae48);
        lVar5 = *param_3;
        if ((*(byte *)(DAT_09187250 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09187250 + 0x130) * 8 + -8) ==
            DAT_09187250)) {
                    /* WARNING: Could not recover jumptable at 0x076bd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x2b8))(param_3,param_2,uVar4,*(undefined8 *)(lVar5 + 0x2c0));
          return;
        }
LAB_076bdbb0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3);
      }
LAB_076bdba4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = thunk_FUN_03f99350(param_3,DAT_091865b0);
    if (lVar5 == 0) goto LAB_076bdbb8;
    if ((*(byte *)(DAT_09187358 + 0x130) <= *(byte *)(*param_4 + 0x130)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187358 + 0x130) * 8 + -8) ==
        DAT_09187358)) {
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
                (param_1,param_2,lVar5,param_4,param_5,param_6,param_7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_4);
}

