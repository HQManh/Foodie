// rea decompile_all
// name: std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__do_get
// address: 0x400fbc8
// body: available
// range: 0x400fbc8-0x4010ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4010eb8 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::locale const&, unsigned int, unsigned
   int&, bool&, std::__ndk1::ctype<wchar_t> const&, std::__ndk1::unique_ptr<wchar_t, void
   (*)(void*)>&, wchar_t*&, wchar_t*) */

undefined4
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long *param_8,long *param_9,long *param_10,wchar_t *param_11)

{
  byte *pbVar1;
  size_t __size;
  int iVar2;
  basic_string bVar3;
  pattern pVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  wchar_t wVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  uint *__ptr;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  wchar_t *pwVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  ulong *puVar20;
  wchar_t *pwVar21;
  uint *puVar22;
  byte *pbVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  ulong uVar28;
  long *plVar29;
  byte bVar30;
  code *pcVar31;
  int *__s2;
  uint *puVar32;
  int *piVar33;
  ulong uVar34;
  ulong *local_2c0;
  uint *local_2a8;
  wchar_t *local_298;
  int local_284;
  ulong local_280;
  ulong local_278;
  void *local_270;
  ulong local_268;
  ulong local_260;
  int *local_258;
  ulong local_250;
  ulong local_248;
  int *local_240;
  ulong local_238;
  ulong local_230;
  int *local_228;
  ulong local_220;
  ulong local_218;
  byte *local_210;
  wchar_t local_204;
  undefined4 local_200;
  pattern local_1fc [3];
  char cStack_1f9;
  uint local_1f8 [100];
  uint auStack_68 [2];
  
  plVar11 = (long *)*param_1;
  if (plVar11 == (long *)0x0) {
LAB_0400fc60:
    bVar5 = true;
    if (param_2 == (long *)0x0) goto LAB_0400fc3c;
LAB_0400fc68:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar6 = iVar10 == -1;
      plVar11 = (long *)0x0;
      if (!(bool)uVar6) {
        plVar11 = param_2;
      }
    }
    else {
      uVar6 = *(int *)param_2[3] == -1;
      plVar11 = (long *)0x0;
      if (!(bool)uVar6) {
        plVar11 = param_2;
      }
    }
    if (bVar5 == (bool)uVar6) goto LAB_04010cac;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    if (iVar10 == -1) {
      *param_1 = 0;
      goto LAB_0400fc60;
    }
    bVar5 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_0400fc68;
LAB_0400fc3c:
    if (bVar5) {
LAB_04010cac:
      *param_6 = *param_6 | 4;
      return 0;
    }
    plVar11 = (long *)0x0;
  }
  local_220 = 0;
  local_218 = 0;
  local_210 = (byte *)0x0;
  local_238 = 0;
  local_230 = 0;
  local_228 = (int *)0x0;
  local_250 = 0;
  local_248 = 0;
  local_240 = (int *)0x0;
  local_268 = 0;
  local_260 = 0;
  local_258 = (int *)0x0;
  local_280 = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
  __money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,local_1fc,&local_200,&local_204,(basic_string *)&local_220,
             (basic_string *)&local_238,(basic_string *)&local_250,(basic_string *)&local_268,
             &local_284);
  __ptr = local_1f8;
  local_2a8 = auStack_68;
  local_298 = param_11;
  piVar17 = (int *)((ulong)&local_238 | 4);
  local_2c0 = (ulong *)0x0;
  uVar28 = 0;
  puVar32 = local_1f8;
  *param_10 = *param_9;
  pcVar31 = __do_nothing;
LAB_0400fd70:
  plVar12 = (long *)*param_1;
  plVar29 = plVar11;
  if (plVar12 == (long *)0x0) {
LAB_0400fdbc:
    bVar5 = true;
    if (plVar11 == (long *)0x0) goto LAB_0400fdb0;
LAB_0400fdc4:
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    plVar29 = (long *)0x0;
    if (iVar10 != -1) {
      plVar29 = plVar11;
    }
    if (bVar5 == (iVar10 == -1)) goto LAB_04010b24;
  }
  else {
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 == -1) {
      *param_1 = 0;
      goto LAB_0400fdbc;
    }
    bVar5 = *param_1 == 0;
    if (plVar11 != (long *)0x0) goto LAB_0400fdc4;
LAB_0400fdb0:
    if (bVar5) goto LAB_04010b24;
  }
  pVar4 = local_1fc[uVar28];
  puVar20 = local_2c0;
  if ((byte)pVar4 < 2) {
    if (pVar4 == (pattern)0x0) {
      if (uVar28 != 3) {
LAB_04010228:
        do {
          plVar11 = (long *)*param_1;
          if (plVar11 == (long *)0x0) {
LAB_04010274:
            bVar7 = true;
            bVar5 = true;
            if (plVar29 == (long *)0x0) goto LAB_04010268;
LAB_0401027c:
            if ((int *)plVar29[3] == (int *)plVar29[4]) {
              iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
            }
            else {
              iVar10 = *(int *)plVar29[3];
            }
            if (iVar10 == -1) {
              plVar29 = (long *)0x0;
            }
            if (bVar7 == (iVar10 == -1)) goto LAB_0400fd64;
          }
          else {
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
              iVar10 = (**(code **)(*plVar11 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar11[3];
            }
            if (iVar10 == -1) {
              *param_1 = 0;
              goto LAB_04010274;
            }
            bVar7 = *param_1 == 0;
            bVar5 = bVar7;
            if (plVar29 != (long *)0x0) goto LAB_0401027c;
LAB_04010268:
            if (bVar5) goto LAB_0400fd64;
          }
          plVar11 = (long *)*param_1;
          if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
            uVar8 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            uVar8 = *(undefined4 *)plVar11[3];
          }
          uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar8);
          if ((uVar13 & 1) == 0) goto LAB_0400fd64;
          plVar11 = (long *)*param_1;
          if (plVar11[3] == plVar11[4]) {
            (**(code **)(*plVar11 + 0x50))();
          }
          else {
            plVar11[3] = plVar11[3] + 4;
          }
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back((wchar_t)&local_280);
        } while( true );
      }
      goto LAB_04010b24;
    }
    if (pVar4 == (pattern)0x1) {
      if (uVar28 != 3) {
        plVar11 = (long *)*param_1;
        if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
          uVar8 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          uVar8 = *(undefined4 *)plVar11[3];
        }
        uVar13 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar8);
        if ((uVar13 & 1) != 0) {
          plVar11 = (long *)*param_1;
          if (plVar11[3] == plVar11[4]) {
            (**(code **)(*plVar11 + 0x50))();
          }
          else {
            plVar11[3] = plVar11[3] + 4;
          }
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back((wchar_t)&local_280);
          goto LAB_04010228;
        }
        goto LAB_04010ddc;
      }
      goto LAB_04010b24;
    }
  }
  else if (pVar4 == (pattern)0x2) {
    piVar19 = local_228;
    if ((uVar28 < 2) || (local_2c0 != (ulong *)0x0)) {
      uVar13 = local_238 & 0xff;
      bVar30 = (byte)local_238._0_1_ & 1;
      __s2 = piVar17;
      if ((local_238 & 1) != 0) {
        __s2 = local_228;
      }
      if (uVar28 == 0) goto LAB_04010588;
      bVar30 = (byte)local_238._0_1_ & 1;
      piVar33 = __s2;
      if ((byte)local_1fc[uVar28 - 1] < 2) goto LAB_04010350;
LAB_04010580:
      __s2 = piVar33;
    }
    else {
      if (((param_5 >> 9 & 1) == 0) && (uVar28 != 2 || cStack_1f9 == '\0')) {
        local_2c0 = (ulong *)0x0;
        puVar20 = local_2c0;
        goto LAB_0400fd64;
      }
      uVar13 = local_238 & 0xff;
      piVar33 = piVar17;
      if ((local_238 & 1) != 0) {
        piVar33 = local_228;
      }
      bVar30 = (byte)local_238._0_1_ & 1;
      if (1 < (byte)local_1fc[uVar28 - 1]) goto LAB_04010580;
LAB_04010350:
      bVar30 = (byte)local_238._0_1_ & 1;
      uVar13 = local_238 & 0xff;
      uVar34 = uVar13 >> 1;
      piVar19 = piVar17;
      if ((local_238 & 1) != 0) {
        uVar34 = local_230;
        piVar19 = local_228;
      }
      if (piVar33 != piVar19 + uVar34) {
        do {
          uVar34 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar33);
          uVar13 = local_238 & 0xff;
          if ((uVar34 & 1) == 0) {
            bVar30 = (byte)local_238._0_1_ & 1;
            break;
          }
          bVar30 = (byte)local_238._0_1_ & 1;
          piVar33 = piVar33 + 1;
          uVar34 = (ulong)((byte)local_238._0_1_ >> 1);
          piVar19 = piVar17;
          if ((local_238 & 1) != 0) {
            uVar34 = local_230;
            piVar19 = local_228;
          }
        } while (piVar33 != piVar19 + uVar34);
      }
      piVar19 = local_228;
      __s2 = piVar17;
      if (bVar30 != 0) {
        __s2 = local_228;
      }
      uVar18 = (long)piVar33 - (long)__s2 >> 2;
      uVar34 = local_280 >> 1 & 0x7f;
      if ((local_280 & 1) != 0) {
        uVar34 = local_278;
      }
      if (uVar18 <= uVar34) {
        pvVar14 = (void *)((ulong)&local_280 | 4);
        if ((local_280 & 1) != 0) {
          pvVar14 = local_270;
        }
        iVar10 = memcmp((void *)((long)pvVar14 + uVar18 * -4 + uVar34 * 4),__s2,uVar18 * 4);
        if (iVar10 == 0) goto LAB_04010580;
      }
    }
LAB_04010588:
    uVar13 = uVar13 >> 1;
    piVar33 = piVar17;
    if (bVar30 != 0) {
      uVar13 = local_230;
      piVar33 = piVar19;
    }
    if (__s2 != piVar33 + uVar13) {
      do {
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_0401062c:
          bVar7 = true;
          bVar5 = true;
          if (plVar29 == (long *)0x0) goto LAB_04010620;
LAB_04010634:
          if ((int *)plVar29[3] == (int *)plVar29[4]) {
            iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
          }
          else {
            iVar10 = *(int *)plVar29[3];
          }
          if (iVar10 == -1) {
            plVar29 = (long *)0x0;
          }
          if (bVar7 == (iVar10 == -1)) break;
        }
        else {
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar10 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar11[3];
          }
          if (iVar10 == -1) {
            *param_1 = 0;
            goto LAB_0401062c;
          }
          bVar7 = *param_1 == 0;
          bVar5 = bVar7;
          if (plVar29 != (long *)0x0) goto LAB_04010634;
LAB_04010620:
          if (bVar5) break;
        }
        plVar11 = (long *)*param_1;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        if (iVar10 != *__s2) break;
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 4;
        }
        piVar19 = piVar17;
        if ((local_238 & 1) != 0) {
          piVar19 = local_228;
        }
        __s2 = __s2 + 1;
        uVar13 = local_238 >> 1 & 0x7f;
        if ((local_238 & 1) != 0) {
          uVar13 = local_230;
        }
      } while (__s2 != piVar19 + uVar13);
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar13 = local_238 >> 1 & 0x7f;
      piVar19 = piVar17;
      if ((local_238 & 1) != 0) {
        uVar13 = local_230;
        piVar19 = local_228;
      }
      if (__s2 != piVar19 + uVar13) goto LAB_04010ddc;
    }
  }
  else if (pVar4 == (pattern)0x3) {
    uVar34 = local_250 & 0xff;
    uVar13 = (ulong)((byte)local_250._0_1_ >> 1);
    if ((local_250 & 1) != 0) {
      uVar13 = local_248;
    }
    if (uVar13 == 0) {
LAB_04010424:
      uVar18 = local_268 & 0xff;
      uVar13 = (ulong)((byte)local_268._0_1_ >> 1);
      if ((local_268 & 1) != 0) {
        uVar13 = local_260;
      }
      if (uVar13 != 0) {
        plVar11 = (long *)*param_1;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))();
          uVar18 = local_268 & 0xff;
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        piVar19 = (int *)((ulong)&local_268 | 4);
        if (((byte)local_268._0_1_ & 1) != 0) {
          piVar19 = local_258;
        }
        if (iVar10 == *piVar19) {
          plVar11 = (long *)*param_1;
          if (plVar11[3] == plVar11[4]) {
            (**(code **)(*plVar11 + 0x50))();
            uVar18 = local_268 & 0xff;
            bVar3 = local_268._0_1_;
          }
          else {
            plVar11[3] = plVar11[3] + 4;
            bVar3 = local_268._0_1_;
          }
          uVar13 = uVar18 >> 1;
          if (((byte)bVar3 & 1) != 0) {
            uVar13 = local_260;
          }
          *param_7 = 1;
          puVar20 = &local_268;
          goto LAB_040107d0;
        }
        uVar34 = local_250 & 0xff;
      }
      uVar13 = uVar34 >> 1;
      if ((uVar34 & 1) != 0) {
        uVar13 = local_248;
      }
      uVar34 = uVar18 >> 1;
      if ((uVar18 & 1) != 0) {
        uVar34 = local_260;
      }
      if (uVar13 == 0) {
        if (uVar34 == 0) goto LAB_0400fd64;
      }
      else if (uVar34 != 0) goto LAB_04010ddc;
      *param_7 = uVar13 != 0;
      goto LAB_0400fd64;
    }
    plVar11 = (long *)*param_1;
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar10 = (**(code **)(*plVar11 + 0x48))();
      uVar34 = local_250 & 0xff;
    }
    else {
      iVar10 = *(int *)plVar11[3];
    }
    piVar19 = (int *)((ulong)&local_250 | 4);
    if (((byte)local_250._0_1_ & 1) != 0) {
      piVar19 = local_240;
    }
    if (iVar10 != *piVar19) goto LAB_04010424;
    plVar11 = (long *)*param_1;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
      uVar34 = local_250 & 0xff;
      bVar3 = local_250._0_1_;
    }
    else {
      plVar11[3] = plVar11[3] + 4;
      bVar3 = local_250._0_1_;
    }
    puVar20 = &local_250;
    uVar13 = uVar34 >> 1;
    if (((byte)bVar3 & 1) != 0) {
      uVar13 = local_248;
    }
    *param_7 = 0;
LAB_040107d0:
    if (uVar13 < 2) {
      puVar20 = local_2c0;
    }
  }
  else if (pVar4 == (pattern)0x4) {
    uVar27 = 0;
    puVar26 = puVar32;
LAB_0400fe34:
    plVar11 = (long *)*param_1;
    if (plVar11 == (long *)0x0) {
LAB_0400fe80:
      bVar7 = true;
      bVar5 = true;
      if (plVar29 == (long *)0x0) goto LAB_0400fe74;
LAB_0400fe88:
      if ((int *)plVar29[3] == (int *)plVar29[4]) {
        iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
      }
      else {
        iVar10 = *(int *)plVar29[3];
      }
      if (iVar10 == -1) {
        plVar29 = (long *)0x0;
      }
      if (bVar7 == (iVar10 == -1)) goto joined_r0x04010738;
    }
    else {
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar10 = (**(code **)(*plVar11 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar11[3];
      }
      if (iVar10 == -1) {
        *param_1 = 0;
        goto LAB_0400fe80;
      }
      bVar7 = *param_1 == 0;
      bVar5 = bVar7;
      if (plVar29 != (long *)0x0) goto LAB_0400fe88;
LAB_0400fe74:
      if (bVar5) goto joined_r0x04010738;
    }
    plVar11 = (long *)*param_1;
    if ((wchar_t *)plVar11[3] == (wchar_t *)plVar11[4]) {
      wVar9 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      wVar9 = *(wchar_t *)plVar11[3];
    }
    uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,wVar9);
    if ((uVar13 & 1) == 0) {
      uVar13 = local_220 >> 1 & 0x7f;
      if ((local_220 & 1) != 0) {
        uVar13 = local_218;
      }
      if (((uVar13 == 0) || (uVar27 == 0)) || (wVar9 != local_204)) goto joined_r0x04010738;
      if (puVar26 == local_2a8) {
        uVar34 = (long)local_2a8 - (long)__ptr;
        uVar13 = 4;
        if (uVar34 != 0) {
          uVar13 = uVar34 * 2;
        }
        if (0x7ffffffffffffffe < uVar34) {
          uVar13 = 0xffffffffffffffff;
        }
        if (pcVar31 == __do_nothing) {
          __ptr = malloc(uVar13);
        }
        else {
          __ptr = realloc(__ptr,uVar13);
        }
        if (__ptr == (uint *)0x0) goto LAB_04010e98;
        puVar26 = (uint *)((long)__ptr + uVar34);
        local_2a8 = (uint *)((long)__ptr + (uVar13 & 0xfffffffffffffffc));
        pcVar31 = free;
      }
      puVar32 = puVar26 + 1;
      *puVar26 = uVar27;
      uVar27 = 0;
      plVar11 = (long *)*param_1;
      lVar15 = plVar11[3];
      puVar26 = puVar32;
      if (lVar15 != plVar11[4]) goto LAB_0400fe2c;
LAB_040100c0:
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      pwVar16 = (wchar_t *)*param_10;
      if (pwVar16 == local_298) {
        uVar13 = (long)local_298 - *param_9;
        if (uVar13 == 0) {
          uVar34 = 4;
        }
        else {
          uVar34 = uVar13 * 2;
          if (0x7ffffffffffffffe < uVar13) {
            uVar34 = 0xffffffffffffffff;
          }
        }
        if ((code *)param_9[1] == __do_nothing) {
          pvVar14 = malloc(uVar34);
        }
        else {
          pvVar14 = realloc((void *)*param_9,uVar34);
        }
        if (pvVar14 == (void *)0x0) {
LAB_04010e98:
          __throw_bad_alloc();
LAB_04010ea0:
          __throw_bad_alloc();
          goto LAB_04010eac;
        }
        pwVar16 = (wchar_t *)((long)pvVar14 + uVar13);
        *param_9 = (long)pvVar14;
        param_9[1] = (long)free;
        *param_10 = (long)pwVar16;
        local_298 = (wchar_t *)(*param_9 + (uVar34 & 0xfffffffffffffffc));
      }
      uVar27 = uVar27 + 1;
      *pwVar16 = wVar9;
      *param_10 = (long)(pwVar16 + 1);
      plVar11 = (long *)*param_1;
      lVar15 = plVar11[3];
      puVar32 = puVar26;
      if (lVar15 == plVar11[4]) goto LAB_040100c0;
LAB_0400fe2c:
      plVar11[3] = lVar15 + 4;
      puVar26 = puVar32;
    }
    goto LAB_0400fe34;
  }
LAB_0400fd64:
  local_2c0 = puVar20;
  uVar28 = uVar28 + 1;
  plVar11 = plVar29;
  if (uVar28 == 4) goto LAB_04010b24;
  goto LAB_0400fd70;
joined_r0x04010738:
  puVar32 = puVar26;
  if ((__ptr != puVar26) && (uVar27 != 0)) {
    if (puVar26 == local_2a8) {
      uVar13 = (long)local_2a8 - (long)__ptr;
      __size = 4;
      if (uVar13 != 0) {
        __size = uVar13 * 2;
      }
      if (0x7ffffffffffffffe < uVar13) {
        __size = 0xffffffffffffffff;
      }
      if (pcVar31 == __do_nothing) {
        __ptr = malloc(__size);
      }
      else {
        __ptr = realloc(__ptr,__size);
      }
      if (__ptr == (uint *)0x0) {
LAB_04010eac:
        __throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
        FUN_039aee10();
      }
      puVar26 = (uint *)((long)__ptr + uVar13);
      local_2a8 = (uint *)((long)__ptr + (__size & 0xfffffffffffffffc));
      pcVar31 = free;
    }
    puVar32 = puVar26 + 1;
    *puVar26 = uVar27;
  }
  if (0 < local_284) {
    plVar11 = (long *)*param_1;
    if (plVar11 != (long *)0x0) {
      if ((int *)plVar11[3] == (int *)plVar11[4]) {
        iVar10 = (**(code **)(*plVar11 + 0x48))();
      }
      else {
        iVar10 = *(int *)plVar11[3];
      }
      if (iVar10 != -1) {
        bVar5 = *param_1 == 0;
        goto joined_r0x04010870;
      }
      *param_1 = 0;
    }
    bVar5 = true;
joined_r0x04010870:
    if (plVar29 == (long *)0x0) {
      if (bVar5) goto LAB_04010ddc;
      plVar11 = (long *)0x0;
    }
    else {
      if ((int *)plVar29[3] == (int *)plVar29[4]) {
        iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
      }
      else {
        iVar10 = *(int *)plVar29[3];
      }
      plVar11 = (long *)0x0;
      if (iVar10 != -1) {
        plVar11 = plVar29;
      }
      if (bVar5 == (iVar10 == -1)) goto LAB_04010ddc;
    }
    plVar29 = (long *)*param_1;
    if ((wchar_t *)plVar29[3] == (wchar_t *)plVar29[4]) {
      wVar9 = (**(code **)(*plVar29 + 0x48))();
    }
    else {
      wVar9 = *(wchar_t *)plVar29[3];
    }
    if (wVar9 == local_200) {
      plVar12 = (long *)*param_1;
      plVar29 = plVar11;
      if (plVar12[3] == plVar12[4]) {
        (**(code **)(*plVar12 + 0x50))();
      }
      else {
        plVar12[3] = plVar12[3] + 4;
      }
joined_r0x0401090c:
      if (0 < local_284) {
        do {
          plVar11 = (long *)*param_1;
          if (plVar11 == (long *)0x0) {
LAB_04010974:
            bVar7 = true;
            bVar5 = true;
            if (plVar29 == (long *)0x0) goto LAB_04010964;
LAB_0401097c:
            if ((int *)plVar29[3] == (int *)plVar29[4]) {
              iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
            }
            else {
              iVar10 = *(int *)plVar29[3];
            }
            if (iVar10 == -1) {
              plVar29 = (long *)0x0;
            }
            if (bVar7 == (iVar10 == -1)) goto LAB_04010ddc;
          }
          else {
            if ((int *)plVar11[3] == (int *)plVar11[4]) {
              iVar10 = (**(code **)(*plVar11 + 0x48))();
            }
            else {
              iVar10 = *(int *)plVar11[3];
            }
            if (iVar10 == -1) {
              *param_1 = 0;
              goto LAB_04010974;
            }
            bVar7 = *param_1 == 0;
            bVar5 = bVar7;
            if (plVar29 != (long *)0x0) goto LAB_0401097c;
LAB_04010964:
            if (bVar5) goto LAB_04010ddc;
            plVar29 = (long *)0x0;
          }
          plVar11 = (long *)*param_1;
          if ((undefined4 *)plVar11[3] == (undefined4 *)plVar11[4]) {
            uVar8 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            uVar8 = *(undefined4 *)plVar11[3];
          }
          uVar13 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar8);
          if ((uVar13 & 1) == 0) goto LAB_04010ddc;
          pwVar16 = (wchar_t *)*param_10;
          if (pwVar16 == local_298) {
            uVar13 = (long)local_298 - *param_9;
            if (uVar13 == 0) {
              uVar34 = 4;
            }
            else {
              uVar34 = uVar13 * 2;
              if (0x7ffffffffffffffe < uVar13) {
                uVar34 = 0xffffffffffffffff;
              }
            }
            if ((code *)param_9[1] == __do_nothing) {
              pvVar14 = malloc(uVar34);
            }
            else {
              pvVar14 = realloc((void *)*param_9,uVar34);
            }
            if (pvVar14 == (void *)0x0) goto LAB_04010ea0;
            pwVar16 = (wchar_t *)((long)pvVar14 + uVar13);
            *param_9 = (long)pvVar14;
            param_9[1] = (long)free;
            *param_10 = (long)pwVar16;
            local_298 = (wchar_t *)(*param_9 + (uVar34 & 0xfffffffffffffffc));
            plVar11 = (long *)*param_1;
            pwVar21 = (wchar_t *)plVar11[3];
            if (pwVar21 == (wchar_t *)plVar11[4]) goto LAB_04010ad4;
LAB_04010a1c:
            wVar9 = *pwVar21;
          }
          else {
            plVar11 = (long *)*param_1;
            pwVar21 = (wchar_t *)plVar11[3];
            if (pwVar21 != (wchar_t *)plVar11[4]) goto LAB_04010a1c;
LAB_04010ad4:
            wVar9 = (**(code **)(*plVar11 + 0x48))();
            pwVar16 = (wchar_t *)*param_10;
          }
          *pwVar16 = wVar9;
          *param_10 = (long)(pwVar16 + 1);
          plVar11 = (long *)*param_1;
          local_284 = local_284 + -1;
          if (plVar11[3] != plVar11[4]) goto LAB_04010914;
          (**(code **)(*plVar11 + 0x50))();
          if (local_284 < 1) break;
        } while( true );
      }
      goto LAB_0400fd50;
    }
    goto LAB_04010ddc;
  }
LAB_0400fd50:
  if (*param_10 == *param_9) goto LAB_04010ddc;
  goto LAB_0400fd64;
LAB_04010914:
  plVar11[3] = plVar11[3] + 4;
  goto joined_r0x0401090c;
LAB_04010b24:
  if (local_2c0 != (ulong *)0x0) {
    uVar28 = (ulong)(byte)((byte)*local_2c0 >> 1);
    if (((byte)*local_2c0 & 1) != 0) {
      uVar28 = local_2c0[1];
    }
    if (1 < uVar28) {
      uVar28 = 2;
      uVar13 = 1;
      do {
        uVar34 = uVar28;
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_04010bd0:
          bVar7 = true;
          bVar5 = true;
          if (plVar29 == (long *)0x0) goto LAB_04010bc0;
LAB_04010bd8:
          if ((int *)plVar29[3] == (int *)plVar29[4]) {
            iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
          }
          else {
            iVar10 = *(int *)plVar29[3];
          }
          if (iVar10 == -1) {
            plVar29 = (long *)0x0;
          }
          if (bVar7 == (iVar10 == -1)) goto LAB_04010ddc;
        }
        else {
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar10 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            iVar10 = *(int *)plVar11[3];
          }
          if (iVar10 == -1) {
            *param_1 = 0;
            goto LAB_04010bd0;
          }
          bVar7 = *param_1 == 0;
          bVar5 = bVar7;
          if (plVar29 != (long *)0x0) goto LAB_04010bd8;
LAB_04010bc0:
          if (bVar5) goto LAB_04010ddc;
          plVar29 = (long *)0x0;
        }
        plVar11 = (long *)*param_1;
        if ((int *)plVar11[3] == (int *)plVar11[4]) {
          iVar10 = (**(code **)(*plVar11 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar11[3];
        }
        if ((*local_2c0 & 1) == 0) {
          iVar2 = *(int *)((long)local_2c0 + uVar13 * 4 + 4);
        }
        else {
          iVar2 = *(int *)(local_2c0[2] + uVar13 * 4);
        }
        if (iVar10 != iVar2) goto LAB_04010ddc;
        plVar11 = (long *)*param_1;
        if (plVar11[3] == plVar11[4]) {
          (**(code **)(*plVar11 + 0x50))();
        }
        else {
          plVar11[3] = plVar11[3] + 4;
        }
        uVar18 = (ulong)(byte)((byte)*local_2c0 >> 1);
        if (((byte)*local_2c0 & 1) != 0) {
          uVar18 = local_2c0[1];
        }
        uVar28 = (ulong)((int)uVar34 + 1);
        uVar13 = uVar34;
      } while (uVar34 < uVar18);
    }
  }
  if (__ptr == puVar32) {
    uVar8 = 1;
    __ptr = puVar32;
  }
  else {
    uVar8 = 1;
    uVar28 = (ulong)((byte)local_220._0_1_ >> 1);
    if ((local_220 & 1) != 0) {
      uVar28 = local_218;
    }
    if ((4 < (long)puVar32 - (long)__ptr) && (uVar28 != 0)) {
      puVar32 = puVar32 + -1;
      puVar24 = puVar32;
      puVar26 = __ptr;
      if (__ptr < puVar32) {
        do {
          puVar22 = puVar26 + 1;
          uVar27 = *puVar26;
          *puVar26 = *puVar24;
          puVar25 = puVar24 + -1;
          *puVar24 = uVar27;
          puVar24 = puVar25;
          puVar26 = puVar22;
        } while (puVar22 < puVar25);
        pbVar1 = (byte *)((ulong)&local_220 | 1);
        if ((local_220 & 1) != 0) {
          pbVar1 = local_210;
        }
        pbVar23 = pbVar1;
        if (__ptr < puVar32) {
          puVar26 = __ptr;
          uVar28 = (ulong)((byte)local_220._0_1_ >> 1);
          if ((local_220 & 1) != 0) {
            uVar28 = local_218;
          }
          do {
            bVar30 = *pbVar23;
            if (((bVar30 != 0) && (bVar30 != 0xff)) && (*puVar26 != (uint)bVar30))
            goto LAB_04010ddc;
            puVar26 = puVar26 + 1;
            if (1 < (long)(pbVar1 + (uVar28 - (long)pbVar23))) {
              pbVar23 = pbVar23 + 1;
            }
          } while (puVar26 < puVar32);
        }
      }
      else {
        pbVar23 = (byte *)((ulong)&local_220 | 1);
        if ((local_220 & 1) != 0) {
          pbVar23 = local_210;
        }
      }
      bVar30 = *pbVar23;
      uVar8 = 1;
      if (((bVar30 != 0) && (bVar30 != 0xff)) && ((uint)bVar30 <= *puVar32 - 1)) {
LAB_04010ddc:
        uVar8 = 0;
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
    return uVar8;
  }
  (*pcVar31)(__ptr);
  return uVar8;
}

