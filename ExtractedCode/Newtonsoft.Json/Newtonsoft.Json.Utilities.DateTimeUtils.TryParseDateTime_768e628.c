// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseDateTime
// address: 0x768e628
// body: available
// range: 0x768e628-0x768e8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768e8f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTime
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
          )

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09522587 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091f84f8);
    FUN_03f5c2a4(&DAT_09225da8);
    FUN_03f5c2a4(&DAT_091f9430);
    DAT_09522587 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    sVar1 = System_String__get_Chars(param_1,0,0);
    if (sVar1 == 0x2f) {
      if (((8 < *(int *)(param_1 + 0x10)) &&
          (uVar3 = System_String__StartsWith(param_1,DAT_091f9430,4,0), (uVar3 & 1) != 0)) &&
         (uVar3 = System_String__EndsWith(param_1,DAT_091f84f8,4,0), (uVar3 & 1) != 0)) {
        uVar4 = System_String__ToCharArray(param_1,0);
        local_50 = 0;
        uStack_48 = 0;
        Newtonsoft_Json_Utilities_StringReference___ctor
                  (&local_50,uVar4,0,*(undefined4 *)(param_1 + 0x10),0);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeMicrosoft
                          (local_50,uStack_48,param_2,param_5);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
    else if (0xffffffe9 < *(int *)(param_1 + 0x10) - 0x29U) {
      uVar2 = System_String__get_Chars(param_1,0,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar3 = System_Char__IsDigit(uVar2,0);
      if (((uVar3 & 1) != 0) && (sVar1 = System_String__get_Chars(param_1,10,0), sVar1 == 0x54)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar3 = System_DateTime__TryParseExact(param_1,DAT_09225da8,uVar4,0x80,param_5,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = *param_5;
          if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(uVar4,param_2);
          *param_5 = uVar4;
          return 1;
        }
      }
    }
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_3,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeExact
                        (param_1,param_2,param_3,param_4,param_5);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  *param_5 = 0;
  return 0;
}

