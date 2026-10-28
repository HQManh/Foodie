// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$CreateInstruction
// address: 0x77155e8
// body: available
// range: 0x77155e8-0x7715a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7715a00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7715a38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__CreateInstruction
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,long param_5)

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
  long lVar10;
  
  if ((DAT_095229d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_091fae50);
    FUN_03f5c2a4(&DAT_091fae60);
    FUN_03f5c2a4(&DAT_091fae08);
    FUN_03f5c2a4(&DAT_091fae20);
    DAT_095229d5 = 1;
  }
  uVar2 = System_String__op_Equality(param_5,DAT_091fae08,0);
  if ((uVar2 & 1) == 0) {
    if (param_5 == 0) goto LAB_07715a00;
    uVar8 = System_String__Substring(param_5,1,0);
    if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918d620);
    }
    uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
    if (param_3 == (long *)0x0) goto LAB_07715a00;
    lVar10 = *param_3;
    uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869d0) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_077158f8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,7);
LAB_077158f8:
    uVar8 = (*(code *)*puVar5)(param_3,uVar8,uVar9,puVar5[1]);
    if (param_4 == (long *)0x0) goto LAB_07715a00;
    lVar10 = *param_4;
    uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869f8) goto LAB_077159c8;
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_07715a00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    uVar9 = 0;
    uVar8 = 0;
    if ((uVar2 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
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
        uVar2 = System_String__op_Equality(uVar4,DAT_091fae60,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = System_String__op_Equality(uVar4,DAT_091fae20,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = System_String__op_Equality(uVar4,DAT_091fae50,0);
            if ((uVar2 & 1) == 0) {
              plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                         (param_2,*(undefined8 *)(*param_2 + 0x250));
              uVar8 = thunk_FUN_03fc39d4(&DAT_09211e10);
              if (plVar3 == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
              }
              uVar8 = System_String__Concat(uVar8,uVar9,0);
              goto LAB_07715a10;
            }
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
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
          lVar10 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
          lVar6 = *param_2;
        }
        uVar2 = (**(code **)(lVar6 + 0x288))(param_2,*(undefined8 *)(lVar6 + 0x290));
      } while ((uVar2 & 1) != 0);
    }
    if (lVar10 == 0) {
      uVar8 = thunk_FUN_03fc39d4(&DAT_09212e98);
LAB_07715a10:
      uVar8 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar8,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091e0068);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
    if (param_3 == (long *)0x0) goto LAB_07715a00;
    lVar6 = *param_3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_07715960;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,5);
LAB_07715960:
    uVar8 = (*(code *)*puVar5)(param_3,lVar10,uVar8,uVar9,puVar5[1]);
    if (param_4 == (long *)0x0) goto LAB_07715a00;
    lVar10 = *param_4;
    uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869f8) goto LAB_077159c8;
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
  }
  puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_091869f8,7);
LAB_077159d8:
                    /* WARNING: Could not recover jumptable at 0x077159fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(param_4,uVar8,puVar5[1]);
  return;
LAB_077159c8:
  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar7 + 7) * 0x10 + 0x138);
  goto LAB_077159d8;
}

