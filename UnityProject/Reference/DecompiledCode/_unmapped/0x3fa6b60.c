// rea decompile_all
// name: FUN_03fa6b60
// address: 0x3fa6b60
// body: available
// range: 0x3fa6b60-0x3fa6cb7 inclusive
// range: 0x3fa6cec-0x3fa6cef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa6cec to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa6b60(undefined8 *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined1 auStack_8d [85];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_03f6321c(local_a8,"Could not find Windows Runtime type \'");
  if (param_1[1] != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(local_a8,(char *)*param_1,param_1[1]);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(local_a8,'.');
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_a8,(char *)*param_2,param_2[1]);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_a8,"\'.");
  pvVar5 = local_98;
  bVar4 = local_a8[0];
  uVar6 = FUN_03fb4dc4();
  pvVar1 = (void *)((ulong)local_a8 | 1);
  if (((byte)bVar4 & 1) != 0) {
    pvVar1 = pvVar5;
  }
  lVar7 = FUN_03fa6670(uVar6,"System","TypeLoadException",pvVar1);
  if (param_1[1] == 0) {
    uVar2 = *param_2;
    if (uVar2 < uVar2 + param_2[1]) {
      uVar9 = 0;
      do {
        if (*(char *)(uVar2 + uVar9) == '.') {
          if (uVar9 != 0xffffffffffffffff) goto LAB_03fa6c80;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (param_2[1] != uVar9);
    }
    memcpy(auStack_8d,
           "The provided identity format is not recognized. (Exception from HRESULT: 0x80132003)",
           0x55);
    lVar8 = FUN_03fa673c(&DAT_01a45042,auStack_8d);
    *(undefined4 *)(lVar8 + 0x60) = 0x80132003;
    FUN_03f5ef9c(lVar7 + 0x28);
  }
LAB_03fa6c80:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}

