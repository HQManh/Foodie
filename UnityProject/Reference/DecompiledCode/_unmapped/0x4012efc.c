// rea decompile_all
// name: std::__ndk1::__money_put<wchar_t>::__format
// address: 0x4012efc
// body: available
// range: 0x4012efc-0x401338b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__money_put<wchar_t>::__format(wchar_t*, wchar_t*&, wchar_t*&, unsigned int, wchar_t
   const*, wchar_t const*, std::__ndk1::ctype<wchar_t> const&, bool,
   std::__ndk1::money_base::pattern const&, wchar_t, wchar_t, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, int) */

void std::__ndk1::__money_put<wchar_t>::__format
               (wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,uint param_4,wchar_t *param_5,
               wchar_t *param_6,ctype *param_7,bool param_8,pattern *param_9,wchar_t param_10,
               wchar_t param_11,basic_string *param_12,basic_string *param_13,basic_string *param_14
               ,int param_15)

{
  basic_string *pbVar1;
  basic_string bVar2;
  pattern pVar3;
  bool bVar4;
  wchar_t wVar5;
  ulong uVar6;
  long lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  
  lVar15 = 0;
  *param_3 = param_1;
  pwVar17 = param_1;
  pwVar18 = param_1;
  do {
    pVar3 = param_9[lVar15];
    pwVar16 = pwVar18;
    if ((byte)pVar3 < 2) {
      if (pVar3 == (pattern)0x0) {
        *param_2 = pwVar17;
        pwVar16 = pwVar17;
      }
      else if (pVar3 == (pattern)0x1) {
        lVar7 = *(long *)param_7;
        *param_2 = pwVar17;
        wVar5 = (**(code **)(lVar7 + 0x58))(param_7,0x20);
        pwVar17 = *param_3;
        *pwVar17 = wVar5;
LAB_04013124:
        pwVar17 = pwVar17 + 1;
        *param_3 = pwVar17;
        pwVar16 = pwVar17;
      }
    }
    else if (pVar3 == (pattern)0x2) {
      bVar2 = *param_13;
      uVar6 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar6 != 0)) {
        pbVar1 = param_13 + 4;
        if (((byte)bVar2 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_13 + 0x10);
        }
        memmove(pwVar17,pbVar1,uVar6 * 4);
        pwVar17 = pwVar17 + uVar6;
        *param_3 = pwVar17;
        pwVar16 = pwVar17;
      }
    }
    else if (pVar3 == (pattern)0x3) {
      bVar4 = ((byte)*param_14 & 1) != 0;
      uVar6 = (ulong)((byte)*param_14 >> 1);
      if (bVar4) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (uVar6 != 0) {
        pbVar1 = param_14 + 4;
        if (bVar4) {
          pbVar1 = *(basic_string **)(param_14 + 0x10);
        }
        *pwVar17 = *(wchar_t *)pbVar1;
        goto LAB_04013124;
      }
    }
    else if (pVar3 == (pattern)0x4) {
      param_5 = param_5 + param_8;
      pwVar16 = param_5;
      while ((pwVar16 < param_6 &&
             (uVar6 = (**(code **)(*(long *)param_7 + 0x18))(param_7,0x40,*pwVar16),
             (uVar6 & 1) != 0))) {
        pwVar16 = pwVar16 + 1;
      }
      if (0 < param_15) {
        uVar10 = param_15;
        if (param_5 < pwVar16) {
          pwVar17 = *param_3;
          do {
            uVar12 = uVar10;
            pwVar16 = pwVar16 + -1;
            pwVar8 = pwVar17 + 1;
            *pwVar17 = *pwVar16;
            if (pwVar16 <= param_5) break;
            pwVar17 = pwVar8;
            uVar10 = uVar12 - 1;
          } while (uVar12 != 1);
          *param_3 = pwVar8;
          uVar10 = uVar12 - 1;
          if (uVar12 != 1) goto LAB_04013134;
        }
        else {
LAB_04013134:
          wVar5 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
          pwVar17 = *param_3;
          pwVar8 = pwVar17;
          if (0 < (int)uVar10) {
            if (7 < uVar10) {
              uVar13 = (ulong)uVar10;
              uVar14 = uVar13 & 0x7ffffff8;
              pwVar8 = pwVar17 + uVar14;
              uVar10 = uVar10 - (int)uVar14;
              pwVar17 = pwVar17 + 4;
              uVar6 = uVar14;
              do {
                *(ulong *)(pwVar17 + -2) = CONCAT44(wVar5,wVar5);
                *(ulong *)(pwVar17 + -4) = CONCAT44(wVar5,wVar5);
                *(ulong *)(pwVar17 + 2) = CONCAT44(wVar5,wVar5);
                *(ulong *)pwVar17 = CONCAT44(wVar5,wVar5);
                uVar6 = uVar6 - 8;
                pwVar17 = pwVar17 + 8;
              } while (uVar6 != 0);
              pwVar17 = pwVar8;
              if (uVar14 == uVar13) goto LAB_040131b8;
            }
            uVar10 = uVar10 + 1;
            do {
              uVar10 = uVar10 - 1;
              pwVar8 = pwVar17 + 1;
              *pwVar17 = wVar5;
              pwVar17 = pwVar8;
            } while (1 < uVar10);
          }
        }
LAB_040131b8:
        *pwVar8 = param_10;
        *param_3 = pwVar8 + 1;
      }
      if (pwVar16 == param_5) {
        wVar5 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
        pwVar17 = *param_3 + 1;
        **param_3 = wVar5;
        *param_3 = pwVar17;
      }
      else {
        bVar2 = *param_12;
        uVar6 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar6 = *(ulong *)(param_12 + 8);
        }
        if (uVar6 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          pbVar1 = param_12 + 1;
          if (((byte)bVar2 & 1) != 0) {
            pbVar1 = *(basic_string **)(param_12 + 0x10);
          }
          uVar10 = (uint)(byte)*pbVar1;
        }
        pwVar17 = *param_3;
        uVar6 = 0;
        uVar12 = 0;
        do {
          pwVar8 = pwVar17;
          if (uVar12 == uVar10) {
            pwVar8 = pwVar17 + 1;
            *pwVar17 = param_11;
            uVar6 = (ulong)((int)uVar6 + 1);
            *param_3 = pwVar8;
            bVar2 = *param_12;
            uVar13 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar13 = *(ulong *)(param_12 + 8);
            }
            if (uVar6 < uVar13) {
              pbVar1 = param_12 + 1;
              if (((byte)bVar2 & 1) != 0) {
                pbVar1 = *(basic_string **)(param_12 + 0x10);
              }
              if (pbVar1[uVar6] == (basic_string)0xff) {
                uVar12 = 0;
                uVar10 = 0xffffffff;
                goto LAB_04013284;
              }
              uVar10 = (uint)(byte)pbVar1[uVar6];
            }
            uVar12 = 0;
          }
LAB_04013284:
          pwVar16 = pwVar16 + -1;
          uVar12 = uVar12 + 1;
          pwVar17 = pwVar8 + 1;
          *pwVar8 = *pwVar16;
          *param_3 = pwVar17;
        } while (pwVar16 != param_5);
      }
      pwVar16 = pwVar17;
      if ((pwVar18 != pwVar17) && (pwVar8 = pwVar17 + -1, pwVar18 < pwVar8)) {
        do {
          pwVar11 = pwVar18 + 1;
          wVar5 = *pwVar18;
          *pwVar18 = *pwVar8;
          pwVar9 = pwVar8 + -1;
          *pwVar8 = wVar5;
          pwVar8 = pwVar9;
          pwVar18 = pwVar11;
        } while (pwVar11 < pwVar9);
      }
    }
    lVar15 = lVar15 + 1;
    pwVar18 = pwVar16;
    if (lVar15 == 4) {
      bVar2 = *param_14;
      uVar6 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (1 < uVar6) {
        pbVar1 = param_14 + 4;
        if (((byte)bVar2 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_14 + 0x10);
        }
        memmove(pwVar17,pbVar1 + 4,uVar6 * 4 - 4);
        pwVar17 = pwVar17 + (uVar6 - 1);
        *param_3 = pwVar17;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) != 0x20) {
          pwVar17 = param_1;
        }
        *param_2 = pwVar17;
      }
      return;
    }
  } while( true );
}

