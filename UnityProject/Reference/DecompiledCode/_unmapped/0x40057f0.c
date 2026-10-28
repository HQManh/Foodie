// rea decompile_all
// name: std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x40057f0
// body: available
// range: 0x40057f0-0x4005c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04005884) */
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  locale alStack_e0 [8];
  char *local_d8;
  char *pcStack_d0;
  char acStack_c1 [57];
  char *local_88;
  char local_7e [30];
  undefined8 local_48;
  
  pcVar10 = "L";
  uVar2 = *(uint *)(param_4 + 8);
  local_48 = 0x25;
  if ((uVar2 >> 0xb & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_48 | 1);
  }
  else {
    pcVar6 = (char *)((ulong)&local_48 | 2);
    local_48 = 0x2b25;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *pcVar6 = '#';
    pcVar6 = pcVar6 + 1;
  }
  uVar1 = uVar2 & 0x104;
  if (uVar1 != 0x104) {
    pcVar6[0] = '.';
    pcVar6[1] = '*';
    pcVar6 = pcVar6 + 2;
  }
  cVar9 = 'L';
  do {
    pcVar10 = pcVar10 + 1;
    pcVar7 = pcVar6 + 1;
    *pcVar6 = cVar9;
    cVar9 = *pcVar10;
    pcVar6 = pcVar7;
  } while (cVar9 != '\0');
  if (uVar1 == 0x100) {
    bVar3 = (uVar2 & 0x4000) == 0;
    cVar8 = 'E';
    cVar9 = 'e';
LAB_04005940:
    if (!bVar3) {
      cVar9 = cVar8;
    }
    *pcVar7 = cVar9;
    local_88 = local_7e;
    if (((bRam000000000974a4b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x974a4b8), iVar4 != 0)) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
    iVar4 = FUN_04005ef0(param_1,local_7e,0x1e,p_Ram000000000974a4b0,&local_48,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar4) {
      if (uVar1 != 0x104) {
        if (((bRam000000000974a4b8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(0x974a4b8), iVar4 != 0)) {
          p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(0x974a4b8);
        }
        iVar4 = FUN_04011ce0(param_1,&local_88,p_Ram000000000974a4b0,&local_48,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_040059e4;
      }
      goto LAB_04005990;
    }
LAB_040059bc:
    pcVar10 = (char *)0x0;
  }
  else {
    if (uVar1 == 4) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'F';
      cVar9 = 'f';
      goto LAB_04005940;
    }
    if (uVar1 != 0x104) {
      bVar3 = (uVar2 & 0x4000) == 0;
      cVar8 = 'G';
      cVar9 = 'g';
      goto LAB_04005940;
    }
    cVar9 = 'a';
    if ((uVar2 & 0x4000) != 0) {
      cVar9 = 'A';
    }
    local_88 = local_7e;
    *pcVar7 = cVar9;
    if (((bRam000000000974a4b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x974a4b8), iVar4 != 0)) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
    iVar4 = FUN_04005ef0(param_1,local_7e,0x1e,p_Ram000000000974a4b0,&local_48);
    if (iVar4 < 0x1e) goto LAB_040059bc;
LAB_04005990:
    if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04005b60;
    while( true ) {
      iVar4 = FUN_04011ce0(param_1,&local_88,p_Ram000000000974a4b0,&local_48);
LAB_040059e4:
      pcVar10 = local_88;
      if (iVar4 != -1) break;
      __throw_bad_alloc();
LAB_04005b60:
      iVar4 = __cxa_guard_acquire(0x974a4b8);
      if (iVar4 != 0) {
        p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(0x974a4b8);
      }
    }
  }
  pcVar7 = local_88;
  uVar2 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar6 = local_88 + iVar4;
  pcVar11 = pcVar6;
  if ((uVar2 != 0x20) && (pcVar11 = local_88, uVar2 == 0x10)) {
    cVar9 = *local_88;
    if ((cVar9 == '-') || (cVar9 == '+')) {
      pcVar11 = local_88 + 1;
    }
    else if (((1 < iVar4) && (cVar9 == '0')) && ((byte)(local_88[1] | 0x20U) == 0x78)) {
      pcVar11 = local_88 + 2;
    }
  }
  if (local_88 != local_7e) {
    __ptr = malloc((long)iVar4 << 1);
    pcVar12 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_04005a90;
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar12 = acStack_c1;
LAB_04005a90:
  ios_base::getloc();
  __num_put<char>::__widen_and_group_float
            (pcVar7,pcVar11,pcVar6,pcVar12,&pcStack_d0,&local_d8,alStack_e0);
  locale::~locale(alStack_e0);
  uVar5 = FUN_03f64a5c(param_3,pcVar12,pcStack_d0,local_d8,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (pcVar10 != (char *)0x0) {
    free(pcVar10);
  }
  return uVar5;
}

