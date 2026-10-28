// rea decompile_all
// name: std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get
// address: 0x400dc24
// body: available
// range: 0x400dc24-0x400eeeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400eee8 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::__do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::locale const&, unsigned int, unsigned int&,
   bool&, std::__ndk1::ctype<char> const&, std::__ndk1::unique_ptr<char, void (*)(void*)>&, char*&,
   char*) */

undefined4
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long param_8,long *param_9,long *param_10,undefined1 *param_11)

{
  byte *pbVar1;
  char *pcVar2;
  basic_string bVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint *__ptr;
  void *pvVar12;
  size_t sVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  undefined4 uVar27;
  long *plVar28;
  uint *puVar29;
  uint uVar30;
  ulong *puVar31;
  ulong *puVar32;
  byte *pbVar33;
  byte *pbVar34;
  code *pcVar35;
  byte *pbVar36;
  undefined1 *local_290;
  int local_284;
  ulong local_280;
  ulong local_278;
  void *local_270;
  ulong local_268;
  ulong local_260;
  char *local_258;
  ulong local_250;
  ulong local_248;
  char *local_240;
  ulong local_238;
  ulong local_230;
  byte *local_228;
  ulong local_220;
  ulong local_218;
  byte *local_210;
  byte local_204 [4];
  byte local_200 [3];
  byte abStack_1fd [5];
  uint local_1f8 [100];
  uint auStack_68 [2];
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
LAB_0400dcbc:
    bVar5 = true;
    if (param_2 == (long *)0x0) goto LAB_0400dc84;
LAB_0400dcc4:
    if (param_2[3] == param_2[4]) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar10 = (long *)0x0;
      if (iVar9 != -1) {
        plVar10 = param_2;
      }
      if (bVar5 == (iVar9 == -1)) goto LAB_0400ece8;
    }
    else {
      plVar10 = param_2;
      if (bVar5 == false) {
LAB_0400ece8:
        *param_6 = *param_6 | 4;
        return 0;
      }
    }
  }
  else {
    if (plVar10[3] == plVar10[4]) {
      iVar9 = (**(code **)(*plVar10 + 0x48))();
      if (iVar9 == -1) {
        *param_1 = 0;
        goto LAB_0400dcbc;
      }
      bVar5 = *param_1 == 0;
    }
    else {
      bVar5 = false;
    }
    if (param_2 != (long *)0x0) goto LAB_0400dcc4;
LAB_0400dc84:
    if (bVar5 != false) goto LAB_0400ece8;
    plVar10 = (long *)0x0;
  }
  local_220 = 0;
  local_218 = 0;
  local_210 = (byte *)0x0;
  local_238 = 0;
  local_230 = 0;
  local_228 = (byte *)0x0;
  local_250 = 0;
  local_248 = 0;
  local_240 = (char *)0x0;
  local_268 = 0;
  local_260 = 0;
  local_258 = (char *)0x0;
  local_280 = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
  __money_get<char>::__gather_info
            ((bool)(param_3 & 1),param_4,(pattern *)((long)abStack_1fd + 1),(char *)local_200,
             (char *)local_204,(basic_string *)&local_220,(basic_string *)&local_238,
             (basic_string *)&local_250,(basic_string *)&local_268,&local_284);
  __ptr = local_1f8;
  uVar26 = 0;
  local_290 = param_11;
  pbVar14 = (byte *)((ulong)&local_238 | 1);
  puVar25 = auStack_68;
  puVar29 = local_1f8;
  pcVar35 = __do_nothing;
  *param_10 = *param_9;
  puVar32 = (ulong *)0x0;
LAB_0400ddc0:
  plVar11 = (long *)*param_1;
  plVar28 = plVar10;
  if (plVar11 == (long *)0x0) {
LAB_0400de10:
    bVar5 = true;
    if (plVar10 == (long *)0x0) goto LAB_0400dddc;
LAB_0400de18:
    if (plVar10[3] == plVar10[4]) {
      iVar9 = (**(code **)(*plVar10 + 0x48))(plVar10);
      plVar28 = (long *)0x0;
      if (iVar9 != -1) {
        plVar28 = plVar10;
      }
      if (bVar5 == (iVar9 == -1)) goto LAB_0400eb58;
    }
    else if (bVar5 == false) goto LAB_0400eb58;
  }
  else {
    if (plVar11[3] == plVar11[4]) {
      iVar9 = (**(code **)(*plVar11 + 0x48))();
      if (iVar9 == -1) {
        *param_1 = 0;
        goto LAB_0400de10;
      }
      bVar5 = *param_1 == 0;
    }
    else {
      bVar5 = false;
    }
    if (plVar10 != (long *)0x0) goto LAB_0400de18;
LAB_0400dddc:
    if (bVar5 != false) goto LAB_0400eb58;
  }
  pbVar17 = local_228;
  uVar20 = local_230;
  uVar18 = local_238;
  bVar8 = abStack_1fd[uVar26 + 1];
  puVar31 = puVar32;
  if (bVar8 < 2) {
    if (bVar8 == 0) {
      if (uVar26 != 3) {
LAB_0400e2d8:
        do {
          plVar10 = (long *)*param_1;
          if (plVar10 == (long *)0x0) {
LAB_0400e328:
            bVar5 = true;
            if (plVar28 == (long *)0x0) goto LAB_0400e2f4;
LAB_0400e330:
            if (plVar28[3] == plVar28[4]) {
              iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
              if (iVar9 == -1) {
                plVar28 = (long *)0x0;
              }
              if (bVar5 == (iVar9 == -1)) goto LAB_0400ddb4;
            }
            else if (bVar5 == false) goto LAB_0400ddb4;
          }
          else {
            if (plVar10[3] == plVar10[4]) {
              iVar9 = (**(code **)(*plVar10 + 0x48))();
              if (iVar9 == -1) {
                *param_1 = 0;
                goto LAB_0400e328;
              }
              bVar5 = *param_1 == 0;
            }
            else {
              bVar5 = false;
            }
            if (plVar28 != (long *)0x0) goto LAB_0400e330;
LAB_0400e2f4:
            if (bVar5 != false) goto LAB_0400ddb4;
          }
          plVar10 = (long *)*param_1;
          if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
            uVar18 = (**(code **)(*plVar10 + 0x48))();
            uVar18 = uVar18 & 0xff;
            if ((uint)uVar18 >> 7 != 0) goto LAB_0400ddb4;
          }
          else {
            bVar8 = *(byte *)plVar10[3];
            uVar18 = (ulong)bVar8;
            if ((char)bVar8 < '\0') goto LAB_0400ddb4;
          }
          if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar18 * 8) & 1) == 0) goto LAB_0400ddb4;
          plVar10 = (long *)*param_1;
          pcVar2 = (char *)plVar10[3];
          if (pcVar2 == (char *)plVar10[4]) {
            cVar6 = (**(code **)(*plVar10 + 0x50))();
          }
          else {
            plVar10[3] = (long)(pcVar2 + 1);
            cVar6 = *pcVar2;
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_280,cVar6);
        } while( true );
      }
      goto LAB_0400eb58;
    }
    if (bVar8 == 1) {
      if (uVar26 != 3) {
        plVar10 = (long *)*param_1;
        if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
          uVar18 = (**(code **)(*plVar10 + 0x48))();
          uVar18 = uVar18 & 0xff;
          if ((uint)uVar18 >> 7 != 0) goto LAB_0400ee18;
        }
        else {
          bVar8 = *(byte *)plVar10[3];
          uVar18 = (ulong)bVar8;
          if ((char)bVar8 < '\0') goto LAB_0400ee18;
        }
        if ((*(ulong *)(*(long *)(param_8 + 0x10) + uVar18 * 8) & 1) != 0) {
          plVar10 = (long *)*param_1;
          pcVar2 = (char *)plVar10[3];
          if (pcVar2 == (char *)plVar10[4]) {
            cVar6 = (**(code **)(*plVar10 + 0x50))();
          }
          else {
            plVar10[3] = (long)(pcVar2 + 1);
            cVar6 = *pcVar2;
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_280,cVar6);
          goto LAB_0400e2d8;
        }
        goto LAB_0400ee18;
      }
      goto LAB_0400eb58;
    }
  }
  else if (bVar8 == 2) {
    pbVar36 = pbVar14;
    if ((uVar26 < 2) || (puVar32 != (ulong *)0x0)) {
      bVar5 = (local_238 & 1) == 0;
      if (!bVar5) {
        pbVar36 = local_228;
      }
      if (uVar26 != 0) {
        bVar8 = abStack_1fd[uVar26];
        goto joined_r0x0400e260;
      }
    }
    else {
      if (((param_5 >> 9 & 1) == 0) && (uVar26 != 2 || abStack_1fd[4] == '\0')) {
        puVar31 = (ulong *)0x0;
        goto LAB_0400ddb4;
      }
      bVar5 = (local_238 & 1) == 0;
      if (!bVar5) {
        pbVar36 = local_228;
      }
      bVar8 = abStack_1fd[uVar26];
joined_r0x0400e260:
      if (bVar8 < 2) {
        uVar16 = (local_238 & 0xff) >> 1;
        if (!bVar5) {
          uVar16 = local_230;
        }
        pbVar34 = pbVar36;
        if (uVar16 != 0) {
          pbVar1 = pbVar36 + uVar16;
          pbVar33 = pbVar36;
          do {
            pbVar34 = pbVar33;
            if (((char)*pbVar33 < '\0') ||
               ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*pbVar33 * 8) & 1) == 0)) break;
            uVar16 = uVar16 - 1;
            pbVar33 = pbVar33 + 1;
            pbVar34 = pbVar1;
          } while (uVar16 != 0);
        }
        sVar13 = (long)pbVar34 - (long)pbVar36;
        uVar16 = local_280 >> 1 & 0x7f;
        if ((local_280 & 1) != 0) {
          uVar16 = local_278;
        }
        if (sVar13 <= uVar16) {
          pvVar12 = (void *)((ulong)&local_280 | 1);
          if ((local_280 & 1) != 0) {
            pvVar12 = local_270;
          }
          iVar9 = memcmp((void *)((long)pvVar12 + (uVar16 - sVar13)),pbVar36,sVar13);
          if (iVar9 == 0) {
            pbVar36 = pbVar34;
          }
        }
      }
    }
    uVar16 = (uVar18 & 0xff) >> 1;
    pbVar34 = pbVar14;
    if ((uVar18 & 1) != 0) {
      uVar16 = uVar20;
      pbVar34 = pbVar17;
    }
    if (pbVar36 != pbVar34 + uVar16) {
      do {
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
LAB_0400e698:
          bVar5 = true;
          if (plVar28 == (long *)0x0) goto LAB_0400e664;
LAB_0400e6a0:
          if (plVar28[3] == plVar28[4]) {
            iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
            if (iVar9 == -1) {
              plVar28 = (long *)0x0;
            }
            if (bVar5 == (iVar9 == -1)) break;
          }
          else if (bVar5 == false) break;
        }
        else {
          if (plVar10[3] == plVar10[4]) {
            iVar9 = (**(code **)(*plVar10 + 0x48))();
            if (iVar9 == -1) {
              *param_1 = 0;
              goto LAB_0400e698;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar28 != (long *)0x0) goto LAB_0400e6a0;
LAB_0400e664:
          if (bVar5 != false) break;
        }
        plVar10 = (long *)*param_1;
        if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
          bVar8 = (**(code **)(*plVar10 + 0x48))();
          if (bVar8 != *pbVar36) break;
        }
        else if (*(byte *)plVar10[3] != *pbVar36) break;
        plVar10 = (long *)*param_1;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
        }
        else {
          plVar10[3] = plVar10[3] + 1;
        }
        pbVar17 = pbVar14;
        if ((local_238 & 1) != 0) {
          pbVar17 = local_228;
        }
        pbVar36 = pbVar36 + 1;
        uVar18 = local_238 >> 1 & 0x7f;
        if ((local_238 & 1) != 0) {
          uVar18 = local_230;
        }
      } while (pbVar36 != pbVar17 + uVar18);
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar18 = local_238 >> 1 & 0x7f;
      pbVar17 = pbVar14;
      if ((local_238 & 1) != 0) {
        uVar18 = local_230;
        pbVar17 = local_228;
      }
      if (pbVar36 != pbVar17 + uVar18) goto LAB_0400ee18;
    }
  }
  else {
    if (bVar8 != 3) {
      if (bVar8 == 4) {
        uVar30 = 0;
LAB_0400de8c:
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
LAB_0400dedc:
          bVar5 = true;
          if (plVar28 != (long *)0x0) goto LAB_0400dee4;
LAB_0400dea8:
          if (bVar5 != false) goto LAB_0400e1c8;
        }
        else {
          if (plVar10[3] == plVar10[4]) {
            iVar9 = (**(code **)(*plVar10 + 0x48))();
            if (iVar9 == -1) {
              *param_1 = 0;
              goto LAB_0400dedc;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar28 == (long *)0x0) goto LAB_0400dea8;
LAB_0400dee4:
          if (plVar28[3] == plVar28[4]) {
            iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
            if (iVar9 == -1) {
              plVar28 = (long *)0x0;
            }
            if (bVar5 == (iVar9 == -1)) goto LAB_0400e1c8;
          }
          else if (bVar5 == false) goto LAB_0400e1c8;
        }
        plVar10 = (long *)*param_1;
        if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
          uVar18 = (**(code **)(*plVar10 + 0x48))();
          uVar18 = uVar18 & 0xff;
          if ((uint)uVar18 >> 7 == 0) goto LAB_0400df5c;
LAB_0400df68:
          uVar20 = local_220 >> 1 & 0x7f;
          if ((local_220 & 1) != 0) {
            uVar20 = local_218;
          }
          if (((uVar20 == 0) || (uVar30 == 0)) || (uVar18 != local_204[0])) goto LAB_0400e1c8;
          if (puVar29 == puVar25) {
            uVar20 = (long)puVar25 - (long)__ptr;
            uVar18 = 4;
            if (uVar20 != 0) {
              uVar18 = uVar20 * 2;
            }
            if (0x7ffffffffffffffe < uVar20) {
              uVar18 = 0xffffffffffffffff;
            }
            if (pcVar35 == __do_nothing) {
              __ptr = malloc(uVar18);
            }
            else {
              __ptr = realloc(__ptr,uVar18);
            }
            if (__ptr == (uint *)0x0) {
LAB_0400eed4:
              __throw_bad_alloc();
LAB_0400eed8:
              __throw_bad_alloc();
              goto LAB_0400eee0;
            }
            puVar29 = (uint *)((long)__ptr + uVar20);
            pcVar35 = free;
            puVar25 = (uint *)((long)__ptr + (uVar18 & 0xfffffffffffffffc));
          }
          puVar23 = puVar29 + 1;
          *puVar29 = uVar30;
          uVar30 = 0;
          plVar10 = (long *)*param_1;
          lVar15 = plVar10[3];
          puVar29 = puVar23;
          uVar4 = 0;
          if (lVar15 == plVar10[4]) goto LAB_0400e11c;
LAB_0400de84:
          plVar10[3] = lVar15 + 1;
        }
        else {
          bVar8 = *(byte *)plVar10[3];
          uVar18 = (ulong)bVar8;
          if ((char)bVar8 < '\0') goto LAB_0400df68;
LAB_0400df5c:
          if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar18 * 8) >> 6 & 1) == 0)
          goto LAB_0400df68;
          puVar19 = (undefined1 *)*param_10;
          if (puVar19 == local_290) {
            uVar20 = (long)local_290 - *param_9;
            if (uVar20 < 0x7fffffffffffffff) {
              uVar16 = uVar20 * 2;
              if (uVar16 < 2) {
                uVar16 = 1;
              }
              if ((code *)param_9[1] != __do_nothing) goto LAB_0400e048;
LAB_0400e0b8:
              pvVar12 = malloc(uVar16);
            }
            else {
              uVar16 = 0xffffffffffffffff;
              if ((code *)param_9[1] == __do_nothing) goto LAB_0400e0b8;
LAB_0400e048:
              pvVar12 = realloc((void *)*param_9,uVar16);
            }
            if (pvVar12 != (void *)0x0) {
              puVar19 = (undefined1 *)((long)pvVar12 + uVar20);
              *param_9 = (long)pvVar12;
              param_9[1] = (long)free;
              *param_10 = (long)puVar19;
              local_290 = (undefined1 *)(*param_9 + uVar16);
              goto LAB_0400e0fc;
            }
            goto LAB_0400eed4;
          }
LAB_0400e0fc:
          uVar30 = uVar30 + 1;
          *param_10 = (long)(puVar19 + 1);
          *puVar19 = (char)uVar18;
          plVar10 = (long *)*param_1;
          lVar15 = plVar10[3];
          puVar23 = puVar29;
          uVar4 = uVar30;
          if (lVar15 != plVar10[4]) goto LAB_0400de84;
LAB_0400e11c:
          uVar30 = uVar4;
          (**(code **)(*plVar10 + 0x50))();
          puVar29 = puVar23;
        }
        goto LAB_0400de8c;
      }
      goto LAB_0400ddb4;
    }
    uVar20 = local_250 & 0xff;
    uVar18 = (ulong)((byte)local_250._0_1_ >> 1);
    if ((local_250 & 1) != 0) {
      uVar18 = local_248;
    }
    if (uVar18 != 0) {
      plVar10 = (long *)*param_1;
      if ((char *)plVar10[3] == (char *)plVar10[4]) {
        cVar6 = (**(code **)(*plVar10 + 0x48))();
        uVar20 = local_250 & 0xff;
      }
      else {
        cVar6 = *(char *)plVar10[3];
      }
      pcVar2 = (char *)((ulong)&local_250 | 1);
      if (((byte)local_250._0_1_ & 1) != 0) {
        pcVar2 = local_240;
      }
      if (cVar6 == *pcVar2) {
        plVar10 = (long *)*param_1;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
          uVar20 = local_250 & 0xff;
          bVar3 = local_250._0_1_;
        }
        else {
          plVar10[3] = plVar10[3] + 1;
          bVar3 = local_250._0_1_;
        }
        uVar18 = uVar20 >> 1;
        if (((byte)bVar3 & 1) != 0) {
          uVar18 = local_248;
        }
        *param_7 = 0;
        puVar31 = &local_250;
        if (uVar18 < 2) {
          puVar31 = puVar32;
        }
        goto LAB_0400ddb4;
      }
    }
    uVar16 = local_268 & 0xff;
    uVar18 = (ulong)((byte)local_268._0_1_ >> 1);
    if ((local_268 & 1) != 0) {
      uVar18 = local_260;
    }
    if (uVar18 != 0) {
      plVar10 = (long *)*param_1;
      if ((char *)plVar10[3] == (char *)plVar10[4]) {
        cVar6 = (**(code **)(*plVar10 + 0x48))();
        uVar16 = local_268 & 0xff;
      }
      else {
        cVar6 = *(char *)plVar10[3];
      }
      pcVar2 = (char *)((ulong)&local_268 | 1);
      if (((byte)local_268._0_1_ & 1) != 0) {
        pcVar2 = local_258;
      }
      if (cVar6 == *pcVar2) {
        plVar10 = (long *)*param_1;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
          uVar16 = local_268 & 0xff;
          bVar3 = local_268._0_1_;
        }
        else {
          plVar10[3] = plVar10[3] + 1;
          bVar3 = local_268._0_1_;
        }
        uVar18 = uVar16 >> 1;
        if (((byte)bVar3 & 1) != 0) {
          uVar18 = local_260;
        }
        *param_7 = 1;
        puVar31 = &local_268;
        if (uVar18 < 2) {
          puVar31 = puVar32;
        }
        goto LAB_0400ddb4;
      }
      uVar20 = local_250 & 0xff;
    }
    uVar18 = uVar20 >> 1;
    if ((uVar20 & 1) != 0) {
      uVar18 = local_248;
    }
    uVar20 = uVar16 >> 1;
    if ((uVar16 & 1) != 0) {
      uVar20 = local_260;
    }
    if (uVar18 == 0) {
      if (uVar20 == 0) goto LAB_0400ddb4;
    }
    else if (uVar20 != 0) goto LAB_0400ee18;
    *param_7 = uVar18 != 0;
  }
LAB_0400ddb4:
  uVar26 = uVar26 + 1;
  plVar10 = plVar28;
  puVar32 = puVar31;
  if (uVar26 == 4) goto LAB_0400eb58;
  goto LAB_0400ddc0;
LAB_0400e1c8:
  if ((__ptr != puVar29) && (uVar30 != 0)) {
    if (puVar29 == puVar25) {
      uVar18 = (long)puVar25 - (long)__ptr;
      sVar13 = 4;
      if (uVar18 != 0) {
        sVar13 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar13 = 0xffffffffffffffff;
      }
      if (pcVar35 == __do_nothing) {
        __ptr = malloc(sVar13);
      }
      else {
        __ptr = realloc(__ptr,sVar13);
      }
      if (__ptr == (uint *)0x0) {
LAB_0400eee0:
        __throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
        FUN_039aee10();
      }
      puVar29 = (uint *)((long)__ptr + uVar18);
      pcVar35 = free;
      puVar25 = (uint *)((long)__ptr + (sVar13 & 0xfffffffffffffffc));
    }
    *puVar29 = uVar30;
    puVar29 = puVar29 + 1;
  }
  if (local_284 < 1) {
LAB_0400dd9c:
    if (*param_10 == *param_9) goto LAB_0400ee18;
    goto LAB_0400ddb4;
  }
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
LAB_0400e864:
    bVar5 = true;
  }
  else if (plVar10[3] == plVar10[4]) {
    iVar9 = (**(code **)(*plVar10 + 0x48))();
    if (iVar9 == -1) {
      *param_1 = 0;
      goto LAB_0400e864;
    }
    bVar5 = *param_1 == 0;
  }
  else {
    bVar5 = false;
  }
  if (plVar28 == (long *)0x0) {
    if (bVar5 != false) goto LAB_0400ee18;
    plVar10 = (long *)0x0;
    plVar28 = (long *)*param_1;
    pbVar17 = (byte *)plVar28[3];
    if (pbVar17 == (byte *)plVar28[4]) goto LAB_0400e898;
  }
  else {
    if (plVar28[3] == plVar28[4]) {
      iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
      plVar10 = (long *)0x0;
      if (iVar9 != -1) {
        plVar10 = plVar28;
      }
      if (bVar5 == (iVar9 == -1)) goto LAB_0400ee18;
    }
    else {
      plVar10 = plVar28;
      if (bVar5 == false) goto LAB_0400ee18;
    }
    plVar28 = (long *)*param_1;
    pbVar17 = (byte *)plVar28[3];
    if (pbVar17 == (byte *)plVar28[4]) {
LAB_0400e898:
      bVar8 = (**(code **)(*plVar28 + 0x48))();
      if (bVar8 != local_200[0]) goto LAB_0400ee18;
      goto LAB_0400e8fc;
    }
  }
  if (*pbVar17 != local_200[0]) goto LAB_0400ee18;
LAB_0400e8fc:
  plVar11 = (long *)*param_1;
  plVar28 = plVar10;
  if (plVar11[3] == plVar11[4]) {
    (**(code **)(*plVar11 + 0x50))();
  }
  else {
    plVar11[3] = plVar11[3] + 1;
  }
joined_r0x0400e92c:
  if (0 < local_284) {
    do {
      plVar10 = (long *)*param_1;
      if (plVar10 == (long *)0x0) {
LAB_0400e998:
        bVar5 = true;
        if (plVar28 == (long *)0x0) goto LAB_0400e960;
LAB_0400e9a0:
        if (plVar28[3] == plVar28[4]) {
          iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
          if (iVar9 == -1) {
            plVar28 = (long *)0x0;
          }
          if (bVar5 == (iVar9 == -1)) goto LAB_0400ee18;
        }
        else if (bVar5 == false) goto LAB_0400ee18;
      }
      else {
        if (plVar10[3] == plVar10[4]) {
          iVar9 = (**(code **)(*plVar10 + 0x48))();
          if (iVar9 == -1) {
            *param_1 = 0;
            goto LAB_0400e998;
          }
          bVar5 = *param_1 == 0;
        }
        else {
          bVar5 = false;
        }
        if (plVar28 != (long *)0x0) goto LAB_0400e9a0;
LAB_0400e960:
        if (bVar5 != false) goto LAB_0400ee18;
        plVar28 = (long *)0x0;
      }
      plVar10 = (long *)*param_1;
      if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
        uVar18 = (**(code **)(*plVar10 + 0x48))();
        uVar18 = uVar18 & 0xff;
        if ((uint)uVar18 >> 7 != 0) goto LAB_0400ee18;
      }
      else {
        bVar8 = *(byte *)plVar10[3];
        uVar18 = (ulong)bVar8;
        if ((char)bVar8 < '\0') goto LAB_0400ee18;
      }
      if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + uVar18 * 8) >> 6 & 1) == 0)
      goto LAB_0400ee18;
      puVar19 = (undefined1 *)*param_10;
      if (puVar19 == local_290) {
        uVar18 = (long)local_290 - *param_9;
        if (uVar18 < 0x7fffffffffffffff) {
          uVar20 = uVar18 * 2;
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          if ((code *)param_9[1] != __do_nothing) goto LAB_0400ea88;
LAB_0400eab4:
          pvVar12 = malloc(uVar20);
        }
        else {
          uVar20 = 0xffffffffffffffff;
          if ((code *)param_9[1] == __do_nothing) goto LAB_0400eab4;
LAB_0400ea88:
          pvVar12 = realloc((void *)*param_9,uVar20);
        }
        if (pvVar12 == (void *)0x0) goto LAB_0400eed8;
        puVar19 = (undefined1 *)((long)pvVar12 + uVar18);
        *param_9 = (long)pvVar12;
        param_9[1] = (long)free;
        *param_10 = (long)puVar19;
        local_290 = (undefined1 *)(*param_9 + uVar20);
        plVar10 = (long *)*param_1;
        puVar21 = (undefined1 *)plVar10[3];
        if (puVar21 == (undefined1 *)plVar10[4]) goto LAB_0400eb00;
LAB_0400ea40:
        uVar7 = *puVar21;
      }
      else {
        plVar10 = (long *)*param_1;
        puVar21 = (undefined1 *)plVar10[3];
        if (puVar21 != (undefined1 *)plVar10[4]) goto LAB_0400ea40;
LAB_0400eb00:
        uVar7 = (**(code **)(*plVar10 + 0x48))();
        puVar19 = (undefined1 *)*param_10;
      }
      *param_10 = (long)(puVar19 + 1);
      *puVar19 = uVar7;
      plVar10 = (long *)*param_1;
      local_284 = local_284 + -1;
      if (plVar10[3] == plVar10[4]) goto code_r0x0400eb3c;
      plVar10[3] = plVar10[3] + 1;
      if (local_284 < 1) break;
    } while( true );
  }
  goto LAB_0400dd9c;
code_r0x0400eb3c:
  (**(code **)(*plVar10 + 0x50))();
  goto joined_r0x0400e92c;
LAB_0400eb58:
  if (puVar32 != (ulong *)0x0) {
    uVar26 = (ulong)(byte)((byte)*puVar32 >> 1);
    if (((byte)*puVar32 & 1) != 0) {
      uVar26 = puVar32[1];
    }
    if (1 < uVar26) {
      uVar26 = 2;
      uVar18 = 1;
      do {
        uVar20 = uVar26;
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
LAB_0400ec04:
          bVar5 = true;
          if (plVar28 == (long *)0x0) goto LAB_0400ebcc;
LAB_0400ec0c:
          if (plVar28[3] == plVar28[4]) {
            iVar9 = (**(code **)(*plVar28 + 0x48))(plVar28);
            if (iVar9 == -1) {
              plVar28 = (long *)0x0;
            }
            if (bVar5 == (iVar9 == -1)) goto LAB_0400ee18;
          }
          else if (bVar5 == false) goto LAB_0400ee18;
        }
        else {
          if (plVar10[3] == plVar10[4]) {
            iVar9 = (**(code **)(*plVar10 + 0x48))();
            if (iVar9 == -1) {
              *param_1 = 0;
              goto LAB_0400ec04;
            }
            bVar5 = *param_1 == 0;
          }
          else {
            bVar5 = false;
          }
          if (plVar28 != (long *)0x0) goto LAB_0400ec0c;
LAB_0400ebcc:
          if (bVar5 != false) goto LAB_0400ee18;
          plVar28 = (long *)0x0;
        }
        plVar10 = (long *)*param_1;
        if ((byte *)plVar10[3] == (byte *)plVar10[4]) {
          bVar8 = (**(code **)(*plVar10 + 0x48))();
          if ((*puVar32 & 1) == 0) goto LAB_0400ec94;
LAB_0400ec68:
          if (bVar8 != *(byte *)(puVar32[2] + uVar18)) goto LAB_0400ee18;
        }
        else {
          bVar8 = *(byte *)plVar10[3];
          if ((*puVar32 & 1) != 0) goto LAB_0400ec68;
LAB_0400ec94:
          if (bVar8 != *(byte *)((long)puVar32 + uVar18 + 1)) goto LAB_0400ee18;
        }
        plVar10 = (long *)*param_1;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
        }
        else {
          plVar10[3] = plVar10[3] + 1;
        }
        uVar16 = (ulong)(byte)((byte)*puVar32 >> 1);
        if (((byte)*puVar32 & 1) != 0) {
          uVar16 = puVar32[1];
        }
        uVar26 = (ulong)((int)uVar20 + 1);
        uVar18 = uVar20;
      } while (uVar20 < uVar16);
    }
  }
  if (__ptr == puVar29) {
    uVar27 = 1;
    __ptr = puVar29;
  }
  else {
    uVar27 = 1;
    uVar26 = (ulong)((byte)local_220._0_1_ >> 1);
    if ((local_220 & 1) != 0) {
      uVar26 = local_218;
    }
    if ((4 < (long)puVar29 - (long)__ptr) && (uVar26 != 0)) {
      puVar29 = puVar29 + -1;
      puVar23 = puVar29;
      puVar25 = __ptr;
      if (__ptr < puVar29) {
        do {
          puVar22 = puVar25 + 1;
          uVar30 = *puVar25;
          *puVar25 = *puVar23;
          puVar24 = puVar23 + -1;
          *puVar23 = uVar30;
          puVar23 = puVar24;
          puVar25 = puVar22;
        } while (puVar22 < puVar24);
        pbVar17 = (byte *)((ulong)&local_220 | 1);
        if ((local_220 & 1) != 0) {
          pbVar17 = local_210;
        }
        pbVar14 = pbVar17;
        if (__ptr < puVar29) {
          puVar25 = __ptr;
          uVar26 = (ulong)((byte)local_220._0_1_ >> 1);
          if ((local_220 & 1) != 0) {
            uVar26 = local_218;
          }
          do {
            bVar8 = *pbVar14;
            if (((bVar8 != 0) && (bVar8 != 0xff)) && (*puVar25 != (uint)bVar8)) goto LAB_0400ee18;
            puVar25 = puVar25 + 1;
            if (1 < (long)(pbVar17 + (uVar26 - (long)pbVar14))) {
              pbVar14 = pbVar14 + 1;
            }
          } while (puVar25 < puVar29);
        }
      }
      else {
        pbVar14 = (byte *)((ulong)&local_220 | 1);
        if ((local_220 & 1) != 0) {
          pbVar14 = local_210;
        }
      }
      bVar8 = *pbVar14;
      uVar27 = 1;
      if (((bVar8 != 0) && (bVar8 != 0xff)) && ((uint)bVar8 <= *puVar29 - 1)) {
LAB_0400ee18:
        uVar27 = 0;
        *param_6 = *param_6 | 4;
      }
    }
  }
  if ((local_280 & 1) != 0) {
    operator_delete(local_270);
  }
  if ((local_268 & 1) != 0) {
    operator_delete(local_258);
  }
  if ((local_250 & 1) != 0) {
    operator_delete(local_240);
  }
  if ((local_238 & 1) != 0) {
    operator_delete(local_228);
  }
  if ((local_220 & 1) != 0) {
    operator_delete(local_210);
  }
  if (__ptr == (uint *)0x0) {
    return uVar27;
  }
  (*pcVar35)(__ptr);
  return uVar27;
}

