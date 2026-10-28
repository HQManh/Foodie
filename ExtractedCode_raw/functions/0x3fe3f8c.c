// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::at
// address: 0x3fe3f8c
// body: available
// range: 0x3fe3f8c-0x3fe3fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) const */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(ulong param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  byte *pbVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  ulong in_x1;
  ulong uVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x2;
  ulong in_x3;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  
  bVar4 = *(byte *)param_1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (in_x1 < uVar2) {
    lVar12 = param_1 + 4;
    if ((bVar4 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
    }
    return (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)(lVar12 + in_x1 * 4);
  }
  auVar14 = FUN_03fe365c();
  uVar9 = auVar14._8_8_;
  pbVar7 = auVar14._0_8_;
  bVar5 = *pbVar7;
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar7 + 8);
  }
  if (uVar9 <= uVar2) {
    uVar3 = 4;
    if (((byte)bVar5 & 1) != 0) {
      uVar3 = (*(ulong *)pbVar7 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar2 < in_x3) {
      __grow_by_and_replace
                (pbVar7,uVar3,(uVar2 + in_x3) - uVar3,uVar2,uVar9,0,in_x3,(wchar_t *)in_x2);
    }
    else if (in_x3 != 0) {
      pbVar8 = pbVar7 + 4;
      if ((*(ulong *)pbVar7 & 1) != 0) {
        pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(pbVar7 + 0x10);
      }
      __src = pbVar8 + uVar9 * 4;
      if (uVar2 - uVar9 != 0) {
        uVar3 = in_x3;
        if (pbVar8 + uVar2 * 4 <= in_x2 || in_x2 < __src) {
          uVar3 = 0;
        }
        in_x2 = in_x2 + uVar3 * 4;
        memmove(__src + in_x3 * 4,__src,(uVar2 - uVar9) * 4);
      }
      memmove(__src,in_x2,in_x3 << 2);
      lVar12 = uVar2 + in_x3;
      if (((byte)*pbVar7 & 1) == 0) {
        *pbVar7 = SUB41((int)lVar12 << 1,0);
      }
      else {
        *(long *)(pbVar7 + 8) = lVar12;
      }
      *(undefined4 *)(pbVar8 + lVar12 * 4) = 0;
    }
    return pbVar7;
  }
  auVar14 = FUN_03fe365c(pbVar7);
  pbVar10 = auVar14._0_8_;
  pbVar8 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)0xffffffffffffffff;
  pbVar7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)(ulong)(*pbVar10 >> 1);
  pbVar6 = pbVar10 + 4;
  if ((*pbVar10 & 1) != 0) {
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(pbVar10 + 8);
    pbVar6 = *(byte **)(pbVar10 + 0x10);
  }
  if ((in_x3 != 0) && (in_x2 < pbVar7)) {
    pbVar1 = pbVar6 + (long)pbVar7 * 4;
    pbVar10 = pbVar6 + (long)in_x2 * 4;
    do {
      lVar12 = in_x3 << 2;
      piVar13 = auVar14._8_8_;
      do {
        pbVar11 = pbVar10;
        if (*(int *)pbVar10 == *piVar13) goto LAB_03fe416c;
        lVar12 = lVar12 + -4;
        piVar13 = piVar13 + 1;
      } while (lVar12 != 0);
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar1;
    } while (pbVar10 != pbVar1);
LAB_03fe416c:
    pbVar8 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)((long)pbVar11 - (long)pbVar6 >> 2);
    if (pbVar11 == pbVar1) {
      pbVar8 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)0xffffffffffffffff;
    }
  }
  return pbVar8;
}

