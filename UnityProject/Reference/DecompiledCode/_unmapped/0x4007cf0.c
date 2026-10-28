// rea decompile_all
// name: std::__ndk1::__num_put<char>::__widen_and_group_float
// address: 0x4007cf0
// body: available
// range: 0x4007cf0-0x40082f7 inclusive
// range: 0x400830c-0x4008323 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4008320 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put<char>::__widen_and_group_float(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  undefined1 **local_88;
  ulong local_80;
  void *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  lVar17 = *(long *)param_7;
  local_70 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)ctype<char>::id,&local_68,FUN_0402d4a0);
  }
  lVar22 = *(long *)(lVar17 + 0x10);
  if (((ulong)(*(long *)(lVar17 + 0x18) - lVar22 >> 3) <= (long)(int)ctype<char>::id._8_4_ - 1U) ||
     (plVar23 = *(long **)(lVar22 + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     plVar23 == (long *)0x0)) {
LAB_040082dc:
    uVar8 = FUN_03ff9c28();
    __cxa_guard_abort(0x974a4b8);
    if (((ulong)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar8);
  }
  lVar17 = *(long *)param_7;
  local_70 = numpunct<char>::id;
  if (numpunct<char>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)numpunct<char>::id,&local_68,FUN_0402d4a0);
  }
  lVar22 = *(long *)(lVar17 + 0x10);
  if (((ulong)(*(long *)(lVar17 + 0x18) - lVar22 >> 3) <= (long)(int)numpunct<char>::id._8_4_ - 1U)
     || (plVar16 = *(long **)(lVar22 + ((long)(int)numpunct<char>::id._8_4_ - 1U) * 8),
        plVar16 == (long *)0x0)) goto LAB_040082dc;
  (**(code **)(*plVar16 + 0x28))(&local_88,plVar16);
  *param_6 = param_4;
  if ((*param_1 == '-') || (pbVar18 = (byte *)param_1, *param_1 == '+')) {
    cVar5 = (**(code **)(*plVar23 + 0x38))(plVar23);
    pcVar9 = *param_6;
    pbVar18 = (byte *)(param_1 + 1);
    *param_6 = pcVar9 + 1;
    *pcVar9 = cVar5;
  }
  lVar22 = (long)param_3 - (long)pbVar18;
  lVar17 = lVar22 + -2;
  if (((lVar22 < 2) || (*pbVar18 != 0x30)) || ((pbVar18[1] | 0x20) != 0x78)) {
    pbVar19 = pbVar18;
    if (param_3 <= pbVar18) {
      pbVar24 = pbVar18;
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
      goto joined_r0x04007ff8;
    }
    lVar17 = 0;
    do {
      bVar3 = pbVar18[lVar17];
      if (((bRam000000000974a4b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0))
      {
        p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(0x974a4b8);
      }
      if (bVar3 - 0x3a < 0xfffffff6) {
        pbVar24 = pbVar18 + lVar17;
        break;
      }
      lVar17 = lVar17 + 1;
      pbVar24 = pbVar18 + lVar22;
    } while (lVar22 != lVar17);
  }
  else {
    cVar5 = (**(code **)(*plVar23 + 0x38))(plVar23,0x30);
    pcVar9 = *param_6;
    *param_6 = pcVar9 + 1;
    *pcVar9 = cVar5;
    cVar5 = (**(code **)(*plVar23 + 0x38))(plVar23,pbVar18[1]);
    pcVar9 = *param_6;
    pbVar19 = pbVar18 + 2;
    *param_6 = pcVar9 + 1;
    *pcVar9 = cVar5;
    if (param_3 <= pbVar19) {
      pbVar24 = pbVar19;
      uVar12 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar12 = local_80;
      }
      goto joined_r0x04007ff8;
    }
    pbVar10 = pbVar19;
    do {
      bVar3 = *pbVar10;
      if (((bRam000000000974a4b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(0x974a4b8), iVar7 != 0))
      {
        p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(0x974a4b8);
      }
      if ((bVar3 - 0x3a < 0xfffffff6) &&
         (pbVar24 = pbVar10, (bVar3 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
      lVar17 = lVar17 + -1;
      pbVar10 = pbVar10 + 1;
      pbVar24 = pbVar18 + lVar22;
    } while (lVar17 != 0);
  }
  uVar12 = (ulong)local_88 >> 1 & 0x7f;
  if (((ulong)local_88 & 1) != 0) {
    uVar12 = local_80;
  }
joined_r0x04007ff8:
  if (uVar12 == 0) {
    (**(code **)(*plVar23 + 0x40))(plVar23,pbVar19,pbVar24,*param_6);
    *param_6 = *param_6 + ((long)pbVar24 - (long)pbVar19);
  }
  else {
    if ((pbVar19 != pbVar24) && (pbVar10 = pbVar24 + -1, pbVar18 = pbVar19, pbVar19 < pbVar10)) {
      do {
        pbVar14 = pbVar18 + 1;
        bVar3 = *pbVar18;
        *pbVar18 = *pbVar10;
        pbVar11 = pbVar10 + -1;
        *pbVar10 = bVar3;
        pbVar10 = pbVar11;
        pbVar18 = pbVar14;
      } while (pbVar14 < pbVar11);
    }
    cVar5 = (**(code **)(*plVar16 + 0x20))(plVar16);
    if (pbVar19 < pbVar24) {
      uVar20 = 0;
      uVar21 = 0;
      lVar17 = (long)pbVar24 - (long)pbVar19;
      pbVar18 = pbVar19;
      do {
        uVar12 = (ulong)uVar20;
        pvVar1 = (void *)((ulong)&local_88 | 1);
        if (((ulong)local_88 & 1) != 0) {
          pvVar1 = local_78;
        }
        if (*(char *)((long)pvVar1 + uVar12) != '\0') {
          pvVar1 = (void *)((ulong)&local_88 | 1);
          if (((ulong)local_88 & 1) != 0) {
            pvVar1 = local_78;
          }
          if (uVar21 == *(byte *)((long)pvVar1 + uVar12)) {
            pcVar9 = *param_6;
            uVar21 = 0;
            *param_6 = pcVar9 + 1;
            *pcVar9 = cVar5;
            uVar2 = (ulong)local_88 >> 1 & 0x7f;
            if (((ulong)local_88 & 1) != 0) {
              uVar2 = local_80;
            }
            if (uVar12 < uVar2 - 1) {
              uVar20 = uVar20 + 1;
            }
          }
        }
        cVar6 = (**(code **)(*plVar23 + 0x38))(plVar23,*pbVar18);
        pcVar9 = *param_6;
        lVar17 = lVar17 + -1;
        uVar21 = uVar21 + 1;
        pbVar18 = pbVar18 + 1;
        *param_6 = pcVar9 + 1;
        *pcVar9 = cVar6;
      } while (lVar17 != 0);
    }
    if ((param_4 + ((long)pbVar19 - (long)param_1) != *param_6) &&
       (pcVar9 = *param_6 + -1, param_4 + ((long)pbVar19 - (long)param_1) < pcVar9)) {
      pcVar4 = param_4 + ((long)pbVar19 - (long)param_1);
      do {
        pcVar15 = pcVar4 + 1;
        cVar5 = *pcVar4;
        *pcVar4 = *pcVar9;
        pcVar13 = pcVar9 + -1;
        *pcVar9 = cVar5;
        pcVar9 = pcVar13;
        pcVar4 = pcVar15;
      } while (pcVar15 < pcVar13);
    }
  }
  if (pbVar24 < param_3) {
    lVar17 = (long)param_3 - (long)pbVar24;
    pbVar18 = pbVar24;
    do {
      if (*pbVar18 == 0x2e) {
        cVar5 = (**(code **)(*plVar16 + 0x18))(plVar16);
        pcVar9 = *param_6;
        *param_6 = pcVar9 + 1;
        *pcVar9 = cVar5;
        pbVar24 = pbVar18 + 1;
        break;
      }
      cVar5 = (**(code **)(*plVar23 + 0x38))(plVar23);
      pcVar9 = *param_6;
      lVar17 = lVar17 + -1;
      *param_6 = pcVar9 + 1;
      *pcVar9 = cVar5;
      pbVar24 = (byte *)param_3;
      pbVar18 = pbVar18 + 1;
    } while (lVar17 != 0);
  }
  (**(code **)(*plVar23 + 0x40))(plVar23,pbVar24,param_3,*param_6);
  pcVar9 = *param_6;
  *param_6 = pcVar9 + ((long)param_3 - (long)pbVar24);
  pcVar9 = pcVar9 + ((long)param_3 - (long)pbVar24);
  if (param_2 != param_3) {
    pcVar9 = param_4 + ((long)param_2 - (long)param_1);
  }
  *param_5 = pcVar9;
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  return;
}

