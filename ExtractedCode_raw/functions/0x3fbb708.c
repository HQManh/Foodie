// rea decompile_all
// name: FUN_03fbb708
// address: 0x3fbb708
// body: available
// range: 0x3fbb708-0x3fbb797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbb708(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  basic_string local_48 [16];
  void *local_38;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_30 [16];
  void *local_20;
  
  FUN_03f6321c(local_30,param_1);
  lVar2 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    (local_30,'/',0xffffffffffffffff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_48,(ulong)local_30,lVar2 + 1,(allocator *)0xffffffffffffffff);
  pvVar1 = (void *)((ulong)local_48 | 1);
  if (((byte)local_48[0] & 1) != 0) {
    pvVar1 = local_38;
  }
  uVar3 = FUN_03f92a28(pvVar1);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if (((byte)local_30[0] & 1) != 0) {
    operator_delete(local_20);
  }
  return uVar3;
}

