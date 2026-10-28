// rea decompile_all
// name: System.Globalization.TimeSpanParse$$TryParseTimeSpan
// address: 0x750a6fc
// body: available
// range: 0x750a6fc-0x750a8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_TimeSpanParse__TryParseTimeSpan
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [376];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  
  local_60._0_8_ = param_1;
  local_60._8_8_ = param_2;
  if ((DAT_095216c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_091b9808);
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_095216c4 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  memset(auStack_1f0,0,0x178);
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  local_60 = System_MemoryExtensions__Trim(param_1,param_2,0);
  uVar3 = FUN_05ff6f60(local_60,DAT_091b9808);
  if ((uVar3 & 1) == 0) {
    System_Globalization_TimeSpanParse_TimeSpanTokenizer___ctor
              (&local_78,local_60._0_8_,local_60._8_8_,0);
    memset(auStack_1f0,0,0x178);
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_DateTimeFormatInfo__GetInstance(param_4);
    System_Globalization_TimeSpanParse_TimeSpanRawInfo__Init(auStack_1f0,uVar4,0);
    System_Globalization_TimeSpanParse_TimeSpanTokenizer__GetNextToken(&local_210,&local_78,0);
    uVar4 = local_210;
    cVar1 = (char)local_210;
    while (local_210 = uVar4, cVar1 != '\x01') {
      uVar3 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__ProcessToken
                        (auStack_1f0,&local_210,param_5,0);
      if ((uVar3 & 1) == 0) goto LAB_0750a878;
      System_Globalization_TimeSpanParse_TimeSpanTokenizer__GetNextToken(&local_230,&local_78,0);
      local_210._0_1_ = (char)local_230;
      uVar4 = local_230;
      uStack_208 = uStack_228;
      uStack_200 = uStack_220;
      uStack_1f8 = uStack_218;
      cVar1 = (char)local_210;
    }
    uVar3 = System_Globalization_TimeSpanParse__ProcessTerminalState(auStack_1f0,param_3,param_5);
    if ((uVar3 & 1) != 0) {
      uVar2 = 1;
      goto LAB_0750a89c;
    }
  }
LAB_0750a878:
  uVar2 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                    (param_5,2,DAT_0920dc98,0,0,0);
LAB_0750a89c:
  return uVar2 & 1;
}

