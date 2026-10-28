// rea decompile_all
// name: FUN_03fa728c
// address: 0x3fa728c
// body: available
// range: 0x3fa728c-0x3fa7387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa728c(undefined8 param_1)

{
  long lVar1;
  allocator *paVar2;
  undefined8 uVar3;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  
  FUN_03f6321c(&local_40,param_1);
  lVar1 = FUN_03fa9894(&DAT_095350f8,&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (lVar1 != 0x9535100) {
    return *(undefined8 *)(lVar1 + 0x38);
  }
  FUN_03f6321c(&local_40,param_1);
  paVar2 = (allocator *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_40,'(',0);
  if (paVar2 != (allocator *)0xffffffffffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_58,(ulong)&local_40,0,paVar2);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
    uStack_38 = uStack_50;
    local_40 = local_58;
    local_30 = local_48;
    lVar1 = FUN_03fa9894(&DAT_095350f8,&local_40);
    if (lVar1 != 0x9535100) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      goto LAB_03fa7364;
    }
  }
  uVar3 = 0;
LAB_03fa7364:
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  return uVar3;
}

