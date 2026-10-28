// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace
// address: 0x3fe59d8
// body: available
// range: 0x3fe59d8-0x3fe5a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe5a14 to 0x89dccf0 std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */

long std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     replace(ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  ulong in_x5;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  bVar3 = *(byte *)param_4;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (param_5 <= uVar1) {
    lVar5 = param_4 + 4;
    if ((bVar3 & 1) != 0) {
      lVar5 = *(long *)(param_4 + 0x10);
    }
    uVar2 = uVar1 - param_5;
    if (in_x5 <= uVar1 - param_5) {
      uVar2 = in_x5;
    }
    lVar5 = replace((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *)param_1,param_2,(ulong)param_3,(wchar_t *)(lVar5 + param_5 * 4),uVar2);
    return lVar5;
  }
  auVar9 = FUN_03fe365c();
  puVar6 = auVar9._0_8_;
  uVar1 = (long)puVar6 + 4;
  bVar4 = ((byte)*puVar6 & 1) != 0;
  uVar2 = uVar1;
  if (bVar4) {
    uVar2 = puVar6[2];
  }
  lVar5 = auVar9._8_8_ - uVar2;
  uVar2 = (ulong)(byte)((byte)*puVar6 >> 1);
  if (bVar4) {
    uVar2 = puVar6[1];
  }
  uVar8 = 4;
  if (bVar4) {
    uVar8 = (*puVar6 & 0xfffffffffffffffe) - 1;
  }
  lVar7 = lVar5 >> 2;
  if (uVar8 == uVar2) {
    FUN_03fe3d70(puVar6,uVar2,1,uVar2,lVar7,0,1,in_x7,&stack0xfffffffffffffff0,insert);
    uVar8 = puVar6[2];
  }
  else {
    uVar8 = uVar1;
    if ((*puVar6 & 1) != 0) {
      uVar8 = puVar6[2];
    }
    if (uVar2 - lVar7 != 0) {
      memmove((void *)((long)(uVar8 + lVar5) + 4),(void *)(uVar8 + lVar5),(uVar2 - lVar7) * 4);
    }
  }
  uVar2 = uVar2 + 1;
  *(int *)(uVar8 + lVar7 * 4) = (int)param_3;
  *(undefined4 *)(uVar8 + uVar2 * 4) = 0;
  uVar8 = *puVar6;
  if ((uVar8 & 1) == 0) {
    *(char *)puVar6 = (char)((int)uVar2 << 1);
  }
  else {
    puVar6[1] = uVar2;
  }
  if ((uVar8 & 1) != 0) {
    uVar1 = puVar6[2];
  }
  return uVar1 + lVar5;
}

