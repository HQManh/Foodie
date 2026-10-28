// rea decompile_all
// name: FUN_03fb65ac
// address: 0x3fb65ac
// body: available
// range: 0x3fb65ac-0x3fb6933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb6930 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb65ac(long *param_1)

{
  ulong uVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined4 *puVar16;
  long lVar17;
  int *piVar18;
  undefined1 auVar19 [16];
  
LAB_03fb65d4:
  pcVar7 = (char *)param_1[2];
  pcVar5 = (char *)param_1[3];
  pcVar9 = pcVar7;
  if (pcVar7 < pcVar5) {
    lVar6 = (long)pcVar5 - (long)pcVar7;
    do {
      if ((*pcVar7 != ' ') && (pcVar9 = pcVar7, *pcVar7 != '\t')) break;
      pcVar7 = pcVar7 + 1;
      lVar6 = lVar6 + -1;
      param_1[2] = (long)pcVar7;
      pcVar9 = pcVar5;
    } while (lVar6 != 0);
  }
  if ((pcVar9 < pcVar5) && (*pcVar9 == '[')) {
    pcVar7 = pcVar9 + 1;
    lVar6 = 1;
    if (*pcVar7 == '\t' || *pcVar7 == ' ') {
      lVar6 = 2;
    }
    pcVar9 = pcVar9 + lVar6;
    if (pcVar5 <= pcVar9) {
      return 1;
    }
    if (((*pcVar9 == ']') || (*pcVar9 == ',')) || (*pcVar9 == '*')) {
      param_1[2] = (long)pcVar7;
      pcVar9 = pcVar7;
      if (pcVar7 < pcVar5) {
        lVar6 = (long)pcVar5 - (long)pcVar7;
        do {
          if ((*pcVar7 != ' ') && (pcVar9 = pcVar7, *pcVar7 != '\t')) break;
          pcVar7 = pcVar7 + 1;
          lVar6 = lVar6 + -1;
          param_1[2] = (long)pcVar7;
          pcVar9 = pcVar5;
        } while (lVar6 != 0);
      }
      if (pcVar5 <= pcVar9) {
        return 0;
      }
      iVar15 = 1;
      do {
        cVar2 = *pcVar9;
        if (cVar2 == '*') {
          lVar6 = *param_1;
          puVar8 = *(undefined4 **)(lVar6 + 0xa8);
          puVar11 = *(undefined4 **)(lVar6 + 0xb0);
          if (puVar8 < puVar11) {
            puVar16 = puVar8 + 1;
            *puVar8 = 0xfffffffe;
            *(undefined4 **)(lVar6 + 0xa8) = puVar16;
          }
          else {
            puVar3 = *(undefined4 **)(lVar6 + 0xa0);
            lVar17 = (long)puVar8 - (long)puVar3 >> 2;
            uVar1 = lVar17 + 1;
            if (uVar1 >> 0x3e != 0) goto LAB_03fb692c;
            uVar13 = (long)puVar11 - (long)puVar3;
            uVar14 = (long)uVar13 >> 1;
            if (uVar14 <= uVar1) {
              uVar14 = uVar1;
            }
            if (0x7ffffffffffffffb < uVar13) {
              uVar14 = 0x3fffffffffffffff;
            }
            if (uVar14 == 0) {
              auVar19 = ZEXT816(0);
            }
            else {
              auVar19 = FUN_03fb3f8c((undefined8 *)(lVar6 + 0xb0));
              puVar3 = *(undefined4 **)(lVar6 + 0xa0);
              puVar8 = *(undefined4 **)(lVar6 + 0xa8);
            }
            puVar11 = (undefined4 *)(auVar19._0_8_ + lVar17 * 4);
            puVar16 = puVar11 + 1;
            *puVar11 = 0xfffffffe;
            while (puVar8 != puVar3) {
              puVar8 = puVar8 + -1;
              puVar11 = puVar11 + -1;
              *puVar11 = *puVar8;
            }
            *(undefined4 **)(lVar6 + 0xa0) = puVar11;
            *(undefined4 **)(lVar6 + 0xa8) = puVar16;
            *(long *)(lVar6 + 0xb0) = auVar19._0_8_ + auVar19._8_8_ * 4;
            if (puVar3 != (undefined4 *)0x0) {
              operator_delete(puVar3);
            }
          }
          lVar17 = param_1[2];
          pcVar5 = (char *)param_1[3];
          *(undefined4 **)(lVar6 + 0xa8) = puVar16;
          pcVar7 = (char *)(lVar17 + 1);
          param_1[2] = (long)pcVar7;
          pcVar9 = pcVar7;
          if (pcVar7 < pcVar5) {
            lVar6 = (long)pcVar5 - (long)pcVar7;
            do {
              if ((*pcVar7 != ' ') && (pcVar9 = pcVar7, *pcVar7 != '\t')) break;
              pcVar7 = pcVar7 + 1;
              lVar6 = lVar6 + -1;
              param_1[2] = (long)pcVar7;
              pcVar9 = pcVar5;
            } while (lVar6 != 0);
          }
          if (pcVar5 <= pcVar9) {
            return 0;
          }
        }
        else {
          if (cVar2 != ',') goto LAB_03fb6810;
          pcVar7 = pcVar9 + 1;
          param_1[2] = (long)pcVar7;
          pcVar9 = pcVar7;
          if (pcVar7 < pcVar5) {
            lVar6 = (long)pcVar5 - (long)pcVar7;
            do {
              if ((*pcVar7 != ' ') && (pcVar9 = pcVar7, *pcVar7 != '\t')) break;
              pcVar7 = pcVar7 + 1;
              lVar6 = lVar6 + -1;
              param_1[2] = (long)pcVar7;
              pcVar9 = pcVar5;
            } while (lVar6 != 0);
          }
          if (pcVar5 <= pcVar9) {
            return 0;
          }
          iVar15 = iVar15 + 1;
        }
        if (pcVar5 <= pcVar9) {
          return 0;
        }
      } while( true );
    }
  }
  return 1;
LAB_03fb6810:
  if (cVar2 != ']') {
    return 0;
  }
  pcVar7 = pcVar9 + 1;
  param_1[2] = (long)pcVar7;
  if (pcVar7 < pcVar5) {
    lVar6 = (long)pcVar5 - (long)pcVar7;
    pcVar9 = pcVar9 + 2;
    do {
      if ((pcVar9[-1] != ' ') && (pcVar9[-1] != '\t')) break;
      lVar6 = lVar6 + -1;
      param_1[2] = (long)pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (lVar6 != 0);
  }
  lVar6 = *param_1;
  piVar10 = *(int **)(lVar6 + 0xa8);
  piVar12 = *(int **)(lVar6 + 0xb0);
  if (piVar10 < piVar12) {
    piVar18 = piVar10 + 1;
    *piVar10 = iVar15;
    *(int **)(lVar6 + 0xa8) = piVar18;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0xa0);
    lVar17 = (long)piVar10 - (long)piVar4 >> 2;
    uVar1 = lVar17 + 1;
    if (uVar1 >> 0x3e != 0) {
LAB_03fb692c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(lVar6 + 0xa0);
    }
    uVar13 = (long)piVar12 - (long)piVar4;
    uVar14 = (long)uVar13 >> 1;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar13) {
      uVar14 = 0x3fffffffffffffff;
    }
    if (uVar14 == 0) {
      auVar19 = ZEXT816(0);
    }
    else {
      auVar19 = FUN_03fb3f8c((undefined8 *)(lVar6 + 0xb0));
      piVar4 = *(int **)(lVar6 + 0xa0);
      piVar10 = *(int **)(lVar6 + 0xa8);
    }
    piVar12 = (int *)(auVar19._0_8_ + lVar17 * 4);
    piVar18 = piVar12 + 1;
    *piVar12 = iVar15;
    while (piVar10 != piVar4) {
      piVar10 = piVar10 + -1;
      piVar12 = piVar12 + -1;
      *piVar12 = *piVar10;
    }
    *(int **)(lVar6 + 0xa0) = piVar12;
    *(int **)(lVar6 + 0xa8) = piVar18;
    *(long *)(lVar6 + 0xb0) = auVar19._0_8_ + auVar19._8_8_ * 4;
    if (piVar4 != (int *)0x0) {
      operator_delete(piVar4);
    }
  }
  *(int **)(lVar6 + 0xa8) = piVar18;
  goto LAB_03fb65d4;
}

