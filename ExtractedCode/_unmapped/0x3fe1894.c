// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at
// address: 0x3fe1894
// body: available
// range: 0x3fe1894-0x3fe18d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::at(unsigned long) const */

ulong * std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::at(ulong param_1)

{
  ulong uVar1;
  byte *__src;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  void *__dest;
  ulong in_x1;
  ulong __n;
  byte *in_x2;
  ulong in_x3;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  ulong uStack_78;
  
  bVar4 = *(byte *)param_1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (in_x1 < uVar2) {
    lVar6 = *(long *)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      lVar6 = param_1 + 1;
    }
    return (ulong *)(lVar6 + in_x1);
  }
  auVar9 = FUN_03f695e8();
  __n = auVar9._8_8_;
  puVar5 = auVar9._0_8_;
  bVar4 = (byte)*puVar5;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = puVar5[1];
  }
  if (__n <= uVar2) {
    uVar7 = *puVar5;
    uVar3 = 0x16;
    if ((bVar4 & 1) != 0) {
      uVar3 = (uVar7 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar2 < in_x3) {
      uVar1 = uVar2 + in_x3;
      if (-uVar3 - 0x12 < uVar1 - uVar3) goto LAB_03fe1ac4;
      pbVar8 = (byte *)puVar5[2];
      if ((uVar7 & 1) == 0) {
        pbVar8 = (byte *)((long)puVar5 + 1);
      }
      if (uVar3 < 0x7fffffffffffffe7) {
        uVar7 = uVar1;
        if (uVar1 <= uVar3 * 2) {
          uVar7 = uVar3 * 2;
        }
        uStack_78 = 0x17;
        if (0x16 < uVar7) {
          uStack_78 = (uVar7 | 0xf) + 1;
        }
        __dest = operator_new(uStack_78);
      }
      else {
        uStack_78 = 0xffffffffffffffef;
        __dest = operator_new(0xffffffffffffffef);
      }
      if (__n != 0) {
        memmove(__dest,pbVar8,__n);
      }
      memcpy((void *)((long)__dest + __n),in_x2,in_x3);
      if (uVar2 - __n != 0) {
        memmove((void *)((long)((long)__dest + __n) + in_x3),pbVar8 + __n,uVar2 - __n);
      }
      if ((bVar4 & 1) != 0) {
        operator_delete(pbVar8);
      }
      puVar5[1] = uVar1;
      puVar5[2] = (ulong)__dest;
      *puVar5 = uStack_78 | 1;
      pbVar8 = (byte *)((long)__dest + uVar1);
    }
    else {
      if (in_x3 == 0) {
        return puVar5;
      }
      pbVar8 = (byte *)puVar5[2];
      if ((uVar7 & 1) == 0) {
        pbVar8 = (byte *)((long)puVar5 + 1);
      }
      if (uVar2 - __n != 0) {
        __src = pbVar8 + __n;
        uVar3 = in_x3;
        if (pbVar8 + uVar2 <= in_x2 || in_x2 < __src) {
          uVar3 = 0;
        }
        in_x2 = in_x2 + uVar3;
        memmove(__src + in_x3,__src,uVar2 - __n);
      }
      memmove(pbVar8 + __n,in_x2,in_x3);
      uVar2 = uVar2 + in_x3;
      if ((*puVar5 & 1) == 0) {
        pbVar8 = pbVar8 + uVar2;
        *(byte *)puVar5 = (byte)((int)uVar2 << 1);
      }
      else {
        puVar5[1] = uVar2;
        pbVar8 = pbVar8 + uVar2;
      }
    }
    *pbVar8 = 0;
    return puVar5;
  }
  FUN_03f695e8(puVar5);
LAB_03fe1ac4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118(puVar5);
}

