// rea decompile_all
// name: std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x4004c58
// body: available
// range: 0x4004c58-0x4004e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  locale alStack_a0 [8];
  char *local_98;
  char *pcStack_90;
  char acStack_85 [45];
  char local_58 [24];
  undefined8 local_28;
  
  pcVar6 = "ll";
  uVar1 = *(uint *)(param_3 + 8);
  local_28 = 0x25;
  pcVar3 = (char *)((ulong)&local_28 | 1);
  if ((((uVar1 >> 0xb & 1) != 0) && ((uVar1 & 0x4a) != 8)) && ((uVar1 & 0x4a) != 0x40)) {
    pcVar3 = (char *)((ulong)&local_28 | 2);
    local_28 = 0x2b25;
  }
  pcVar4 = pcVar3;
  if ((uVar1 >> 9 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  cVar5 = 'l';
  do {
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar4 + 1;
    *pcVar4 = cVar5;
    cVar5 = *pcVar6;
    pcVar4 = pcVar3;
  } while (cVar5 != '\0');
  if ((uVar1 & 0x4a) == 0x40) {
    cVar5 = 'o';
  }
  else if ((uVar1 & 0x4a) == 8) {
    cVar5 = 'x';
    if ((uVar1 & 0x4000) != 0) {
      cVar5 = 'X';
    }
  }
  else {
    cVar5 = 'd';
  }
  *pcVar3 = cVar5;
  if (((bRam000000000974a4b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(0x974a4b8), iVar2 != 0)) {
    p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(0x974a4b8);
  }
  iVar2 = FUN_04005ef0(local_58,0x18,p_Ram000000000974a4b0,&local_28,param_5);
  uVar1 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_58 + iVar2;
  if (uVar1 == 0x20) goto LAB_04004dd8;
  if (uVar1 == 0x10) {
    if ((local_58[0] == '-') || (local_58[0] == '+')) {
      pcVar6 = (char *)((ulong)local_58 | 1);
      goto LAB_04004dd8;
    }
    if (((1 < iVar2) && (local_58[0] == '0')) && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_58 | 2);
      goto LAB_04004dd8;
    }
  }
  pcVar6 = local_58;
LAB_04004dd8:
  ios_base::getloc();
  __num_put<char>::__widen_and_group_int
            (local_58,pcVar6,local_58 + iVar2,acStack_85,&pcStack_90,&local_98,alStack_a0);
  locale::~locale(alStack_a0);
  FUN_03f64a5c(param_2,acStack_85,pcStack_90,local_98,param_3,param_4);
  return;
}

