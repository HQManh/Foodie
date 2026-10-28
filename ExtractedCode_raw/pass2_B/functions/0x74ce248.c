// rea decompile_all
// name: thunk_FUN_03f68948
// address: 0x74ce248
// body: available
// range: 0x74ce248-0x74ce24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong thunk_FUN_03f68948(long param_1,long param_2,basic_string *param_3)

{
  long *plVar1;
  basic_string *pbVar2;
  void *pvVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *__s;
  ulong *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  byte bStack_120;
  byte bStack_11f;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_e8 [16];
  void *pvStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  void *pvStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  void *pvStack_a0;
  long lStack_98;
  byte abStack_90 [8];
  basic_string *pbStack_88;
  void *pvStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  FUN_03f926e8(abStack_90,param_2 + 0x14);
  lStack_98 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
  pvVar3 = (void *)((ulong)abStack_90 | 1);
  if ((abStack_90[0] & 1) != 0) {
    pvVar3 = pvStack_80;
  }
  lVar9 = FUN_03fbeccc(lStack_98,pvVar3);
  if ((lVar9 == 0) || (uVar6 = FUN_03fbac70(), (uVar6 >> 4 & 1) != 0)) {
LAB_03f68c0c:
    bStack_120 = 0;
    bStack_11f = 0;
    uStack_11e = 0;
    uStack_118 = 0;
    uStack_116 = 0;
    uStack_110 = 0;
    std::__ndk1::operator+((__ndk1 *)"Field \'",(char *)abStack_90,param_3);
    puVar12 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(abStack_e8,"\' is not a marshaled member of the type \'");
    pvStack_c0 = (void *)puVar12[2];
    uStack_c8 = puVar12[1];
    uStack_d0 = *puVar12;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    puVar12 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 *)&uStack_d0,*(char **)(lStack_98 + 0x10));
    pvStack_a0 = (void *)puVar12[2];
    uStack_a8 = puVar12[1];
    uStack_b0 = *puVar12;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    pbVar13 = (byte *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&uStack_b0,"\'");
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    bVar4 = *pbVar13;
    pbVar13[0x10] = 0;
    pbVar13[0x11] = 0;
    pbVar13[0x12] = 0;
    pbVar13[0x13] = 0;
    pbVar13[0x14] = 0;
    pbVar13[0x15] = 0;
    pbVar13[0x16] = 0;
    pbVar13[0x17] = 0;
    uStack_78 = (undefined6)*(undefined8 *)(pbVar13 + 2);
    bStack_11f = pbVar13[1];
    uStack_72 = (undefined2)*(undefined8 *)(pbVar13 + 8);
    uStack_70 = (undefined6)((ulong)*(undefined8 *)(pbVar13 + 8) >> 0x10);
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 0;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    uStack_11e = uStack_78;
    uStack_118 = uStack_72;
    bStack_120 = bVar4;
    uStack_116 = uStack_70;
    uStack_110 = uVar18;
    if ((uStack_b0 & 1) != 0) {
      operator_delete(pvStack_a0);
    }
    if ((uStack_d0 & 1) != 0) {
      operator_delete(pvStack_c0);
    }
    if (((byte)abStack_e8[0] & 1) != 0) {
      operator_delete(pvStack_d8);
    }
    uVar11 = (ulong)&bStack_120 | 1;
    if ((bVar4 & 1) != 0) {
      uVar11 = uVar18;
    }
    uVar14 = FUN_03fa673c("fieldName",uVar11);
    if (*(long *)(lVar5 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar14,0);
    }
    goto LAB_03f68dd8;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_116 = 0;
  bStack_120 = 0;
  bStack_11f = 0;
  uStack_11e = 0;
  if (lStack_98 == 0) {
    plVar19 = (long *)0x0;
LAB_03f68a14:
    plVar20 = (long *)0x0;
  }
  else {
    do {
      FUN_03f68ddc(&bStack_120,&lStack_98);
      lStack_98 = *(long *)(lStack_98 + 0x58);
    } while (lStack_98 != 0);
    plVar19 = (long *)(CONCAT62(uStack_116,uStack_118) + (uStack_100 >> 9) * 8);
    lStack_98 = 0;
    if (uStack_110 == CONCAT62(uStack_116,uStack_118)) goto LAB_03f68a14;
    plVar20 = (long *)(*plVar19 + (uStack_100 & 0x1ff) * 8);
  }
  uVar18 = 0;
  lVar9 = 0;
  while( true ) {
    plVar1 = (long *)(CONCAT62(uStack_116,uStack_118) + (uStack_100 + lStack_f8 >> 9) * 8);
    if (uStack_110 == CONCAT62(uStack_116,uStack_118)) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)(*plVar1 + (uStack_100 + lStack_f8 & 0x1ff) * 8);
    }
    if ((plVar1 <= plVar19) && (plVar19 != plVar1 || plVar16 <= plVar20)) break;
    lStack_98 = *plVar20;
    uStack_b0 = 0;
    uVar6 = *(uint *)(lStack_98 + 0x118);
    while (lVar10 = FUN_03fbec04(lStack_98,&uStack_b0), lVar10 != 0) {
      uVar7 = FUN_03fbac70(lVar10);
      if ((uVar7 >> 4 & 1) == 0) {
        if (((uVar6 & 0x18) == 0x10) || (lVar9 == 0)) {
          uVar18 = (long)*(int *)(lVar10 + 0x18) - 0x10;
        }
        else {
          uVar11 = FUN_03fb84ac(*(undefined8 *)(lVar9 + 8));
          if ((uVar11 & 1) == 0) {
            if (*(int *)(lVar10 + 0x18) != *(int *)(lVar9 + 0x18)) {
              iVar8 = FUN_03fc16b4(lVar9);
              uVar18 = uVar18 + (long)iVar8;
            }
          }
          else {
            lVar9 = FUN_03fbe574(*(undefined8 *)(lVar9 + 8),1);
            uVar18 = uVar18 + (long)*(int *)(lVar9 + 0x108);
          }
          if (uVar18 != 0) {
            uVar7 = FUN_03fc1700(lVar10);
            bVar4 = *(byte *)(lStack_98 + 0x134);
            if (((bVar4 != 0) && (uVar15 = (uint)bVar4, (int)(uint)bVar4 <= (int)uVar7)) ||
               (uVar15 = uVar7, uVar7 != 0)) {
              uVar17 = (ulong)(int)uVar15;
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar18 / uVar17;
              }
              lVar9 = uVar18 - uVar11 * uVar17;
              if (lVar9 != 0) {
                uVar18 = (uVar18 + (long)(int)uVar15) - lVar9;
              }
            }
          }
        }
        __s = (char *)FUN_03f98700(lVar10);
        param_3 = (basic_string *)strlen(__s);
        pbVar2 = (basic_string *)(ulong)(abStack_90[0] >> 1);
        if ((abStack_90[0] & 1) != 0) {
          pbVar2 = pbStack_88;
        }
        lVar9 = lVar10;
        if (param_3 == pbVar2) {
          if (param_3 == (basic_string *)0xffffffffffffffff) {
            if (*(long *)(lVar5 + 0x28) != lStack_68) goto LAB_03f68dd8;
            FUN_03f695e8(abStack_90);
            goto LAB_03f68c0c;
          }
          pvVar3 = (void *)((ulong)abStack_90 | 1);
          if ((abStack_90[0] & 1) != 0) {
            pvVar3 = pvStack_80;
          }
          iVar8 = memcmp(pvVar3,__s,(size_t)param_3);
          if (iVar8 == 0) goto LAB_03f68ba8;
        }
      }
    }
    plVar20 = plVar20 + 1;
    if ((long)plVar20 - *plVar19 == 0x1000) {
      plVar19 = plVar19 + 1;
      plVar20 = (long *)*plVar19;
    }
  }
LAB_03f68ba8:
  FUN_03f68e54(&bStack_120);
  if ((abStack_90[0] & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return uVar18;
  }
LAB_03f68dd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

