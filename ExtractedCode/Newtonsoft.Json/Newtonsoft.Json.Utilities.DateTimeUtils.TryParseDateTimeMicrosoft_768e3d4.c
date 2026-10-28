// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseDateTimeMicrosoft
// address: 0x768e3d4
// body: available
// range: 0x768e3d4-0x768e53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeMicrosoft
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_38;
  
  if ((DAT_0952258b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_0952258b = 1;
  }
  local_38 = 0;
  local_44 = 0;
  local_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseMicrosoftDate
                    (param_1,param_2,&local_38,&local_58,&local_44);
  uVar2 = local_38;
  if ((uVar1 & 1) == 0) {
    *param_4 = 0;
  }
  else {
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertJavaScriptTicksToDateTime(uVar2);
    local_50 = uVar2;
    if (local_44 == 2) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__ToLocalTime(&local_50,0);
    }
    else if (local_44 == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__ToLocalTime(&local_50,0);
      uVar2 = System_DateTime__SpecifyKind(uVar2,0,0);
    }
    *param_4 = uVar2;
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(uVar2,param_3);
    *param_4 = uVar2;
  }
  return uVar1 & 1;
}

