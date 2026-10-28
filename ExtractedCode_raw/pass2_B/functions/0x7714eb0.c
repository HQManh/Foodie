// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$ConvertTokenToXmlValue
// address: 0x7714eb0
// body: available
// range: 0x7714eb0-0x77155e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771503c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7715140 to 0x7c27c00 System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715218 to 0x7c279bc System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77152c0 to 0x7c277f8 System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715414 to 0x752856c System.Convert$$ToBase64String (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715458 to 0x7c2789c System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715504 to 0x7c281d0 System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715544 to 0x7c27a90 System.Xml.XmlConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7715548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77155e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other dec
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if ((DAT_095229d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0918d4d8);
    DAT_095229d1 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (iVar1 < 10) {
    if (iVar1 == 7) {
      plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar7 == (long *)0x0) || (*plVar7 != DAT_09181b78)) {
        uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar4 = System_Convert__ToInt64(uVar4,uVar10,0);
        if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918d4d8);
        }
        uVar4 = System_Xml_XmlConvert__ToString(uVar4,0);
        return uVar4;
      }
      puVar8 = (undefined8 *)thunk_FUN_03f99594();
      uStack_38 = puVar8[1];
      local_40 = *puVar8;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181b78);
      }
      uVar4 = System_Numerics_BigInteger__ToString(&local_40,uVar4,0);
    }
    else {
      if (iVar1 == 8) {
        plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar7 != (long *)0x0) && (*plVar7 == DAT_091837d8)) {
          puVar8 = (undefined8 *)thunk_FUN_03f99594();
          uVar4 = *puVar8;
          uVar10 = puVar8[1];
          if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Xml_XmlConvert__ToString(uVar4,uVar10,0);
          return uVar4;
        }
        plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar7 != (long *)0x0) && (*plVar7 == DAT_09535450)) {
          puVar9 = (undefined4 *)thunk_FUN_03f99594();
          uVar3 = *puVar9;
          if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Xml_XmlConvert__ToString(uVar3,0);
          return uVar4;
        }
        uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar4 = System_Convert__ToDouble(uVar4,uVar10,0);
        if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Xml_XmlConvert__ToString(uVar4,0);
        return uVar4;
      }
      if (iVar1 != 9) goto LAB_0771554c;
      plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      uVar4 = 0;
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07714fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        return uVar4;
      }
    }
  }
  else if (iVar1 < 0x10) {
    if (iVar1 == 10) {
      uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uVar2 = System_Convert__ToBoolean(uVar4,uVar10,0);
      if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918d4d8);
      }
      uVar4 = System_Xml_XmlConvert__ToString(uVar2 & 1,0);
      return uVar4;
    }
    if (iVar1 != 0xb) goto LAB_0771554c;
    uVar4 = 0;
  }
  else {
    if (iVar1 != 0x10) {
      if (iVar1 == 0x11) {
        lVar5 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar4 = DAT_0917fc88;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03f99350(lVar5,DAT_0917fc88);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar5,uVar4);
          }
        }
        uVar4 = System_Convert__ToBase64String(lVar6,0);
        return uVar4;
      }
LAB_0771554c:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_1);
      local_44 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      uVar10 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar10 = FUN_03f5c42c(uVar10,&local_44);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091fde90);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar11,uVar4,uVar10,0);
      uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_1,uVar4,0);
      uVar10 = thunk_FUN_03fc39d4(&DAT_091e0058);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar10);
    }
    plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar7 != (long *)0x0) && (*plVar7 == DAT_09183590)) {
      puVar8 = (undefined8 *)thunk_FUN_03f99594();
      uVar4 = *puVar8;
      uVar10 = puVar8[1];
      if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Xml_XmlConvert__ToString(uVar4,uVar10,0);
      return uVar4;
    }
    uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar4 = System_Convert__ToDateTime(uVar4,uVar10,0);
    local_28 = uVar4;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar3 = System_DateTime__get_Kind(&local_28,0);
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835c0);
    }
    uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__ToSerializationMode(uVar3,0);
    if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918d4d8);
    }
    uVar4 = System_Xml_XmlConvert__ToString(uVar4,uVar3,0);
  }
  return uVar4;
}

