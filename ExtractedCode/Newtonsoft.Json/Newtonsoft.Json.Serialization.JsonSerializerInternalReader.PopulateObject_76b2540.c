// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
// address: 0x76b2540
// body: available
// range: 0x76b2540-0x76b2baf inclusive
// range: 0x76b2bb4-0x76b2be3 inclusive
// range: 0x76b2be8-0x76b2beb inclusive
// range: 0x76b2bf0-0x76b2c57 inclusive
// range: 0x76b2c5c-0x76b2c5f inclusive
// range: 0x76b2c64-0x76b2cbb inclusive
// range: 0x76b2ddc-0x76b2f3f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b2bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2be0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2c54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2cb8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b2f3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject
          (long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
          long param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  
  if ((DAT_095226c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919e810);
    FUN_03f5c2a4(&DAT_091cb048);
    FUN_03f5c2a4(&DAT_091a6378);
    FUN_03f5c2a4(&DAT_091a6380);
    FUN_03f5c2a4(&DAT_091a6388);
    FUN_03f5c2a4(&DAT_09178c78);
    FUN_03f5c2a4(&DAT_09178c68);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091a9648);
    FUN_03f5c2a4(&DAT_091a9650);
    FUN_03f5c2a4(&DAT_091b7110);
    FUN_03f5c2a4(&DAT_091b7118);
    FUN_03f5c2a4(&DAT_091ec040);
    FUN_03f5c2a4(&DAT_091ec048);
    FUN_03f5c2a4(&DAT_09191ff8);
    FUN_03f5c2a4(&DAT_091ff588);
    FUN_03f5c2a4(&DAT_09211d00);
    DAT_095226c4 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
            (param_1,param_3,param_4,param_2);
  if (param_4 == 0) goto LAB_076b2eb0;
  uVar3 = Newtonsoft_Json_Serialization_JsonObjectContract__get_HasRequiredOrDefaultValueProperties
                    (param_4);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b2eb0;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1) != 0) goto LAB_076b26c4;
    lVar13 = 0;
  }
  else {
LAB_076b26c4:
    uVar9 = *(undefined8 *)(param_4 + 0xd8);
    if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
    lVar13 = puVar6[3];
    if (lVar13 == 0) {
      if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
      }
      uVar10 = *puVar6;
      lVar13 = thunk_FUN_03f9944c(DAT_09178c68);
      FUN_05324070(lVar13,uVar10,DAT_091ec040,0);
      plVar4 = (long *)(*(long *)(DAT_09191ff8 + 0xb8) + 0x18);
      *plVar4 = lVar13;
      thunk_FUN_03f5d7b8(plVar4,lVar13);
    }
    if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
    lVar5 = puVar6[4];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09191ff8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_09191ff8 + 0xb8);
      }
      uVar10 = *puVar6;
      lVar5 = thunk_FUN_03f9944c(DAT_09178c78);
      FUN_05323ae4(lVar5,uVar10,DAT_091ec048,0);
      plVar4 = (long *)(*(long *)(DAT_09191ff8 + 0xb8) + 0x20);
      *plVar4 = lVar5;
      thunk_FUN_03f5d7b8(plVar4,lVar5);
    }
    lVar13 = FUN_04b05220(uVar9,lVar13,lVar5,DAT_091cb048);
  }
  if (param_6 != 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
              (param_1,param_3,param_6,param_2);
  }
  if (param_3 != (long *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270));
    do {
      iVar2 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
      if (iVar2 == 4) {
        plVar4 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
        if (plVar4 == (long *)0x0) goto LAB_076b2eb0;
        uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName
                          (param_1,param_3,uVar9);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_4 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = Newtonsoft_Json_Serialization_JsonPropertyCollection__GetClosestMatchProperty
                            (*(long *)(param_4 + 0xd8),uVar9);
          if (lVar5 == 0) {
            plVar4 = *(long **)(param_1 + 0x28);
            if (plVar4 != (long *)0x0) {
              lVar5 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar3 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_09186850) {
                    puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_076b2a10;
                  }
                  uVar3 = uVar3 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar3 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09186850,0);
LAB_076b2a10:
              iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
              if (3 < iVar2) {
                plVar4 = *(long **)(param_1 + 0x28);
                uVar10 = (**(code **)(*param_3 + 0x278))(param_3,*(undefined8 *)(*param_3 + 0x280));
                if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                                  (DAT_091ff588,uVar8,uVar9,*(undefined8 *)(param_4 + 0x60));
                if (*(int *)(DAT_09187398 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = thunk_FUN_03f99350(param_3,DAT_09185f18);
                uVar10 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar7,uVar10,uVar8,0);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar5 = *plVar4;
                uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar3 != 0) {
                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == DAT_09186850) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto LAB_076b2b1c;
                    }
                    uVar3 = uVar3 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar3 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09186850,1);
LAB_076b2b1c:
                (*(code *)*puVar6)(plVar4,4,uVar10,0,puVar6[1]);
              }
            }
            if ((*(ulong *)(param_4 + 0xc0) & 0xff) == 0) {
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
            }
            else {
              iVar2 = (int)(*(ulong *)(param_4 + 0xc0) >> 0x20);
            }
            if (iVar2 == 1) {
              lVar13 = thunk_FUN_03fc39d4(&DAT_09182ff8);
              if (*(int *)(lVar13 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              plVar4 = *(long **)(param_4 + 0x60);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar8 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              uVar7 = thunk_FUN_03fc39d4(&DAT_091ff580);
              uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar10,uVar9,uVar8);
              uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar9,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091d1b68);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,uVar10);
            }
            uVar3 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
            if ((uVar3 & 1) != 0) {
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
                        (param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
          else if ((*(char *)(lVar5 + 0x80) == '\0') &&
                  (uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
                                     (param_1,param_3,lVar5,param_2), (uVar3 & 1) != 0)) {
            plVar4 = (long *)(lVar5 + 0x48);
            lVar11 = *plVar4;
            if (lVar11 == 0) {
              lVar11 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                                 (param_1,*(undefined8 *)(lVar5 + 0x40));
              *plVar4 = lVar11;
              thunk_FUN_03f5d7b8(plVar4);
              lVar11 = *plVar4;
            }
            lVar11 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                               (param_1,lVar11,*(undefined8 *)(lVar5 + 0x78),param_4,param_5);
            uVar3 = Newtonsoft_Json_JsonReader__ReadForType(param_3,*plVar4,lVar11 != 0,0);
            if ((uVar3 & 1) == 0) {
              lVar13 = thunk_FUN_03fc39d4(&DAT_09182ff8);
              if (*(int *)(lVar13 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              uVar8 = thunk_FUN_03fc39d4(&DAT_09211d38);
              uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar10,uVar9);
              uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar9,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091d1b68);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,uVar10);
            }
            Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence
                      (uVar3,param_3,lVar5,lVar13);
            uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
                              (param_1,lVar5,lVar11,param_4,param_5,param_3,param_2);
            if ((uVar3 & 1) == 0) {
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
                        (param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
          else {
            uVar3 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
            if ((uVar3 & 1) != 0) {
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence
                        (uVar3,param_3,lVar5,lVar13);
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
                        (param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
        }
      }
      else if (iVar2 != 5) {
        if (iVar2 != 0xd) {
          FUN_039b1d98(param_3);
          uVar1 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
          local_a8 = thunk_FUN_03fc39d4(&DAT_09187478);
          puStack_a0 = (undefined8 *)0xffffffffffffffff;
          local_98 = uVar1;
          uVar9 = System_Enum__ToString(&local_a8,0);
          uVar10 = thunk_FUN_03fc39d4(&DAT_09211ef8);
          uVar9 = System_String__Concat(uVar10,uVar9,0);
          uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar9,0);
          uVar10 = thunk_FUN_03fc39d4(&DAT_091d1b68);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,uVar10);
        }
        goto LAB_076b2e08;
      }
      uVar3 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
    } while ((uVar3 & 1) != 0);
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
              (param_1,param_3,param_4,param_2,DAT_09211d00);
LAB_076b2e08:
    if (lVar13 != 0) {
      FUN_06fce1bc(&local_90,lVar13,DAT_0919e810);
      local_a8 = 0;
      puStack_a0 = &local_90;
      while (uVar3 = FUN_07273798(&local_90,DAT_091a6380), (uVar3 & 1) != 0) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
                  (param_1,param_2,param_3,param_4,uVar1,local_80,local_78 & 0xffffffff,1);
      }
      FUN_072738bc(&local_90,DAT_091a6378);
    }
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
              (param_1,param_3,param_4,param_2);
    return param_2;
  }
LAB_076b2eb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

