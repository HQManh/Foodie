// rea decompile_all
// name: std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
// address: 0x4008734
// body: available
// range: 0x4008734-0x4008d5b inclusive
// range: 0x4008d70-0x4008d87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4008d84 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*,
   wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  wchar_t wVar5;
  int iVar6;
  wchar_t wVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  byte *pbVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  undefined1 **local_88;
  ulong local_80;
  void *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  lVar19 = *(long *)param_7;
  local_70 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)ctype<wchar_t>::id,&local_68,FUN_0402d4a0);
  }
  lVar24 = *(long *)(lVar19 + 0x10);
  if (((ulong)(*(long *)(lVar19 + 0x18) - lVar24 >> 3) <= (long)(int)ctype<wchar_t>::id._8_4_ - 1U)
     || (plVar25 = *(long **)(lVar24 + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8),
        plVar25 == (long *)0x0)) {
LAB_04008d40:
    uVar8 = FUN_03ff9c28();
    __cxa_guard_abort(0x974a4b8);
    if (((ulong)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar8);
  }
  lVar19 = *(long *)param_7;
  local_70 = numpunct<wchar_t>::id;
  if (numpunct<wchar_t>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)numpunct<wchar_t>::id,&local_68,FUN_0402d4a0);
  }
  lVar24 = *(long *)(lVar19 + 0x10);
  if (((ulong)(*(long *)(lVar19 + 0x18) - lVar24 >> 3) <=
       (long)(int)numpunct<wchar_t>::id._8_4_ - 1U) ||
     (plVar18 = *(long **)(lVar24 + ((long)(int)numpunct<wchar_t>::id._8_4_ - 1U) * 8),
     plVar18 == (long *)0x0)) goto LAB_04008d40;
  (**(code **)(*plVar18 + 0x28))(&local_88,plVar18);
  *param_6 = param_4;
  if ((*param_1 == '-') || (pbVar20 = (byte *)param_1, *param_1 == '+')) {
    wVar5 = (**(code **)(*plVar25 + 0x58))(plVar25);
    pwVar9 = *param_6;
    pbVar20 = (byte *)(param_1 + 1);
    *pwVar9 = wVar5;
    *param_6 = pwVar9 + 1;
  }
  lVar24 = (long)param_3 - (long)pbVar20;
  lVar19 = lVar24 + -2;
  if (((lVar24 < 2) || (*pbVar20 != 0x30)) || ((pbVar20[1] | 0x20) != 0x78)) {
    pbVar21 = pbVar20;
    if (pbVar20 < param_3) {
      lVar19 = 0;
      do {
        bVar3 = pbVar20[lVar19];
        if (((bRam000000000974a4b8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(0x974a4b8), iVar6 != 0)) {
          p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(0x974a4b8);
        }
        lVar4 = lVar19;
      } while ((0xfffffff5 < bVar3 - 0x3a) &&
              (lVar19 = lVar19 + 1, lVar4 = lVar24, lVar24 != lVar19));
      pbVar26 = pbVar20 + lVar4;
      goto LAB_04008a4c;
    }
    pbVar26 = pbVar20;
    uVar12 = (ulong)local_88 >> 1 & 0x7f;
    if (((ulong)local_88 & 1) != 0) {
      uVar12 = local_80;
    }
  }
  else {
    wVar5 = (**(code **)(*plVar25 + 0x58))(plVar25,0x30);
    pwVar9 = *param_6;
    *pwVar9 = wVar5;
    *param_6 = pwVar9 + 1;
    wVar5 = (**(code **)(*plVar25 + 0x58))(plVar25,pbVar20[1]);
    pwVar9 = *param_6;
    pbVar21 = pbVar20 + 2;
    *pwVar9 = wVar5;
    *param_6 = pwVar9 + 1;
    if (pbVar21 < param_3) {
      pbVar10 = pbVar21;
      do {
        bVar3 = *pbVar10;
        if (((bRam000000000974a4b8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(0x974a4b8), iVar6 != 0)) {
          p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(0x974a4b8);
        }
        if ((bVar3 - 0x3a < 0xfffffff6) &&
           (pbVar26 = pbVar10, (bVar3 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
        lVar19 = lVar19 + -1;
        pbVar10 = pbVar10 + 1;
        pbVar26 = pbVar20 + lVar24;
      } while (lVar19 != 0);
LAB_04008a4c:
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
    }
    else {
      pbVar26 = pbVar21;
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
    }
  }
  if (uVar12 == 0) {
    (**(code **)(*plVar25 + 0x60))(plVar25,pbVar21,pbVar26,*param_6);
    pwVar9 = *param_6 + ((long)pbVar26 - (long)pbVar21);
    *param_6 = pwVar9;
  }
  else {
    if ((pbVar21 != pbVar26) && (pbVar10 = pbVar26 + -1, pbVar20 = pbVar21, pbVar21 < pbVar10)) {
      do {
        pbVar15 = pbVar20 + 1;
        bVar3 = *pbVar20;
        *pbVar20 = *pbVar10;
        pbVar11 = pbVar10 + -1;
        *pbVar10 = bVar3;
        pbVar10 = pbVar11;
        pbVar20 = pbVar15;
      } while (pbVar15 < pbVar11);
    }
    wVar5 = (**(code **)(*plVar18 + 0x20))(plVar18);
    if (pbVar21 < pbVar26) {
      uVar22 = 0;
      uVar23 = 0;
      lVar19 = (long)pbVar26 - (long)pbVar21;
      pbVar20 = pbVar21;
      do {
        uVar12 = (ulong)uVar22;
        pvVar1 = (void *)((ulong)&local_88 | 1);
        if (((ulong)local_88 & 1) != 0) {
          pvVar1 = local_78;
        }
        if (*(char *)((long)pvVar1 + uVar12) != '\0') {
          pvVar1 = (void *)((ulong)&local_88 | 1);
          if (((ulong)local_88 & 1) != 0) {
            pvVar1 = local_78;
          }
          if (uVar23 == *(byte *)((long)pvVar1 + uVar12)) {
            pwVar9 = *param_6;
            uVar23 = 0;
            *pwVar9 = wVar5;
            *param_6 = pwVar9 + 1;
            uVar2 = (ulong)local_88 >> 1 & 0x7f;
            if (((ulong)local_88 & 1) != 0) {
              uVar2 = local_80;
            }
            if (uVar12 < uVar2 - 1) {
              uVar22 = uVar22 + 1;
            }
          }
        }
        wVar7 = (**(code **)(*plVar25 + 0x58))(plVar25,*pbVar20);
        pwVar9 = *param_6;
        lVar19 = lVar19 + -1;
        uVar23 = uVar23 + 1;
        pbVar20 = pbVar20 + 1;
        *pwVar9 = wVar7;
        *param_6 = pwVar9 + 1;
      } while (lVar19 != 0);
      pwVar9 = pwVar9 + 1;
      pwVar16 = param_4 + ((long)pbVar21 - (long)param_1);
      if (pwVar16 == pwVar9) goto joined_r0x04008c48;
    }
    else {
      pwVar9 = *param_6;
      pwVar16 = param_4 + ((long)pbVar21 - (long)param_1);
      if (pwVar16 == pwVar9) goto joined_r0x04008c48;
    }
    if (pwVar16 < pwVar9 + -1) {
      pwVar13 = pwVar9 + -1;
      pwVar16 = param_4 + ((long)pbVar21 - (long)param_1);
      do {
        pwVar17 = pwVar16 + 1;
        wVar5 = *pwVar16;
        *pwVar16 = *pwVar13;
        pwVar14 = pwVar13 + -1;
        *pwVar13 = wVar5;
        pwVar13 = pwVar14;
        pwVar16 = pwVar17;
      } while (pwVar17 < pwVar14);
    }
  }
joined_r0x04008c48:
  if (pbVar26 < param_3) {
    lVar19 = (long)param_3 - (long)pbVar26;
    pbVar20 = pbVar26;
    do {
      pbVar26 = pbVar20 + 1;
      if (*pbVar20 == 0x2e) {
        wVar5 = (**(code **)(*plVar18 + 0x18))(plVar18);
        pwVar9 = *param_6 + 1;
        **param_6 = wVar5;
        *param_6 = pwVar9;
        goto LAB_04008cb8;
      }
      wVar5 = (**(code **)(*plVar25 + 0x58))(plVar25);
      pwVar9 = *param_6;
      lVar19 = lVar19 + -1;
      *pwVar9 = wVar5;
      *param_6 = pwVar9 + 1;
      pbVar20 = pbVar26;
    } while (lVar19 != 0);
    pwVar9 = pwVar9 + 1;
    pbVar26 = (byte *)param_3;
  }
LAB_04008cb8:
  (**(code **)(*plVar25 + 0x60))(plVar25,pbVar26,param_3,pwVar9);
  pwVar9 = *param_6;
  *param_6 = pwVar9 + ((long)param_3 - (long)pbVar26);
  pwVar9 = pwVar9 + ((long)param_3 - (long)pbVar26);
  if (param_2 != param_3) {
    pwVar9 = param_4 + ((long)param_2 - (long)param_1);
  }
  *param_5 = pwVar9;
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  return;
}

