// rea decompile_all
// name: FUN_0403770c
// address: 0x403770c
// body: available
// range: 0x403770c-0x40379e3 inclusive
// range: 0x4037a74-0x4037d03 inclusive
// range: 0x4038218-0x403827b inclusive
// range: 0x40382b0-0x403837f inclusive
// range: 0x4038408-0x403841b inclusive
// range: 0x4038568-0x40385e3 inclusive
// range: 0x4038608-0x403861f inclusive
// range: 0x4038698-0x403889f inclusive
// range: 0x4038930-0x4038aeb inclusive
// range: 0x4038afc-0x4038b07 inclusive
// range: 0x4038b14-0x4038b1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40378c8 to 0x4039168 FUN_04039168 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40378f0 to 0x4036410 FUN_04036410 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4037924 to 0x403a050 FUN_0403a050 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40379b0 to 0x403a980 FUN_0403a980 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4037d00 to 0x403a744 FUN_0403a744 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4038278 to 0x403ae88 FUN_0403ae88 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4038750 to 0x403b534 FUN_0403b534 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x403895c to 0x403b67c FUN_0403b67c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4038ac4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4038ae8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4038afc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4038b00 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4038b04 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionMan
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403770c(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long **pplVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  char *pcVar24;
  long *plVar25;
  long *plVar26;
  size_t sVar27;
  byte *pbVar28;
  undefined1 auVar29 [16];
  undefined1 local_a0 [16];
  long *local_90;
  size_t sStack_88;
  long local_80;
  int iStack_74;
  undefined1 local_70 [16];
  
  pplVar13 = (long **)local_a0;
  pbVar15 = (byte *)*param_1;
  pbVar28 = (byte *)param_1[1];
  uVar18 = (long)pbVar28 - (long)pbVar15;
  if (uVar18 < 2) {
    return (undefined8 *)0x0;
  }
  sVar3 = *(short *)pbVar15;
  if (sVar3 == 0x7367) {
    pbVar15 = pbVar15 + 2;
    uVar18 = (long)pbVar28 - (long)pbVar15;
    *param_1 = (long)pbVar15;
    if (uVar18 < 2) {
      return (undefined8 *)0x0;
    }
    uVar23 = 1;
  }
  else {
    uVar23 = 0;
  }
  uVar19 = 0;
  uVar21 = 0x3d;
  pbVar16 = pbVar15 + 1;
  bVar1 = *pbVar15;
  do {
    uVar22 = uVar19 + uVar21 >> 1;
    if (((byte)(&UNK_08fae3c8)[uVar22 * 0x10] < bVar1) ||
       ((bVar1 == (&UNK_08fae3c8)[uVar22 * 0x10] &&
        ((byte)(&UNK_08fae3c9)[uVar22 * 0x10] < *pbVar16)))) {
      uVar19 = uVar22 + 1;
      uVar22 = uVar21;
    }
    uVar21 = uVar22;
  } while (uVar21 != uVar19);
  lVar10 = uVar19 * 0x10;
  if ((bVar1 == (&UNK_08fae3c8)[lVar10]) && (*pbVar16 == (&UNK_08fae3c9)[lVar10])) {
    plVar25 = *(long **)(&UNK_08fae3d0 + lVar10);
    pbVar16 = pbVar15 + 2;
    bVar1 = (&UNK_08fae3ca)[lVar10];
    *param_1 = (long)pbVar16;
    sVar4 = strlen((char *)plVar25);
    plVar26 = plVar25;
    sVar27 = sVar4;
    if (bVar1 < 0xb) {
      if ((sVar4 < 8) || (*plVar25 != 0x726f74617265706f)) goto LAB_04038ac8;
      sVar27 = sVar4 - 8;
      plVar26 = plVar25 + 1;
      if ((sVar27 != 0) && ((char)*plVar26 == ' ')) {
        plVar26 = (long *)((long)plVar25 + 9);
        sVar27 = sVar4 - 9;
      }
    }
    local_90 = plVar26;
    sStack_88 = sVar27;
    local_70._0_8_ = plVar26;
    local_70._8_8_ = sVar27;
    switch(bVar1) {
    case 0:
      bVar1 = (&UNK_08fae3cb)[lVar10];
      lVar10 = FUN_0403770c(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar8 + 8);
      puVar5 = pvVar8;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
LAB_04038b00:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x30;
      puVar12 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar12 = &UNK_08fae828;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x42;
      *(long **)((long)puVar5 + lVar9 + 0x20) = plVar26;
      *(size_t *)((long)puVar5 + lVar9 + 0x28) = sVar27;
      *(long *)((long)puVar5 + lVar9 + 0x30) = lVar10;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      return puVar12;
    case 1:
      if ((pbVar16 != pbVar28) && (*pbVar16 == 0x5f)) {
        cVar2 = (&UNK_08fae3cb)[lVar10];
        *param_1 = (long)(pbVar15 + 3);
        local_80 = CONCAT44(local_80._4_4_,(int)cVar2 >> 1);
        local_a0._0_8_ = FUN_0403770c(param_1);
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          puVar5 = (undefined8 *)FUN_0403c138(param_1,local_70,local_a0,&local_80);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      local_70._0_8_ = FUN_0403770c(param_1);
      if (local_70._0_8_ != 0) {
        local_a0._0_4_ = (int)(char)(&UNK_08fae3cb)[lVar10] >> 1;
        puVar5 = (undefined8 *)FUN_04038b1c(param_1,local_70,&local_90,local_a0);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 2:
      iStack_74 = (int)(char)(&UNK_08fae3cb)[lVar10] >> 1;
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      local_80 = FUN_0403770c(param_1);
      if (local_80 != 0) {
        puVar5 = (undefined8 *)FUN_0403bc28(param_1,local_a0,local_70,&local_80,&iStack_74);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 3:
      local_70._0_8_ = FUN_0403770c(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = CONCAT44(local_80._4_4_,(int)(char)(&UNK_08fae3cb)[lVar10] >> 1);
        puVar5 = (undefined8 *)FUN_04038bdc(param_1,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 4:
      local_70._0_8_ = FUN_0403770c(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = CONCAT44(local_80._4_4_,(int)(char)(&UNK_08fae3cb)[lVar10] >> 1);
        puVar5 = (undefined8 *)FUN_04038c98(param_1,local_70,&local_90,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 5:
      lVar9 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while ((pbVar16 == pbVar28 || (*pbVar16 != 0x5f))) {
        lVar11 = FUN_0403770c(param_1);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar11;
        pbVar28 = (byte *)param_1[1];
        pbVar16 = (byte *)*param_1;
      }
      *param_1 = (long)(pbVar16 + 1);
      local_70 = FUN_04034628(param_1,lVar6 - lVar9 >> 3);
      local_80 = FUN_040324c0(param_1);
      if (local_80 == 0) {
        return (undefined8 *)0x0;
      }
      uVar18 = FUN_04031820(param_1,&UNK_01a600e4,2);
      lVar9 = param_1[2];
      lVar6 = param_1[3];
      if ((uVar18 & 1) == 0) {
        pcVar24 = (char *)*param_1;
        if (pcVar24 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar24 != 'E') {
          return (undefined8 *)0x0;
        }
      }
      else {
        while ((pcVar24 = (char *)*param_1, pcVar24 == (char *)param_1[1] || (*pcVar24 != 'E'))) {
          lVar11 = FUN_0403770c(param_1);
          if (lVar11 == 0) {
            return (undefined8 *)0x0;
          }
          plVar25 = (long *)param_1[3];
          if (plVar25 == (long *)param_1[4]) {
            plVar7 = (long *)param_1[2];
            sVar27 = (long)plVar25 - (long)plVar7;
            if (plVar7 == plVar26) {
              pvVar8 = malloc(sVar27 * 2);
              if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar25 != plVar26) {
                memcpy(pvVar8,plVar26,sVar27);
              }
              param_1[2] = (long)pvVar8;
            }
            else {
              pvVar8 = realloc(plVar7,sVar27 * 2);
              param_1[2] = (long)pvVar8;
              if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar25 = (long *)((long)pvVar8 + sVar27);
            param_1[3] = (long)plVar25;
            param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
          }
          param_1[3] = (long)(plVar25 + 1);
          *plVar25 = lVar11;
        }
      }
      *param_1 = (long)(pcVar24 + 1);
      local_a0 = FUN_04034628(param_1,lVar6 - lVar9 >> 3);
      iStack_74 = (int)(char)(&UNK_08fae3cb)[lVar10] >> 1;
      puVar5 = (undefined8 *)
               FUN_04038d64(param_1,local_70,&local_80,local_a0,uVar23,
                            (int)(char)(&UNK_08fae3cb)[lVar10] & 1,&iStack_74);
      return puVar5;
    case 6:
      lVar9 = FUN_0403770c(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      bVar1 = (&UNK_08fae3cb)[lVar10];
      lVar10 = *(long *)((long)pvVar8 + 8);
      puVar5 = pvVar8;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_04038b00;
        lVar10 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
      puVar12 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
      *puVar12 = &UNK_08faea58;
      *(undefined1 *)((long)puVar5 + lVar10 + 0x18) = 0x41;
      *(long *)((long)puVar5 + lVar10 + 0x20) = lVar9;
      *(undefined1 *)((long)puVar5 + lVar10 + 0x28) = uVar23;
      *(ushort *)((long)puVar5 + lVar10 + 0x19) =
           *(ushort *)((long)puVar5 + lVar10 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar5 + lVar10 + 0x29) = bVar1 & 1;
      return puVar12;
    case 7:
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar9 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while( true ) {
        pcVar24 = (char *)*param_1;
        if ((pcVar24 != (char *)param_1[1]) && (*pcVar24 == 'E')) break;
        lVar11 = FUN_0403770c(param_1);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar11;
      }
      *param_1 = (long)(pcVar24 + 1);
      local_70 = FUN_04034628(param_1,lVar6 - lVar9 >> 3);
      iVar14 = (int)(char)(&UNK_08fae3cb)[lVar10] >> 1;
      goto LAB_04038608;
    case 8:
      goto code_r0x04037db4;
    case 9:
      local_70._0_8_ = FUN_0403770c(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = FUN_0403770c(param_1);
        if (local_80 != 0) {
          iStack_74 = (int)(char)(&UNK_08fae3cb)[lVar10] >> 1;
          puVar5 = (undefined8 *)FUN_04038fd8(param_1,local_70,local_a0,&local_80,&iStack_74);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      return (undefined8 *)0x0;
    case 10:
      return (undefined8 *)0x0;
    case 0xb:
      local_70._0_8_ = FUN_040324c0(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0403770c(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = CONCAT44(local_80._4_4_,(int)(char)(&UNK_08fae3cb)[lVar10] >> 1);
        puVar5 = (undefined8 *)FUN_040390a0(param_1,&local_90,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 0xc:
      bVar1 = (&UNK_08fae3cb)[lVar10];
      if ((bVar1 & 1) == 0) {
        lVar10 = FUN_0403770c(param_1);
      }
      else {
        lVar10 = FUN_040324c0(param_1);
      }
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar8 + 8);
      puVar5 = pvVar8;
      if (lVar9 - 0xfb0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_04038b00;
        lVar9 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x40;
      puVar12 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar12 = &UNK_08faec88;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x3c;
      *(long **)((long)puVar5 + lVar9 + 0x20) = plVar26;
      *(size_t *)((long)puVar5 + lVar9 + 0x28) = sVar27;
      *(undefined8 *)((long)puVar5 + lVar9 + 0x38) = 0;
      *(undefined8 *)((long)puVar5 + lVar9 + 0x40) = 0;
      *(long *)((long)puVar5 + lVar9 + 0x30) = lVar10;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | (ushort)(bVar1 >> 1) | 0x540;
      return puVar12;
    default:
      *(undefined1 *)(param_1 + 0x61) = uVar23;
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc();
    }
  }
  if (bVar1 == 0x66) {
    if ((*pbVar16 == 0x70) ||
       (((uVar18 != 2 && (*pbVar16 == 0x4c)) && (0xfffffff5 < pbVar15[2] - 0x3a)))) {
      puVar5 = (undefined8 *)FUN_0403a050(param_1);
      return puVar5;
    }
    if (pbVar15 == pbVar28) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)pbVar16;
    if (pbVar28 == pbVar16) {
      return (undefined8 *)0x0;
    }
    uVar18 = (ulong)(*pbVar16 - 0x4c);
    if (0x26 < *pbVar16 - 0x4c) {
      return (undefined8 *)0x0;
    }
    if ((0x4100000041U >> (uVar18 & 0x3f) & 1) == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar15 + 2);
    if ((ulong)((long)pbVar28 - (long)(pbVar15 + 2)) < 2) {
      return (undefined8 *)0x0;
    }
    uVar19 = 0;
    bVar1 = pbVar15[2];
    uVar22 = 0x3fffffffbfU >> (uVar18 & 0x3f) & 1;
    uVar21 = 0x3d;
    do {
      uVar20 = uVar19 + uVar21 >> 1;
      if (((byte)(&UNK_08fae3c8)[uVar20 * 0x10] < bVar1) ||
         ((bVar1 == (&UNK_08fae3c8)[uVar20 * 0x10] &&
          ((byte)(&UNK_08fae3c9)[uVar20 * 0x10] < pbVar15[3])))) {
        uVar19 = uVar20 + 1;
        uVar20 = uVar21;
      }
      uVar21 = uVar20;
    } while (uVar21 != uVar19);
    lVar10 = uVar19 * 0x10;
    if (bVar1 != (&UNK_08fae3c8)[lVar10]) {
      return (undefined8 *)0x0;
    }
    if (pbVar15[3] != (&UNK_08fae3c9)[lVar10]) {
      return (undefined8 *)0x0;
    }
    cVar2 = (&UNK_08fae3ca)[lVar10];
    *param_1 = (long)(pbVar15 + 4);
    if (cVar2 != '\x02') {
      if (cVar2 != '\x04') {
        return (undefined8 *)0x0;
      }
      pcVar24 = *(char **)(&UNK_08fae3d0 + lVar10);
      sVar27 = strlen(pcVar24);
      if (pcVar24[sVar27 - 1] != '*') {
        return (undefined8 *)0x0;
      }
    }
    lVar9 = FUN_0403770c(param_1);
    if (lVar9 == 0) {
      return (undefined8 *)0x0;
    }
    lVar6 = lVar9;
    if ((0x3effffffffU >> (uVar18 & 0x3f) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_0403770c(param_1);
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      if (uVar22 != 0) {
        lVar6 = lVar11;
        lVar11 = lVar9;
      }
    }
    plVar26 = *(long **)(&UNK_08fae3d0 + lVar10);
    sVar27 = strlen((char *)plVar26);
    if ((sVar27 < 8) || (*plVar26 != 0x726f74617265706f)) {
LAB_04038ac8:
      FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xb4a,
                   "operator name does not start with \'operator\'");
LAB_04038ae8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = sVar27 - 8;
    plVar25 = plVar26 + 1;
    if ((lVar10 != 0) && ((char)*plVar25 == ' ')) {
      plVar25 = (long *)((long)plVar26 + 9);
      lVar10 = sVar27 - 9;
    }
    pvVar8 = (void *)param_1[0x266];
    lVar9 = *(long *)((long)pvVar8 + 8);
    puVar5 = pvVar8;
    if (lVar9 - 0xfb0U < 0xfffffffffffff010) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_04038b00;
      lVar9 = 0;
      *puVar5 = pvVar8;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar9 + 0x40;
    puVar12 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar12 = &UNK_08faf468;
    *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x47;
    *(long *)((long)puVar5 + lVar9 + 0x20) = lVar6;
    *(long *)((long)puVar5 + lVar9 + 0x28) = lVar11;
    *(long **)((long)puVar5 + lVar9 + 0x30) = plVar25;
    *(long *)((long)puVar5 + lVar9 + 0x38) = lVar10;
    *(ushort *)((long)puVar5 + lVar9 + 0x19) =
         *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
    *(char *)((long)puVar5 + lVar9 + 0x40) = (char)uVar22;
    return puVar12;
  }
  if (bVar1 == 0x54) {
    puVar5 = (undefined8 *)FUN_04036410(param_1);
    return puVar5;
  }
  if (bVar1 == 0x4c) {
    puVar5 = (undefined8 *)FUN_04039168(param_1);
    return puVar5;
  }
  if (*(short *)pbVar15 == 0x6c69) {
    lVar10 = param_1[2];
    lVar9 = param_1[3];
    plVar26 = param_1 + 5;
    pbVar15 = pbVar15 + 2;
    *param_1 = (long)pbVar15;
    do {
      if ((pbVar15 != pbVar28) && (*pbVar15 == 0x45)) {
        *param_1 = (long)(pbVar15 + 1);
        local_70 = FUN_04034628(param_1,lVar9 - lVar10 >> 3);
        puVar5 = (undefined8 *)FUN_0403a6a0(param_1,local_70);
        return puVar5;
      }
      lVar6 = FUN_0403a40c(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar27 = (long)plVar25 - (long)plVar7;
        if (plVar7 == plVar26) {
          pvVar8 = malloc(sVar27 * 2);
          if (pvVar8 == (void *)0x0) goto LAB_04038ae8;
          if (plVar25 != plVar26) {
            memcpy(pvVar8,plVar26,sVar27);
          }
          param_1[2] = (long)pvVar8;
        }
        else {
          pvVar8 = realloc(plVar7,sVar27 * 2);
          param_1[2] = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar8 + sVar27);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar6;
      pbVar15 = (byte *)*param_1;
      pbVar28 = (byte *)param_1[1];
    } while( true );
  }
  uVar18 = (long)pbVar28 - (long)pbVar15;
  if (1 < uVar18) {
    if (*(short *)pbVar15 == 0x636d) {
      *param_1 = (long)(pbVar15 + 2);
      puVar5 = (undefined8 *)FUN_0403a744(param_1);
      return puVar5;
    }
    if (*(short *)pbVar15 == 0x786e) {
      *param_1 = (long)(pbVar15 + 2);
      local_70._0_8_ = FUN_0403770c(param_1);
      if (local_70._0_8_ != 0) {
        local_90 = (long *)CONCAT44(local_90._4_4_,2);
        puVar5 = (undefined8 *)FUN_0403a8c0(param_1,local_70,&local_90);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
  }
  if (((pbVar28 == pbVar15) || (uVar18 < 2)) || (bVar1 != 0x72)) {
    if (1 < uVar18) goto LAB_04037c14;
  }
  else {
    if ((*pbVar16 | 0x20) == 0x71) {
      puVar5 = (undefined8 *)FUN_0403a980(param_1);
      return puVar5;
    }
LAB_04037c14:
    if (*(short *)pbVar15 == 0x6f73) {
      *param_1 = (long)(pbVar15 + 2);
      puVar5 = (undefined8 *)FUN_0403ae88(param_1);
      return puVar5;
    }
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a659df,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0403770c(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_0403b1f8(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a39da4,2);
  if ((uVar18 & 1) != 0) {
    if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
      local_70._0_8_ = FUN_04036410(param_1);
      if (local_70._0_8_ != 0) {
        puVar5 = (undefined8 *)FUN_0403b298(param_1,local_70);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    local_70._0_8_ = FUN_0403a050(param_1);
    if (local_70._0_8_ == 0) {
      return (undefined8 *)0x0;
    }
LAB_0403877c:
    puVar5 = (undefined8 *)FUN_0403b338(param_1,local_70);
    return puVar5;
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a452b3,2);
  if ((uVar18 & 1) != 0) {
    lVar10 = param_1[2];
    lVar9 = param_1[3];
    plVar26 = param_1 + 5;
    while ((pcVar24 = (char *)*param_1, pcVar24 == (char *)param_1[1] || (*pcVar24 != 'E'))) {
      lVar6 = FUN_0403413c(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar27 = (long)plVar25 - (long)plVar7;
        if (plVar7 == plVar26) {
          pvVar8 = malloc(sVar27 * 2);
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar26) {
            memcpy(pvVar8,plVar26,sVar27);
          }
          param_1[2] = (long)pvVar8;
        }
        else {
          pvVar8 = realloc(plVar7,sVar27 * 2);
          param_1[2] = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar8 + sVar27);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar6;
    }
    *param_1 = (long)(pcVar24 + 1);
    local_70 = FUN_04034628(param_1,lVar9 - lVar10 >> 3);
    lVar10 = FUN_0403b3ec(param_1,local_70);
    local_70._0_8_ = lVar10;
    goto LAB_0403877c;
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a7b557,2);
  if ((uVar18 & 1) != 0) {
    local_90 = (long *)FUN_040324c0(param_1);
    if (local_90 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar10 = param_1[2];
    lVar9 = param_1[3];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_040385b8;
    do {
      if (*pcVar24 == 'E') {
        *param_1 = (long)(pcVar24 + 1);
        local_70 = FUN_04034628(param_1,lVar9 - lVar10 >> 3);
        puVar5 = (undefined8 *)FUN_0403b488(param_1,&local_90,local_70);
        return puVar5;
      }
LAB_040385b8:
      do {
        local_70._0_8_ = FUN_0403a40c(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_040344b0(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    } while( true );
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a7598b,2);
  if ((uVar18 & 1) != 0) {
    puVar5 = (undefined8 *)FUN_0403b534(param_1,"throw");
    return puVar5;
  }
  uVar18 = FUN_04031820(param_1,&UNK_01a7b560,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0403770c(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_0403b5dc(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  if ((pcVar24 == (char *)param_1[1]) || (*pcVar24 != 'u')) {
    puVar5 = (undefined8 *)FUN_0403b67c(param_1,sVar3 == 0x7367);
    return puVar5;
  }
  *param_1 = (long)(pcVar24 + 1);
  local_90 = (long *)FUN_04035818(param_1);
  if (local_90 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  auVar29 = (**(code **)(*local_90 + 0x30))();
  if (((auVar29._8_8_ == 8) && (*auVar29._0_8_ == 0x666f646975755f5f)) &&
     (pcVar24 = (char *)*param_1, pcVar24 != (char *)param_1[1])) {
    if (*pcVar24 == 'z') {
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_0403770c(param_1);
    }
    else {
      if (*pcVar24 != 't') goto LAB_04038824;
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_040324c0(param_1);
    }
    if ((long *)local_a0._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar10 = param_1[3] - param_1[2];
    FUN_040344b0(param_1 + 2,local_a0);
  }
  else {
LAB_04038824:
    lVar10 = param_1[3] - param_1[2];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_04038848;
    while (*pcVar24 != 'E') {
LAB_04038848:
      do {
        local_70._0_8_ = FUN_0403413c(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_040344b0(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    }
    *param_1 = (long)(pcVar24 + 1);
  }
  local_70 = FUN_04034628(param_1,lVar10 >> 3);
  iVar14 = 1;
  pplVar13 = &local_90;
LAB_04038608:
  local_80 = CONCAT44(local_80._4_4_,iVar14);
  puVar5 = (undefined8 *)FUN_04038e58(param_1,pplVar13,local_70,&local_80);
  return puVar5;
code_r0x04037db4:
  lVar9 = param_1[0x61];
  *(undefined1 *)(param_1 + 0x61) = 0;
  local_a0._0_8_ = FUN_040324c0(param_1);
  *(char *)(param_1 + 0x61) = (char)lVar9;
  if ((long *)local_a0._0_8_ == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  pcVar17 = (char *)param_1[1];
  lVar9 = param_1[3] - param_1[2] >> 3;
  if (pcVar24 == pcVar17) {
code_r0x0403864c:
    lVar6 = FUN_0403770c(param_1);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    plVar26 = (long *)param_1[3];
    if (plVar26 == (long *)param_1[4]) {
      plVar7 = (long *)param_1[2];
      plVar25 = param_1 + 5;
      sVar27 = (long)plVar26 - (long)plVar7;
      if (plVar7 == plVar25) {
        pvVar8 = malloc(sVar27 * 2);
        if (pvVar8 == (void *)0x0) {
code_r0x04038b08:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar26 != plVar25) {
          memcpy(pvVar8,plVar25,sVar27);
        }
        param_1[2] = (long)pvVar8;
      }
      else {
        pvVar8 = realloc(plVar7,sVar27 * 2);
        param_1[2] = (long)pvVar8;
        if (pvVar8 == (void *)0x0) {
code_r0x04038694:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar26 = (long *)((long)pvVar8 + sVar27);
      param_1[3] = (long)plVar26;
      param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
    }
    param_1[3] = (long)(plVar26 + 1);
    *plVar26 = lVar6;
    local_70 = FUN_04034628(param_1,lVar9);
  }
  else {
    cVar2 = *pcVar24;
    if (cVar2 == '_') {
      pcVar24 = pcVar24 + 1;
      plVar26 = param_1 + 5;
      *param_1 = (long)pcVar24;
      do {
        if ((pcVar24 != pcVar17) && (*pcVar24 == 'E')) goto code_r0x04038628;
        lVar6 = FUN_0403770c(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) goto code_r0x04038b08;
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) goto code_r0x04038694;
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar6;
        pcVar24 = (char *)*param_1;
        pcVar17 = (char *)param_1[1];
      } while( true );
    }
    if (cVar2 != 'E') goto code_r0x0403864c;
code_r0x04038628:
    *param_1 = (long)(pcVar24 + 1);
    local_70 = FUN_04034628(param_1,lVar9);
    if (cVar2 == '_') goto code_r0x0403890c;
  }
  if (local_70._8_8_ != 1) {
    return (undefined8 *)0x0;
  }
code_r0x0403890c:
  local_80 = CONCAT44(local_80._4_4_,(int)(char)(&UNK_08fae3cb)[lVar10] >> 1);
  puVar5 = (undefined8 *)FUN_04038f18(param_1,local_a0,local_70,&local_80);
  return puVar5;
}

