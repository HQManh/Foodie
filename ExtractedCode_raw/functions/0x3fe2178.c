// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
// address: 0x3fe2178
// body: available
// range: 0x3fe2178-0x3fe21c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe21b4 to 0x3fe1d5c FUN_03fe1d5c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

long * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  basic_string *pbVar8;
  byte *pbVar9;
  void *__dest;
  undefined1 auVar10 [16];
  
  bVar3 = *param_1;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar2) {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    uVar1 = uVar2 - param_2;
    if (param_3 <= uVar2 - param_2) {
      uVar1 = param_3;
    }
    if (((byte)bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    plVar5 = (long *)FUN_03fe1d5c(this,pbVar8 + param_2,uVar1);
    return plVar5;
  }
  auVar10 = FUN_03f695e8();
  pbVar6 = auVar10._0_8_;
  bVar4 = *pbVar6;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar6 + 8);
  }
  if (param_3 <= uVar2) {
    plVar5 = (long *)(uVar2 - param_3);
    if (param_2 <= (long *)(uVar2 - param_3)) {
      plVar5 = (long *)param_2;
    }
    if (plVar5 != (long *)0x0) {
      pbVar9 = *(byte **)(pbVar6 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar9 = pbVar6 + 1;
      }
      memmove(auVar10._8_8_,pbVar9 + param_3,(size_t)plVar5);
    }
    return plVar5;
  }
  auVar10 = FUN_03f695e8();
  pbVar6 = auVar10._8_8_;
  plVar7 = auVar10._0_8_;
  bVar4 = *pbVar6;
  plVar5 = (long *)(ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    plVar5 = *(long **)(pbVar6 + 8);
  }
  if (plVar5 < param_2) {
    FUN_03f695e8(plVar7);
LAB_03fe22f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(plVar7);
  }
  pbVar9 = *(byte **)(pbVar6 + 0x10);
  if ((bVar4 & 1) == 0) {
    pbVar9 = pbVar6 + 1;
  }
  uVar2 = (long)plVar5 - param_2;
  if (param_3 <= (long)plVar5 - param_2) {
    uVar2 = param_3;
  }
  if (0xffffffffffffffef < uVar2) goto LAB_03fe22f8;
  if (uVar2 < 0x17) {
    __dest = (void *)((long)plVar7 + 1);
    *(char *)plVar7 = (char)((int)uVar2 << 1);
    if (uVar2 == 0) goto LAB_03fe22d4;
  }
  else {
    __dest = operator_new((uVar2 | 0xf) + 1);
    plVar7[1] = uVar2;
    plVar7[2] = (long)__dest;
    *plVar7 = (uVar2 | 0xf) + 2;
  }
  plVar7 = memmove(__dest,pbVar9 + param_2,uVar2);
LAB_03fe22d4:
  *(undefined1 *)((long)__dest + uVar2) = 0;
  return plVar7;
}

