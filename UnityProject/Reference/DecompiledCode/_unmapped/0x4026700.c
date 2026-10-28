// rea decompile_all
// name: FUN_04026700
// address: 0x4026700
// body: available
// range: 0x4026700-0x4026a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4026a2c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_04026700(long *param_1,byte *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  char *__ptr;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  char cVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  ulong __size;
  char *local_f0;
  char acStack_c4 [100];
  
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  if (__size < 0x65) {
    pcVar6 = acStack_c4;
    local_f0 = (char *)0x0;
    uVar8 = param_7;
    __ptr = local_f0;
  }
  else {
    pcVar6 = malloc(__size);
    uVar8 = param_7 & 0xffffffff;
    __ptr = pcVar6;
    if (pcVar6 == (char *)0x0) {
      uVar7 = std::__throw_bad_alloc();
      if (local_f0 != (void *)0x0) {
        free(local_f0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar7);
    }
  }
  lVar14 = 0;
  if (param_3 != param_4) {
    lVar14 = 0;
    pbVar10 = param_3;
    pcVar12 = pcVar6;
    do {
      bVar4 = *pbVar10;
      puVar1 = (ulong *)(pbVar10 + 8);
      pbVar10 = pbVar10 + 0x18;
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *puVar1;
      }
      cVar9 = '\x01';
      if (uVar2 == 0) {
        cVar9 = '\x02';
        lVar14 = lVar14 + 1;
      }
      __size = __size - (uVar2 == 0);
      *pcVar12 = cVar9;
      pcVar12 = pcVar12 + 1;
    } while (pbVar10 != param_4);
  }
  pbVar10 = (byte *)*param_1;
  if ((pbVar10 != param_2) && (__size != 0)) {
    lVar13 = 0;
    do {
      bVar4 = *pbVar10;
      if ((uVar8 & 1) == 0) {
        bVar4 = (**(code **)(*param_5 + 0x18))(param_5);
        uVar8 = param_7 & 0xffffffff;
      }
      if (param_3 == param_4) {
        pbVar10 = (byte *)*param_1;
      }
      else {
        bVar3 = false;
        pbVar10 = param_3;
        pcVar12 = pcVar6;
        do {
          if (*pcVar12 == '\x01') {
            pbVar11 = *(byte **)(pbVar10 + 0x10);
            if ((*pbVar10 & 1) == 0) {
              pbVar11 = pbVar10 + 1;
            }
            bVar5 = pbVar11[lVar13];
            if ((uVar8 & 1) == 0) {
              bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
              uVar8 = param_7 & 0xffffffff;
            }
            if (bVar4 == bVar5) {
              uVar2 = (ulong)(*pbVar10 >> 1);
              if ((*pbVar10 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar10 + 8);
              }
              if (uVar2 == lVar13 + 1U) {
                __size = __size - 1;
                lVar14 = lVar14 + 1;
                *pcVar12 = '\x02';
              }
              bVar3 = true;
            }
            else {
              __size = __size - 1;
              *pcVar12 = '\0';
            }
          }
          pbVar10 = pbVar10 + 0x18;
          pcVar12 = pcVar12 + 1;
        } while (pbVar10 != param_4);
        pbVar10 = (byte *)*param_1;
        if (bVar3) {
          pbVar10 = pbVar10 + 1;
          *param_1 = (long)pbVar10;
          if ((1 < lVar14 + __size) && (param_3 != param_4)) {
            pbVar11 = param_3;
            pcVar12 = pcVar6;
            do {
              if (*pcVar12 == '\x02') {
                uVar2 = (ulong)(*pbVar11 >> 1);
                if ((*pbVar11 & 1) != 0) {
                  uVar2 = *(ulong *)(pbVar11 + 8);
                }
                if (uVar2 != lVar13 + 1U) {
                  lVar14 = lVar14 + -1;
                  *pcVar12 = '\0';
                }
              }
              pbVar11 = pbVar11 + 0x18;
              pcVar12 = pcVar12 + 1;
            } while (pbVar11 != param_4);
          }
        }
      }
    } while ((pbVar10 != param_2) && (lVar13 = lVar13 + 1, __size != 0));
  }
  if (pbVar10 == param_2) {
    *param_6 = *param_6 | 2;
  }
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar6 == '\x02') goto joined_r0x04026a08;
    pcVar6 = pcVar6 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x04026a08:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  return param_3;
}

