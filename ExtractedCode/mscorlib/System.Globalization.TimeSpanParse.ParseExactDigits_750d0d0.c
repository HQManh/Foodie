// rea decompile_all
// name: System.Globalization.TimeSpanParse$$ParseExactDigits
// address: 0x750d0d0
// body: available
// range: 0x750d0d0-0x750d193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Globalization_TimeSpanParse__ParseExactDigits
               (undefined8 param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 < 1) {
    param_3 = 0;
    iVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    iVar4 = 0;
    do {
      uVar1 = System_Globalization_TimeSpanParse_TimeSpanTokenizer__get_NextChar(param_1,0);
      if (9 < (ushort)(uVar1 - 0x30)) {
        System_Globalization_TimeSpanParse_TimeSpanTokenizer__BackOne(param_1,0);
        param_3 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 * 10 + (uint)uVar1 + -0x30;
      if (iVar3 == 0) {
        iVar2 = iVar2 + 1;
      }
    } while (param_3 != iVar4);
  }
  *param_4 = iVar2;
  *param_5 = iVar3;
  return param_2 <= param_3;
}

