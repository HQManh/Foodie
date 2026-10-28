// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$CreateDocumentType
// address: 0x7715a94
// body: available
// range: 0x7715a94-0x7715e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7715dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7715e24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__CreateDocumentType
               (undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_095229d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_091fae28);
    FUN_03f5c2a4(&DAT_091fae58);
    FUN_03f5c2a4(&DAT_091fae30);
    FUN_03f5c2a4(&DAT_091fae48);
    DAT_095229d6 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
    if ((uVar2 & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar1 == 0xd) break;
        plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar3 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar2 = System_String__op_Equality(uVar4,DAT_091fae30,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = System_String__op_Equality(uVar4,DAT_091fae48,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = System_String__op_Equality(uVar4,DAT_091fae58,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = System_String__op_Equality(uVar4,DAT_091fae28,0);
              if ((uVar2 & 1) == 0) {
                plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                           (param_2,*(undefined8 *)(*param_2 + 0x250));
                uVar9 = thunk_FUN_03fc39d4(&DAT_09211e10);
                if (plVar3 == (long *)0x0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                }
                uVar9 = System_String__Concat(uVar9,uVar8,0);
                goto LAB_07715dfc;
              }
              Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
              if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
              lVar6 = *param_2;
            }
            else {
              Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
              if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
              lVar6 = *param_2;
            }
          }
          else {
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
            lVar6 = *param_2;
          }
        }
        else {
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
          lVar6 = *param_2;
        }
        uVar2 = (**(code **)(lVar6 + 0x288))(param_2,*(undefined8 *)(lVar6 + 0x290));
      } while ((uVar2 & 1) != 0);
    }
    if (lVar11 == 0) {
      uVar9 = thunk_FUN_03fc39d4(&DAT_092085a0);
LAB_07715dfc:
      uVar9 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar9,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091e0060);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar8);
    }
    if (param_3 != (long *)0x0) {
      lVar6 = *param_3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091869d0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_07715d48;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,6);
LAB_07715d48:
      uVar9 = (*(code *)*puVar5)(param_3,lVar11,uVar9,uVar8,uVar10,puVar5[1]);
      if (param_4 != (long *)0x0) {
        lVar11 = *param_4;
        uVar2 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091869f8) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_07715dc4;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_091869f8,7);
LAB_07715dc4:
                    /* WARNING: Could not recover jumptable at 0x07715de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(param_4,uVar9,puVar5[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

