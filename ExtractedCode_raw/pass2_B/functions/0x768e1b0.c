// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseDateTime
// address: 0x768e1b0
// body: available
// range: 0x768e1b0-0x768e3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTime
          (undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 *param_6)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  if ((DAT_09522586 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_091f84f8);
    FUN_03f5c2a4(&DAT_091f9430);
    DAT_09522586 = 1;
  }
  if ((int)(param_2 >> 0x20) < 1) goto LAB_0768e3b4;
  sVar1 = Newtonsoft_Json_Utilities_StringReference__get_Item(&local_50,param_2 & 0xffffffff,0);
  if (sVar1 == 0x2f) {
    if (((8 < uStack_48._4_4_) &&
        (uVar3 = Newtonsoft_Json_Utilities_StringReferenceExtensions__StartsWith
                           (local_50,uStack_48,DAT_091f9430,0), (uVar3 & 1) != 0)) &&
       (uVar4 = Newtonsoft_Json_Utilities_StringReferenceExtensions__EndsWith
                          (local_50,uStack_48,DAT_091f84f8,0), uVar3 = uStack_48, uVar5 = local_50,
       (uVar4 & 1) != 0)) {
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeMicrosoft
                        (uVar5,uVar3,param_3,param_6);
joined_r0x0768e2b0:
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (0xffffffe9 < uStack_48._4_4_ - 0x29U) {
    uVar2 = Newtonsoft_Json_Utilities_StringReference__get_Item(&local_50,param_2 & 0xffffffff,0);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535460);
    }
    uVar3 = System_Char__IsDigit(uVar2,0);
    if (((uVar3 & 1) != 0) &&
       (sVar1 = Newtonsoft_Json_Utilities_StringReference__get_Item(&local_50,(int)param_2 + 10,0),
       uVar3 = uStack_48, uVar5 = local_50, sVar1 == 0x54)) {
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeIso
                        (uVar5,uVar3,param_3,param_6);
      goto joined_r0x0768e2b0;
    }
  }
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_4,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = Newtonsoft_Json_Utilities_StringReference__ToString(&local_50,0);
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835c0);
    }
    uVar3 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeExact
                      (uVar5,param_3,param_4,param_5,param_6);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
LAB_0768e3b4:
  *param_6 = 0;
  return 0;
}

