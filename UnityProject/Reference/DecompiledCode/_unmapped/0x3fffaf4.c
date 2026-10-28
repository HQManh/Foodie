// rea decompile_all
// name: FUN_03fffaf4
// address: 0x3fffaf4
// body: available
// range: 0x3fffaf4-0x3ffff63 inclusive
// range: 0x3ffff70-0x3ffff8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ffff88 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_03fffaf4(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  char *__ptr;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  char cVar13;
  byte *pbVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  ulong __size;
  char *local_f0;
  char acStack_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (__size < 0x65) {
    pcVar9 = acStack_c4;
    local_f0 = (char *)0x0;
    __ptr = local_f0;
  }
  else {
    pcVar9 = malloc(__size);
    __ptr = pcVar9;
    if (pcVar9 == (char *)0x0) {
      uVar12 = std::__throw_bad_alloc();
      if (local_f0 != (void *)0x0) {
        free(local_f0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar12);
    }
  }
  lVar17 = 0;
  if (param_3 != param_4) {
    lVar17 = 0;
    pbVar14 = param_3;
    pcVar15 = pcVar9;
    do {
      bVar4 = *pbVar14;
      puVar1 = (ulong *)(pbVar14 + 8);
      pbVar14 = pbVar14 + 0x18;
      uVar3 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar3 = *puVar1;
      }
      cVar13 = '\x01';
      if (uVar3 == 0) {
        cVar13 = '\x02';
        lVar17 = lVar17 + 1;
      }
      __size = __size - (uVar3 == 0);
      *pcVar15 = cVar13;
      pcVar15 = pcVar15 + 1;
    } while (pbVar14 != param_4);
  }
  lVar16 = 0;
LAB_03fffbec:
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
LAB_03fffc44:
    bVar5 = true;
    bVar6 = true;
    if (param_2 == (long *)0x0) goto LAB_03fffc2c;
LAB_03fffc4c:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    plVar10 = (long *)0x0;
    if (iVar8 != -1) {
      plVar10 = param_2;
    }
    plVar11 = (long *)*param_1;
    param_2 = plVar10;
    if (bVar5 == (iVar8 == -1)) goto LAB_03fffe44;
  }
  else {
    if ((int *)plVar10[3] == (int *)plVar10[4]) {
      iVar8 = (**(code **)(*plVar10 + 0x48))();
    }
    else {
      iVar8 = *(int *)plVar10[3];
    }
    if (iVar8 == -1) {
      *param_1 = 0;
      goto LAB_03fffc44;
    }
    bVar5 = *param_1 == 0;
    bVar6 = bVar5;
    if (param_2 != (long *)0x0) goto LAB_03fffc4c;
LAB_03fffc2c:
    plVar11 = (long *)*param_1;
    if (bVar6) goto LAB_03fffe44;
  }
  if (__size == 0) goto LAB_03fffe44;
  if ((int *)plVar11[3] == (int *)plVar11[4]) {
    iVar8 = (**(code **)(*plVar11 + 0x48))();
  }
  else {
    iVar8 = *(int *)plVar11[3];
  }
  if ((param_7 & 1) == 0) {
    iVar8 = (**(code **)(*param_5 + 0x38))(param_5,iVar8);
  }
  if (param_3 == param_4) {
    lVar16 = lVar16 + 1;
  }
  else {
    bVar6 = false;
    pbVar14 = param_3;
    pcVar15 = pcVar9;
    do {
      if (*pcVar15 == '\x01') {
        pbVar2 = pbVar14 + 4;
        if ((*pbVar14 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar14 + 0x10);
        }
        iVar7 = *(int *)(pbVar2 + lVar16 * 4);
        if ((param_7 & 1) == 0) {
          iVar7 = (**(code **)(*param_5 + 0x38))(param_5);
        }
        if (iVar8 == iVar7) {
          uVar3 = (ulong)(*pbVar14 >> 1);
          if ((*pbVar14 & 1) != 0) {
            uVar3 = *(ulong *)(pbVar14 + 8);
          }
          if (uVar3 == lVar16 + 1U) {
            __size = __size - 1;
            lVar17 = lVar17 + 1;
            *pcVar15 = '\x02';
          }
          bVar6 = true;
        }
        else {
          __size = __size - 1;
          *pcVar15 = '\0';
        }
      }
      pbVar14 = pbVar14 + 0x18;
      pcVar15 = pcVar15 + 1;
    } while (pbVar14 != param_4);
    if (bVar6) {
      plVar10 = (long *)*param_1;
      if (plVar10[3] == plVar10[4]) {
        (**(code **)(*plVar10 + 0x50))();
      }
      else {
        plVar10[3] = plVar10[3] + 4;
      }
      if ((1 < lVar17 + __size) && (param_3 != param_4)) {
        pbVar14 = param_3;
        pcVar15 = pcVar9;
        do {
          if (*pcVar15 == '\x02') {
            uVar3 = (ulong)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar3 = *(ulong *)(pbVar14 + 8);
            }
            if (uVar3 != lVar16 + 1U) {
              lVar17 = lVar17 + -1;
              *pcVar15 = '\0';
            }
          }
          pbVar14 = pbVar14 + 0x18;
          pcVar15 = pcVar15 + 1;
        } while (pbVar14 != param_4);
      }
      lVar16 = lVar16 + 1;
    }
    else {
      lVar16 = lVar16 + 1;
    }
  }
  goto LAB_03fffbec;
LAB_03fffe44:
  if (plVar11 == (long *)0x0) {
joined_r0x03fffe68:
    bVar6 = true;
    if (param_2 != (long *)0x0) goto LAB_03fffe98;
LAB_03fffe6c:
    if (!bVar6) goto joined_r0x03fffee0;
  }
  else {
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar8 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar8 = *(int *)plVar11[3];
    }
    if (iVar8 == -1) {
      *param_1 = 0;
      goto joined_r0x03fffe68;
    }
    bVar6 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_03fffe6c;
LAB_03fffe98:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    if (bVar6 != (iVar8 == -1)) goto joined_r0x03fffee0;
  }
  *param_6 = *param_6 | 2;
joined_r0x03fffee0:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar9 == '\x02') goto joined_r0x03ffff0c;
    pcVar9 = pcVar9 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x03ffff0c:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}

