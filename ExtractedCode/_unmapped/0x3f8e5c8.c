// rea decompile_all
// name: FUN_03f8e5c8
// address: 0x3f8e5c8
// body: available
// range: 0x3f8e5c8-0x3f8e873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_03f8e5c8(basic_string *param_1,basic_string *param_2,undefined1 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  _union_1457 local_a0;
  code *pcStack_98;
  ulong uStack_90;
  ulong uStack_88;
  _union_1457 local_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  code *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  iVar1 = ioctl(0,0x5413,auStack_70 + 0x10);
  if (iVar1 != 0) {
    auStack_70._16_4_ = 0xffffffff;
  }
  DAT_09534d08 = auStack_70._16_4_;
  if (auStack_70._16_4_ == 0xffffffff) {
    pcVar3 = getenv("COLUMNS");
    if (pcVar3 == (char *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = atoi(pcVar3);
    }
    pcVar3 = getenv("LINES");
    uVar2 = 0;
    if (pcVar3 != (char *)0x0) {
      uVar2 = atoi(pcVar3);
    }
    DAT_09534d08 = uVar2 | iVar1 << 0x10;
    if (uVar2 == 0 || iVar1 == 0) {
      DAT_09534d08 = 0xffffffff;
    }
  }
  *param_4 = &DAT_09534d08;
  iVar1 = ioctl(0,0x5401,&DAT_09534d0c);
  if (iVar1 != -1) {
    _DAT_09534d48 = uRam0000000009534d24;
    DAT_09534d50 = DAT_09534d2c;
    uRam0000000009534d38 = uRam0000000009534d14 & 0xfffffffdffffffff;
    _DAT_09534d30 = _DAT_09534d0c & 0xffffffffffffebff;
    _DAT_09534d40 = CONCAT26(0x100,(int6)_DAT_09534d1c);
    iVar1 = ioctl(0,0x5402);
    if (iVar1 != -1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &DAT_09534cd8,param_1);
      *param_3 = DAT_09534d41;
      param_3[1] = DAT_09534d42;
      param_3[2] = DAT_09534d43;
      param_3[3] = DAT_09534d44;
      param_3[4] = DAT_09534d45;
      param_3[5] = DAT_09534d46;
      param_3[6] = DAT_09534d47;
      param_3[7] = DAT_09534d48;
      param_3[8] = DAT_09534d49;
      param_3[9] = DAT_09534d4a;
      param_3[10] = DAT_09534d4b;
      param_3[0xb] = DAT_09534d4c;
      param_3[0xc] = DAT_09534d4d;
      param_3[0xd] = DAT_09534d4e;
      param_3[0xe] = DAT_09534d4f;
      param_3[0xf] = (undefined1)DAT_09534d50;
      param_3[0x10] = DAT_09534d50._1_1_;
      if ((DAT_09534d54 & 1) != 0) {
        return 1;
      }
      pcStack_98 = (code *)0x0;
      local_a0.sa_handler = (__sighandler_t)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      puStack_78 = (undefined *)0x0;
      local_80.sa_handler = (__sighandler_t)0x0;
      auStack_70._8_8_ = 0;
      auStack_70._0_8_ = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      pcStack_58 = FUN_03f8f994;
      auStack_70._16_8_ = 4;
      sigemptyset((sigset_t *)&stack0xffffffffffffffb0);
      sigaction(0x12,(sigaction *)(auStack_70 + 0x10),(sigaction *)&DAT_09534d98);
      puStack_78 = &DAT_03f8fa2c;
      local_80.sa_handler = local_80.sa_handler & 0xffffffff00000000;
      sigemptyset((sigset_t *)auStack_70);
      sigaction(2,(sigaction *)&local_80,(sigaction *)&DAT_09534db8);
      pcStack_98 = FUN_03f8fa30;
      local_a0._0_4_ = 4;
      sigemptyset((sigset_t *)&uStack_90);
      sigaction(0x1c,(sigaction *)&local_a0,(sigaction *)&DAT_09534dd8);
      DAT_09534d54 = 1;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &DAT_09534cf0,param_2);
      FUN_039aede4(FUN_03f8e874);
      return 1;
    }
  }
  return 0;
}

