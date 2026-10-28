// rea decompile_all
// name: FUN_03fbf294
// address: 0x3fbf294
// body: available
// range: 0x3fbf294-0x3fbf3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03fbf294(long param_1,uint *param_2)

{
  ushort *puVar1;
  void *pvVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong local_48 [2];
  void *local_38;
  
  puVar1 = (ushort *)(param_1 + 0x135);
  uVar3 = *puVar1;
  if ((uVar3 >> 7 & 1) == 0) {
    FUN_03fbec70(param_1);
    uVar3 = *puVar1;
  }
  if ((uVar3 >> 8 & 1) == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_48,"Could not load type \'");
    if (**(char **)(param_1 + 0x18) != '\0') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_48,*(char **)(param_1 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_48,":");
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_48,*(char **)(param_1 + 0x10));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_48,"\'");
    pvVar2 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      pvVar2 = local_38;
    }
    uVar5 = FUN_03fa6e58(pvVar2);
    uVar5 = FUN_03f5dc08(uVar5,0);
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    DataMemoryBarrier(2,3);
    *puVar1 = *puVar1 & 0xffbe | 2 | (ushort)(*(long *)(param_1 + 0xd8) == 0);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xf8) + -0x10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(byte *)(param_1 + 0x133);
  }
  return iVar4;
}

