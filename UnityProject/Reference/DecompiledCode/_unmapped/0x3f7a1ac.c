// rea decompile_all
// name: FUN_03f7a1ac
// address: 0x3f7a1ac
// body: available
// range: 0x3f7a1ac-0x3f7a4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03f7a1ac(undefined8 *param_1,ulong param_2,byte param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  ushort uVar14;
  undefined2 uVar15;
  long lVar16;
  int iVar17;
  undefined8 *local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  undefined1 auStack_58 [8];
  
  uVar13 = (uint)param_2;
  bVar2 = uVar13 < 2 & param_3;
  puVar9 = (undefined8 *)FUN_03f7a550(param_1,param_2,bVar2);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_03f5d894(auStack_58,&DAT_09535730);
    puVar9 = (undefined8 *)FUN_03f7a550(param_1,param_2 & 0xffffffff,bVar2);
    lVar4 = DAT_09535478;
    if (puVar9 == (undefined8 *)0x0) {
      FUN_03fbea4c(DAT_09535478);
      bVar6 = uVar13 == 0;
      iVar17 = uVar13 - 1;
      bVar7 = iVar17 == 0;
      local_90 = (void *)0x0;
      local_88 = (void *)0x0;
      local_80 = 0;
      if ((bVar6 || bVar7) && (param_3 & 1) == 0) {
        FUN_03f7a5b8(param_1,&local_90);
      }
      lVar16 = (ulong)*(ushort *)(lVar4 + 0x12a) +
               ((ulong)*(ushort *)(DAT_09535558 + 0x120) + (ulong)*(ushort *)(DAT_09535550 + 0x120)
                + (ulong)*(ushort *)(DAT_09535560 + 0x120) +
                  (ulong)*(ushort *)(DAT_09535568 + 0x120) +
               (ulong)*(ushort *)(DAT_09535570 + 0x120)) * ((long)local_88 - (long)local_90 >> 3);
      puVar9 = (undefined8 *)FUN_03fa7f34(1,lVar16 * 0x10 + 0x138);
      puVar9[0xf] = puVar9;
      *puVar9 = *param_1;
      local_78 = 0;
      local_70 = 0;
      local_68 = (void *)0x0;
      puVar9[3] = param_1[3];
      local_98 = puVar9;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_78,(char *)param_1[2]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_78,"[");
      if (1 < uVar13) {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_78,",");
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      if (bVar2 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"*");
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_78,"]");
      pvVar3 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar3 = local_68;
      }
      uVar10 = FUN_03f92a28(pvVar3);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      puVar9[2] = uVar10;
      lVar5 = DAT_09535478;
      *(undefined4 *)(puVar9 + 0x23) = 0x2101;
      *(char *)((long)puVar9 + 0x132) = (char)param_2;
      puVar9[0xb] = lVar5;
      uVar8 = FUN_03fbeda4(lVar4);
      *(short *)((long)puVar9 + 0x12a) = (short)lVar16;
      *(undefined4 *)(puVar9 + 0x1f) = uVar8;
      *(undefined4 *)((long)puVar9 + 0xfc) = 8;
      FUN_03fbec70(param_1);
      uVar8 = FUN_03fc1104(param_1);
      puVar1 = param_1 + 4;
      *(undefined4 *)((long)puVar9 + 0x104) = uVar8;
      *(undefined4 *)((long)puVar9 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar9 + 0x21) = 0xffffffff;
      uVar11 = FUN_03fb845c(puVar1);
      if ((uVar11 & 1) == 0) {
        uVar14 = *(ushort *)((long)param_1 + 0x135) & 0x20 | 0x100;
      }
      else {
        uVar14 = 0x120;
      }
      puVar9[8] = param_1;
      *(ushort *)((long)puVar9 + 0x135) = uVar14 | *(ushort *)((long)puVar9 + 0x135) & 0xfedf;
      FUN_03f7941c(puVar9);
      if ((bVar6 || bVar7) && (param_3 & 1) == 0) {
        uVar15 = 5;
        puVar9[4] = puVar1;
        *(undefined1 *)((long)puVar9 + 0x2a) = 0x1d;
      }
      else {
        plVar12 = (long *)FUN_03fa7f34(1,0x20);
        uVar15 = 0;
        puVar9[4] = plVar12;
        *(undefined1 *)((long)puVar9 + 0x2a) = 0x14;
        *plVar12 = (long)puVar1;
        *(char *)(plVar12 + 1) = (char)param_2;
      }
      *(undefined2 *)((long)puVar9 + 300) = uVar15;
      puVar9[7] = puVar9[5];
      puVar9[6] = puVar9[4];
      *(uint *)(puVar9 + 7) = *(uint *)(puVar9 + 7) | 0x20000000;
      uVar10 = FUN_03fc3520();
      puVar9[0xe] = uVar10;
      if ((bVar6 || bVar7) && (param_3 & 1) == 0) {
        local_70 = puVar9[8];
        local_78 = (ulong)local_78._4_4_ << 0x20;
        FUN_03f7acc4(&DAT_09534648,&local_78,&local_98);
      }
      else {
        local_70 = puVar9[8];
        local_78 = (ulong)local_78._4_4_ << 0x20;
        local_68 = (void *)CONCAT44(local_68._4_4_,(uint)*(byte *)((long)puVar9 + 0x132));
        FUN_03f7ac34(&DAT_095346b8,&local_78,&local_98);
      }
      puVar9 = local_98;
      if (local_90 != (void *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
    }
    FUN_03f5d920(auStack_58);
  }
  return puVar9;
}

