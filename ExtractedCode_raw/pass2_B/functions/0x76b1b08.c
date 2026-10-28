// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
// address: 0x76b1b08
// body: available
// range: 0x76b1b08-0x76b2167 inclusive
// range: 0x76b216c-0x76b216f inclusive
// range: 0x76b2174-0x76b2177 inclusive
// range: 0x76b23e4-0x76b24eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b2164 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b216c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b245c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b24e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
                 (long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_095226bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_091869c0);
    FUN_03f5c2a4(&DAT_091873a0);
    FUN_03f5c2a4(&DAT_09211d00);
    DAT_095226bb = 1;
  }
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  plVar3 = (long *)thunk_FUN_03f99350(param_2,DAT_091869c0);
  plVar5 = param_2;
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091869c0) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076b1c40;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869c0,0);
LAB_076b1c40:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (param_6 != 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
              (param_1,param_3,param_6,plVar5);
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
            (param_1,param_3,param_4,plVar5);
  if (param_3 == (long *)0x0) {
LAB_076b245c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270));
  if (param_4 == 0) goto LAB_076b245c;
  plVar3 = (long *)(param_4 + 0xd8);
  if (*plVar3 == 0) {
    uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                      (param_1,*(undefined8 *)(param_4 + 200));
    *(undefined8 *)(param_4 + 0xd8) = uVar6;
    thunk_FUN_03f5d7b8(plVar3,uVar6);
  }
  if (*(long *)(param_4 + 0x90) == 0) {
    uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                      (param_1,*(undefined8 *)(param_4 + 0xd0));
    Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemContract(param_4,uVar6);
  }
  plVar15 = *(long **)(param_4 + 0xa0);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                                (param_1,*(undefined8 *)(param_4 + 0x90),0,param_4,param_5);
  }
  plVar9 = (long *)*plVar3;
  if (plVar9 != (long *)0x0) {
    if ((*(byte *)(DAT_091873a0 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_091873a0 + 0x130) * 8 + -8) ==
        DAT_091873a0)) {
      uVar14 = *(uint *)((long)plVar9 + 0x8c) & 0xfffffffe;
      goto LAB_076b1d54;
    }
  }
  uVar14 = 0;
LAB_076b1d54:
  do {
    iVar1 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    if (iVar1 == 4) {
      plVar9 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
      if (plVar9 == (long *)0x0) goto LAB_076b245c;
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName
                         (param_1,param_3,uVar6);
      if ((uVar10 & 1) == 0) {
        if (uVar14 == 0x1c) {
          uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          lVar8 = param_3[0xc];
          uVar7 = Newtonsoft_Json_JsonReader__get_Culture(param_3,0);
          if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset
                             (uVar6,lVar8,uVar7,&local_78,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                              (uVar6,param_3,plVar9,uVar6,*(undefined8 *)(param_4 + 0xd8),
                               *(undefined8 *)(param_4 + 200));
          }
          else {
            uStack_a8 = uStack_70;
            local_b0 = local_78;
            uVar6 = FUN_03f5c42c(DAT_09183590,&local_b0);
          }
        }
        else if (uVar14 == 0x1a) {
          uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          lVar8 = param_3[9];
          lVar13 = param_3[0xc];
          uVar7 = Newtonsoft_Json_JsonReader__get_Culture(param_3,0);
          if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTime
                             (uVar6,(int)lVar8,lVar13,uVar7,&local_68,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                              (uVar6,param_3,plVar9,uVar6,*(undefined8 *)(param_4 + 0xd8),
                               *(undefined8 *)(param_4 + 200));
          }
          else {
            local_b0 = local_68;
            uVar6 = FUN_03f5c42c(DAT_09183548,&local_b0);
          }
        }
        else {
          lVar8 = *plVar3;
          if ((lVar8 == 0) || (*(char *)(lVar8 + 0x12) == '\0')) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                              (uVar6,param_3,plVar9,uVar6,*(undefined8 *)(param_4 + 0xd8),
                               *(undefined8 *)(param_4 + 200));
          }
          else {
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
            if (plVar11 == (long *)0x0) {
LAB_076b1f20:
              lVar13 = 0;
            }
            else {
              if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 +
                           -8) != DAT_09183878)) goto LAB_076b1f20;
              lVar13 = plVar11[6];
            }
            uVar7 = *(undefined8 *)(lVar8 + 0x18);
            uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
            if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Newtonsoft_Json_Utilities_EnumUtils__ParseEnum(uVar7,lVar13,uVar6,0,0);
          }
        }
        uVar10 = Newtonsoft_Json_JsonReader__ReadForType
                           (param_3,*(undefined8 *)(param_4 + 0x90),plVar15 != (long *)0x0,0);
        if ((uVar10 & 1) == 0) {
          uVar6 = thunk_FUN_03fc39d4(&DAT_09211d00);
          uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar6,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d1b50);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar7);
        }
        if (plVar15 == (long *)0x0) {
LAB_076b2074:
          uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                            (param_1,param_3,*(undefined8 *)(param_4 + 0xd0),
                             *(undefined8 *)(param_4 + 0x90),0,param_4,param_5,0);
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
          if ((uVar10 & 1) == 0) goto LAB_076b2074;
          uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                            (param_1,plVar15,param_3,*(undefined8 *)(param_4 + 0xd0),0);
        }
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185a20) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_076b20f8;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a20,1);
LAB_076b20f8:
        (*(code *)*puVar4)(param_2,uVar6,uVar7,puVar4[1]);
      }
    }
    else if (iVar1 != 5) {
      if (iVar1 != 0xd) {
        FUN_039b1d98(param_3);
        uVar2 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        local_b0 = thunk_FUN_03fc39d4(&DAT_09187478);
        uStack_a8 = 0xffffffffffffffff;
        local_a0 = uVar2;
        uVar6 = System_Enum__ToString(&local_b0,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09211ef8);
        uVar6 = System_String__Concat(uVar7,uVar6,0);
        uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar6,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d1b50);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      goto LAB_076b2418;
    }
    uVar10 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
  } while ((uVar10 & 1) != 0);
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
            (param_1,param_3,param_4,plVar5,DAT_09211d00);
LAB_076b2418:
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
            (param_1,param_3,param_4,plVar5);
  return plVar5;
}

