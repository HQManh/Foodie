// rea decompile_all
// name: FUN_03ffb520
// address: 0x3ffb520
// body: available
// range: 0x3ffb520-0x3ffb993 inclusive
// range: 0x3ffb9a0-0x3ffb9bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ffb9b8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_03ffb520(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong *puVar1;
  ulong uVar2;
  char *__ptr;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  char cVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  ulong __size;
  char *local_f0;
  char acStack_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (__size < 0x65) {
    pcVar7 = acStack_c4;
    local_f0 = (char *)0x0;
    __ptr = local_f0;
  }
  else {
    pcVar7 = malloc(__size);
    __ptr = pcVar7;
    if (pcVar7 == (char *)0x0) {
      uVar10 = std::__throw_bad_alloc();
      if (local_f0 != (void *)0x0) {
        free(local_f0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar10);
    }
  }
  lVar16 = 0;
  if (param_3 != param_4) {
    lVar16 = 0;
    pbVar13 = param_3;
    pcVar14 = pcVar7;
    do {
      bVar4 = *pbVar13;
      puVar1 = (ulong *)(pbVar13 + 8);
      pbVar13 = pbVar13 + 0x18;
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *puVar1;
      }
      cVar11 = '\x01';
      if (uVar2 == 0) {
        cVar11 = '\x02';
        lVar16 = lVar16 + 1;
      }
      __size = __size - (uVar2 == 0);
      *pcVar14 = cVar11;
      pcVar14 = pcVar14 + 1;
    } while (pbVar13 != param_4);
  }
  lVar15 = 0;
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) goto LAB_03ffb620;
LAB_03ffb674:
  bVar3 = true;
  plVar8 = param_2;
  if (param_2 == (long *)0x0) goto LAB_03ffb634;
LAB_03ffb67c:
  if (plVar8[3] == plVar8[4]) {
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    param_2 = (long *)0x0;
    if (iVar6 != -1) {
      param_2 = plVar8;
    }
    plVar9 = (long *)*param_1;
    plVar8 = param_2;
    if (bVar3 != (iVar6 == -1)) goto LAB_03ffb6c4;
  }
  else {
    plVar9 = (long *)*param_1;
    param_2 = plVar8;
    if (bVar3 != false) {
LAB_03ffb6c4:
      do {
        plVar8 = param_2;
        if (__size == 0) break;
        if ((byte *)plVar9[3] == (byte *)plVar9[4]) {
          bVar4 = (**(code **)(*plVar9 + 0x48))();
        }
        else {
          bVar4 = *(byte *)plVar9[3];
        }
        if ((param_7 & 1) == 0) {
          bVar4 = (**(code **)(*param_5 + 0x18))(param_5);
        }
        if (param_3 == param_4) {
LAB_03ffb614:
          plVar8 = (long *)*param_1;
        }
        else {
          bVar3 = false;
          pbVar13 = param_3;
          pcVar14 = pcVar7;
          do {
            if (*pcVar14 == '\x01') {
              pbVar12 = *(byte **)(pbVar13 + 0x10);
              if ((*pbVar13 & 1) == 0) {
                pbVar12 = pbVar13 + 1;
              }
              bVar5 = pbVar12[lVar15];
              if ((param_7 & 1) == 0) {
                bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
              }
              if (bVar4 == bVar5) {
                uVar2 = (ulong)(*pbVar13 >> 1);
                if ((*pbVar13 & 1) != 0) {
                  uVar2 = *(ulong *)(pbVar13 + 8);
                }
                if (uVar2 == lVar15 + 1U) {
                  __size = __size - 1;
                  lVar16 = lVar16 + 1;
                  *pcVar14 = '\x02';
                }
                bVar3 = true;
              }
              else {
                __size = __size - 1;
                *pcVar14 = '\0';
              }
            }
            pbVar13 = pbVar13 + 0x18;
            pcVar14 = pcVar14 + 1;
          } while (pbVar13 != param_4);
          if (bVar3) {
            plVar8 = (long *)*param_1;
            if (plVar8[3] == plVar8[4]) {
              (**(code **)(*plVar8 + 0x50))();
            }
            else {
              plVar8[3] = plVar8[3] + 1;
            }
            if ((1 < lVar16 + __size) && (param_3 != param_4)) {
              pbVar13 = param_3;
              pcVar14 = pcVar7;
              do {
                if (*pcVar14 == '\x02') {
                  uVar2 = (ulong)(*pbVar13 >> 1);
                  if ((*pbVar13 & 1) != 0) {
                    uVar2 = *(ulong *)(pbVar13 + 8);
                  }
                  if (uVar2 != lVar15 + 1U) {
                    lVar16 = lVar16 + -1;
                    *pcVar14 = '\0';
                  }
                }
                pbVar13 = pbVar13 + 0x18;
                pcVar14 = pcVar14 + 1;
              } while (pbVar13 != param_4);
            }
            goto LAB_03ffb614;
          }
          plVar8 = (long *)*param_1;
        }
        lVar15 = lVar15 + 1;
        if (plVar8 == (long *)0x0) goto LAB_03ffb674;
LAB_03ffb620:
        if (plVar8[3] == plVar8[4]) {
          iVar6 = (**(code **)(*plVar8 + 0x48))();
          if (iVar6 == -1) {
            *param_1 = 0;
            goto LAB_03ffb674;
          }
          bVar3 = *param_1 == 0;
        }
        else {
          bVar3 = false;
        }
        plVar8 = param_2;
        if (param_2 != (long *)0x0) goto LAB_03ffb67c;
LAB_03ffb634:
        plVar9 = (long *)*param_1;
        plVar8 = param_2;
        if (bVar3 == true) break;
      } while( true );
    }
  }
  if (plVar9 == (long *)0x0) {
    bVar3 = true;
joined_r0x03ffb918:
    if (plVar8 == (long *)0x0) goto LAB_03ffb91c;
LAB_03ffb88c:
    if (plVar8[3] == plVar8[4]) {
      iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
      if (bVar3 != (iVar6 == -1)) goto joined_r0x03ffb8b0;
    }
    else if (bVar3 != false) goto joined_r0x03ffb8b0;
  }
  else {
    if (plVar9[3] != plVar9[4]) {
      bVar3 = false;
      goto joined_r0x03ffb918;
    }
    iVar6 = (**(code **)(*plVar9 + 0x48))();
    if (iVar6 != -1) {
      bVar3 = *param_1 == 0;
      goto joined_r0x03ffb918;
    }
    bVar3 = true;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) goto LAB_03ffb88c;
LAB_03ffb91c:
    if (bVar3 == false) goto joined_r0x03ffb8b0;
  }
  *param_6 = *param_6 | 2;
joined_r0x03ffb8b0:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar7 == '\x02') goto joined_r0x03ffb8dc;
    pcVar7 = pcVar7 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x03ffb8dc:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}

