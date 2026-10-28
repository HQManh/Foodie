// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$ToBigIntegerNullable
// address: 0x76ed4e4
// body: available
// range: 0x76ed4e4-0x76ed68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ed5e4 to 0x5c28218 FUN_05c28218 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76ed68c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09522868 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b69f8);
    DAT_09522868 = 1;
  }
  if (*(int *)(DAT_09187250 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = Newtonsoft_Json_Linq_JToken__EnsureValue(param_2);
  if (lVar1 != 0) {
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__ValidateToken
                      (lVar1,*(undefined8 *)(*(long *)(DAT_09187250 + 0xb8) + 0x18),1);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 != 0) {
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar6 = Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(lVar1,0);
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = DAT_091b69f8;
        *param_1 = 0;
        FUN_05c28218(param_1,auVar6._0_8_,auVar6._8_8_,uVar3);
        return;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  thunk_FUN_03fc39d4(&DAT_09187250);
  FUN_039afb80();
  uVar4 = Newtonsoft_Json_Linq_JToken__GetType(param_2);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091fd608);
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar4,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar4 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d1418);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

