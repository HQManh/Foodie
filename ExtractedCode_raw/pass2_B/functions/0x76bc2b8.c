// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
// address: 0x76bc2b8
// body: available
// range: 0x76bc2b8-0x76bc5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bc3f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc4e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc550 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc5c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc5c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76bc5c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6,uint param_7,uint param_8)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  if ((DAT_095226c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186938);
    FUN_03f5c2a4(&DAT_091b6ce8);
    FUN_03f5c2a4(&DAT_091b7368);
    FUN_03f5c2a4(&DAT_091b7378);
    DAT_095226c8 = 1;
  }
  local_58 = 0;
  if (param_7 < 2) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(param_6 + 0x80) == '\0') {
      uVar6 = *(ulong *)(param_6 + 0x10);
      if ((uVar6 & 0xff) == 0) {
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(ulong *)(param_4 + 200);
      }
      iVar5 = (int)(uVar6 >> 0x20);
      if (param_7 == 0) {
        if (iVar5 - 1U < 2) {
          lVar2 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar8 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920bdf0);
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,uVar8);
          uVar3 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar3,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d1b28);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar4);
        }
        if ((param_8 & 1) != 0) {
          plVar7 = (long *)(param_6 + 0x48);
          if (*plVar7 == 0) {
            lVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                              (param_1,*(undefined8 *)(param_6 + 0x40));
            *plVar7 = lVar2;
            thunk_FUN_03f5d7b8(plVar7);
          }
          local_58 = *(undefined8 *)(param_6 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = FUN_05c30b5c(&local_58,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               DAT_091b6ce8);
          if (((uVar1 >> 1 & 1) != 0) && (*(char *)(param_6 + 0x82) != '\0')) {
            lVar2 = *(long *)(param_6 + 0x68);
            uVar3 = Newtonsoft_Json_Serialization_JsonProperty__GetResolvedDefaultValue(param_6);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                              (uVar4,param_3,uVar3,uVar4,*(undefined8 *)(param_6 + 0x48),
                               *(undefined8 *)(param_6 + 0x40));
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_039bd200(0,DAT_09186938,lVar2,param_2,uVar3);
          }
        }
      }
      else {
        if (iVar5 == 3) {
          lVar2 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar8 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920bde0);
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,uVar8);
          uVar3 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar3,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d1b28);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar4);
        }
        if (iVar5 == 2) {
          lVar2 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar8 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920bde8);
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,uVar8);
          uVar3 = Newtonsoft_Json_JsonSerializationException__Create(param_3,uVar3,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d1b28);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar4);
        }
      }
    }
  }
  return;
}

