// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
// address: 0x76bbc08
// body: available
// range: 0x76bbc08-0x76bc2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bc198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc25c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (long param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((DAT_095226c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192008);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091b31d8);
    FUN_03f5c2a4(&DAT_091b31d0);
    FUN_03f5c2a4(&DAT_0917d548);
    FUN_03f5c2a4(&DAT_091b7110);
    FUN_03f5c2a4(&DAT_091b7118);
    FUN_03f5c2a4(&DAT_091ff590);
    FUN_03f5c2a4(&DAT_09211d00);
    DAT_095226c2 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917d548);
  FUN_057e0400(lVar4,DAT_091b31d0);
  if (param_4 != (long *)0x0) {
    while (iVar2 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240)),
          iVar2 != 4) {
      if (iVar2 != 5) {
        if (iVar2 == 0xd) {
          return lVar4;
        }
        FUN_039b1d98(param_4);
        uVar3 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240));
        local_78 = thunk_FUN_03fc39d4(&DAT_09187478);
        uStack_70 = 0xffffffffffffffff;
        local_68 = uVar3;
        uVar12 = System_Enum__ToString(&local_78,0);
        uVar13 = thunk_FUN_03fc39d4(&DAT_09211ef8);
        uVar12 = System_String__Concat(uVar13,uVar12,0);
        goto LAB_076bc234;
      }
LAB_076bc130:
      uVar11 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
      if ((uVar11 & 1) == 0) {
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
                  (param_1,param_4,param_2,0,DAT_09211d00);
        return lVar4;
      }
    }
    plVar5 = (long *)(**(code **)(*param_4 + 0x248))(param_4,*(undefined8 *)(*param_4 + 0x250));
    if (plVar5 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      lVar6 = thunk_FUN_03f9944c(DAT_09192008);
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
                (lVar6,uVar12,0);
      if (((param_2 != 0) &&
          (lVar7 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(param_2),
          lVar7 != 0)) &&
         (lVar7 = Newtonsoft_Json_Serialization_JsonPropertyCollection__GetClosestMatchProperty
                            (lVar7,uVar12), lVar6 != 0)) {
        plVar5 = (long *)(lVar6 + 0x20);
        *plVar5 = lVar7;
        thunk_FUN_03f5d7b8(plVar5,lVar7);
        if (*(long *)(param_2 + 0xd8) != 0) {
          lVar7 = Newtonsoft_Json_Serialization_JsonPropertyCollection__GetClosestMatchProperty
                            (*(long *)(param_2 + 0xd8),uVar12);
          plVar17 = (long *)(lVar6 + 0x18);
          *plVar17 = lVar7;
          thunk_FUN_03f5d7b8(plVar17,lVar7);
          lVar7 = DAT_091b31d8;
          if (lVar4 != 0) {
            lVar15 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar6;
                thunk_FUN_03f5d7b8(plVar8,lVar6);
              }
              else {
                FUN_057e0c68(lVar4,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              lVar7 = *plVar5;
              if ((lVar7 == 0) && (lVar7 = *plVar17, lVar7 == 0)) {
                uVar11 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
                if ((uVar11 & 1) != 0) {
                  plVar5 = *(long **)(param_1 + 0x28);
                  if (plVar5 != (long *)0x0) {
                    lVar7 = *plVar5;
                    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar11 != 0) {
                      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == DAT_09186850) {
                          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_076bbf94;
                        }
                        uVar11 = uVar11 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09186850,0);
LAB_076bbf94:
                    iVar2 = (*(code *)*puVar9)(plVar5,puVar9[1]);
                    if (3 < iVar2) {
                      plVar5 = *(long **)(param_1 + 0x28);
                      uVar13 = (**(code **)(*param_4 + 0x278))
                                         (param_4,*(undefined8 *)(*param_4 + 0x280));
                      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09182ff8);
                      }
                      uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                      uVar14 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                                         (DAT_091ff590,uVar14,uVar12,*(undefined8 *)(param_2 + 0x60)
                                         );
                      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09187398);
                      }
                      uVar10 = thunk_FUN_03f99350(param_4,DAT_09185f18);
                      uVar13 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar10,uVar13,uVar14,0);
                      if (plVar5 == (long *)0x0) goto LAB_076bc198;
                      lVar7 = *plVar5;
                      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar11 != 0) {
                        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == DAT_09186850) {
                            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                            goto LAB_076bc0b4;
                          }
                          uVar11 = uVar11 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09186850,1);
LAB_076bc0b4:
                      (*(code *)*puVar9)(plVar5,4,uVar13,0,puVar9[1]);
                    }
                  }
                  if ((*(ulong *)(param_2 + 0xc0) & 0xff) == 0) {
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076bc198;
                    iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
                  }
                  else {
                    iVar2 = (int)(*(ulong *)(param_2 + 0xc0) >> 0x20);
                  }
                  if (iVar2 == 1) {
                    thunk_FUN_03fc39d4(&DAT_09182ff8);
                    FUN_039afb80();
                    uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                    FUN_039b1d98(param_5);
                    uVar14 = (**(code **)(*param_5 + 0x1b8))
                                       (param_5,*(undefined8 *)(*param_5 + 0x1c0));
                    uVar10 = thunk_FUN_03fc39d4(&DAT_091ff580);
                    uVar12 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                                       (uVar10,uVar13,uVar12,uVar14);
                    goto LAB_076bc234;
                  }
LAB_076bc0f4:
                  if (*(long *)(param_2 + 0xe0) == 0) {
                    Newtonsoft_Json_JsonReader__Skip(param_4,0);
                  }
                  else {
                    uVar12 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
                                       (param_1,param_2,param_3,param_4);
LAB_076bc110:
                    *(undefined8 *)(lVar6 + 0x30) = uVar12;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar12);
                  }
                  goto LAB_076bc130;
                }
              }
              else if (*(char *)(lVar7 + 0x80) == '\0') {
                lVar15 = *(long *)(lVar7 + 0x48);
                if (lVar15 == 0) {
                  uVar13 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                                     (param_1,*(undefined8 *)(lVar7 + 0x40));
                  *(undefined8 *)(lVar7 + 0x48) = uVar13;
                  thunk_FUN_03f5d7b8((long *)(lVar7 + 0x48),uVar13);
                  lVar15 = *(long *)(lVar7 + 0x48);
                }
                plVar5 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                                           (param_1,lVar15,*(undefined8 *)(lVar7 + 0x78),param_2,
                                            param_3);
                uVar11 = Newtonsoft_Json_JsonReader__ReadForType
                                   (param_4,*(undefined8 *)(lVar7 + 0x48),plVar5 != (long *)0x0,0);
                if ((uVar11 & 1) != 0) {
                  if ((plVar5 == (long *)0x0) ||
                     (uVar11 = (**(code **)(*plVar5 + 0x1a8))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
                     (uVar11 & 1) == 0)) {
                    uVar12 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                                       (param_1,param_4,*(undefined8 *)(lVar7 + 0x40),
                                        *(undefined8 *)(lVar7 + 0x48),lVar7,param_2,param_3,0);
                  }
                  else {
                    uVar12 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                                       (param_1,plVar5,param_4,*(undefined8 *)(lVar7 + 0x40),0);
                  }
                  goto LAB_076bc110;
                }
              }
              else {
                uVar11 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
                if ((uVar11 & 1) != 0) goto LAB_076bc0f4;
              }
              thunk_FUN_03fc39d4(&DAT_09182ff8);
              FUN_039afb80();
              uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              uVar14 = thunk_FUN_03fc39d4(&DAT_09211d38);
              uVar12 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar14,uVar13,uVar12);
LAB_076bc234:
              uVar12 = Newtonsoft_Json_JsonSerializationException__Create(param_4,uVar12,0);
              uVar13 = thunk_FUN_03fc39d4(&DAT_091d1b80);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar12,uVar13);
            }
          }
        }
      }
    }
  }
LAB_076bc198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

