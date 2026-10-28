// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$ReadArrayElements
// address: 0x7715e80
// body: available
// range: 0x7715e80-0x771619f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771619c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__ReadArrayElements
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
               undefined8 param_6)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_095229d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3248);
    FUN_03f5c2a4(&DAT_091a3250);
    FUN_03f5c2a4(&DAT_091a3258);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091ad7d0);
    DAT_095229d2 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar1 = Newtonsoft_Json_Utilities_MiscellaneousUtils__GetPrefix(param_4,0);
  plVar2 = (long *)Newtonsoft_Json_Converters_XmlNodeConverter__CreateElement
                             (param_1,param_4,param_3,uVar1,param_6);
  if (param_5 != (long *)0x0) {
    lVar4 = *param_5;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_07715f98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_5,DAT_091869f8,7);
LAB_07715f98:
    (*(code *)*puVar3)(param_5,plVar2,puVar3[1]);
    if (param_2 != (long *)0x0) {
      uVar5 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      iVar7 = 0;
      while (((uVar5 & 1) != 0 &&
             (uVar5 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
             (int)uVar5 != 0xe))) {
        Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeValue
                  (param_1,param_2,param_3,param_6,param_4,plVar2);
        iVar7 = iVar7 + 1;
        uVar5 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      }
      if (*(char *)(param_1 + 0x18) != '\0') {
        Newtonsoft_Json_Converters_XmlNodeConverter__AddJsonArrayAttribute(uVar5,plVar2,param_3);
      }
      if ((iVar7 != 1) || (*(char *)(param_1 + 0x18) == '\0')) {
        return;
      }
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091869f8) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_07716094;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869f8,2);
LAB_07716094:
        lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (lVar4 != 0) {
          FUN_057e185c(&local_68,lVar4,DAT_091ad7d0);
          do {
            do {
              uVar5 = FUN_071bd28c(&local_68,DAT_091a3250);
              if ((uVar5 & 1) == 0) goto LAB_0771616c;
              plVar2 = (long *)thunk_FUN_03f99350(local_58,DAT_091869e0);
            } while (plVar2 == (long *)0x0);
            lVar4 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_07716144;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869f8,1);
LAB_07716144:
            uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            uVar5 = System_String__op_Equality(uVar1,param_4,0);
          } while ((uVar5 & 1) == 0);
          Newtonsoft_Json_Converters_XmlNodeConverter__AddJsonArrayAttribute(uVar5,plVar2,param_3);
LAB_0771616c:
          FUN_071bd288(&local_68,DAT_091a3248);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

