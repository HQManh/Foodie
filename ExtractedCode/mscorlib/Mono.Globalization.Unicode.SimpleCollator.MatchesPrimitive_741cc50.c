// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$MatchesPrimitive
// address: 0x741cc50
// body: available
// range: 0x741cc50-0x741ce83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Globalization_Unicode_SimpleCollator__MatchesPrimitive
               (undefined8 param_1,uint param_2,char *param_3,uint param_4,int param_5,char *param_6
               ,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_09520f6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f6a = 1;
  }
  if ((((*param_3 == *param_6) && (param_3[1] == param_6[1])) &&
      (((param_2 >> 1 & 1) != 0 || (param_3[2] == param_6[2])))) && (param_3[3] == param_6[3])) {
    if ((param_8 & 1) != 0) {
      if (-1 < (int)param_4) {
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (0x3040 < (param_4 & 0xffff)) {
          if ((param_4 + 0x62 & 0xffff) < 0xffc8) {
            uVar1 = param_4 >> 8 & 0xff;
            if (0x32 < uVar1) goto LAB_0741ce7c;
            if ((param_4 & 0xffff) < 0x309d) {
              if (0x3098 < (param_4 & 0xffff)) goto LAB_0741ce7c;
            }
            else if (uVar1 < 0x31) {
              if ((param_4 & 0xffff) == 0x30fb) goto LAB_0741ce7c;
            }
            else {
              uVar1 = 1;
              if (((param_4 >> 4 & 0xfff) < 0x32d) || ((param_4 & 0xffff) == 0x32ff))
              goto LAB_0741ce54;
            }
          }
          goto LAB_0741ce50;
        }
      }
LAB_0741ce7c:
      uVar1 = 1;
      goto LAB_0741ce54;
    }
    if (((param_2 >> 1 & 1) != 0) || (param_5 != 3)) {
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(param_4);
      uVar2 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(param_7);
      if (((uVar1 ^ uVar2) & 1) == 0) {
        if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((param_2 >> 1 & 1) != 0) || (param_5 == 0)) {
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((param_4 - 0x3041 & 0xffff) < 0x54 != (param_7 - 0x3095 & 0xffff) < 0xffac) {
            if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(param_4 & 0xffff,param_2);
            uVar2 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(param_7 & 0xffff,param_2);
            uVar1 = uVar1 ^ uVar2 ^ 1;
            goto LAB_0741ce54;
          }
        }
      }
    }
  }
LAB_0741ce50:
  uVar1 = 0;
LAB_0741ce54:
  return uVar1 & 1;
}

