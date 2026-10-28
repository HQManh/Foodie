// rea decompile_all
// name: FUN_0404d81c
// address: 0x404d81c
// body: available
// range: 0x404d81c-0x404e463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404e3c4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404e3f8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404e42c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404e460 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0404d81c(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *__ptr;
  size_t __size;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar5 = (undefined8 *)auStack_6e0;
  lVar19 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar20 = *(byte **)((long)local_98 + lVar19);
    pbVar2 = *(byte **)((long)local_98 + lVar19 + 8);
    uVar15 = *(ulong *)((long)local_98 + lVar19 + 0x10);
    apbStack_6a0[0xc0] = pbVar20;
    if (pbVar20 < pbVar2 && uVar15 != 0) break;
LAB_0404d8a0:
    lVar19 = lVar19 + 0x18;
    if (lVar19 == 0x30) {
      return 1;
    }
  }
  uVar16 = 0;
LAB_0404d8d0:
  puVar17 = local_6c0;
  pbVar9 = pbVar20 + 1;
  bVar3 = *pbVar20;
  apbStack_6a0[0xc0] = pbVar9;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0404e1a4;
  case 1:
    uVar16 = FUN_0404e7a8(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar8 = (uint)pbVar20[1];
    iVar12 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar20 + 2;
    goto LAB_0404dd58;
  case 3:
    uVar8 = (uint)*(ushort *)(pbVar20 + 1);
    iVar12 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar20 + 3;
    goto LAB_0404dd58;
  case 4:
    uVar8 = *(uint *)(pbVar20 + 1);
    iVar12 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar20 + 5;
LAB_0404dd58:
    uVar16 = uVar16 + iVar12 * uVar8;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    lVar7 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      goto LAB_0404e354;
    }
    puVar11 = param_6 + uVar18 * 4;
    iVar12 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar11 + 7) == '\0') {
      pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(puVar11 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    lVar7 = lVar7 * iVar12;
LAB_0404dcf4:
    puVar11[6] = 2;
    *(long *)(puVar11 + 8) = lVar7;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0404e244:
      __size = 0x47;
      goto LAB_0404e354;
    }
    cVar4 = *(char *)(param_6 + uVar18 * 4 + 7);
joined_r0x0404e184:
    if (cVar4 != '\0') {
      pbVar20 = apbStack_6a0[uVar18 * 2];
      *(byte **)(param_6 + uVar18 * 4 + 8) = apbStack_6a0[uVar18 * 2 + 1];
      *(byte **)(param_6 + uVar18 * 4 + 6) = pbVar20;
    }
    goto code_r0x0404e1a4;
  case 7:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0404e348:
      __size = 0x40;
      goto LAB_0404e354;
    }
    if (*(char *)(param_6 + uVar18 * 4 + 7) == '\0') {
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(param_6 + uVar18 * 4 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = *(byte **)(param_6 + uVar18 * 4 + 8);
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    param_6[uVar18 * 4 + 6] = 1;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0404e32c:
      __size = 0x41;
      goto LAB_0404e354;
    }
    if (*(char *)(param_6 + uVar18 * 4 + 7) == '\0') {
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(param_6 + uVar18 * 4 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = *(byte **)(param_6 + uVar18 * 4 + 8);
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    param_6[uVar18 * 4 + 6] = 0;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    uVar13 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      goto LAB_0404e354;
    }
    if (0x5f < uVar13) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0404e348;
    }
    if (*(char *)(param_6 + uVar18 * 4 + 7) == '\0') {
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(param_6 + uVar18 * 4 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = *(byte **)(param_6 + uVar18 * 4 + 8);
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    *(ulong *)(param_6 + uVar18 * 4 + 8) = uVar13;
    param_6[uVar18 * 4 + 6] = 5;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar17 = (undefined8 *)((long)puVar5 + 0xfffffffffffff9e0);
    *puVar17 = local_6c0;
    memcpy((undefined1 *)((long)puVar5 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar17;
    puVar5 = puVar17;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar17;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    uVar6 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      goto LAB_0404e354;
    }
    *param_6 = (int)uVar18;
    param_6[1] = uVar6;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0404e244;
    }
    *param_6 = (int)uVar18;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar6 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar6;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar9;
    goto LAB_0404e0d8;
  case 0x10:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0404e32c;
    }
    puVar11 = param_6 + uVar18 * 4;
    if (*(char *)(puVar11 + 7) == '\0') {
      pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(puVar11 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    uVar6 = 6;
LAB_0404e0d0:
    puVar11[6] = uVar6;
    *(byte **)(puVar11 + 8) = apbStack_6a0[0xc0];
LAB_0404e0d8:
    lVar7 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar7;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      goto LAB_0404e354;
    }
    uVar13 = 0;
    uVar10 = 0;
    pbVar20 = apbStack_6a0[0xc0];
    pbVar9 = apbStack_6a0[0xc0];
    do {
      if (pbVar9 == pbVar2) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression"
               );
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar9;
      pbVar20 = pbVar20 + 1;
      uVar14 = uVar13 & 0x3f;
      uVar13 = uVar13 + 7;
      uVar10 = ((ulong)bVar3 & 0x7f) << uVar14 | uVar10;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar3 < '\0');
    puVar11 = param_6 + uVar18 * 4;
    uVar14 = -1L << (uVar13 & 0x3f);
    iVar12 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar13 - 7U || bVar3 < 0x40) {
      uVar14 = 0;
    }
    apbStack_6a0[0xc0] = pbVar20;
    if (*(char *)(puVar11 + 7) == '\0') {
      pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(puVar11 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    uVar10 = uVar10 | uVar14;
    uVar6 = 2;
LAB_0404e064:
    puVar11[6] = uVar6;
    *(ulong *)(puVar11 + 8) = uVar10 * (long)iVar12;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar13 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    uVar18 = 0;
    uVar10 = 0;
    pbVar20 = apbStack_6a0[0xc0];
    pbVar9 = apbStack_6a0[0xc0];
    do {
      if (pbVar9 == pbVar2) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression"
               );
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar9;
      pbVar20 = pbVar20 + 1;
      uVar14 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar10 = ((ulong)bVar3 & 0x7f) << uVar14 | uVar10;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar20;
    if (0x5f < uVar13) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_0404e32c;
    }
    iVar12 = *(int *)((long)param_3 + 0x2c);
    uVar8 = (uint)(-1L << (uVar18 & 0x3f));
    if (0x38 < (int)uVar18 - 7U || bVar3 < 0x40) {
      uVar8 = 0;
    }
    *param_6 = (int)uVar13;
    param_6[1] = iVar12 * ((uint)uVar10 | uVar8);
    break;
  case 0x13:
    uVar18 = 0;
    uVar13 = 0;
    pbVar20 = pbVar9;
    do {
      if (pbVar20 == pbVar2) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression"
               );
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar20;
      pbVar9 = pbVar9 + 1;
      uVar10 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar13 = ((ulong)bVar3 & 0x7f) << uVar10 | uVar13;
      pbVar20 = pbVar20 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar9;
    uVar8 = (uint)(-1L << (uVar18 & 0x3f));
    if (0x38 < (int)uVar18 - 7U || bVar3 < 0x40) {
      uVar8 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar13 | uVar8);
    pbVar20 = pbVar9;
    break;
  case 0x14:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar18) {
      fprintf((FILE *)0x974c9d8,
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar18);
      goto LAB_0404e35c;
    }
    lVar7 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    iVar12 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar18 * 4 + 7) == '\0') {
      pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
      *(char *)(param_6 + uVar18 * 4 + 7) = '\x01';
      apbStack_6a0[uVar18 * 2 + 1] = *(byte **)(param_6 + uVar18 * 4 + 8);
      apbStack_6a0[uVar18 * 2] = pbVar20;
    }
    param_6[uVar18 * 4 + 6] = 4;
    *(long *)(param_6 + uVar18 * 4 + 8) = lVar7 * iVar12;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar18 < 0x60) {
      uVar13 = 0;
      uVar10 = 0;
      pbVar20 = apbStack_6a0[0xc0];
      pbVar9 = apbStack_6a0[0xc0];
      do {
        if (pbVar9 == pbVar2) {
          fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar9;
        pbVar20 = pbVar20 + 1;
        uVar14 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar10 = ((ulong)bVar3 & 0x7f) << uVar14 | uVar10;
        pbVar9 = pbVar9 + 1;
      } while ((char)bVar3 < '\0');
      puVar11 = param_6 + uVar18 * 4;
      uVar14 = -1L << (uVar13 & 0x3f);
      iVar12 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar13 - 7U || bVar3 < 0x40) {
        uVar14 = 0;
      }
      apbStack_6a0[0xc0] = pbVar20;
      if (*(char *)(puVar11 + 7) == '\0') {
        pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
        pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
        *(char *)(puVar11 + 7) = '\x01';
        apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
        apbStack_6a0[uVar18 * 2] = pbVar20;
      }
      uVar10 = uVar10 | uVar14;
      uVar6 = 4;
      goto LAB_0404e064;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    goto LAB_0404e354;
  case 0x16:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar18 < 0x60) {
      puVar11 = param_6 + uVar18 * 4;
      if (*(char *)(puVar11 + 7) == '\0') {
        pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
        pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
        *(char *)(puVar11 + 7) = '\x01';
        apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
        apbStack_6a0[uVar18 * 2] = pbVar20;
      }
      uVar6 = 7;
      goto LAB_0404e0d0;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    goto LAB_0404e354;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar18 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar16 = uVar16 + (uint)((int)param_3[5] * (int)uVar18);
      pbVar20 = pbVar9;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar18 * 4 + 7);
        goto joined_r0x0404e184;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar7 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
      iVar12 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar18 * 4 + 7) == '\0') {
        pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
        apbStack_6a0[uVar18 * 2 + 1] = *(byte **)(param_6 + uVar18 * 4 + 8);
        apbStack_6a0[uVar18 * 2] = pbVar20;
        *(char *)(param_6 + uVar18 * 4 + 7) = '\x01';
      }
      param_6[uVar18 * 4 + 6] = 2;
      *(long *)(param_6 + uVar18 * 4 + 8) = lVar7 * iVar12;
      param_5 = local_6dc;
      pbVar20 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x0404e1a4;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar9 = (byte *)puStack_6d0[1];
      pbVar20 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar9;
      *local_6d8 = pbVar20;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar6 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar6;
    pbVar20 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar18 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar18 < 0x60) {
      lVar7 = FUN_0404eb34(apbStack_6a0 + 0xc0,pbVar2);
      puVar11 = param_6 + uVar18 * 4;
      iVar12 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar11 + 7) == '\0') {
        pbVar9 = *(byte **)(param_6 + uVar18 * 4 + 8);
        pbVar20 = *(byte **)(param_6 + uVar18 * 4 + 6);
        *(char *)(puVar11 + 7) = '\x01';
        apbStack_6a0[uVar18 * 2 + 1] = pbVar9;
        apbStack_6a0[uVar18 * 2] = pbVar20;
      }
      lVar7 = -(lVar7 * iVar12);
      goto LAB_0404dcf4;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
LAB_0404e354:
    fwrite(__ptr,__size,1,(FILE *)0x974c9d8);
LAB_0404e35c:
    fflush((FILE *)0x974c9d8);
    return 0;
  }
joined_r0x0404dc8c:
  if ((pbVar2 <= pbVar20) || (uVar15 <= uVar16)) goto LAB_0404d8a0;
  goto LAB_0404d8d0;
code_r0x0404e1a4:
  pbVar20 = apbStack_6a0[0xc0];
  goto joined_r0x0404dc8c;
}

