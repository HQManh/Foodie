// rea decompile_all
// name: FUN_04013a68
// address: 0x4013a68
// body: available
// range: 0x4013a68-0x4013fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04013a68(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 0x23) = 1;
  *param_1 = &UNK_08faab28;
  param_1[1] = param_2 + -1;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar2 = param_1 + 5;
  param_1[6] = 0;
  *puVar2 = 0;
  param_1[2] = puVar2;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  param_1[3] = puVar2;
  param_1[4] = param_1 + 0x23;
  ppuRam000000000974a590 = &PTR__collate_08fabbd8;
  uRam000000000974a598 = 0;
  FUN_04014040();
  ppuRam000000000974a5a0 = &PTR__collate_08fabc18;
  uRam000000000974a5a8 = 0;
  FUN_0401416c(param_1);
  std::__ndk1::ctype<char>::ctype((ctype<char> *)0x974a7c8,(ulong *)0x0,false,1);
  FUN_04014298(param_1,0x974a7c8);
  ppuRam000000000974a5b0 = &PTR__facet_08faaf08;
  uRam000000000974a5b8 = 0;
  FUN_040143c4(param_1);
  ppuRam000000000974a5c0 = &PTR__facet_08faafd8;
  uRam000000000974a5c8 = 0;
  FUN_040144f0(param_1);
  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt
            ((codecvt<wchar_t,char,mbstate_t> *)0x974a750,1);
  FUN_0401461c(param_1,0x974a750);
  ppuRam000000000974a5d0 = &PTR__facet_08fab080;
  uRam000000000974a5d8 = 0;
  FUN_04014748(param_1);
  ppuRam000000000974a5e0 = &PTR__facet_08fab1b0;
  uRam000000000974a5e8 = 0;
  FUN_04014874(param_1);
  ppuRam000000000974a5f0 = &PTR__facet_08fab118;
  uRam000000000974a5f8 = 0;
  FUN_040149a0(param_1);
  ppuRam000000000974a600 = &PTR__facet_08fab248;
  uRam000000000974a608 = 0;
  FUN_04014acc(param_1);
  std::__ndk1::numpunct<char>::numpunct((numpunct<char> *)0x974a848,1);
  FUN_04014bf8(param_1,0x974a848);
  std::__ndk1::numpunct<wchar_t>::numpunct((numpunct<wchar_t> *)0x974a878,1);
  FUN_04014d24(param_1,0x974a878);
  ppuRam000000000974a610 = &PTR__facet_08fabc58;
  uRam000000000974a618 = 0;
  FUN_04014e50(param_1);
  ppuRam000000000974a620 = &PTR__facet_08fabd48;
  uRam000000000974a628 = 0;
  FUN_04014f7c(param_1);
  ppuRam000000000974a630 = &PTR__facet_08fabe28;
  uRam000000000974a638 = 0;
  FUN_040150a8(param_1);
  ppuRam000000000974a640 = &PTR__facet_08fabf00;
  uRam000000000974a648 = 0;
  FUN_040151d4(param_1);
  ppuRam000000000974a650 = &PTR__facet_08fac5b8;
  uRam000000000974a658 = 0;
  FUN_04015300(param_1);
  ppuRam000000000974a660 = &PTR__facet_08fac670;
  uRam000000000974a668 = 0;
  FUN_0401542c(param_1);
  ppuRam000000000974a670 = &PTR__facet_08fac718;
  uRam000000000974a678 = 0;
  FUN_04015558(param_1);
  ppuRam000000000974a680 = &PTR__facet_08fac7c0;
  uRam000000000974a688 = 0;
  FUN_04015684(param_1);
  ppuRam000000000974a690 = &PTR__facet_08faca88;
  uRam000000000974a698 = 0;
  FUN_040157b0(param_1);
  ppuRam000000000974a6a0 = &PTR__facet_08facb08;
  uRam000000000974a6a8 = 0;
  FUN_040158dc(param_1);
  ppuRam000000000974a6b0 = &PTR__facet_08facb88;
  uRam000000000974a6b8 = 0;
  FUN_04015a08(param_1);
  ppuRam000000000974a6c0 = &PTR__facet_08facc08;
  uRam000000000974a6c8 = 0;
  FUN_04015b34(param_1);
  ppuRam000000000974a768 = &PTR____shared_weak_count_08fabfc8;
  puRam000000000974a778 = &UNK_08fac028;
  uRam000000000974a770 = 0;
  FUN_04015c60(param_1);
  ppuRam000000000974a780 = &PTR____shared_weak_count_08fac0d8;
  puRam000000000974a790 = &UNK_08fac138;
  uRam000000000974a788 = 0;
  FUN_04015d8c(param_1);
  uRam000000000974a7a0 = 0;
  ppuRam000000000974a798 = &PTR__facet_08faaec8;
  if (((bRam000000000974a4b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a4b8), iVar1 != 0)) {
    p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(0x974a4b8);
  }
  p_Ram000000000974a7a8 = p_Ram000000000974a4b0;
  ppuRam000000000974a798 = &PTR_FUN_08fac448;
  FUN_04015eb8(param_1,0x974a798);
  ppuRam000000000974a7b0 = &PTR__facet_08faaec8;
  uRam000000000974a7b8 = 0;
  if (((bRam000000000974a4b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a4b8), iVar1 != 0)) {
    p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(0x974a4b8);
  }
  p_Ram000000000974a7c0 = p_Ram000000000974a4b0;
  ppuRam000000000974a7b0 = &PTR_FUN_08fac4c0;
  FUN_04015fe4(param_1,0x974a7b0);
  ppuRam000000000974a6d0 = &PTR__facet_08facc88;
  uRam000000000974a6d8 = 0;
  FUN_04016110(param_1);
  ppuRam000000000974a6e0 = &PTR__facet_08facd10;
  uRam000000000974a6e8 = 0;
  FUN_0401623c(param_1);
  return;
}

