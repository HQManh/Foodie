// rea decompile_all
// name: FUN_03f8de7c
// address: 0x3f8de7c
// body: available
// range: 0x3f8de7c-0x3f8dfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f8de7c(char *param_1,undefined8 param_2)

{
  size_t __n;
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  char *pcVar4;
  bool bVar5;
  size_t __n_00;
  ulong *puVar6;
  long lVar7;
  undefined *__src;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  
  lVar8 = 0;
  do {
    bVar3 = (&DAT_09534b38)[lVar8];
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)((long)&DAT_09534b40 + lVar8);
    }
    __n_00 = strlen(param_1);
    FUN_03f5d198(local_98);
    pvVar2 = (void *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      pvVar2 = local_88;
    }
    if (__n != 0) {
      __src = *(undefined **)((long)&DAT_09534b48 + lVar8);
      if (((&DAT_09534b38)[lVar8] & 1) == 0) {
        __src = &DAT_09534b39 + lVar8;
      }
      memmove(pvVar2,__src,__n);
    }
    if (__n_00 != 0) {
      memmove((void *)((long)pvVar2 + __n),param_1,__n_00);
    }
    *(undefined1 *)((long)((long)pvVar2 + __n) + __n_00) = 0;
    uVar1 = (ulong)((byte)(&DAT_09534b50)[lVar8] >> 1);
    pcVar4 = &DAT_09534b51 + lVar8;
    if (((&DAT_09534b50)[lVar8] & 1) != 0) {
      uVar1 = *(ulong *)((long)&DAT_09534b58 + lVar8);
      pcVar4 = *(char **)((long)&DAT_09534b60 + lVar8);
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_98,pcVar4,uVar1);
    local_70 = (void *)puVar6[2];
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    pvVar2 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar2 = local_70;
    }
    lVar7 = FUN_03f868b4(pvVar2,param_2);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  } while ((lVar7 == -100) && (bVar5 = lVar8 != 0x150, lVar8 = lVar8 + 0x30, bVar5));
  return lVar7;
}

