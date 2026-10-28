// rea decompile_all
// name: FUN_03f95da8
// address: 0x3f95da8
// body: available
// range: 0x3f95da8-0x3f95e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f95da8(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  byte abStack_150 [16];
  void *pvStack_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_138 [16];
  void *pvStack_128;
  ulong uStack_120;
  ulong uStack_118;
  void *pvStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  void *pvStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  void *pvStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  void *pvStack_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_a8 [16];
  void *pvStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  ulong uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long lStack_68;
  
  lVar9 = *param_1;
  param_3 = param_3 & 0xffffffff;
  lVar4 = FUN_03f95ae0(lVar9);
  if (lVar4 == 0) {
    if ((((*(ushort *)(lVar9 + 0x135) >> 0xc & 1) == 0) || (param_1[2] == 0)) ||
       (lVar4 = FUN_03fa9070(param_1,param_2,param_3), lVar4 == 0)) {
      auVar10 = FUN_03f95e30(lVar9,param_2);
      lVar4 = tpidr_el0;
      lStack_68 = *(long *)(lVar4 + 0x28);
      bStack_90 = 0;
      bStack_8f = 0;
      uStack_8e = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_80 = 0;
      FUN_03fb7b60(abStack_138,auVar10._8_8_ + 0x20,0);
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert(abStack_138,0,"Attempt to access method \'");
      pvStack_110 = (void *)puVar5[2];
      uStack_118 = puVar5[1];
      uStack_120 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&uStack_120,".");
      pvStack_f0 = (void *)puVar5[2];
      uStack_f8 = puVar5[1];
      uStack_100 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      pcVar6 = (char *)FUN_03f9adb4(*(undefined8 *)
                                     (*(long *)(auVar10._8_8_ + 0x98) + (param_3 & 0xffff) * 8));
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&uStack_100,pcVar6);
      pvStack_d0 = (void *)puVar5[2];
      uStack_d8 = puVar5[1];
      uStack_e0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&uStack_e0,"\' on type \'");
      pvStack_b0 = (void *)puVar5[2];
      uStack_b8 = puVar5[1];
      uStack_c0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_03fb7b60(abStack_150,auVar10._0_8_ + 0x20,0);
      FUN_03f6efc0(abStack_a8,&uStack_c0,abStack_150);
      pbVar7 = (byte *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(abStack_a8,"\' failed.");
      uVar2 = *(ulong *)(pbVar7 + 0x10);
      bVar3 = *pbVar7;
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      uStack_78 = (undefined6)*(undefined8 *)(pbVar7 + 2);
      bStack_8f = pbVar7[1];
      uStack_72 = (undefined2)*(undefined8 *)(pbVar7 + 8);
      uStack_70 = (undefined6)((ulong)*(undefined8 *)(pbVar7 + 8) >> 0x10);
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7[4] = 0;
      pbVar7[5] = 0;
      pbVar7[6] = 0;
      pbVar7[7] = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      uStack_8e = uStack_78;
      uStack_88 = uStack_72;
      bStack_90 = bVar3;
      uStack_86 = uStack_70;
      uStack_80 = uVar2;
      if (((byte)abStack_a8[0] & 1) != 0) {
        operator_delete(pvStack_98);
      }
      if ((abStack_150[0] & 1) != 0) {
        operator_delete(pvStack_140);
      }
      if ((uStack_c0 & 1) != 0) {
        operator_delete(pvStack_b0);
      }
      if ((uStack_e0 & 1) != 0) {
        operator_delete(pvStack_d0);
      }
      if ((uStack_100 & 1) != 0) {
        operator_delete(pvStack_f0);
      }
      if ((uStack_120 & 1) != 0) {
        operator_delete(pvStack_110);
      }
      if (((byte)abStack_138[0] & 1) != 0) {
        operator_delete(pvStack_128);
      }
      uVar1 = (ulong)&bStack_90 | 1;
      if ((bVar3 & 1) != 0) {
        uVar1 = uVar2;
      }
      uVar8 = FUN_03fa70c8(uVar1);
      if (*(long *)(lVar4 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(uVar8,0);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    FUN_03fbea4c(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x20));
  }
  return lVar4;
}

