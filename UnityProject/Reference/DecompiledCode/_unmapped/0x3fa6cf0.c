// rea decompile_all
// name: FUN_03fa6cf0
// address: 0x3fa6cf0
// body: available
// range: 0x3fa6cf0-0x3fa6e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa6cf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_38 [16];
  void *local_28;
  
  FUN_03f6321c(local_38,"Could not load type \'");
  if (param_1[1] != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_38,(char *)*param_1,param_1[1]);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(local_38,'.');
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_38,(char *)*param_2,param_2[1]);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_38,"\' from assembly \'");
  if (param_3[1] == 0) {
    FUN_03fb4dc4();
    lVar6 = FUN_03f9adbc();
    FUN_03fb43ec(local_50,lVar6 + 0x18);
    uVar1 = (ulong)(local_50[0] >> 1);
    pcVar3 = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pcVar3 = local_40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_38,pcVar3,uVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_38,(char *)*param_3,param_3[1]);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_38,"\'.");
  pvVar5 = local_28;
  bVar4 = local_38[0];
  uVar7 = FUN_03fb4dc4();
  pvVar2 = (void *)((ulong)local_38 | 1);
  if (((byte)bVar4 & 1) != 0) {
    pvVar2 = pvVar5;
  }
  uVar7 = FUN_03fa6670(uVar7,"System","TypeLoadException",pvVar2);
  if (((byte)local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return uVar7;
}

