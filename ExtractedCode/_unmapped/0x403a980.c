// rea decompile_all
// name: FUN_0403a980
// address: 0x403a980
// body: available
// range: 0x403a980-0x403ae87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403ae74 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ae78 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ae7c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ae80 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ae84 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403a980(long *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  short *psVar6;
  char *pcVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 uVar11;
  short *psVar12;
  undefined8 *puVar13;
  long *plVar14;
  void *pvVar15;
  undefined8 *puVar16;
  size_t sVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  psVar6 = (short *)*param_1;
  psVar12 = (short *)param_1[1];
  if ((ulong)((long)psVar12 - (long)psVar6) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar6 == 0x5172) {
    lVar10 = param_1[2];
    lVar2 = param_1[3];
    psVar6 = psVar6 + 1;
    plVar1 = param_1 + 5;
    *param_1 = (long)psVar6;
    while ((psVar6 == psVar12 || ((char)*psVar6 != '_'))) {
      lVar4 = FUN_040324c0(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) {
        plVar5 = (long *)param_1[2];
        sVar17 = (long)plVar14 - (long)plVar5;
        if (plVar5 == plVar1) {
          pvVar15 = malloc(sVar17 * 2);
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar14 != plVar1) {
            memcpy(pvVar15,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar15;
        }
        else {
          pvVar15 = realloc(plVar5,sVar17 * 2);
          param_1[2] = (long)pvVar15;
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar14 = (long *)((long)pvVar15 + sVar17);
        param_1[4] = (long)((long)pvVar15 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar14 + 1);
      *plVar14 = lVar4;
      psVar12 = (short *)param_1[1];
      psVar6 = (short *)*param_1;
    }
    *param_1 = (long)((long)psVar6 + 1);
    auVar19 = FUN_04034628(param_1,lVar2 - lVar10 >> 3);
    psVar6 = (short *)*param_1;
    if (psVar6 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*psVar6 != 0x7172) {
      return (undefined8 *)0x0;
    }
    auVar19 = ZEXT816(0);
    psVar6 = psVar6 + 1;
    *param_1 = (long)psVar6;
    if (psVar6 == psVar12) {
      return (undefined8 *)0x0;
    }
  }
  lVar10 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    if ((char)*psVar6 == 'X') {
      *param_1 = (long)((long)psVar6 + 1);
      lVar4 = FUN_0403770c(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar7 = (char *)*param_1;
      pcVar3 = (char *)param_1[1];
      if ((pcVar7 == pcVar3) || (*pcVar7 != 'N')) {
        uVar11 = 0;
        if (pcVar7 != pcVar3) goto LAB_0403ac04;
LAB_0403ab80:
        lVar18 = 0;
LAB_0403ac2c:
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      else {
        pcVar7 = pcVar7 + 1;
        uVar11 = 1;
        *param_1 = (long)pcVar7;
        if (pcVar7 == pcVar3) goto LAB_0403ab80;
LAB_0403ac04:
        if (*pcVar7 == 'R') {
          *param_1 = (long)(pcVar7 + 1);
          lVar18 = FUN_040339f8(param_1,0);
          if (lVar18 == 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_0403ac2c;
        }
        lVar18 = 0;
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar16 = malloc(0x1000);
        if (puVar16 == (undefined8 *)0x0) goto LAB_0403ae78;
        lVar8 = 0;
        *puVar16 = puVar13;
        puVar16[1] = 0;
        param_1[0x266] = (long)puVar16;
        puVar13 = puVar16;
      }
      puVar13[1] = lVar8 + 0x30;
      puVar16 = (undefined8 *)((long)puVar13 + lVar8 + 0x10);
      *puVar16 = &UNK_08faf708;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x18) = 0x54;
      *(long *)((long)puVar13 + lVar8 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x28) = uVar11;
      *(ushort *)((long)puVar13 + lVar8 + 0x19) =
           *(ushort *)((long)puVar13 + lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar13 + lVar8 + 0x30) = lVar18;
      plVar14 = (long *)param_1[3];
      if (plVar14 != (long *)param_1[4]) goto LAB_0403ad6c;
LAB_0403acd8:
      plVar5 = (long *)param_1[2];
      sVar17 = (long)plVar14 - (long)plVar5;
      if (plVar5 == plVar1) {
        pvVar15 = malloc(sVar17 * 2);
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar14 != plVar1) {
          memcpy(pvVar15,plVar1,sVar17);
        }
        param_1[2] = (long)pvVar15;
      }
      else {
        pvVar15 = realloc(plVar5,sVar17 * 2);
        param_1[2] = (long)pvVar15;
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      param_1[3] = (long)((undefined8 *)((long)pvVar15 + sVar17) + 1);
      param_1[4] = (long)((long)pvVar15 + ((long)sVar17 >> 2) * 8);
      *(undefined8 *)((long)pvVar15 + sVar17) = puVar16;
      psVar6 = (short *)*param_1;
      psVar12 = (short *)param_1[1];
      if (psVar6 != psVar12) goto LAB_0403add8;
    }
    else {
      if ((char)*psVar6 == 'T') {
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_040324c0(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = malloc(0x1000);
          if (puVar16 == (void *)0x0) goto LAB_0403ae78;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        puVar9 = &UNK_08faf778;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x55;
      }
      else {
        if ((char)*psVar6 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_0403770c(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = malloc(0x1000);
          if (puVar16 == (void *)0x0) goto LAB_0403ae78;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        puVar9 = &UNK_08faf7e8;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x56;
      }
      puVar16 = (undefined8 *)(lVar8 + 0x10);
      *puVar16 = puVar9;
      *(undefined1 *)(lVar8 + 0x18) = uVar11;
      *(ushort *)(lVar8 + 0x19) = *(ushort *)(lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar8 + 0x20) = lVar4;
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) goto LAB_0403acd8;
LAB_0403ad6c:
      param_1[3] = (long)(plVar14 + 1);
      *plVar14 = (long)puVar16;
      psVar6 = (short *)*param_1;
      psVar12 = (short *)param_1[1];
      if (psVar6 != psVar12) {
LAB_0403add8:
        if ((char)*psVar6 == 'E') {
          *param_1 = (long)((long)psVar6 + 1);
          auVar20 = FUN_04034628(param_1,lVar2 - lVar10 >> 3);
          pvVar15 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar15 + 8);
          puVar16 = pvVar15;
          if (lVar10 - 0xfc0U < 0xfffffffffffff010) {
            puVar16 = malloc(0x1000);
            if (puVar16 == (void *)0x0) {
LAB_0403ae78:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar10 = 0;
            *puVar16 = pvVar15;
            puVar16[1] = 0;
            param_1[0x266] = (long)puVar16;
          }
          *(long *)((long)puVar16 + 8) = lVar10 + 0x30;
          puVar13 = (undefined8 *)((long)puVar16 + lVar10 + 0x10);
          *puVar13 = &UNK_08faf858;
          *(undefined1 *)((long)puVar16 + lVar10 + 0x18) = 0x53;
          *(undefined1 (*) [16])((long)puVar16 + lVar10 + 0x30) = auVar20;
          *(undefined1 (*) [16])((long)puVar16 + lVar10 + 0x20) = auVar19;
          *(ushort *)((long)puVar16 + lVar10 + 0x19) =
               *(ushort *)((long)puVar16 + lVar10 + 0x19) & 0xf000 | 0x540;
          return puVar13;
        }
      }
    }
    if (psVar6 == psVar12) {
      return (undefined8 *)0x0;
    }
  } while( true );
}

