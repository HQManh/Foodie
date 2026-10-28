// rea decompile_all
// name: std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x4005310
// body: available
// range: 0x4005310-0x400573b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040053bc) */
/* WARNING: Removing unreachable block (ram,0x040053c0) */
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, double) const */

undefined8 __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  char *__ptr;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  char *pcVar13;
  locale alStack_e8 [8];
  char *local_e0;
  char *pcStack_d8;
  char acStack_c9 [57];
  char *local_90;
  char local_86 [30];
  undefined8 local_68;
  
  uVar3 = *(uint *)(param_4 + 8);
  local_68 = 0x25;
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar9 = (undefined2 *)((ulong)&local_68 | 1);
  }
  else {
    puVar9 = (undefined2 *)((ulong)&local_68 | 2);
    local_68 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar9 = 0x23;
    puVar9 = (undefined2 *)((long)puVar9 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 != 0x104) {
    *puVar9 = 0x2a2e;
    puVar9 = puVar9 + 1;
  }
  if (uVar2 == 0x100) {
    bVar6 = (uVar3 & 0x4000) == 0;
    uVar10 = 0x45;
    uVar11 = 0x65;
LAB_04005464:
    if (!bVar6) {
      uVar11 = uVar10;
    }
    *(undefined1 *)puVar9 = uVar11;
    local_90 = local_86;
    if (((bRam000000000974a4b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0)) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
    iVar7 = FUN_04005ef0(param_1,local_86,0x1e,p_Ram000000000974a4b0,&local_68,
                         *(undefined4 *)(param_4 + 0x10));
    if (0x1d < iVar7) {
      if (uVar2 != 0x104) {
        if (((bRam000000000974a4b8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0)) {
          p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(0x974a4b8);
        }
        iVar7 = FUN_04011ce0(param_1,&local_90,p_Ram000000000974a4b0,&local_68,
                             *(undefined4 *)(param_4 + 0x10));
        goto LAB_04005508;
      }
      goto LAB_040054b4;
    }
LAB_040054e0:
    __ptr_00 = (char *)0x0;
  }
  else {
    if (uVar2 == 4) {
      bVar6 = (uVar3 & 0x4000) == 0;
      uVar10 = 0x46;
      uVar11 = 0x66;
      goto LAB_04005464;
    }
    if (uVar2 != 0x104) {
      bVar6 = (uVar3 & 0x4000) == 0;
      uVar10 = 0x47;
      uVar11 = 0x67;
      goto LAB_04005464;
    }
    uVar11 = 0x61;
    if ((uVar3 & 0x4000) != 0) {
      uVar11 = 0x41;
    }
    local_90 = local_86;
    *(undefined1 *)puVar9 = uVar11;
    if (((bRam000000000974a4b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0)) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
    iVar7 = FUN_04005ef0(param_1,local_86,0x1e,p_Ram000000000974a4b0,&local_68);
    if (iVar7 < 0x1e) goto LAB_040054e0;
LAB_040054b4:
    if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04005688;
    while( true ) {
      iVar7 = FUN_04011ce0(param_1,&local_90,p_Ram000000000974a4b0,&local_68);
LAB_04005508:
      __ptr_00 = local_90;
      if (iVar7 != -1) break;
      __throw_bad_alloc();
LAB_04005688:
      iVar7 = __cxa_guard_acquire(0x974a4b8);
      if (iVar7 != 0) {
        p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(0x974a4b8);
      }
    }
  }
  pcVar5 = local_90;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar1 = local_90 + iVar7;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_90, uVar3 == 0x10)) {
    cVar4 = *local_90;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_90 + 1;
    }
    else if (((1 < iVar7) && (cVar4 == '0')) && ((byte)(local_90[1] | 0x20U) == 0x78)) {
      pcVar12 = local_90 + 2;
    }
  }
  if (local_90 != local_86) {
    __ptr = malloc((long)iVar7 << 1);
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_040055b4;
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = acStack_c9;
LAB_040055b4:
  ios_base::getloc();
  __num_put<char>::__widen_and_group_float
            (pcVar5,pcVar12,pcVar1,pcVar13,&pcStack_d8,&local_e0,alStack_e8);
  locale::~locale(alStack_e8);
  uVar8 = FUN_03f64a5c(param_3,pcVar13,pcStack_d8,local_e0,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  return uVar8;
}

