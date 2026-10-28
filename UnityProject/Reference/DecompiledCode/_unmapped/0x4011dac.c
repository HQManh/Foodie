// rea decompile_all
// name: std::__ndk1::__money_put<char>::__gather_info
// address: 0x4011dac
// body: available
// range: 0x4011dac-0x4011fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_put<char>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,char *param_5,
               char *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
               int *param_10)

{
  byte *pbVar1;
  ulong uVar2;
  basic_string bVar3;
  byte bVar4;
  size_t sVar5;
  byte **ppbVar6;
  byte *pbVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 *puVar13;
  code *pcVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  basic_string *pbVar18;
  basic_string *pbVar19;
  uint uVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  byte *pbVar28;
  long lVar29;
  long *plVar30;
  void *pvVar31;
  int iVar32;
  int unaff_w27;
  undefined1 *puVar33;
  byte *unaff_x29;
  byte *unaff_x30;
  undefined1 auVar34 [16];
  byte **local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  byte *local_68;
  byte ***local_48;
  
  uVar15 = (uint)param_4;
  lVar29 = *(long *)param_3;
  pbVar16 = (byte *)param_5;
  pbVar17 = (byte *)param_6;
  pbVar18 = param_7;
  pbVar19 = param_8;
  if (param_1) {
    puVar33 = moneypunct<char,true>::id;
    local_68 = moneypunct<char,true>::id;
    if (moneypunct<char,true>::id._0_8_ == -1) goto LAB_04011e68;
    puVar13 = moneypunct<char,true>::id;
  }
  else {
    puVar33 = moneypunct<char,false>::id;
    local_68 = moneypunct<char,false>::id;
    if (moneypunct<char,false>::id._0_8_ == -1) goto LAB_04011e68;
    puVar13 = moneypunct<char,false>::id;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  pcVar14 = FUN_0402d4a0;
  __call_once((ulong *)puVar13,&local_48,FUN_0402d4a0);
  param_3 = (locale *)pcVar14;
LAB_04011e68:
  lVar26 = *(long *)(lVar29 + 0x10);
  if (((long)*(int *)(puVar33 + 8) - 1U < (ulong)(*(long *)(lVar29 + 0x18) - lVar26 >> 3)) &&
     (plVar30 = *(long **)(lVar26 + ((long)*(int *)(puVar33 + 8) - 1U) * 8), plVar30 != (long *)0x0)
     ) {
    if (param_2) {
      uVar11 = (**(code **)(*plVar30 + 0x58))(plVar30);
      *(undefined4 *)param_4 = uVar11;
      (**(code **)(*plVar30 + 0x40))(&local_80,plVar30);
      bVar3 = *param_9;
    }
    else {
      uVar11 = (**(code **)(*plVar30 + 0x50))(plVar30);
      *(undefined4 *)param_4 = uVar11;
      (**(code **)(*plVar30 + 0x38))(&local_80,plVar30);
      bVar3 = *param_9;
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
    }
    *(ulong *)(param_9 + 8) = CONCAT71(uStack_77,uStack_78);
    *(byte ***)param_9 = local_80;
    *(ulong *)(param_9 + 0x10) = CONCAT71(uStack_6f,local_70);
    cVar9 = (**(code **)(*plVar30 + 0x18))(plVar30);
    *param_5 = cVar9;
    cVar9 = (**(code **)(*plVar30 + 0x20))(plVar30);
    *param_6 = cVar9;
    (**(code **)(*plVar30 + 0x28))(&local_80,plVar30);
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
    }
    *(ulong *)(param_7 + 8) = CONCAT71(uStack_77,uStack_78);
    *(byte ***)param_7 = local_80;
    *(ulong *)(param_7 + 0x10) = CONCAT71(uStack_6f,local_70);
    (**(code **)(*plVar30 + 0x30))(&local_80,plVar30);
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
    }
    *(ulong *)(param_8 + 8) = CONCAT71(uStack_77,uStack_78);
    *(byte ***)param_8 = local_80;
    *(ulong *)(param_8 + 0x10) = CONCAT71(uStack_6f,local_70);
    iVar12 = (**(code **)(*plVar30 + 0x48))(plVar30);
    *param_10 = iVar12;
    return;
  }
  auVar34 = FUN_03ff9c28();
  pbVar7 = local_68;
  ppbVar6 = local_80;
  plVar30 = auVar34._8_8_;
  lVar26 = auVar34._0_8_;
  lVar29 = 0;
  pbVar1 = local_68 + 1;
  *(long *)param_3 = lVar26;
  do {
    bVar4 = *(byte *)((long)ppbVar6 + lVar29);
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        *plVar30 = *(long *)param_3;
      }
      else if (bVar4 == 1) {
        lVar23 = *(long *)pbVar18;
        *plVar30 = *(long *)param_3;
        uVar10 = (**(code **)(lVar23 + 0x38))(pbVar18,0x20);
        puVar33 = *(undefined1 **)param_3;
        *(undefined1 **)param_3 = puVar33 + 1;
        *puVar33 = uVar10;
      }
    }
    else if (bVar4 == 2) {
      bVar4 = *unaff_x29;
      sVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar5 = *(size_t *)(unaff_x29 + 8);
      }
      if (((uVar15 >> 9 & 1) != 0) && (sVar5 != 0)) {
        pvVar31 = *(void **)param_3;
        pbVar21 = unaff_x29 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar21 = *(byte **)(unaff_x29 + 0x10);
        }
        memmove(pvVar31,pbVar21,sVar5);
        *(size_t *)param_3 = (long)pvVar31 + sVar5;
      }
    }
    else if (bVar4 == 3) {
      bVar8 = (*unaff_x30 & 1) != 0;
      uVar25 = (ulong)(*unaff_x30 >> 1);
      if (bVar8) {
        uVar25 = *(ulong *)(unaff_x30 + 8);
      }
      if (uVar25 != 0) {
        pbVar28 = *(byte **)param_3;
        pbVar21 = unaff_x30 + 1;
        if (bVar8) {
          pbVar21 = *(byte **)(unaff_x30 + 0x10);
        }
        bVar4 = *pbVar21;
        *(byte **)param_3 = pbVar28 + 1;
        *pbVar28 = bVar4;
      }
    }
    else if (bVar4 == 4) {
      pbVar16 = pbVar16 + ((ulong)pbVar19 & 1);
      pbVar21 = pbVar16;
      if (pbVar16 < pbVar17) {
        pbVar28 = pbVar16;
        do {
          pbVar21 = pbVar28;
          if (((char)*pbVar28 < '\0') ||
             (((uint)*(undefined8 *)(*(long *)(pbVar18 + 0x10) + (ulong)*pbVar28 * 8) >> 6 & 1) == 0
             )) break;
          pbVar28 = pbVar28 + 1;
          pbVar21 = pbVar17;
        } while (pbVar28 < pbVar17);
      }
      puVar33 = *(undefined1 **)param_3;
      if (0 < unaff_w27) {
        iVar12 = unaff_w27;
        if (pbVar16 < pbVar21) {
          do {
            iVar32 = iVar12;
            pbVar21 = pbVar21 + -1;
            pbVar28 = *(byte **)param_3;
            bVar4 = *pbVar21;
            *(byte **)param_3 = pbVar28 + 1;
            *pbVar28 = bVar4;
            if (pbVar21 <= pbVar16) break;
            iVar12 = iVar32 + -1;
          } while (iVar32 != 1);
          iVar12 = iVar32 + -1;
          if (iVar32 != 1) goto LAB_04012220;
        }
        else {
LAB_04012220:
          uVar10 = (**(code **)(*(long *)pbVar18 + 0x38))(pbVar18,0x30);
          if (0 < iVar12) {
            uVar20 = iVar12 + 1;
            do {
              puVar13 = *(undefined1 **)param_3;
              uVar20 = uVar20 - 1;
              *(undefined1 **)param_3 = puVar13 + 1;
              *puVar13 = uVar10;
            } while (1 < uVar20);
          }
        }
        puVar13 = *(undefined1 **)param_3;
        *(undefined1 **)param_3 = puVar13 + 1;
        *puVar13 = uStack_78;
      }
      if (pbVar21 == pbVar16) {
        uVar10 = (**(code **)(*(long *)pbVar18 + 0x38))(pbVar18,0x30);
        puVar13 = *(undefined1 **)param_3;
        *(undefined1 **)param_3 = puVar13 + 1;
        *puVar13 = uVar10;
      }
      else {
        bVar4 = *pbVar7;
        uVar25 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar25 = *(ulong *)(pbVar7 + 8);
        }
        if (uVar25 == 0) {
          uVar20 = 0xffffffff;
        }
        else {
          pbVar28 = pbVar1;
          if ((bVar4 & 1) != 0) {
            pbVar28 = *(byte **)(pbVar7 + 0x10);
          }
          uVar20 = (uint)*pbVar28;
        }
        uVar25 = 0;
        uVar27 = 0;
        do {
          if (uVar27 == uVar20) {
            puVar13 = *(undefined1 **)param_3;
            uVar25 = (ulong)((int)uVar25 + 1);
            *(undefined1 **)param_3 = puVar13 + 1;
            *puVar13 = local_70;
            bVar4 = *pbVar7;
            uVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar2 = *(ulong *)(pbVar7 + 8);
            }
            if (uVar25 < uVar2) {
              pbVar28 = pbVar1;
              if ((bVar4 & 1) != 0) {
                pbVar28 = *(byte **)(pbVar7 + 0x10);
              }
              if (pbVar28[uVar25] == 0xff) {
                uVar27 = 0;
                uVar20 = 0xffffffff;
                goto LAB_0401232c;
              }
              uVar20 = (uint)pbVar28[uVar25];
            }
            uVar27 = 0;
          }
LAB_0401232c:
          pbVar28 = *(byte **)param_3;
          pbVar21 = pbVar21 + -1;
          bVar4 = *pbVar21;
          uVar27 = uVar27 + 1;
          *(byte **)param_3 = pbVar28 + 1;
          *pbVar28 = bVar4;
        } while (pbVar21 != pbVar16);
      }
      if ((puVar33 != *(undefined1 **)param_3) &&
         (puVar13 = *(undefined1 **)param_3 + -1, puVar33 < puVar13)) {
        do {
          puVar24 = puVar33 + 1;
          uVar10 = *puVar33;
          *puVar33 = *puVar13;
          puVar22 = puVar13 + -1;
          *puVar13 = uVar10;
          puVar13 = puVar22;
          puVar33 = puVar24;
        } while (puVar24 < puVar22);
      }
    }
    lVar29 = lVar29 + 1;
    if (lVar29 == 4) {
      bVar4 = *unaff_x30;
      uVar25 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar25 = *(ulong *)(unaff_x30 + 8);
      }
      sVar5 = uVar25 - 1;
      if (uVar25 != 0 && sVar5 != 0) {
        pvVar31 = *(void **)param_3;
        pbVar16 = unaff_x30 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar16 = *(byte **)(unaff_x30 + 0x10);
        }
        memmove(pvVar31,pbVar16 + 1,sVar5);
        *(size_t *)param_3 = (long)pvVar31 + sVar5;
      }
      if ((uVar15 & 0xb0) != 0x10) {
        if ((uVar15 & 0xb0) == 0x20) {
          lVar26 = *(long *)param_3;
        }
        *plVar30 = lVar26;
      }
      return;
    }
  } while( true );
}

