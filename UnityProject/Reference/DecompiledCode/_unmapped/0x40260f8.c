// rea decompile_all
// name: std::__ndk1::__time_get_storage<char>::__analyze
// address: 0x40260f8
// body: available
// range: 0x40260f8-0x40266d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<char>::__analyze(char, std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::__analyze(char param_1,ctype *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  long lVar12;
  char cVar13;
  long *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *local_120;
  char local_118;
  undefined1 local_117;
  undefined1 local_116;
  byte local_114 [100];
  tm local_b0;
  
  puVar10 = (undefined8 *)(ulong)(byte)param_1;
  local_b0.tm_gmtoff = 0;
  local_b0.tm_zone = (char *)0x0;
  local_b0.tm_hour = 0x17;
  local_b0.tm_mday = 0x1f;
  local_b0.tm_sec = 0x3b;
  local_b0.tm_min = 0x37;
  local_117 = SUB81(param_2,0);
  local_b0.tm_wday = 6;
  local_b0.tm_yday = 0x16c;
  local_b0.tm_mon = 0xb;
  local_b0.tm_year = 0xa1;
  local_b0.tm_isdst = -1;
  local_b0._36_4_ = 0;
  local_116 = 0;
  pbVar16 = local_114;
  local_118 = '%';
  sVar11 = strftime_l((char *)local_114,100,&local_118,&local_b0,(__locale_t)*puVar10);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  if (sVar11 != 0) {
    pbVar3 = pbVar16 + sVar11;
    pbVar4 = pbVar16 + sVar11;
    puVar1 = puVar10 + 0x2b;
    puVar2 = puVar10 + 0x73;
    do {
      if (((char)*pbVar16 < '\0') || ((*(ulong *)(in_x2[2] + (ulong)*pbVar16 * 8) & 1) == 0)) {
        local_120 = pbVar16;
        lVar12 = FUN_04026700(&local_120,pbVar4,puVar10 + 1,puVar1);
        lVar12 = lVar12 - (long)(puVar10 + 1);
        if (lVar12 < 0x150) {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (in_x8,'%');
          cVar13 = 'A';
          if (0xa7 < lVar12) {
            cVar13 = 'a';
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (in_x8,cVar13);
          pbVar16 = local_120;
        }
        else {
          local_120 = pbVar16;
          lVar12 = FUN_04026700(&local_120,pbVar4,puVar1,puVar2);
          lVar12 = lVar12 - (long)puVar1;
          if (lVar12 < 0x240) {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,'%');
            cVar13 = 'B';
            if (0x11f < lVar12) {
              cVar13 = 'b';
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,cVar13);
            pbVar16 = local_120;
            if (((uint)param_2 & 0xff) == 0x78) {
              lVar12 = lVar12 >> 3;
              pbVar14 = (byte *)((long)puVar10 + lVar12 * 8 + 0x159);
              if ((*(byte *)(puVar10 + lVar12 + 0x2b) & 1) != 0) {
                pbVar14 = (byte *)puVar10[lVar12 + 0x2d];
              }
              if ((-1 < (char)*pbVar14) &&
                 (((uint)*(undefined8 *)(in_x2[2] + (ulong)*pbVar14 * 8) >> 6 & 1) != 0)) {
                uVar5 = (ulong)((byte)*in_x8 >> 1);
                pbVar8 = in_x8 + 1;
                if (((byte)*in_x8 & 1) != 0) {
                  uVar5 = *(ulong *)(in_x8 + 8);
                  pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             **)(in_x8 + 0x10);
                }
                pbVar8[uVar5 - 1] =
                     (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x6d;
              }
            }
          }
          else {
            uVar5 = (ulong)(*(byte *)(puVar10 + 0x73) >> 1);
            if ((*(byte *)(puVar10 + 0x73) & 1) != 0) {
              uVar5 = puVar10[0x74];
            }
            uVar6 = (ulong)(*(byte *)(puVar10 + 0x76) >> 1);
            if ((*(byte *)(puVar10 + 0x76) & 1) != 0) {
              uVar6 = puVar10[0x77];
            }
            if ((uVar5 + uVar6 == 0) ||
               (local_120 = pbVar16, lVar12 = FUN_04026700(&local_120,pbVar4,puVar2,puVar10 + 0x79),
               0x2f < lVar12 - (long)puVar2)) {
              bVar7 = *pbVar16;
              if ((char)bVar7 < '\0') {
LAB_0402640c:
                local_120 = pbVar16;
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(in_x8,bVar7);
              }
              else {
                if (((uint)*(undefined8 *)(in_x2[2] + (ulong)bVar7 * 8) >> 6 & 1) != 0) {
                  local_120 = pbVar16;
                  uVar9 = (**(code **)(*in_x2 + 0x48))();
                  pbVar14 = pbVar16 + 1;
                  iVar15 = (uVar9 & 0xff) - 0x30;
                  if (pbVar14 == pbVar4) {
LAB_0402651c:
                    pbVar14 = pbVar4;
                  }
                  else if ((-1 < (char)*pbVar14) &&
                          (((uint)*(undefined8 *)(in_x2[2] + (ulong)*pbVar14 * 8) >> 6 & 1) != 0)) {
                    uVar9 = (**(code **)(*in_x2 + 0x48))();
                    pbVar14 = pbVar16 + 2;
                    iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                    if (pbVar14 != pbVar4) {
                      if (((char)*pbVar14 < '\0') ||
                         (((uint)*(undefined8 *)(in_x2[2] + (ulong)*pbVar14 * 8) >> 6 & 1) == 0))
                      goto LAB_0402652c;
                      uVar9 = (**(code **)(*in_x2 + 0x48))();
                      pbVar14 = pbVar16 + 3;
                      iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                      if (pbVar14 != pbVar4) {
                        if (((char)*pbVar14 < '\0') ||
                           (((uint)*(undefined8 *)(in_x2[2] + (ulong)*pbVar14 * 8) >> 6 & 1) == 0))
                        goto LAB_0402652c;
                        uVar9 = (**(code **)(*in_x2 + 0x48))();
                        pbVar14 = pbVar16 + 4;
                        iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                      }
                    }
                    if (pbVar14 == pbVar4) goto LAB_0402651c;
                  }
LAB_0402652c:
                  pbVar16 = pbVar14;
                  if (iVar15 < 0x1f) {
                    if (iVar15 < 0xb) {
                      if (iVar15 == 6) {
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::push_back(in_x8,'%');
                        cVar13 = 'w';
                      }
                      else {
                        if (iVar15 != 7) {
joined_r0x0402668c:
                          for (; local_120 != pbVar14; local_120 = local_120 + 1) {
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::push_back(in_x8,*local_120);
                          }
                          goto LAB_040261bc;
                        }
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::push_back(in_x8,'%');
                        cVar13 = 'u';
                      }
                    }
                    else if (iVar15 == 0xb) {
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'I';
                    }
                    else if (iVar15 == 0xc) {
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'm';
                    }
                    else {
                      if (iVar15 != 0x17) goto joined_r0x0402668c;
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'H';
                    }
                  }
                  else if (iVar15 < 0x3d) {
                    if (iVar15 == 0x1f) {
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'd';
                    }
                    else if (iVar15 == 0x37) {
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'M';
                    }
                    else {
                      if (iVar15 != 0x3b) goto joined_r0x0402668c;
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(in_x8,'%');
                      cVar13 = 'S';
                    }
                  }
                  else if (iVar15 == 0x3d) {
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'%');
                    cVar13 = 'y';
                  }
                  else if (iVar15 == 0x16c) {
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'%');
                    cVar13 = 'j';
                  }
                  else {
                    if (iVar15 != 0x80d) goto joined_r0x0402668c;
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'%');
                    cVar13 = 'Y';
                  }
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,cVar13);
                  goto LAB_040261bc;
                }
                if (bVar7 != 0x25) goto LAB_0402640c;
                local_120 = pbVar16;
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(in_x8,'%');
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(in_x8,'%');
              }
              pbVar16 = pbVar16 + 1;
            }
            else {
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(in_x8,'%');
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(in_x8,'p');
              pbVar16 = local_120;
            }
          }
        }
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  (in_x8,' ');
        pbVar17 = pbVar16;
        pbVar14 = pbVar16;
        do {
          pbVar14 = pbVar14 + 1;
          pbVar16 = pbVar3;
          if ((pbVar14 == pbVar4) || (pbVar16 = pbVar14, (char)*pbVar14 < '\0')) break;
          pbVar16 = pbVar17 + 1;
          pbVar17 = pbVar16;
        } while ((*(ulong *)(in_x2[2] + (ulong)*pbVar14 * 8) & 1) != 0);
      }
LAB_040261bc:
    } while (pbVar16 != pbVar4);
  }
  return;
}

