// rea decompile_all
// name: System.Globalization.TimeSpanParse.StringParser$$ParseTime
// address: 0x752cb1c
// body: available
// range: 0x752cb1c-0x752ccd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_TimeSpanParse_StringParser__ParseTime
          (long param_1,long *param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  int local_34;
  
  if ((DAT_09521841 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_09521841 = 1;
  }
  local_34 = 0;
  *param_2 = 0;
  uVar4 = System_Globalization_TimeSpanParse_StringParser__ParseInt(param_1,0x17,&local_34,param_3);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + 0x10);
  *param_2 = (long)local_34 * 36000000000;
  if (sVar1 == 0x3a) {
    System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
    uVar4 = System_Globalization_TimeSpanParse_StringParser__ParseInt
                      (param_1,0x3b,&local_34,param_3);
    if ((uVar4 & 1) != 0) {
      sVar1 = *(short *)(param_1 + 0x10);
      *param_2 = *param_2 + (long)local_34 * 600000000;
      if (sVar1 == 0x3a) {
        System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
        if (*(short *)(param_1 + 0x10) != 0x2e) {
          uVar4 = System_Globalization_TimeSpanParse_StringParser__ParseInt
                            (param_1,0x3b,&local_34,param_3);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          sVar1 = *(short *)(param_1 + 0x10);
          *param_2 = *param_2 + (long)local_34 * 10000000;
          if (sVar1 != 0x2e) {
            return 1;
          }
        }
        System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
        uVar5 = 10000000;
        while (uVar2 = *(ushort *)(param_1 + 0x10) - 0x30, uVar2 < 10) {
          *param_2 = *param_2 + (ulong)(uVar2 * (uVar5 / 10));
          System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
          bVar3 = uVar5 < 0x14;
          uVar5 = uVar5 / 10;
          if (bVar3) {
            return 1;
          }
        }
      }
      return 1;
    }
  }
  else {
    System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_3,2,DAT_0920dc98,0,0);
  }
  return 0;
}

