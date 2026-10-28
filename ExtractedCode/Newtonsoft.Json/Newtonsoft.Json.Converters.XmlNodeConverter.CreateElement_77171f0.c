// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$CreateElement
// address: 0x77171f0
// body: available
// range: 0x77171f0-0x77173db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77173d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__CreateElement
               (long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_095229d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_0918d4d8);
    DAT_095229d7 = 1;
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Xml_XmlConvert__EncodeName(param_2,0);
  }
  else {
    if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Xml_XmlConvert__EncodeLocalName(param_2,0);
  }
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_4,0);
  if ((uVar2 & 1) == 0) {
    if (param_5 == (long *)0x0) goto LAB_077173d8;
    uVar3 = (**(code **)(*param_5 + 0x238))(param_5,param_4,*(undefined8 *)(*param_5 + 0x240));
  }
  else {
    if (param_5 == (long *)0x0) goto LAB_077173d8;
    uVar3 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  }
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar3,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 != (long *)0x0) {
      lVar5 = *param_3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091869d0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_077173b4;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,9);
LAB_077173b4:
                    /* WARNING: Could not recover jumptable at 0x077173d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_3,uVar1,uVar3,puVar4[1]);
      return;
    }
  }
  else if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091869d0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_07717384;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,8);
LAB_07717384:
                    /* WARNING: Could not recover jumptable at 0x077173a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_3,uVar1,puVar4[1]);
    return;
  }
LAB_077173d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

