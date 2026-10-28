// rea decompile_all
// name: std::__ndk1::__money_put<char>::__format
// address: 0x4011fd4
// body: available
// range: 0x4011fd4-0x401243f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__money_put<char>::__format(char*, char*&, char*&, unsigned int, char const*, char
   const*, std::__ndk1::ctype<char> const&, bool, std::__ndk1::money_base::pattern const&, char,
   char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void std::__ndk1::__money_put<char>::__format
               (char *param_1,char **param_2,char **param_3,uint param_4,char *param_5,char *param_6
               ,ctype *param_7,bool param_8,pattern *param_9,char param_10,char param_11,
               basic_string *param_12,basic_string *param_13,basic_string *param_14,int param_15)

{
  ulong uVar1;
  basic_string *pbVar2;
  byte bVar3;
  basic_string bVar4;
  pattern pVar5;
  size_t sVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  basic_string *pbVar15;
  char *pcVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  long lVar20;
  int iVar21;
  char *pcVar22;
  
  lVar20 = 0;
  *param_3 = param_1;
  do {
    pVar5 = param_9[lVar20];
    if ((byte)pVar5 < 2) {
      if (pVar5 == (pattern)0x0) {
        *param_2 = *param_3;
      }
      else if (pVar5 == (pattern)0x1) {
        lVar14 = *(long *)param_7;
        *param_2 = *param_3;
        cVar9 = (**(code **)(lVar14 + 0x38))(param_7,0x20);
        pcVar22 = *param_3;
        *param_3 = pcVar22 + 1;
        *pcVar22 = cVar9;
      }
    }
    else if (pVar5 == (pattern)0x2) {
      bVar4 = *param_13;
      sVar6 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        sVar6 = *(size_t *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (sVar6 != 0)) {
        pcVar22 = *param_3;
        pbVar2 = param_13 + 1;
        if (((byte)bVar4 & 1) != 0) {
          pbVar2 = *(basic_string **)(param_13 + 0x10);
        }
        memmove(pcVar22,pbVar2,sVar6);
        *param_3 = pcVar22 + sVar6;
      }
    }
    else if (pVar5 == (pattern)0x3) {
      bVar8 = ((byte)*param_14 & 1) != 0;
      uVar17 = (ulong)((byte)*param_14 >> 1);
      if (bVar8) {
        uVar17 = *(ulong *)(param_14 + 8);
      }
      if (uVar17 != 0) {
        pbVar15 = (basic_string *)*param_3;
        pbVar2 = param_14 + 1;
        if (bVar8) {
          pbVar2 = *(basic_string **)(param_14 + 0x10);
        }
        bVar4 = *pbVar2;
        *param_3 = (char *)(pbVar15 + 1);
        *pbVar15 = bVar4;
      }
    }
    else if (pVar5 == (pattern)0x4) {
      param_5 = param_5 + param_8;
      pbVar11 = (byte *)param_5;
      if (param_5 < param_6) {
        pbVar19 = (byte *)param_5;
        do {
          pbVar11 = pbVar19;
          if (((char)*pbVar11 < '\0') ||
             (((uint)*(undefined8 *)(*(long *)(param_7 + 0x10) + (ulong)*pbVar11 * 8) >> 6 & 1) == 0
             )) break;
          pbVar19 = pbVar11 + 1;
          pbVar11 = (byte *)param_6;
        } while (pbVar19 < param_6);
      }
      pcVar22 = *param_3;
      if (0 < param_15) {
        iVar7 = param_15;
        if (param_5 < pbVar11) {
          do {
            iVar21 = iVar7;
            pbVar11 = pbVar11 + -1;
            pbVar19 = (byte *)*param_3;
            bVar3 = *pbVar11;
            *param_3 = (char *)(pbVar19 + 1);
            *pbVar19 = bVar3;
            if (pbVar11 <= param_5) break;
            iVar7 = iVar21 + -1;
          } while (iVar21 != 1);
          iVar7 = iVar21 + -1;
          if (iVar21 != 1) goto LAB_04012220;
        }
        else {
LAB_04012220:
          cVar9 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
          if (0 < iVar7) {
            uVar10 = iVar7 + 1;
            do {
              pcVar12 = *param_3;
              uVar10 = uVar10 - 1;
              *param_3 = pcVar12 + 1;
              *pcVar12 = cVar9;
            } while (1 < uVar10);
          }
        }
        pcVar12 = *param_3;
        *param_3 = pcVar12 + 1;
        *pcVar12 = param_10;
      }
      if (pbVar11 == (byte *)param_5) {
        cVar9 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        pcVar12 = *param_3;
        *param_3 = pcVar12 + 1;
        *pcVar12 = cVar9;
      }
      else {
        bVar4 = *param_12;
        uVar17 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          uVar17 = *(ulong *)(param_12 + 8);
        }
        if (uVar17 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          pbVar2 = param_12 + 1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar2 = *(basic_string **)(param_12 + 0x10);
          }
          uVar10 = (uint)(byte)*pbVar2;
        }
        uVar17 = 0;
        uVar18 = 0;
        do {
          if (uVar18 == uVar10) {
            pcVar12 = *param_3;
            uVar17 = (ulong)((int)uVar17 + 1);
            *param_3 = pcVar12 + 1;
            *pcVar12 = param_11;
            bVar4 = *param_12;
            uVar1 = (ulong)((byte)bVar4 >> 1);
            if (((byte)bVar4 & 1) != 0) {
              uVar1 = *(ulong *)(param_12 + 8);
            }
            if (uVar17 < uVar1) {
              pbVar2 = param_12 + 1;
              if (((byte)bVar4 & 1) != 0) {
                pbVar2 = *(basic_string **)(param_12 + 0x10);
              }
              if (pbVar2[uVar17] == (basic_string)0xff) {
                uVar18 = 0;
                uVar10 = 0xffffffff;
                goto LAB_0401232c;
              }
              uVar10 = (uint)(byte)pbVar2[uVar17];
            }
            uVar18 = 0;
          }
LAB_0401232c:
          pbVar19 = (byte *)*param_3;
          pbVar11 = pbVar11 + -1;
          bVar3 = *pbVar11;
          uVar18 = uVar18 + 1;
          *param_3 = (char *)(pbVar19 + 1);
          *pbVar19 = bVar3;
        } while (pbVar11 != (byte *)param_5);
      }
      if ((pcVar22 != *param_3) && (pcVar12 = *param_3 + -1, pcVar22 < pcVar12)) {
        do {
          pcVar16 = pcVar22 + 1;
          cVar9 = *pcVar22;
          *pcVar22 = *pcVar12;
          pcVar13 = pcVar12 + -1;
          *pcVar12 = cVar9;
          pcVar12 = pcVar13;
          pcVar22 = pcVar16;
        } while (pcVar16 < pcVar13);
      }
    }
    lVar20 = lVar20 + 1;
    if (lVar20 == 4) {
      bVar4 = *param_14;
      uVar17 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar17 = *(ulong *)(param_14 + 8);
      }
      sVar6 = uVar17 - 1;
      if (uVar17 != 0 && sVar6 != 0) {
        pcVar22 = *param_3;
        pbVar2 = param_14 + 1;
        if (((byte)bVar4 & 1) != 0) {
          pbVar2 = *(basic_string **)(param_14 + 0x10);
        }
        memmove(pcVar22,pbVar2 + 1,sVar6);
        *param_3 = pcVar22 + sVar6;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) == 0x20) {
          param_1 = *param_3;
        }
        *param_2 = param_1;
      }
      return;
    }
  } while( true );
}

