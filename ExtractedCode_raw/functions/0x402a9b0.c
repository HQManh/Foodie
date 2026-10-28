// rea decompile_all
// name: FUN_0402a9b0
// address: 0x402a9b0
// body: available
// range: 0x402a9b0-0x402af07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402ae80 to 0x89dcd20 std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x402aec0 to 0x89dcd40 std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0402a9b0(byte *param_1,byte *param_2,byte *param_3,uint param_4,char param_5,byte param_6
                   )

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined1 auVar20 [16];
  char *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  byte *pbVar16;
  
  if (((ulong)param_3 & 1) == 0) {
    bVar6 = false;
  }
  else {
    uVar2 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    bVar6 = uVar2 == 4;
  }
  if ((param_4 & 0xff) == 1) {
    if (param_6 < 2) {
      if (param_6 == 0) {
        param_1[0] = 3;
        param_1[1] = 2;
        param_1[2] = 0;
        param_1[3] = 4;
        if (param_5 == '\0') {
          return param_1;
        }
        if (param_5 == '\x02') {
          return param_1;
        }
joined_r0x0402aba0:
        if (param_5 != '\x01') goto LAB_0402ada0;
        goto joined_r0x0402ae54;
      }
      if (param_6 != 1) goto LAB_0402ada0;
      *param_1 = 3;
      param_1[3] = 4;
    }
    else {
      if (param_6 == 2) {
        *param_1 = 2;
        param_1[3] = 3;
        if (param_5 != '\x02') {
          if (param_5 != '\x01') {
            if (param_5 == '\0') {
              param_1[1] = 0;
              param_1[2] = 4;
              return param_1;
            }
            goto LAB_0402ada0;
          }
          uVar12 = 0x400;
          goto LAB_0402ae98;
        }
        uVar12 = 0x104;
        goto LAB_0402ae18;
      }
      if (param_6 != 3) {
        if (param_6 == 4) {
          *param_1 = 2;
          param_1[3] = 4;
          if (param_5 == '\x02') {
            uVar12 = 0x300;
            goto LAB_0402ae98;
          }
          if (param_5 == '\x01') {
            uVar12 = 0x103;
            goto LAB_0402ae18;
          }
          if (param_5 == '\0') {
            param_1[1] = 3;
            param_1[2] = 0;
            return param_1;
          }
        }
        goto LAB_0402ada0;
      }
      *param_1 = 3;
      param_1[3] = 4;
    }
    if (param_5 == '\x02') {
      uVar12 = 0x201;
LAB_0402ae18:
      *(undefined2 *)(param_1 + 1) = uVar12;
      if (bVar6) {
        bVar5 = *param_2;
        uVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar2 = *(ulong *)(param_2 + 8);
        }
        lVar13 = uVar2 - 1;
        if ((bVar5 & 1) == 0) {
          pbVar8 = param_2 + 4;
          *param_2 = (byte)((int)lVar13 << 1);
        }
        else {
          pbVar8 = *(byte **)(param_2 + 0x10);
          *(long *)(param_2 + 8) = lVar13;
        }
        pbVar8 = pbVar8 + lVar13 * 4;
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        return param_1;
      }
      return param_1;
    }
    if (param_5 == '\x01') {
      uVar12 = 2;
LAB_0402ae98:
      *(undefined2 *)(param_1 + 1) = uVar12;
      if (!bVar6) {
        pbVar8 = (byte *)std::__ndk1::
                         basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                         ::push_back((wchar_t)param_2);
        return pbVar8;
      }
      return param_1;
    }
    if (param_5 == '\0') {
      param_1[1] = 2;
      param_1[2] = 0;
      return param_1;
    }
LAB_0402ada0:
    param_1[0] = 2;
    param_1[1] = 3;
    param_1[2] = 0;
    param_1[3] = 4;
    return param_1;
  }
  if ((param_4 & 0xff) != 0) goto LAB_0402ada0;
  if (bVar6) {
    uVar2 = (ulong)(*param_2 >> 1);
    pbVar8 = param_2 + 4;
    if ((*param_2 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
      pbVar8 = *(byte **)(param_2 + 0x10);
    }
    if (uVar2 != 3) {
      pbVar1 = pbVar8 + uVar2 * 4;
      if (uVar2 == 4) {
        uVar4 = *(undefined4 *)(pbVar1 + -4);
        param_3 = pbVar1 + -4 + -(long)pbVar8;
        if (param_3 != (byte *)0x0) {
          memmove(pbVar1 + -(long)param_3,pbVar8,(size_t)param_3);
        }
        *(undefined4 *)pbVar8 = uVar4;
      }
      else {
        lVar13 = uVar2 * 4 + -0xc;
        if (lVar13 == 0xc) {
          uVar4 = *(undefined4 *)pbVar8;
          *(undefined4 *)pbVar8 = *(undefined4 *)(pbVar8 + 0xc);
          *(undefined4 *)(pbVar8 + 0xc) = uVar4;
          if (pbVar8 + 0x10 != pbVar1) {
            uVar4 = *(undefined4 *)(pbVar8 + 4);
            *(undefined4 *)(pbVar8 + 4) = *(undefined4 *)(pbVar8 + 0x10);
            *(undefined4 *)(pbVar8 + 0x10) = uVar4;
            if (pbVar8 + 0x14 != pbVar1) {
              uVar4 = *(undefined4 *)(pbVar8 + 8);
              *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(pbVar8 + 0x14);
              *(undefined4 *)(pbVar8 + 0x14) = uVar4;
            }
          }
        }
        else {
          lVar14 = 3;
          lVar13 = lVar13 >> 2;
          do {
            lVar17 = lVar13;
            lVar13 = 0;
            if (lVar17 != 0) {
              lVar13 = lVar14 / lVar17;
            }
            lVar13 = lVar14 - lVar13 * lVar17;
            lVar14 = lVar17;
          } while (lVar13 != 0);
          pbVar16 = pbVar8 + lVar17 * 4;
          do {
            pbVar15 = pbVar16 + -4;
            uVar4 = *(undefined4 *)pbVar15;
            pbVar18 = pbVar15;
            pbVar16 = pbVar16 + 8;
            do {
              pbVar19 = pbVar16;
              lVar13 = (long)pbVar1 - (long)pbVar19 >> 2;
              *(undefined4 *)pbVar18 = *(undefined4 *)pbVar19;
              pbVar16 = pbVar19 + 0xc;
              if (lVar13 < 4) {
                pbVar16 = pbVar8 + (3 - lVar13) * 4;
              }
              pbVar18 = pbVar19;
            } while (pbVar16 != pbVar15);
            *(undefined4 *)pbVar19 = uVar4;
            pbVar16 = pbVar15;
          } while (pbVar15 != pbVar8);
        }
      }
    }
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      param_1[0] = 3;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 2;
      if (param_5 == '\0') {
        return param_1;
      }
      if (param_5 == '\x02') {
        return param_1;
      }
      goto joined_r0x0402aba0;
    }
    if (param_6 != 1) goto LAB_0402ada0;
    *param_1 = 3;
    param_1[3] = 2;
    if (param_5 == '\x02') {
      uVar12 = 0x401;
      goto LAB_0402aec8;
    }
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        param_1[1] = 4;
        param_1[2] = 0;
        return param_1;
      }
      goto LAB_0402ada0;
    }
    uVar12 = 4;
  }
  else {
    if (param_6 == 2) {
      *param_1 = 4;
      param_1[3] = 3;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          if (!bVar6) {
            std::__ndk1::
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::insert((ulong)param_2,0,L'\x01');
          }
          goto LAB_0402ad34;
        }
LAB_0402ad30:
        if (param_5 == '\0') {
LAB_0402ad34:
          param_1[1] = 0;
          param_1[2] = 2;
          return param_1;
        }
        goto LAB_0402ada0;
      }
LAB_0402adc8:
      uVar12 = 0x102;
LAB_0402aec8:
      *(undefined2 *)(param_1 + 1) = uVar12;
      if (!bVar6) {
        return param_1;
      }
      pbVar8 = param_2 + 4;
      if ((*param_2 & 1) != 0) {
        pbVar8 = *(byte **)(param_2 + 0x10);
      }
      bVar6 = (*param_2 & 1) != 0;
      pbVar1 = param_2 + 4;
      if (bVar6) {
        pbVar1 = *(byte **)(param_2 + 0x10);
      }
      uVar2 = (ulong)(*param_2 >> 1);
      if (bVar6) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
      uVar10 = (long)pbVar8 - (long)pbVar1 >> 2;
      if (uVar10 <= uVar2) {
        FUN_03fe5114(param_2,uVar10,1);
        return pbVar1 + ((long)pbVar8 - (long)pbVar1);
      }
      auVar20 = FUN_03fe365c();
      pcVar11 = auVar20._8_8_;
      pcStack_58 = FUN_0402d654;
      if (auVar20._0_8_ != pcVar11) {
        puStack_60 = &stack0xffffffffffffffe0;
        piVar9 = (int *)__errno();
        iVar3 = *piVar9;
        *piVar9 = 0;
        if (((bRam000000000974a4b8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0)) {
          p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(0x974a4b8);
        }
        pbVar8 = (byte *)strtoll_l(auVar20._0_8_,&pcStack_68,param_4,p_Ram000000000974a4b0);
        if (*piVar9 == 0) {
          *piVar9 = iVar3;
          if (pcStack_68 == pcVar11) {
            return pbVar8;
          }
        }
        else if (pcStack_68 == pcVar11) {
          if (*piVar9 != 0x22) {
            return pbVar8;
          }
          param_3[0] = 4;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[3] = 0;
          if ((long)pbVar8 < 1) {
            return (byte *)0x8000000000000000;
          }
          return (byte *)0x7fffffffffffffff;
        }
      }
      param_3[0] = 4;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      return (byte *)0x0;
    }
    if (param_6 == 3) {
      *param_1 = 4;
      param_1[3] = 2;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          uVar12 = 0x301;
          goto LAB_0402aec8;
        }
        if (param_5 == '\0') {
          param_1[1] = 0;
          param_1[2] = 3;
          return param_1;
        }
        goto LAB_0402ada0;
      }
      uVar12 = 3;
    }
    else {
      if (param_6 != 4) goto LAB_0402ada0;
      *param_1 = 4;
      param_1[3] = 3;
      if (param_5 == '\x02') goto LAB_0402adc8;
      if (param_5 != '\x01') goto LAB_0402ad30;
      uVar12 = 0x200;
    }
  }
  *(undefined2 *)(param_1 + 1) = uVar12;
joined_r0x0402ae54:
  if (!bVar6) {
    pbVar8 = (byte *)std::__ndk1::
                     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     ::insert((ulong)param_2,0,L'\x01');
    return pbVar8;
  }
  return param_1;
}

