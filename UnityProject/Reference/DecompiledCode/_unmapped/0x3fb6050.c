// rea decompile_all
// name: FUN_03fb6050
// address: 0x3fb6050
// body: available
// range: 0x3fb6050-0x3fb641f inclusive
// range: 0x3fb6450-0x3fb6453 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb6450 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb6050(long *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined1 *local_160;
  undefined2 local_158;
  char *local_150;
  char *pcStack_148;
  undefined1 auStack_140 [140];
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar8 = (char *)param_1[2];
  pcVar4 = (char *)param_1[3];
  pcVar9 = pcVar8;
  if (pcVar8 < pcVar4) {
    lVar7 = (long)pcVar4 - (long)pcVar8;
    do {
      if ((*pcVar8 != ' ') && (pcVar9 = pcVar8, *pcVar8 != '\t')) break;
      pcVar8 = pcVar8 + 1;
      lVar7 = lVar7 + -1;
      param_1[2] = (long)pcVar8;
      pcVar9 = pcVar4;
    } while (lVar7 != 0);
  }
  if ((pcVar9 < pcVar4) && (*pcVar9 == '[')) {
    pcVar8 = pcVar9 + 1;
    lVar7 = 1;
    if (*pcVar8 == '\t' || *pcVar8 == ' ') {
      lVar7 = 2;
    }
    pcVar9 = pcVar9 + lVar7;
    if ((pcVar4 <= pcVar9) || (((*pcVar9 != ']' && (*pcVar9 != ',')) && (*pcVar9 != '*')))) {
      param_1[2] = (long)pcVar8;
      pcVar9 = pcVar8;
      if (pcVar8 < pcVar4) {
        lVar7 = (long)pcVar4 - (long)pcVar8;
        do {
          if ((*pcVar8 != ' ') && (pcVar9 = pcVar8, *pcVar8 != '\t')) break;
          pcVar8 = pcVar8 + 1;
          lVar7 = lVar7 + -1;
          param_1[2] = (long)pcVar8;
          pcVar9 = pcVar4;
        } while (lVar7 != 0);
      }
      if (pcVar9 < pcVar4) {
        FUN_03fb6c40(*param_1 + 0xb8,(long)*param_2);
LAB_03fb619c:
        pcVar8 = (char *)param_1[2];
        pcVar9 = (char *)param_1[3];
        if ((pcVar8 < pcVar9) && (*pcVar8 == '[')) {
          pcVar4 = pcVar8 + 1;
          param_1[2] = (long)pcVar4;
          pcVar5 = pcVar4;
          pcVar8 = pcVar4;
          if (pcVar4 < pcVar9) {
            do {
              if ((*pcVar4 != ' ') && (pcVar5 = pcVar4, *pcVar4 != '\t')) break;
              pcVar8 = pcVar8 + 1;
              pcVar4 = pcVar4 + 1;
              param_1[2] = (long)pcVar4;
              pcVar5 = pcVar9;
            } while (pcVar9 != pcVar8);
          }
          if (pcVar9 <= pcVar5) goto LAB_03fb6418;
          iVar10 = 1;
        }
        else {
          iVar10 = 0;
        }
        memset(auStack_140,0,0x89);
        local_158 = 0x101;
        uStack_ac = 0;
        local_b4 = 0;
        uStack_9c = 0;
        local_a4 = 0;
        uStack_8c = 0;
        local_94 = 0;
        uStack_7c = 0;
        local_84 = 0;
        uStack_6c = 0;
        local_74 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        local_160 = auStack_140;
        local_150 = pcVar8;
        pcStack_148 = pcVar9;
        uVar3 = FUN_03fb5cf4(&local_160,iVar10);
        if ((uVar3 & 1) == 0) goto LAB_03fb6410;
        lVar7 = *param_1;
        param_1[2] = (long)local_150;
        uVar3 = *(ulong *)(lVar7 + 0xc0);
        if (uVar3 < *(ulong *)(lVar7 + 200)) {
          FUN_03fba44c(uVar3,auStack_140);
          lVar6 = uVar3 + 0xe8;
          *(long *)(lVar7 + 0xc0) = lVar6;
        }
        else {
          lVar6 = FUN_03fbaae0(lVar7 + 0xb8,auStack_140);
        }
        pcVar8 = (char *)param_1[2];
        pcVar4 = (char *)param_1[3];
        *(long *)(lVar7 + 0xc0) = lVar6;
        pcVar9 = pcVar8;
        if (pcVar8 < pcVar4) {
          lVar7 = (long)pcVar4 - (long)pcVar8;
          do {
            if ((*pcVar8 != ' ') && (pcVar9 = pcVar8, *pcVar8 != '\t')) break;
            pcVar8 = pcVar8 + 1;
            lVar7 = lVar7 + -1;
            param_1[2] = (long)pcVar8;
            pcVar9 = pcVar4;
          } while (lVar7 != 0);
        }
        if (pcVar4 <= pcVar9) goto LAB_03fb6410;
        if (iVar10 != 0) {
          if (*pcVar9 != ']') goto LAB_03fb6410;
          pcVar8 = pcVar9 + 1;
          param_1[2] = (long)pcVar8;
          pcVar9 = pcVar8;
          if (pcVar8 < pcVar4) {
            lVar7 = (long)pcVar4 - (long)pcVar8;
            do {
              if ((*pcVar8 != ' ') && (pcVar9 = pcVar8, *pcVar8 != '\t')) break;
              pcVar8 = pcVar8 + 1;
              lVar7 = lVar7 + -1;
              param_1[2] = (long)pcVar8;
              pcVar9 = pcVar4;
            } while (lVar7 != 0);
          }
          if (pcVar4 <= pcVar9) goto LAB_03fb6410;
        }
        if (pcVar4 <= pcVar9) goto LAB_03fb6410;
        if (*pcVar9 == ',') {
          pcVar9 = pcVar9 + 1;
          param_1[2] = (long)pcVar9;
          pcVar8 = pcVar9;
          if (pcVar9 < pcVar4) {
            lVar7 = (long)pcVar4 - (long)pcVar9;
            do {
              if ((*pcVar9 != ' ') && (pcVar8 = pcVar9, *pcVar9 != '\t')) break;
              pcVar9 = pcVar9 + 1;
              lVar7 = lVar7 + -1;
              param_1[2] = (long)pcVar9;
              pcVar8 = pcVar4;
            } while (lVar7 != 0);
          }
          if (pcVar4 <= pcVar8) goto LAB_03fb6410;
          FUN_03fb72c4(auStack_140);
          goto LAB_03fb619c;
        }
        if (*pcVar9 == ']') {
          FUN_03fb72c4(auStack_140);
          if ((*(long *)(*param_1 + 0xc0) - *(long *)(*param_1 + 0xb8) >> 3) * 0x34f72c234f72c235 -
              (long)*param_2 != 0) goto LAB_03fb6418;
          lVar7 = param_1[2];
          uVar3 = lVar7 + 1;
          param_1[2] = uVar3;
          if ((ulong)param_1[3] <= uVar3) goto LAB_03fb6114;
          lVar6 = param_1[3] - uVar3;
          lVar7 = lVar7 + 2;
          uVar2 = 1;
          goto LAB_03fb63e8;
        }
LAB_03fb6410:
        FUN_03fb72c4(auStack_140);
      }
LAB_03fb6418:
      uVar2 = 0;
      goto LAB_03fb6118;
    }
  }
LAB_03fb6114:
  uVar2 = 1;
  goto LAB_03fb6118;
  while( true ) {
    lVar6 = lVar6 + -1;
    param_1[2] = lVar7;
    lVar7 = lVar7 + 1;
    if (lVar6 == 0) break;
LAB_03fb63e8:
    if ((*(char *)(lVar7 + -1) != ' ') && (*(char *)(lVar7 + -1) != '\t')) goto LAB_03fb6114;
  }
LAB_03fb6118:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

