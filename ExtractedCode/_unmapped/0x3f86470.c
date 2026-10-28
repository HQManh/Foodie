// rea decompile_all
// name: FUN_03f86470
// address: 0x3f86470
// body: available
// range: 0x3f86470-0x3f8666f inclusive
// range: 0x3f8669c-0x3f8669f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8669c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f86470(long param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  char *__src;
  long lVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == -100) {
    lVar4 = 0;
    goto LAB_03f86640;
  }
  __src = *(char **)(param_2 + 0x10);
  sVar3 = *(size_t *)(param_2 + 0x18);
  if ((sVar3 == 0) || (__s = __src, __src[sVar3] != '\0')) {
    __s = (char *)((long)local_70 - (sVar3 + 0x10 & 0xfffffffffffffff0));
    memcpy(__s,__src,sVar3);
    __s[sVar3] = '\0';
  }
  if (*(char *)(param_2 + 0x2c) != '\0') {
    lVar4 = FUN_03f866a0(param_1,__s,param_3);
    goto LAB_03f86640;
  }
  sVar3 = strlen(__s);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_70,
         sVar3 + 0xc,'\0');
  pvVar5 = (void *)((ulong)local_70 | 2);
  sVar3 = sVar3 + 1;
  pvVar6 = (void *)((ulong)local_70 | 1);
  pvVar1 = pvVar5;
  if ((local_70[0] & 1) != 0) {
    pvVar1 = (void *)((long)local_60 + 1);
  }
  memcpy(pvVar1,__s,sVar3);
  pvVar1 = pvVar5;
  if ((local_70[0] & 1) != 0) {
    pvVar1 = (void *)((long)local_60 + 1);
  }
  *(undefined2 *)((undefined8 *)((long)pvVar1 + sVar3) + 1) = 0;
  *(undefined8 *)((long)pvVar1 + sVar3) = 0;
  if (*(int *)(param_2 + 0x24) == 1) {
    if ((local_70[0] & 1) != 0) {
      pvVar6 = local_60;
    }
    *(undefined1 *)((long)pvVar6 + sVar3) = 0x57;
    if ((local_70[0] & 1) != 0) {
      pvVar5 = (void *)((long)local_60 + 1);
    }
    lVar4 = FUN_03f866a0(param_1,pvVar5,param_3);
    if (lVar4 == 0) {
      lVar4 = FUN_03f866a0(param_1,__s,param_3);
LAB_03f86624:
      if (lVar4 == 0) {
        lVar4 = 0;
      }
    }
  }
  else {
    lVar4 = FUN_03f866a0(param_1,__s,param_3);
    if (lVar4 == 0) {
      if ((local_70[0] & 1) != 0) {
        pvVar6 = local_60;
      }
      *(undefined1 *)((long)pvVar6 + sVar3) = 0x41;
      if ((local_70[0] & 1) != 0) {
        pvVar5 = (void *)((long)local_60 + 1);
      }
      lVar4 = FUN_03f866a0(param_1,pvVar5,param_3);
      goto LAB_03f86624;
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_03f86640:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

