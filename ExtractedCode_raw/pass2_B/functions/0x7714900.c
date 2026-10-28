// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$DeserializeValue
// address: 0x7714900
// body: available
// range: 0x7714900-0x7714eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77149ec to 0x7715e80 Newtonsoft.Json.Converters.XmlNodeConverter$$ReadArrayElements (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7714aa4 to 0x7713e14 Newtonsoft.Json.Converters.XmlNodeConverter$$ReadElement (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7714d64 to 0x77155e8 Newtonsoft.Json.Converters.XmlNodeConverter$$CreateInstruction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7714da4 to 0x7715a94 Newtonsoft.Json.Converters.XmlNodeConverter$$CreateDocumentType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7714eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeValue
               (long param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
               long *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_095229cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_091f7070);
    FUN_03f5c2a4(&DAT_091f7068);
    FUN_03f5c2a4(&DAT_091f7020);
    FUN_03f5c2a4(&DAT_091f6d38);
    FUN_03f5c2a4(&DAT_091f7078);
    DAT_095229cd = 1;
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    uVar2 = System_String__op_Equality(param_5,DAT_091f7070,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__op_Equality(param_5,DAT_091f7020,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__op_Equality(param_5,DAT_091f7078,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = System_String__op_Equality(param_5,DAT_091f7068,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_5,0);
            if ((uVar2 & 1) == 0) {
              if (param_5 == 0) goto LAB_07714eac;
              uVar3 = System_String__get_Chars(param_5,0,0);
              if (((uint)uVar3 & 0xffff) == 0x3f) {
                Newtonsoft_Json_Converters_XmlNodeConverter__CreateInstruction
                          (uVar3,param_2,param_3,param_6,param_5);
                return;
              }
            }
            uVar2 = System_String__Equals(param_5,DAT_091f6d38,5,0);
            if ((uVar2 & 1) != 0) {
              Newtonsoft_Json_Converters_XmlNodeConverter__CreateDocumentType
                        (uVar2,param_2,param_3,param_6);
              return;
            }
            goto LAB_077149a4;
          }
          if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
          if (param_3 == (long *)0x0) goto LAB_07714eac;
          lVar5 = *param_3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091869d0) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_07714e1c;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,4);
LAB_07714e1c:
          uVar3 = (*(code *)*puVar4)(param_3,uVar3,puVar4[1]);
          if (param_6 == (long *)0x0) goto LAB_07714eac;
          lVar5 = *param_6;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091869f8) goto LAB_07714e7c;
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
        }
        else {
          if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
          if (param_3 == (long *)0x0) goto LAB_07714eac;
          lVar5 = *param_3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091869d0) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_07714db8;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,3);
LAB_07714db8:
          uVar3 = (*(code *)*puVar4)(param_3,uVar3,puVar4[1]);
          if (param_6 == (long *)0x0) goto LAB_07714eac;
          lVar5 = *param_6;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091869f8) goto LAB_07714e7c;
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
        }
      }
      else {
        if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
        if (param_3 == (long *)0x0) goto LAB_07714eac;
        lVar5 = *param_3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091869d0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_07714cc0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,2);
LAB_07714cc0:
        uVar3 = (*(code *)*puVar4)(param_3,uVar3,puVar4[1]);
        if (param_6 == (long *)0x0) goto LAB_07714eac;
        lVar5 = *param_6;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091869f8) goto LAB_07714e7c;
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
      }
    }
    else {
      if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
      if (param_3 == (long *)0x0) goto LAB_07714eac;
      lVar5 = *param_3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091869d0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_07714bd0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,1);
LAB_07714bd0:
      uVar3 = (*(code *)*puVar4)(param_3,uVar3,puVar4[1]);
      if (param_6 == (long *)0x0) goto LAB_07714eac;
      lVar5 = *param_6;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091869f8) goto LAB_07714e7c;
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_6,DAT_091869f8,7);
LAB_07714e8c:
                    /* WARNING: Could not recover jumptable at 0x07714ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_6,uVar3,puVar4[1]);
    return;
  }
LAB_077149a4:
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 != 2) {
      Newtonsoft_Json_Converters_XmlNodeConverter__ReadElement
                (param_1,param_2,param_3,param_6,param_5,param_4);
      return;
    }
    Newtonsoft_Json_Converters_XmlNodeConverter__ReadArrayElements
              (param_1,param_2,param_3,param_5,param_6,param_4);
    return;
  }
LAB_07714eac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07714e7c:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
  goto LAB_07714e8c;
}

