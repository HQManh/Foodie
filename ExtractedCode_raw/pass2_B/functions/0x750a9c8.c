// rea decompile_all
// name: System.Globalization.TimeSpanParse$$TryParseExactTimeSpan
// address: 0x750a9c8
// body: available
// range: 0x750a9c8-0x750ab5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750aa6c to 0x752c730 System.Globalization.TimeSpanParse.TimeSpanResult$$SetFailure (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x750aac0 to 0x750ca00 System.Globalization.TimeSpanParse$$TryParseByFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x750ab58 to 0x750a6fc System.Globalization.TimeSpanParse$$TryParseTimeSpan (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TimeSpanParse__TryParseExactTimeSpan
                (undefined8 param_1,undefined8 param_2,ushort *param_3,undefined8 param_4,
                undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_095216cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09202d98);
    DAT_095216cb = 1;
  }
  if ((int)param_4 == 1) {
    uVar1 = *param_3;
    if (uVar1 < 0x55) {
      if (uVar1 == 0x47) {
        uVar4 = 6;
LAB_0750ab38:
        uVar3 = System_Globalization_TimeSpanParse__TryParseTimeSpan
                          (param_1,param_2,uVar4,param_5,param_7);
        return uVar3;
      }
      if (uVar1 != 0x54) goto LAB_0750aa34;
    }
    else if (uVar1 != 0x74) {
      if (uVar1 == 0x67) {
        uVar4 = 2;
        goto LAB_0750ab38;
      }
      if (uVar1 != 99) goto LAB_0750aa34;
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uVar2 = System_Globalization_TimeSpanParse_StringParser__TryParse
                      (&local_70,param_1,param_2,param_7,0);
    return (ulong)(uVar2 & 1);
  }
  if ((int)param_4 != 0) {
    uVar3 = System_Globalization_TimeSpanParse__TryParseByFormat
                      (param_1,param_2,param_3,param_4,param_6,param_7);
    return uVar3;
  }
LAB_0750aa34:
  uVar3 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                    (param_7,2,DAT_09202d98,0,0,0);
  return uVar3;
}

