// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
// address: 0x3fe3fd4
// body: available
// range: 0x3fe3fd4-0x3fe40f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  byte *pbVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  
  bVar5 = *this;
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    uVar3 = 4;
    if (((byte)bVar5 & 1) != 0) {
      uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar2 < param_3) {
      __grow_by_and_replace(this,uVar3,(uVar2 + param_3) - uVar3,uVar2,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      pbVar7 = this + 4;
      if ((*(ulong *)this & 1) != 0) {
        pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      __src = pbVar7 + param_1 * 4;
      if (uVar2 - param_1 != 0) {
        uVar3 = param_3;
        if (pbVar7 + uVar2 * 4 <= param_2 || param_2 < __src) {
          uVar3 = 0;
        }
        param_2 = param_2 + uVar3;
        memmove(__src + param_3 * 4,__src,(uVar2 - param_1) * 4);
      }
      memmove(__src,param_2,param_3 << 2);
      lVar10 = uVar2 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar10 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar10;
      }
      *(undefined4 *)(pbVar7 + lVar10 * 4) = 0;
    }
    return this;
  }
  auVar12 = FUN_03fe365c(this);
  pbVar8 = auVar12._0_8_;
  pbVar7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)0xffffffffffffffff;
  pwVar4 = (wchar_t *)(ulong)(*pbVar8 >> 1);
  pbVar6 = pbVar8 + 4;
  if ((*pbVar8 & 1) != 0) {
    pwVar4 = *(wchar_t **)(pbVar8 + 8);
    pbVar6 = *(byte **)(pbVar8 + 0x10);
  }
  if ((param_3 != 0) && (param_2 < pwVar4)) {
    pbVar1 = pbVar6 + (long)pwVar4 * 4;
    pbVar8 = pbVar6 + (long)param_2 * 4;
    do {
      lVar10 = param_3 << 2;
      piVar11 = auVar12._8_8_;
      do {
        pbVar9 = pbVar8;
        if (*(int *)pbVar8 == *piVar11) goto LAB_03fe416c;
        lVar10 = lVar10 + -4;
        piVar11 = piVar11 + 1;
      } while (lVar10 != 0);
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar1;
    } while (pbVar8 != pbVar1);
LAB_03fe416c:
    pbVar7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)((long)pbVar9 - (long)pbVar6 >> 2);
    if (pbVar9 == pbVar1) {
      pbVar7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)0xffffffffffffffff;
    }
  }
  return pbVar7;
}

