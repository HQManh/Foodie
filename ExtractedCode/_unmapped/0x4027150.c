// rea decompile_all
// name: FUN_04027150
// address: 0x4027150
// body: available
// range: 0x4027150-0x402749b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4027498 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_04027150(long *param_1,int *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  char *__ptr;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  char cVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  ulong __size;
  char *local_f0;
  char acStack_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (__size < 0x65) {
    pcVar8 = acStack_c4;
    local_f0 = (char *)0x0;
    uVar10 = param_7;
    __ptr = local_f0;
  }
  else {
    pcVar8 = malloc(__size);
    uVar10 = param_7 & 0xffffffff;
    __ptr = pcVar8;
    if (pcVar8 == (char *)0x0) {
      uVar9 = std::__throw_bad_alloc();
      if (local_f0 != (void *)0x0) {
        free(local_f0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar9);
    }
  }
  if (param_3 == param_4) {
    lVar15 = 0;
    piVar12 = (int *)*param_1;
  }
  else {
    lVar15 = 0;
    pbVar13 = param_3;
    pcVar14 = pcVar8;
    do {
      bVar4 = *pbVar13;
      puVar1 = (ulong *)(pbVar13 + 8);
      pbVar13 = pbVar13 + 0x18;
      uVar3 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar3 = *puVar1;
      }
      cVar11 = '\x01';
      if (uVar3 == 0) {
        cVar11 = '\x02';
        lVar15 = lVar15 + 1;
      }
      __size = __size - (uVar3 == 0);
      *pcVar14 = cVar11;
      pcVar14 = pcVar14 + 1;
    } while (pbVar13 != param_4);
    piVar12 = (int *)*param_1;
  }
  if ((piVar12 != param_2) && (__size != 0)) {
    lVar16 = 0;
    do {
      iVar6 = *piVar12;
      if ((uVar10 & 1) == 0) {
        iVar6 = (**(code **)(*param_5 + 0x38))(param_5,iVar6);
        uVar10 = param_7 & 0xffffffff;
      }
      if (param_3 == param_4) {
        piVar12 = (int *)*param_1;
      }
      else {
        bVar5 = false;
        pcVar14 = pcVar8;
        pbVar13 = param_3;
        do {
          if (*pcVar14 == '\x01') {
            pbVar2 = pbVar13 + 4;
            if ((*pbVar13 & 1) != 0) {
              pbVar2 = *(byte **)(pbVar13 + 0x10);
            }
            iVar7 = *(int *)(pbVar2 + lVar16 * 4);
            if ((uVar10 & 1) == 0) {
              iVar7 = (**(code **)(*param_5 + 0x38))(param_5);
              uVar10 = param_7 & 0xffffffff;
            }
            if (iVar6 == iVar7) {
              uVar3 = (ulong)(*pbVar13 >> 1);
              if ((*pbVar13 & 1) != 0) {
                uVar3 = *(ulong *)(pbVar13 + 8);
              }
              if (uVar3 == lVar16 + 1U) {
                __size = __size - 1;
                lVar15 = lVar15 + 1;
                *pcVar14 = '\x02';
              }
              bVar5 = true;
            }
            else {
              __size = __size - 1;
              *pcVar14 = '\0';
            }
          }
          pbVar13 = pbVar13 + 0x18;
          pcVar14 = pcVar14 + 1;
        } while (pbVar13 != param_4);
        piVar12 = (int *)*param_1;
        if (bVar5) {
          piVar12 = piVar12 + 1;
          *param_1 = (long)piVar12;
          if ((1 < lVar15 + __size) && (param_3 != param_4)) {
            pbVar13 = param_3;
            pcVar14 = pcVar8;
            do {
              if (*pcVar14 == '\x02') {
                uVar3 = (ulong)(*pbVar13 >> 1);
                if ((*pbVar13 & 1) != 0) {
                  uVar3 = *(ulong *)(pbVar13 + 8);
                }
                if (uVar3 != lVar16 + 1U) {
                  lVar15 = lVar15 + -1;
                  *pcVar14 = '\0';
                }
              }
              pbVar13 = pbVar13 + 0x18;
              pcVar14 = pcVar14 + 1;
            } while (pbVar13 != param_4);
          }
        }
      }
    } while ((piVar12 != param_2) && (lVar16 = lVar16 + 1, __size != 0));
  }
  if (piVar12 == param_2) {
    *param_6 = *param_6 | 2;
  }
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar8 == '\x02') goto joined_r0x04027474;
    pcVar8 = pcVar8 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x04027474:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}

