// rea decompile_all
// name: std::__ndk1::__num_get<wchar_t>::__stage2_float_loop
// address: 0x4004400
// body: available
// range: 0x4004400-0x4004667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(wchar_t, bool&, char&, char*, char*&,
   wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, wchar_t*) */

undefined8
std::__ndk1::__num_get<wchar_t>::__stage2_float_loop
          (wchar_t param_1,bool *param_2,char *param_3,char *param_4,char **param_5,wchar_t param_6,
          wchar_t param_7,basic_string *param_8,uint *param_9,uint **param_10,uint *param_11,
          wchar_t *param_12)

{
  wchar_t *pwVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  uint *puVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if (param_1 == param_6) {
    if (*param_2 != false) {
      pcVar6 = *param_5;
      *param_2 = false;
      *param_5 = pcVar6 + 1;
      *pcVar6 = '.';
      uVar11 = (ulong)((byte)*param_8 >> 1);
      if (((byte)*param_8 & 1) != 0) {
        uVar11 = *(ulong *)(param_8 + 8);
      }
      if ((uVar11 != 0) && (puVar7 = *param_10, (long)puVar7 - (long)param_9 < 0xa0)) {
        *puVar7 = *param_11;
        *param_10 = puVar7 + 1;
        return 0;
      }
      return 0;
    }
  }
  else {
    if (param_1 == param_7) {
      uVar11 = (ulong)((byte)*param_8 >> 1);
      if (((byte)*param_8 & 1) != 0) {
        uVar11 = *(ulong *)(param_8 + 8);
      }
      if (uVar11 != 0) {
        if (*param_2 == false) {
          return 0xffffffff;
        }
        puVar7 = *param_10;
        if (0x9f < (long)puVar7 - (long)param_9) {
          return 0;
        }
        *puVar7 = *param_11;
        *param_10 = puVar7 + 1;
        *param_11 = 0;
        return 0;
      }
    }
    pwVar5 = wmemchr(param_12,param_1,0x20);
    pwVar1 = param_12 + 0x20;
    if (pwVar5 != (wchar_t *)0x0) {
      pwVar1 = pwVar5;
    }
    lVar8 = (long)pwVar1 - (long)param_12 >> 2;
    if (lVar8 < 0x20) {
      uVar11 = (long)pwVar1 - (long)param_12 & 0xfffffffffffffffb;
      bVar3 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar8];
      uVar10 = (uint)bVar3;
      if (uVar11 == 0x58) {
        *param_3 = 'P';
      }
      else {
        if (uVar11 == 0x60) {
          pbVar9 = (byte *)*param_5;
          if (pbVar9 != (byte *)param_4) {
            bVar4 = pbVar9[-1];
            bVar2 = *param_3;
            uVar10 = bVar4 ^ 0x20;
            if (0x19 < bVar4 - 0x61) {
              uVar10 = (uint)bVar4;
            }
            uVar12 = bVar2 ^ 0x20;
            if (0x19 < bVar2 - 0x61) {
              uVar12 = (uint)bVar2;
            }
            if (uVar10 != uVar12) {
              return 0xffffffff;
            }
          }
          *param_5 = (char *)(pbVar9 + 1);
          *pbVar9 = bVar3;
          return 0;
        }
        bVar2 = *param_3;
        uVar12 = uVar10 ^ 0x20;
        if (0x19 < uVar10 - 0x61) {
          uVar12 = uVar10;
        }
        if (uVar12 == bVar2) {
          bVar4 = bVar2 | 0x20;
          if (0x19 < uVar12 - 0x41) {
            bVar4 = bVar2;
          }
          *param_3 = bVar4;
          if (*param_2 != false) {
            *param_2 = false;
            uVar11 = (ulong)((byte)*param_8 >> 1);
            if (((byte)*param_8 & 1) != 0) {
              uVar11 = *(ulong *)(param_8 + 8);
            }
            if ((uVar11 != 0) && (puVar7 = *param_10, (long)puVar7 - (long)param_9 < 0xa0)) {
              *puVar7 = *param_11;
              *param_10 = puVar7 + 1;
            }
          }
        }
      }
      pbVar9 = (byte *)*param_5;
      *param_5 = (char *)(pbVar9 + 1);
      *pbVar9 = bVar3;
      if (lVar8 < 0x16) {
        *param_11 = *param_11 + 1;
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

