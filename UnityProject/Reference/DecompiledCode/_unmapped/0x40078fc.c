// rea decompile_all
// name: std::__ndk1::__num_put<char>::__widen_and_group_int
// address: 0x40078fc
// body: available
// range: 0x40078fc-0x4007ccb inclusive
// range: 0x4007cd4-0x4007cef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4007cec to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&,
   std::__ndk1::locale const&) */

void std::__ndk1::__num_put<char>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,char *param_4,char **param_5,
               char **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 **local_88;
  ulong local_80;
  void *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  lVar14 = *(long *)param_7;
  local_70 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_88 = &local_70;
    local_68 = &local_88;
    __call_once((ulong *)ctype<char>::id,&local_68,FUN_0402d4a0);
  }
  lVar3 = *(long *)(lVar14 + 0x10);
  if (((long)(int)ctype<char>::id._8_4_ - 1U < (ulong)(*(long *)(lVar14 + 0x18) - lVar3 >> 3)) &&
     (plVar16 = *(long **)(lVar3 + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     plVar16 != (long *)0x0)) {
    lVar14 = *(long *)param_7;
    local_70 = numpunct<char>::id;
    if (numpunct<char>::id._0_8_ != -1) {
      local_88 = &local_70;
      local_68 = &local_88;
      __call_once((ulong *)numpunct<char>::id,&local_68,FUN_0402d4a0);
    }
    lVar3 = *(long *)(lVar14 + 0x10);
    if (((long)(int)numpunct<char>::id._8_4_ - 1U < (ulong)(*(long *)(lVar14 + 0x18) - lVar3 >> 3))
       && (plVar17 = *(long **)(lVar3 + ((long)(int)numpunct<char>::id._8_4_ - 1U) * 8),
          plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x28))(&local_88,plVar17);
      uVar10 = (ulong)local_88 >> 1 & 0x7f;
      if (((ulong)local_88 & 1) != 0) {
        uVar10 = local_80;
      }
      if (uVar10 == 0) {
        (**(code **)(*plVar16 + 0x40))(plVar16,param_1,param_3,param_4);
        pcVar7 = param_4 + ((long)param_3 - (long)param_1);
        *param_6 = pcVar7;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar11 = param_1, *param_1 == '+')) {
          cVar4 = (**(code **)(*plVar16 + 0x38))(plVar16);
          pcVar7 = *param_6;
          pcVar11 = param_1 + 1;
          *param_6 = pcVar7 + 1;
          *pcVar7 = cVar4;
        }
        if (((1 < (long)param_3 - (long)pcVar11) && (*pcVar11 == '0')) &&
           ((byte)(pcVar11[1] | 0x20U) == 0x78)) {
          cVar4 = (**(code **)(*plVar16 + 0x38))(plVar16,0x30);
          pcVar7 = *param_6;
          *param_6 = pcVar7 + 1;
          *pcVar7 = cVar4;
          cVar4 = (**(code **)(*plVar16 + 0x38))(plVar16,pcVar11[1]);
          pcVar7 = *param_6;
          pcVar11 = pcVar11 + 2;
          *param_6 = pcVar7 + 1;
          *pcVar7 = cVar4;
        }
        if ((pcVar11 != param_3) && (pcVar8 = param_3 + -1, pcVar7 = pcVar11, pcVar11 < pcVar8)) {
          do {
            pcVar12 = pcVar7 + 1;
            cVar4 = *pcVar7;
            *pcVar7 = *pcVar8;
            pcVar9 = pcVar8 + -1;
            *pcVar8 = cVar4;
            pcVar8 = pcVar9;
            pcVar7 = pcVar12;
          } while (pcVar12 < pcVar9);
        }
        cVar4 = (**(code **)(*plVar17 + 0x20))(plVar17);
        if (pcVar11 < param_3) {
          uVar13 = 0;
          uVar15 = 0;
          lVar14 = (long)param_3 - (long)pcVar11;
          pcVar7 = pcVar11;
          do {
            uVar10 = (ulong)uVar13;
            pvVar1 = (void *)((ulong)&local_88 | 1);
            if (((ulong)local_88 & 1) != 0) {
              pvVar1 = local_78;
            }
            if (*(char *)((long)pvVar1 + uVar10) != '\0') {
              pvVar1 = (void *)((ulong)&local_88 | 1);
              if (((ulong)local_88 & 1) != 0) {
                pvVar1 = local_78;
              }
              if (uVar15 == *(byte *)((long)pvVar1 + uVar10)) {
                pcVar8 = *param_6;
                uVar15 = 0;
                *param_6 = pcVar8 + 1;
                *pcVar8 = cVar4;
                uVar2 = (ulong)local_88 >> 1 & 0x7f;
                if (((ulong)local_88 & 1) != 0) {
                  uVar2 = local_80;
                }
                if (uVar10 < uVar2 - 1) {
                  uVar13 = uVar13 + 1;
                }
              }
            }
            cVar5 = (**(code **)(*plVar16 + 0x38))(plVar16,*pcVar7);
            pcVar8 = *param_6;
            lVar14 = lVar14 + -1;
            uVar15 = uVar15 + 1;
            pcVar7 = pcVar7 + 1;
            *param_6 = pcVar8 + 1;
            *pcVar8 = cVar5;
          } while (lVar14 != 0);
        }
        pcVar7 = *param_6;
        if ((param_4 + ((long)pcVar11 - (long)param_1) != pcVar7) &&
           (param_4 + ((long)pcVar11 - (long)param_1) < pcVar7 + -1)) {
          pcVar8 = pcVar7 + -1;
          pcVar7 = param_4 + ((long)pcVar11 - (long)param_1);
          do {
            pcVar9 = pcVar7 + 1;
            cVar4 = *pcVar7;
            *pcVar7 = *pcVar8;
            pcVar11 = pcVar8 + -1;
            *pcVar8 = cVar4;
            pcVar8 = pcVar11;
            pcVar7 = pcVar9;
          } while (pcVar9 < pcVar11);
          pcVar7 = *param_6;
        }
      }
      if (param_2 != param_3) {
        pcVar7 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pcVar7;
      if (((ulong)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      return;
    }
  }
  uVar6 = FUN_03ff9c28();
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar6);
}

