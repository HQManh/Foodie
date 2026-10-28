// rea decompile_all
// name: FUN_03fb7078
// address: 0x3fb7078
// body: available
// range: 0x3fb7078-0x3fb7267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_03fb7078(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1
            ,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,undefined2 *param_5)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  allocator *paVar4;
  long lVar5;
  undefined4 uVar6;
  char *__nptr;
  ulong local_78;
  undefined8 uStack_70;
  char *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  paVar4 = (allocator *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                     (param_1,'.',0);
  if (paVar4 == (allocator *)0xffffffffffffffff) {
    return 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_60,(ulong)param_1,0,paVar4);
  __nptr = (char *)((ulong)&local_60 | 1);
  pcVar2 = __nptr;
  if ((local_60 & 1) != 0) {
    pcVar2 = local_50;
  }
  iVar3 = atoi(pcVar2);
  paVar4 = paVar4 + 1;
  *param_2 = (short)iVar3;
  lVar5 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                    (param_1,'.',(ulong)paVar4);
  if (lVar5 != -1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_78,(ulong)param_1,(ulong)paVar4,
                 (allocator *)(lVar5 - (long)paVar4));
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    pcVar2 = __nptr;
    if ((local_78 & 1) != 0) {
      pcVar2 = local_68;
    }
    iVar3 = atoi(pcVar2);
    uVar1 = lVar5 + 1;
    *param_3 = (short)iVar3;
    lVar5 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                      (param_1,'.',uVar1);
    if (lVar5 != -1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_78,(ulong)param_1,uVar1,(allocator *)(lVar5 - uVar1));
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      pcVar2 = __nptr;
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      iVar3 = atoi(pcVar2);
      *param_4 = (short)iVar3;
      uVar1 = (ulong)((byte)*param_1 >> 1);
      if (((byte)*param_1 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_78,(ulong)param_1,lVar5 + 1U,
                   (allocator *)(uVar1 - (lVar5 + 1U)));
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      if ((local_78 & 1) != 0) {
        __nptr = local_68;
      }
      iVar3 = atoi(__nptr);
      uVar6 = 1;
      *param_5 = (short)iVar3;
      goto LAB_03fb7234;
    }
  }
  uVar6 = 0;
LAB_03fb7234:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  return uVar6;
}

