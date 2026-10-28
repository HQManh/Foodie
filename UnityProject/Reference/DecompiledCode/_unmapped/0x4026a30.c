// rea decompile_all
// name: std::__ndk1::__time_get_storage<wchar_t>::__analyze
// address: 0x4026a30
// body: available
// range: 0x4026a30-0x4027107 inclusive
// range: 0x402712c-0x402714f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402713c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x402714c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::__analyze(char param_1,ctype *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  __locale_struct *p_Var4;
  ulong uVar5;
  __locale_struct *p_Var6;
  char cVar7;
  wchar_t wVar8;
  uint uVar9;
  undefined8 *puVar10;
  __locale_t __dataset;
  size_t sVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *in_x2;
  byte *in_x8;
  int iVar15;
  __locale_struct *p_Var16;
  __locale_struct *p_Var17;
  char *local_2b8;
  mbstate_t mStack_2b0;
  __locale_struct local_2a8;
  char local_118;
  undefined1 local_117;
  undefined1 local_116;
  char acStack_114 [100];
  tm local_b0;
  __locale_struct *local_78 [3];
  
  puVar10 = (undefined8 *)(ulong)(byte)param_1;
  local_b0.tm_gmtoff = 0;
  local_b0.tm_zone = (char *)0x0;
  local_b0.tm_isdst = -1;
  local_b0._36_4_ = 0;
  local_117 = SUB81(param_2,0);
  local_b0.tm_hour = 0x17;
  local_b0.tm_mday = 0x1f;
  local_b0.tm_sec = 0x3b;
  local_b0.tm_min = 0x37;
  local_b0.tm_wday = 6;
  local_b0.tm_yday = 0x16c;
  local_b0.tm_mon = 0xb;
  local_b0.tm_year = 0xa1;
  local_116 = 0;
  local_118 = '%';
  strftime_l(acStack_114,100,&local_118,&local_b0,(__locale_t)*puVar10);
  mStack_2b0.__count = 0;
  mStack_2b0.__value = (_union_27)0x0;
  local_2b8 = acStack_114;
  __dataset = uselocale((__locale_t)*puVar10);
  local_78[0] = __dataset;
  sVar11 = mbsrtowcs((wchar_t *)&local_2a8,&local_2b8,100,&mStack_2b0);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (sVar11 == 0xffffffffffffffff) {
    uVar14 = __throw_runtime_error("locale not supported");
    if ((*in_x8 & 1) != 0) {
      operator_delete(*(void **)(in_x8 + 0x10));
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar14);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar14);
  }
  in_x8[0] = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  in_x8[3] = 0;
  in_x8[4] = 0;
  in_x8[5] = 0;
  in_x8[6] = 0;
  in_x8[7] = 0;
  in_x8[8] = 0;
  in_x8[9] = 0;
  in_x8[10] = 0;
  in_x8[0xb] = 0;
  in_x8[0xc] = 0;
  in_x8[0xd] = 0;
  in_x8[0xe] = 0;
  in_x8[0xf] = 0;
  in_x8[0x10] = 0;
  in_x8[0x11] = 0;
  in_x8[0x12] = 0;
  in_x8[0x13] = 0;
  in_x8[0x14] = 0;
  in_x8[0x15] = 0;
  in_x8[0x16] = 0;
  in_x8[0x17] = 0;
  if (sVar11 != 0) {
    puVar2 = puVar10 + 0x73;
    p_Var4 = (__locale_struct *)((long)local_2a8.__locales + sVar11 * 4);
    puVar3 = puVar10 + 0x2b;
    p_Var16 = &local_2a8;
    do {
      uVar12 = (**(code **)(*in_x2 + 0x18))();
      wVar8 = (wchar_t)in_x8;
      if ((uVar12 & 1) == 0) {
        local_78[0] = p_Var16;
        lVar13 = FUN_04027150(local_78,p_Var4,puVar10 + 1,puVar3);
        if (lVar13 - (long)(puVar10 + 1) < 0x150) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(wVar8);
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(wVar8);
          p_Var16 = local_78[0];
        }
        else {
          local_78[0] = p_Var16;
          lVar13 = FUN_04027150(local_78,p_Var4,puVar3,puVar2);
          if (lVar13 - (long)puVar3 < 0x240) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(wVar8);
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(wVar8);
            p_Var16 = local_78[0];
            if ((((uint)param_2 & 0xff) == 0x78) &&
               (uVar12 = (**(code **)(*in_x2 + 0x18))(), p_Var16 = local_78[0], (uVar12 & 1) != 0))
            {
              uVar12 = (ulong)(*in_x8 >> 1);
              pbVar1 = in_x8 + 4;
              if ((*in_x8 & 1) != 0) {
                uVar12 = *(ulong *)(in_x8 + 8);
                pbVar1 = *(byte **)(in_x8 + 0x10);
              }
              pbVar1 = pbVar1 + uVar12 * 4 + -4;
              pbVar1[0] = 0x6d;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
            }
          }
          else {
            uVar12 = (ulong)(*(byte *)(puVar10 + 0x73) >> 1);
            if ((*(byte *)(puVar10 + 0x73) & 1) != 0) {
              uVar12 = puVar10[0x74];
            }
            uVar5 = (ulong)(*(byte *)(puVar10 + 0x76) >> 1);
            if ((*(byte *)(puVar10 + 0x76) & 1) != 0) {
              uVar5 = puVar10[0x77];
            }
            if ((uVar12 + uVar5 == 0) ||
               (local_78[0] = p_Var16, lVar13 = FUN_04027150(local_78,p_Var4,puVar2,puVar10 + 0x79),
               0x2f < lVar13 - (long)puVar2)) {
              local_78[0] = p_Var16;
              uVar12 = (**(code **)(*in_x2 + 0x18))();
              if ((uVar12 & 1) == 0) {
                cVar7 = (**(code **)(*in_x2 + 0x68))();
                if (cVar7 == '%') {
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                }
                else {
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                }
                p_Var16 = (__locale_struct *)((long)p_Var16->__locales + 4);
              }
              else {
                uVar12 = (**(code **)(*in_x2 + 0x18))();
                if ((uVar12 & 1) == 0) {
                  iVar15 = 0;
                  p_Var6 = p_Var16;
LAB_04026f2c:
                  p_Var17 = p_Var6;
                }
                else {
                  uVar9 = (**(code **)(*in_x2 + 0x68))();
                  p_Var17 = (__locale_struct *)((long)p_Var16->__locales + 4);
                  iVar15 = (uVar9 & 0xff) - 0x30;
                  p_Var6 = p_Var4;
                  if (p_Var17 == p_Var4) goto LAB_04026f2c;
                  uVar12 = (**(code **)(*in_x2 + 0x18))();
                  if ((uVar12 & 1) != 0) {
                    uVar9 = (**(code **)(*in_x2 + 0x68))();
                    p_Var17 = (__locale_struct *)(p_Var16->__locales + 1);
                    iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                    if (p_Var17 != p_Var4) {
                      uVar12 = (**(code **)(*in_x2 + 0x18))();
                      if ((uVar12 & 1) == 0) goto LAB_04026f3c;
                      uVar9 = (**(code **)(*in_x2 + 0x68))();
                      p_Var17 = (__locale_struct *)((long)p_Var16->__locales + 0xc);
                      iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                      if (p_Var17 != p_Var4) {
                        uVar12 = (**(code **)(*in_x2 + 0x18))();
                        if ((uVar12 & 1) == 0) goto LAB_04026f3c;
                        uVar9 = (**(code **)(*in_x2 + 0x68))();
                        p_Var17 = (__locale_struct *)(p_Var16->__locales + 2);
                        iVar15 = iVar15 * 10 + (uVar9 & 0xff) + -0x30;
                      }
                    }
                    if (p_Var17 == p_Var4) goto LAB_04026f2c;
                  }
                }
LAB_04026f3c:
                p_Var16 = p_Var17;
                if (iVar15 < 0x1f) {
                  if (iVar15 < 0xb) {
                    if (iVar15 == 6) {
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(wVar8);
                    }
                    else {
                      if (iVar15 != 7) {
joined_r0x040270ac:
                        while (local_78[0] != p_Var17) {
                          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                          ::push_back(wVar8);
                          local_78[0] = (__locale_struct *)((long)local_78[0]->__locales + 4);
                        }
                        goto LAB_04026b38;
                      }
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(wVar8);
                    }
                  }
                  else if (iVar15 == 0xb) {
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                  else if (iVar15 == 0xc) {
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                  else {
                    if (iVar15 != 0x17) goto joined_r0x040270ac;
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                }
                else if (iVar15 < 0x3d) {
                  if (iVar15 == 0x1f) {
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                  else if (iVar15 == 0x37) {
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                  else {
                    if (iVar15 != 0x3b) goto joined_r0x040270ac;
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(wVar8);
                  }
                }
                else if (iVar15 == 0x3d) {
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                }
                else if (iVar15 == 0x16c) {
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                }
                else {
                  if (iVar15 != 0x80d) goto joined_r0x040270ac;
                  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  ::push_back(wVar8);
                }
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(wVar8);
              }
            }
            else {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(wVar8);
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(wVar8);
              p_Var16 = local_78[0];
            }
          }
        }
      }
      else {
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(wVar8);
        do {
          p_Var16 = (__locale_struct *)((long)p_Var16->__locales + 4);
          if (p_Var16 == p_Var4) {
            return;
          }
          uVar12 = (**(code **)(*in_x2 + 0x18))();
        } while ((uVar12 & 1) != 0);
      }
LAB_04026b38:
    } while (p_Var16 != p_Var4);
  }
  return;
}

