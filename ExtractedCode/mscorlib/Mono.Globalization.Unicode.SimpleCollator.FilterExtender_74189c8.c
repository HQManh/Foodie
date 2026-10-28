// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$FilterExtender
// address: 0x74189c8
// body: available
// range: 0x74189c8-0x7418bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Globalization_Unicode_SimpleCollator__FilterExtender
               (undefined8 param_1,uint param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((DAT_09520f61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f61 = 1;
  }
  if (param_3 == 3) {
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (0x3040 < (param_2 & 0xffff)) {
      if ((param_2 + 0x62 & 0xffff) < 0xffc8) {
        uVar4 = param_2 >> 8 & 0xff;
        if (0x32 < uVar4) {
          return param_2;
        }
        if ((param_2 & 0xffff) < 0x309d) {
          if (0x3098 < (param_2 & 0xffff)) {
            return param_2;
          }
        }
        else {
          if (uVar4 < 0x31) {
            uVar4 = 0x30fb;
          }
          else {
            if ((param_2 >> 4 & 0xfff) < 0x32d) {
              return param_2;
            }
            uVar4 = 0x32ff;
          }
          if (uVar4 == (param_2 & 0xffff)) {
            return param_2;
          }
        }
      }
      if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(param_2 & 0xffff,param_4);
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187d38);
      }
      uVar4 = param_2 - 0x3095;
      uVar2 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,param_2);
      uVar2 = uVar2 & 7;
      if (uVar2 < 4) {
        if (uVar2 == 2) {
          uVar2 = 0x30a2;
          if (0xffab < (uVar4 & 0xffff)) {
            uVar2 = 0x3042;
          }
          bVar1 = (uVar3 & 1) == 0;
          param_2 = 0xff71;
        }
        else {
          if (uVar2 != 3) {
            return param_2;
          }
          uVar2 = 0x30a4;
          if (0xffab < (uVar4 & 0xffff)) {
            uVar2 = 0x3044;
          }
          bVar1 = (uVar3 & 1) == 0;
          param_2 = 0xff72;
        }
      }
      else if (uVar2 == 4) {
        uVar2 = 0x30a6;
        if (0xffab < (uVar4 & 0xffff)) {
          uVar2 = 0x3046;
        }
        bVar1 = (uVar3 & 1) == 0;
        param_2 = 0xff73;
      }
      else if (uVar2 == 5) {
        uVar2 = 0x30a8;
        if (0xffab < (uVar4 & 0xffff)) {
          uVar2 = 0x3048;
        }
        bVar1 = (uVar3 & 1) == 0;
        param_2 = 0xff74;
      }
      else {
        if (uVar2 != 6) {
          return param_2;
        }
        uVar2 = 0x30aa;
        if (0xffab < (uVar4 & 0xffff)) {
          uVar2 = 0x304a;
        }
        bVar1 = (uVar3 & 1) == 0;
        param_2 = 0xff75;
      }
      if (bVar1) {
        param_2 = uVar2;
      }
    }
  }
  return param_2;
}

