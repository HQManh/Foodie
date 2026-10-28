// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$AddAttribute
// address: 0x7716844
// body: available
// range: 0x7716844-0x7716bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7716b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7716ba4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7716bb0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7716bbc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__AddAttribute
               (undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5
               ,long *param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_095229d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_0918d4d8);
    FUN_03f5c2a4(&DAT_0918d620);
    DAT_095229d0 = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar9 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0771691c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,0);
LAB_0771691c:
    iVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
    if (iVar2 == 9) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09206348);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar4,param_4,0);
      uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_1,uVar4,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091e0050);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Xml_XmlConvert__EncodeName(param_5,0);
    if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918d620);
    }
    uVar5 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_1);
    uVar10 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_7,0);
    if ((uVar10 & 1) == 0) {
      if (param_6 != (long *)0x0) {
        uVar6 = (**(code **)(*param_6 + 0x238))(param_6,param_7,*(undefined8 *)(*param_6 + 0x240));
        if (param_2 != (long *)0x0) {
          lVar9 = *param_2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091869d0) {
                puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
                goto LAB_07716a80;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869d0,0xb);
LAB_07716a80:
          uVar4 = (*(code *)*puVar3)(param_2,uVar4,uVar6,uVar5,puVar3[1]);
          goto LAB_07716a98;
        }
      }
    }
    else if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091869d0) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
            goto LAB_07716a58;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869d0,10);
LAB_07716a58:
      uVar4 = (*(code *)*puVar3)(param_2,uVar4,uVar5,puVar3[1]);
LAB_07716a98:
      lVar9 = DAT_091869e0;
      lVar7 = thunk_FUN_03f99350(param_3,DAT_091869e0);
      lVar1 = DAT_091869e0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,lVar9);
      }
      plVar8 = (long *)thunk_FUN_03f99350(param_3,DAT_091869e0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,lVar1);
      }
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar1) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07716b1c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar1,0);
LAB_07716b1c:
                    /* WARNING: Could not recover jumptable at 0x07716b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

