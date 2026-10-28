// rea decompile_all
// name: FUN_03fb8b18
// address: 0x3fb8b18
// body: available
// range: 0x3fb8b18-0x3fb8c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb8b18(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  char *__src;
  ulong uVar2;
  char *pcVar3;
  ulong *puVar4;
  char *__dest_00;
  long lVar5;
  char *extraout_x1;
  byte *__src_00;
  ulong local_d0 [2];
  void *local_c0;
  undefined4 local_80 [2];
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  
  thunk_FUN_03fabbf4(param_4);
  __n = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  FUN_03f5d198(local_d0,extraout_x1,__n + 1,local_80);
  __dest = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    __dest = local_c0;
  }
  if (__n != 0) {
    __src_00 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __src_00 = param_3 + 1;
    }
    memmove(__dest,__src_00,__n);
  }
  *(undefined2 *)((long)__dest + __n) = 0x2f;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_d0,extraout_x1);
  local_50 = (char *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  if (((byte)local_d0[0]._0_1_ & 1) != 0) {
    operator_delete(local_c0);
  }
  uVar2 = local_60;
  uVar1 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
  }
  __dest_00 = calloc(uVar1 + 1,1);
  pcVar3 = local_50;
  __src = (char *)((ulong)&local_60 | 1);
  if ((uVar2 & 1) != 0) {
    __src = local_50;
  }
  pcStack_70 = strcpy(__dest_00,__src);
  local_80[0] = 0;
  local_78 = param_2;
  local_68 = param_4;
  FUN_03fb8cc4(param_1,1);
  FUN_03fb8e18(local_d0,param_1,local_80);
  local_d0[0] = 0;
  while (lVar5 = thunk_FUN_03fabc90(param_4,local_d0), lVar5 != 0) {
    FUN_03fb8b18(param_1,param_2,&local_60,lVar5);
  }
  if ((uVar2 & 1) != 0) {
    operator_delete(pcVar3);
  }
  return;
}

