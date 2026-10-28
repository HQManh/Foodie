// rea decompile_all
// name: Newtonsoft.Json.Converters.BinaryConverter$$GetByteArray
// address: 0x7702ca8
// body: available
// range: 0x7702ca8-0x7702e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7702dac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702e90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_BinaryConverter__GetByteArray(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_18;
  
  if ((DAT_0952294e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c10);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0918afb8);
    FUN_03f5c2a4(&DAT_0920e070);
    FUN_03f5c2a4(&DAT_09210a48);
    DAT_0952294e = 1;
  }
  local_18 = 0;
  if ((param_2 != (long *)0x0) &&
     (plVar1 = (long *)System_Object__GetType(param_2,0), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
    uVar3 = System_String__op_Equality(uVar2,DAT_0920e070,0);
    if ((uVar3 & 1) == 0) {
      if (*param_2 != DAT_0918afb8) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar7 = System_Object__GetType(param_2,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211f78);
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar2,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_09187420);
        uVar7 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonSerializationException___ctor(uVar7,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c38b8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar2);
      }
      puVar6 = (undefined8 *)thunk_FUN_03f99594(param_2);
      local_18 = *puVar6;
      if (*(int *)(DAT_0918afb8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Data_SqlTypes_SqlBinary__get_Value(&local_18,0);
    }
    else {
      System_Object__GetType(param_2,0);
      Newtonsoft_Json_Converters_BinaryConverter__EnsureReflectionObject();
      if (**(long **)(DAT_09181c10 + 0xb8) == 0) goto LAB_07702e04;
      lVar4 = Newtonsoft_Json_Utilities_ReflectionObject__GetValue
                        (**(long **)(DAT_09181c10 + 0xb8),param_2,DAT_09210a48,0);
      uVar2 = DAT_0917fc88;
      if (lVar4 != 0) {
        lVar5 = thunk_FUN_03f99350(lVar4,DAT_0917fc88);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar4,uVar2);
        }
      }
    }
    return;
  }
LAB_07702e04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

