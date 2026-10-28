// rea decompile_all
// name: FUN_03f9a458
// address: 0x3f9a458
// body: available
// range: 0x3f9a458-0x3f9a527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f9a458(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  byte local_58 [8];
  ulong local_50;
  char *local_48;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 != (uint *)0x0) {
    uVar2 = *param_2;
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        FUN_03fb7b60(local_58,*(undefined8 *)(*(long *)(param_2 + 2) + lVar4),2);
        uVar1 = (ulong)(local_58[0] >> 1);
        pcVar3 = (char *)((ulong)local_58 | 1);
        if ((local_58[0] & 1) != 0) {
          uVar1 = local_50;
          pcVar3 = local_48;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar3,uVar1);
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if ((ulong)(uVar2 - 1) << 3 != lVar4) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_1,", ");
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar2 * 8 - lVar4 != 0);
    }
  }
  return;
}

