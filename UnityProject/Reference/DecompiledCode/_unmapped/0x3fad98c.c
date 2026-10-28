// rea decompile_all
// name: FUN_03fad98c
// address: 0x3fad98c
// body: available
// range: 0x3fad98c-0x3fada83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fad98c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  byte local_48 [8];
  ulong local_40;
  char *local_38;
  
  pcVar2 = *(char **)(param_2 + 0x18);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,pcVar2);
  if (((*(byte *)(param_2 + 0x53) >> 1 & 1) != 0) &&
     (puVar4 = *(uint **)(*(long *)(param_2 + 0x40) + 0x10), puVar4 != (uint *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,'<');
    if (*puVar4 != 0) {
      uVar5 = 0;
      do {
        FUN_03fb7b60(local_48,*(undefined8 *)(*(long *)(puVar4 + 2) + uVar5 * 8),2);
        uVar1 = (ulong)(local_48[0] >> 1);
        pcVar2 = (char *)((ulong)local_48 | 1);
        if ((local_48[0] & 1) != 0) {
          uVar1 = local_40;
          pcVar2 = local_38;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar2,uVar1);
        if ((local_48[0] & 1) != 0) {
          operator_delete(local_38);
        }
        uVar3 = *puVar4;
        if (uVar5 < uVar3 - 1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_1,",");
          uVar3 = *puVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,'>');
  }
  return;
}

