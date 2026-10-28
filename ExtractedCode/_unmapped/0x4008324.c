// rea decompile_all
// name: std::__ndk1::__num_put<wchar_t>::__widen_and_group_int
// address: 0x4008324
// body: available
// range: 0x4008324-0x400870f inclusive
// range: 0x4008718-0x4008733 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4008730 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&,
   wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  char *pcVar21;
  char *pcVar22;
  undefined1 **local_88;
  ulong local_80;
  void *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  lVar17 = *(long *)param_7;
  local_70 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)ctype<wchar_t>::id,&local_68,FUN_0402d4a0);
  }
  lVar3 = *(long *)(lVar17 + 0x10);
  if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U < (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
     (plVar19 = *(long **)(lVar3 + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8),
     plVar19 != (long *)0x0)) {
    lVar17 = *(long *)param_7;
    local_70 = numpunct<wchar_t>::id;
    if (numpunct<wchar_t>::id._0_8_ != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      __call_once((ulong *)numpunct<wchar_t>::id,&local_68,FUN_0402d4a0);
    }
    lVar3 = *(long *)(lVar17 + 0x10);
    if (((long)(int)numpunct<wchar_t>::id._8_4_ - 1U <
         (ulong)(*(long *)(lVar17 + 0x18) - lVar3 >> 3)) &&
       (plVar20 = *(long **)(lVar3 + ((long)(int)numpunct<wchar_t>::id._8_4_ - 1U) * 8),
       plVar20 != (long *)0x0)) {
      (**(code **)(*plVar20 + 0x28))(&local_88,plVar20);
      uVar11 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar11 = local_80;
      }
      if (uVar11 == 0) {
        (**(code **)(*plVar19 + 0x60))(plVar19,param_1,param_3,param_4);
        *param_6 = param_4 + ((long)param_3 - (long)param_1);
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar21 = param_1, *param_1 == '+')) {
          wVar5 = (**(code **)(*plVar19 + 0x58))(plVar19);
          pwVar8 = *param_6;
          pcVar21 = param_1 + 1;
          *pwVar8 = wVar5;
          *param_6 = pwVar8 + 1;
        }
        if (((1 < (long)param_3 - (long)pcVar21) && (*pcVar21 == '0')) &&
           ((byte)(pcVar21[1] | 0x20U) == 0x78)) {
          wVar5 = (**(code **)(*plVar19 + 0x58))(plVar19,0x30);
          pwVar8 = *param_6;
          *pwVar8 = wVar5;
          *param_6 = pwVar8 + 1;
          wVar5 = (**(code **)(*plVar19 + 0x58))(plVar19,pcVar21[1]);
          pwVar8 = *param_6;
          pcVar21 = pcVar21 + 2;
          *pwVar8 = wVar5;
          *param_6 = pwVar8 + 1;
        }
        if ((pcVar21 != param_3) && (pcVar9 = param_3 + -1, pcVar22 = pcVar21, pcVar21 < pcVar9)) {
          do {
            pcVar14 = pcVar22 + 1;
            cVar4 = *pcVar22;
            *pcVar22 = *pcVar9;
            pcVar10 = pcVar9 + -1;
            *pcVar9 = cVar4;
            pcVar9 = pcVar10;
            pcVar22 = pcVar14;
          } while (pcVar14 < pcVar10);
        }
        wVar5 = (**(code **)(*plVar20 + 0x20))(plVar20);
        if (pcVar21 < param_3) {
          uVar16 = 0;
          uVar18 = 0;
          lVar17 = (long)param_3 - (long)pcVar21;
          pcVar22 = pcVar21;
          do {
            uVar11 = (ulong)uVar16;
            pvVar1 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar1 = local_78;
            }
            if (*(char *)((long)pvVar1 + uVar11) != '\0') {
              pvVar1 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar1 = local_78;
              }
              if (uVar18 == *(byte *)((long)pvVar1 + uVar11)) {
                pwVar8 = *param_6;
                uVar18 = 0;
                *pwVar8 = wVar5;
                *param_6 = pwVar8 + 1;
                uVar2 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar2 = local_80;
                }
                if (uVar11 < uVar2 - 1) {
                  uVar16 = uVar16 + 1;
                }
              }
            }
            wVar6 = (**(code **)(*plVar19 + 0x58))(plVar19,*pcVar22);
            pwVar8 = *param_6;
            lVar17 = lVar17 + -1;
            uVar18 = uVar18 + 1;
            pcVar22 = pcVar22 + 1;
            *pwVar8 = wVar6;
            *param_6 = pwVar8 + 1;
          } while (lVar17 != 0);
          pwVar8 = pwVar8 + 1;
          pwVar12 = param_4 + ((long)pcVar21 - (long)param_1);
          if (pwVar12 == pwVar8) goto LAB_040086bc;
        }
        else {
          pwVar8 = *param_6;
          pwVar12 = param_4 + ((long)pcVar21 - (long)param_1);
          if (pwVar12 == pwVar8) goto LAB_040086bc;
        }
        if (pwVar12 < pwVar8 + -1) {
          pwVar12 = pwVar8 + -1;
          pwVar8 = param_4 + ((long)pcVar21 - (long)param_1);
          do {
            pwVar15 = pwVar8 + 1;
            wVar5 = *pwVar8;
            *pwVar8 = *pwVar12;
            pwVar13 = pwVar12 + -1;
            *pwVar12 = wVar5;
            pwVar12 = pwVar13;
            pwVar8 = pwVar15;
          } while (pwVar15 < pwVar13);
        }
      }
LAB_040086bc:
      pwVar8 = *param_6;
      if (param_2 != param_3) {
        pwVar8 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar8;
      if (((ulong)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      return;
    }
  }
  uVar7 = FUN_03ff9c28();
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

