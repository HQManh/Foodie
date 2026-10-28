// rea decompile_all
// name: FUN_03f923bc
// address: 0x3f923bc
// body: available
// range: 0x3f923bc-0x3f9247b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f92454 to 0x3f6321c FUN_03f6321c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f923bc(basic_string *param_1,byte *param_2)

{
  byte bVar1;
  allocator *paVar2;
  ulong local_38;
  undefined8 uStack_30;
  void *local_28;
  byte *local_20;
  ulong uStack_18;
  
  bVar1 = *param_2;
  uStack_18 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uStack_18 = *(ulong *)(param_2 + 8);
  }
  if (uStack_18 != 0) {
    local_20 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      local_20 = param_2 + 1;
    }
    FUN_03f8a450(&local_38,&local_20);
    paVar2 = (allocator *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_38,'.',0xffffffffffffffff);
    if (paVar2 == (allocator *)0xffffffffffffffff) {
      *(undefined8 *)(param_1 + 8) = uStack_30;
      *(ulong *)param_1 = local_38;
      *(void **)(param_1 + 0x10) = local_28;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(param_1,(ulong)&local_38,0,paVar2);
      if ((local_38 & 1) != 0) {
        operator_delete(local_28);
      }
    }
    return;
  }
  FUN_03f6321c(param_1,&DAT_01a45099);
  return;
}

