// rea decompile_all
// name: FUN_04035dcc
// address: 0x4035dcc
// body: available
// range: 0x4035dcc-0x403635f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4035e48 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036340 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036344 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036348 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403634c to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036350 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036354 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036358 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403635c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04035dcc(long *param_1,ulong param_2)

{
  ushort uVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  char cVar15;
  ushort uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  size_t sVar22;
  void *pvVar23;
  undefined1 auVar24 [16];
  
  pcVar18 = (char *)*param_1;
  if ((pcVar18 != (char *)param_1[1]) && (*pcVar18 == 'I')) {
    *param_1 = (long)(pcVar18 + 1);
    if ((param_2 & 1) != 0) {
      plVar9 = (long *)param_1[0x53];
      param_1[0x54] = (long)plVar9;
      if (plVar9 == (long *)param_1[0x55]) {
        if (plVar9 == param_1 + 0x56) {
          plVar9 = malloc(0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_1[0x53] = (long)plVar9;
        }
        else {
          plVar9 = realloc(plVar9,0);
          param_1[0x53] = (long)plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        param_1[0x54] = (long)plVar9;
        param_1[0x55] = (long)plVar9;
      }
      param_1[0x54] = (long)(plVar9 + 1);
      plVar2 = param_1 + 5;
      plVar10 = param_1 + 0x4b;
      *plVar9 = (long)(param_1 + 0x48);
      param_1[0x49] = param_1[0x48];
      lVar17 = param_1[3] - param_1[2] >> 3;
      pcVar18 = (char *)*param_1;
      pcVar20 = (char *)param_1[1];
LAB_04035fb0:
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_04036244;
      puVar11 = (undefined8 *)FUN_0403413c(param_1);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar9 = (long *)param_1[3];
      if (plVar9 != (long *)param_1[4]) {
        cVar15 = *(char *)(puVar11 + 1);
        param_1[3] = (long)(plVar9 + 1);
        *plVar9 = (long)puVar11;
        if (cVar15 != '\"') goto LAB_04035ff8;
LAB_040361ac:
        puVar11 = (undefined8 *)puVar11[3];
        plVar9 = (long *)param_1[0x49];
        if (plVar9 == (long *)param_1[0x4a]) goto LAB_040361c0;
        goto LAB_04036118;
      }
      plVar13 = (long *)param_1[2];
      sVar22 = (long)plVar9 - (long)plVar13;
      if (plVar13 == plVar2) {
        pvVar23 = malloc(sVar22 * 2);
        if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar9 != plVar2) {
          memcpy(pvVar23,plVar2,sVar22);
        }
        param_1[2] = (long)pvVar23;
      }
      else {
        pvVar23 = realloc(plVar13,sVar22 * 2);
        param_1[2] = (long)pvVar23;
        if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      puVar12 = (undefined8 *)((long)pvVar23 + sVar22);
      param_1[3] = (long)puVar12;
      param_1[4] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
      cVar15 = *(char *)(puVar11 + 1);
      param_1[3] = (long)(puVar12 + 1);
      *puVar12 = puVar11;
      if (cVar15 == '\"') goto LAB_040361ac;
LAB_04035ff8:
      if (cVar15 != ')') goto LAB_04036108;
      pvVar23 = (void *)param_1[0x266];
      plVar9 = (long *)puVar11[2];
      lVar14 = puVar11[3];
      lVar19 = *(long *)((long)pvVar23 + 8);
      puVar12 = pvVar23;
      if (lVar19 - 0xfd0U < 0xfffffffffffff010) {
        puVar12 = malloc(0x1000);
        if (puVar12 == (void *)0x0) goto LAB_0403634c;
        lVar19 = 0;
        *puVar12 = pvVar23;
        puVar12[1] = 0;
        param_1[0x266] = (long)puVar12;
      }
      *(long *)((long)puVar12 + 8) = lVar19 + 0x20;
      lVar21 = lVar14 << 3;
      puVar11 = (undefined8 *)((long)puVar12 + lVar19 + 0x10);
      *puVar11 = &UNK_08fb00a8;
      *(undefined1 *)((long)puVar12 + lVar19 + 0x18) = 0x28;
      uVar1 = *(ushort *)((long)puVar12 + lVar19 + 0x19) & 0xf000;
      *(long **)((long)puVar12 + lVar19 + 0x20) = plVar9;
      *(long *)((long)puVar12 + lVar19 + 0x28) = lVar14;
      uVar16 = uVar1 | 0xa80;
      *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
      plVar13 = plVar9;
      lVar4 = lVar21;
      lVar6 = lVar14;
      while (plVar7 = plVar9, lVar5 = lVar21, lVar8 = lVar14, lVar6 != 0) {
        if ((*(ushort *)(*plVar13 + 9) & 0x300) != 0x100) goto joined_r0x040360a0;
        plVar13 = plVar13 + 1;
        lVar4 = lVar4 + -8;
        lVar6 = lVar4;
      }
      uVar16 = uVar1 | 0x980;
      *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x040360a0:
      do {
        if (lVar8 == 0) goto LAB_040360cc;
        if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x040360d8;
        lVar5 = lVar5 + -8;
        plVar7 = plVar7 + 1;
        lVar8 = lVar5;
      } while( true );
    }
    plVar9 = param_1 + 5;
    lVar17 = param_1[3] - param_1[2] >> 3;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
LAB_04035e78:
    do {
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_04036244;
      lVar14 = FUN_0403413c(param_1);
      if (lVar14 == 0) {
        return (undefined8 *)0x0;
      }
      plVar2 = (long *)param_1[3];
      if (plVar2 == (long *)param_1[4]) {
        plVar10 = (long *)param_1[2];
        sVar22 = (long)plVar2 - (long)plVar10;
        if (plVar10 == plVar9) {
          pvVar23 = malloc(sVar22 * 2);
          if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar2 != plVar9) {
            memcpy(pvVar23,plVar9,sVar22);
          }
          param_1[2] = (long)pvVar23;
        }
        else {
          pvVar23 = realloc(plVar10,sVar22 * 2);
          param_1[2] = (long)pvVar23;
          if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar2 = (long *)((long)pvVar23 + sVar22);
        param_1[3] = (long)plVar2;
        param_1[4] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
        param_1[3] = (long)(plVar2 + 1);
        *plVar2 = lVar14;
        pcVar18 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        if (pcVar18 == pcVar20) goto LAB_04035e78;
      }
      else {
        param_1[3] = (long)(plVar2 + 1);
        *plVar2 = lVar14;
        pcVar18 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        if (pcVar18 == pcVar20) goto LAB_04035e78;
      }
    } while (*pcVar18 != 'Q');
LAB_040362d8:
    uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar18 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
    lVar14 = FUN_0403770c(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
    if (((lVar14 != 0) && (pcVar18 = (char *)*param_1, pcVar18 != (char *)param_1[1])) &&
       (*pcVar18 == 'E')) goto LAB_04036248;
  }
  return (undefined8 *)0x0;
LAB_040360cc:
  uVar16 = uVar16 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x040360d8:
  do {
    if (lVar14 == 0) break;
    if ((*(ushort *)(*plVar9 + 9) & 0xc0) != 0x40) goto LAB_04036108;
    lVar21 = lVar21 + -8;
    plVar9 = plVar9 + 1;
    lVar14 = lVar21;
  } while( true );
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16 & 0xff7f | 0x40;
LAB_04036108:
  plVar9 = (long *)param_1[0x49];
  if (plVar9 == (long *)param_1[0x4a]) {
LAB_040361c0:
    plVar13 = (long *)param_1[0x48];
    sVar22 = (long)plVar9 - (long)plVar13;
    if (plVar13 == plVar10) {
      pvVar23 = malloc(sVar22 * 2);
      if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar9 != plVar10) {
        memcpy(pvVar23,plVar10,sVar22);
      }
      param_1[0x48] = (long)pvVar23;
    }
    else {
      pvVar23 = realloc(plVar13,sVar22 * 2);
      param_1[0x48] = (long)pvVar23;
      if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar12 = (undefined8 *)((long)pvVar23 + sVar22);
    param_1[0x49] = (long)puVar12;
    param_1[0x4a] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
    param_1[0x49] = (long)(puVar12 + 1);
    *puVar12 = puVar11;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    if (pcVar18 == pcVar20) goto LAB_04035fb0;
  }
  else {
LAB_04036118:
    param_1[0x49] = (long)(plVar9 + 1);
    *plVar9 = (long)puVar11;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    if (pcVar18 == pcVar20) goto LAB_04035fb0;
  }
  if (*pcVar18 == 'Q') goto LAB_040362d8;
  goto LAB_04035fb0;
LAB_04036244:
  lVar14 = 0;
LAB_04036248:
  *param_1 = (long)(pcVar18 + 1);
  auVar24 = FUN_04034628(param_1,lVar17);
  pvVar23 = (void *)param_1[0x266];
  lVar17 = *(long *)((long)pvVar23 + 8);
  puVar11 = pvVar23;
  if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
    puVar11 = malloc(0x1000);
    if (puVar11 == (void *)0x0) {
LAB_0403634c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar17 = 0;
    *puVar11 = pvVar23;
    puVar11[1] = 0;
    param_1[0x266] = (long)puVar11;
  }
  *(long *)((long)puVar11 + 8) = lVar17 + 0x30;
  puVar12 = (undefined8 *)((long)puVar11 + lVar17 + 0x10);
  *puVar12 = &UNK_08fb0118;
  *(undefined1 *)((long)puVar11 + lVar17 + 0x18) = 0x2b;
  *(undefined1 (*) [16])((long)puVar11 + lVar17 + 0x20) = auVar24;
  *(long *)((long)puVar11 + lVar17 + 0x30) = lVar14;
  *(ushort *)((long)puVar11 + lVar17 + 0x19) =
       *(ushort *)((long)puVar11 + lVar17 + 0x19) & 0xf000 | 0x540;
  return puVar12;
}

