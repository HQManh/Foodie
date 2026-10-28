// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
// address: 0x76be3c4
// body: available
// range: 0x76be3c4-0x76be8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76be4a8 to 0x76bd2b8 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76be8e0 to 0x57e251c FUN_057e251c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76be8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
               (long param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  
  if ((DAT_095226e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    FUN_03f5c2a4(&DAT_09202a90);
    FUN_03f5c2a4(&DAT_0920d978);
    DAT_095226e1 = 1;
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                    (param_1,param_4,0,param_5,param_6,param_7);
  if ((uVar3 & 1) != 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
              (param_1,param_2,param_4);
    return;
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                    (param_1,param_2,param_4,0,param_5,param_6,param_7);
  lVar12 = DAT_091aeac8;
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = param_4;
        thunk_FUN_03f5d7b8(plVar11,param_4);
      }
      else {
        FUN_057e0c68(lVar4,param_4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      plVar11 = *(long **)(param_1 + 0x28);
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09186850) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_076be5b0;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,0);
LAB_076be5b0:
        iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if (2 < iVar2) {
          if (param_2 == 0) goto LAB_076be8e4;
          plVar11 = *(long **)(param_1 + 0x28);
          uVar6 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if ((param_4 == 0) || (uVar8 = System_Object__GetType(param_4,0), param_3 == (long *)0x0))
          goto LAB_076be8e4;
          uVar9 = System_Object__GetType(param_3,0);
          uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                            (DAT_0920d978,uVar7,uVar8,uVar9,0);
          if (*(int *)(DAT_09187398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187398);
          }
          uVar6 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar6,uVar7,0);
          if (plVar11 == (long *)0x0) goto LAB_076be8e4;
          lVar12 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09186850) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_076be6d8;
              }
              uVar3 = uVar3 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,1);
LAB_076be6d8:
          (*(code *)*puVar5)(plVar11,3,uVar6,0,puVar5[1]);
        }
      }
      uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer
                        (param_1);
      if (param_3 != (long *)0x0) {
        (**(code **)(*param_3 + 0x178))
                  (param_3,param_2,param_4,uVar6,*(undefined8 *)(*param_3 + 0x180));
        plVar11 = *(long **)(param_1 + 0x28);
        if (plVar11 != (long *)0x0) {
          lVar12 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09186850) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_076be774;
              }
              uVar3 = uVar3 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,0);
LAB_076be774:
          iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          if (2 < iVar2) {
            if (param_2 == 0) goto LAB_076be8e4;
            plVar11 = *(long **)(param_1 + 0x28);
            uVar6 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182ff8);
            }
            uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (param_4 == 0) goto LAB_076be8e4;
            uVar8 = System_Object__GetType(param_4,0);
            uVar9 = System_Object__GetType(param_3,0);
            uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                              (DAT_09202a90,uVar7,uVar8,uVar9,0);
            if (*(int *)(DAT_09187398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187398);
            }
            uVar6 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar6,uVar7,0);
            if (plVar11 == (long *)0x0) goto LAB_076be8e4;
            lVar12 = *plVar11;
            uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar3 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09186850) {
                  puVar5 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_076be898;
                }
                uVar3 = uVar3 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,1);
LAB_076be898:
            (*(code *)*puVar5)(plVar11,3,uVar6,0,puVar5[1]);
          }
        }
        lVar12 = *(long *)(param_1 + 0x48);
        if (lVar12 != 0) {
          FUN_057e251c(lVar12,*(int *)(lVar12 + 0x18) + -1,DAT_091aeaf8);
          return;
        }
      }
    }
  }
LAB_076be8e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

