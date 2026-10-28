// rea decompile_all
// name: System.Security.Cryptography.CryptoStream.<WriteAsyncCore>d__49$$MoveNext
// address: 0x745c6a0
// body: available
// range: 0x745c6a0-0x745cb47 inclusive
// range: 0x745cb4c-0x745cc37 inclusive
// range: 0x745cca4-0x745cd1b inclusive
// range: 0x745cd34-0x745cd8f inclusive
// range: 0x745cd94-0x745d363 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745c96c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c9ec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cb08 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cb44 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745cc34 to 0x3f5c550 FUN_03f5c550 (exter
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_CryptoStream_<WriteAsyncCore>d__49__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_c8;
  long local_c0;
  long local_b8;
  int *local_b0;
  int **local_a8;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_6c;
  int *local_68;
  
  local_68 = param_1;
  if ((DAT_09521155 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091c1478);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09185920);
    FUN_03f5c2a4(&DAT_091b9638);
    FUN_03f5c2a4(&DAT_091ba8f0);
    FUN_03f5c2a4(&DAT_0918cae8);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521155 = 1;
  }
  local_80._8_8_ = 0;
  local_6c = *param_1;
  lVar16 = *(long *)(param_1 + 10);
  local_90._8_8_ = 0;
  local_80._0_8_ = 0;
  local_90._0_8_ = 0;
  auVar17 = ZEXT816(0);
  local_98 = 0;
  if (local_6c < 2) {
    if (local_6c == 0) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      local_6c = -1;
      *param_1 = -1;
LAB_0745c868:
      local_90 = auVar17;
      if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_07467eb8(local_80,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0745c888;
    }
    if (local_6c != 1) goto LAB_0745c804;
    local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_6c = -1;
    *param_1 = -1;
    local_90 = auVar17;
LAB_0745c7b8:
    if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_07467eb8(local_80,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0745c7d8:
    *(undefined4 *)(lVar16 + 0x48) = 0;
  }
  else {
    if (local_6c == 3) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      local_6c = -1;
      *param_1 = -1;
      goto LAB_0745d0a8;
    }
    auVar17 = ZEXT816(0);
    if (local_6c == 2) goto LAB_0745cca4;
LAB_0745c804:
    iVar12 = param_1[8];
    iVar1 = param_1[9];
    param_1[0x12] = iVar12;
    param_1[0x13] = iVar1;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar14 = *(int *)(lVar16 + 0x48);
    if (0 < iVar14) {
      iVar3 = *(int *)(lVar16 + 0x4c) - iVar14;
      if (iVar12 < iVar3) {
        System_Buffer__BlockCopy
                  (*(undefined8 *)(param_1 + 0xc),iVar1,*(undefined8 *)(lVar16 + 0x40),iVar14,iVar12
                   ,0);
        piVar9 = local_68 + 8;
LAB_0745cd34:
        *(int *)(lVar16 + 0x48) = *piVar9 + *(int *)(lVar16 + 0x48);
        goto LAB_0745cd44;
      }
      System_Buffer__BlockCopy
                (*(undefined8 *)(param_1 + 0xc),iVar1,*(undefined8 *)(lVar16 + 0x40),iVar14,iVar3,0)
      ;
      iVar14 = *(int *)(lVar16 + 0x4c);
      iVar12 = iVar14 - *(int *)(lVar16 + 0x48);
      local_68[0x12] = local_68[0x12] - iVar12;
      local_68[0x13] = iVar12 + local_68[0x13];
      *(int *)(lVar16 + 0x48) = iVar14;
      param_1 = local_68;
    }
    uVar5 = *(uint *)(lVar16 + 0x58);
    if (0 < (int)uVar5) {
      plVar13 = *(long **)(lVar16 + 0x28);
      if ((char)param_1[0xe] != '\0') {
        lVar10 = *(long *)(lVar16 + 0x50);
        local_b8 = 0;
        local_b0 = (int *)0x0;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if (*(uint *)(lVar10 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        local_b8 = lVar10;
        thunk_FUN_03f5d7b8(&local_b8,lVar10);
        local_b0 = (int *)((ulong)uVar5 << 0x20);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_90 = (**(code **)(*plVar13 + 0x338))
                             (plVar13,local_b8,local_b0,*(undefined8 *)(local_68 + 0x10),
                              *(undefined8 *)(*plVar13 + 0x340));
        if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae0);
        }
        local_80 = System_Threading_Tasks_ValueTask__GetAwaiter(local_90,0);
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae8);
        }
        uVar11 = FUN_07467d78(local_80,0);
        auVar17 = local_90;
        if ((uVar11 & 1) == 0) {
          local_6c = 0;
          *local_68 = 0;
          *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
          thunk_FUN_03f5d7b8(local_68 + 0x16,0);
          piVar9 = local_68;
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09181780,extraout_x1_00,local_68);
          }
          FUN_04992ca0(piVar9 + 2,local_80,local_68,DAT_091c1478);
          return;
        }
        goto LAB_0745c868;
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar13 + 0x398))
                (plVar13,*(undefined8 *)(lVar16 + 0x50),0,uVar5,*(undefined8 *)(*plVar13 + 0x3a0));
LAB_0745c888:
      iVar14 = *(int *)(lVar16 + 0x48);
      *(undefined4 *)(lVar16 + 0x58) = 0;
    }
    if (iVar14 == *(int *)(lVar16 + 0x4c)) {
      plVar13 = *(long **)(lVar16 + 0x30);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar13;
      uVar15 = *(undefined8 *)(lVar16 + 0x40);
      uVar8 = *(undefined8 *)(lVar16 + 0x50);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185920) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0745c998;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185920,3);
LAB_0745c998:
      uVar5 = (*(code *)*puVar6)(plVar13,uVar15,0,iVar14,uVar8,0,puVar6[1]);
      local_68[0x14] = uVar5;
      plVar13 = *(long **)(lVar16 + 0x28);
      if ((char)local_68[0xe] != '\0') {
        lVar10 = *(long *)(lVar16 + 0x50);
        local_b8 = 0;
        local_b0 = (int *)0x0;
        if (lVar10 == 0) {
          if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_b8 = 0;
          local_b0 = (int *)0x0;
        }
        else {
          if (*(uint *)(lVar10 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_b8 = lVar10;
          thunk_FUN_03f5d7b8(&local_b8,lVar10);
          local_b0 = (int *)((ulong)uVar5 << 0x20);
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar17 = (**(code **)(*plVar13 + 0x338))
                            (plVar13,local_b8,local_b0,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar13 + 0x340));
        local_90 = auVar17;
        if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae0);
        }
        auVar17 = System_Threading_Tasks_ValueTask__GetAwaiter(local_90,0);
        local_80 = auVar17;
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae8);
        }
        uVar11 = FUN_07467d78(local_80,0);
        if ((uVar11 & 1) == 0) {
          local_6c = 1;
          *local_68 = 1;
          *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
          thunk_FUN_03f5d7b8(local_68 + 0x16,0);
          piVar9 = local_68;
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09181780,extraout_x1,local_68);
          }
          FUN_04992ca0(piVar9 + 2,local_80,local_68,DAT_091c1478);
          return;
        }
        goto LAB_0745c7b8;
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar13 + 0x398))
                (plVar13,*(undefined8 *)(lVar16 + 0x50),0,uVar5,*(undefined8 *)(*plVar13 + 0x3a0));
      goto LAB_0745c7d8;
    }
  }
  while (iVar12 = local_68[0x12], 0 < iVar12) {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar16 + 0x4c);
    if (iVar12 < iVar1) {
      System_Buffer__BlockCopy
                (*(undefined8 *)(local_68 + 0xc),local_68[0x13],*(undefined8 *)(lVar16 + 0x40),0,
                 iVar12,0);
      piVar9 = local_68 + 0x12;
      goto LAB_0745cd34;
    }
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar14 = 0;
    if (iVar1 != 0) {
      iVar14 = iVar12 / iVar1;
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185920) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0745ce10;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185920,2);
LAB_0745ce10:
    bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar10 = DAT_09175020;
    if ((1 < iVar14 & bVar4) == 0) {
      plVar13 = *(long **)(lVar16 + 0x30);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar13;
      uVar2 = *(undefined4 *)(lVar16 + 0x4c);
      uVar15 = *(undefined8 *)(lVar16 + 0x50);
      uVar8 = *(undefined8 *)(local_68 + 0xc);
      iVar12 = local_68[0x13];
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185920) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0745cfcc;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185920,3);
LAB_0745cfcc:
      uVar5 = (*(code *)*puVar6)(plVar13,uVar8,iVar12,uVar2,uVar15,0,puVar6[1]);
      local_68[0x14] = uVar5;
      plVar13 = *(long **)(lVar16 + 0x28);
      if ((char)local_68[0xe] == '\0') {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar13 + 0x398))
                  (plVar13,*(undefined8 *)(lVar16 + 0x50),0,uVar5,*(undefined8 *)(*plVar13 + 0x3a0))
        ;
      }
      else {
        lVar10 = *(long *)(lVar16 + 0x50);
        local_b8 = 0;
        local_b0 = (int *)0x0;
        if (lVar10 == 0) {
          if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_b8 = 0;
          local_b0 = (int *)0x0;
        }
        else {
          if (*(uint *)(lVar10 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_b8 = lVar10;
          thunk_FUN_03f5d7b8(&local_b8,lVar10);
          local_b0 = (int *)((ulong)uVar5 << 0x20);
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar17 = (**(code **)(*plVar13 + 0x338))
                            (plVar13,local_b8,local_b0,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar13 + 0x340));
        local_90 = auVar17;
        if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae0);
        }
        auVar17 = System_Threading_Tasks_ValueTask__GetAwaiter(local_90,0);
        local_80 = auVar17;
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae8);
        }
        uVar11 = FUN_07467d78(local_80,0);
        auVar17 = local_90;
        if ((uVar11 & 1) == 0) {
          local_6c = 3;
          *local_68 = 3;
          *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
          thunk_FUN_03f5d7b8(local_68 + 0x16,0);
          piVar9 = local_68;
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09181780,extraout_x1_02,local_68);
          }
          FUN_04992ca0(piVar9 + 2,local_80,local_68,DAT_091c1478);
          return;
        }
LAB_0745d0a8:
        local_90 = auVar17;
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_07467eb8(local_80,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      iVar12 = *(int *)(lVar16 + 0x4c);
      local_68[0x12] = local_68[0x12] - iVar12;
      local_68[0x13] = iVar12 + local_68[0x13];
    }
    else {
      local_68[0x1a] = *(int *)(lVar16 + 0x4c) * iVar14;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_09197190;
      lVar7 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      plVar13 = (long *)**(long **)(lVar10 + 0xb8);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = (**(code **)(*plVar13 + 0x178))
                        (plVar13,*(int *)(lVar16 + 0x5c) * iVar14,*(undefined8 *)(*plVar13 + 0x180))
      ;
      *(undefined8 *)(local_68 + 0x1c) = uVar8;
      thunk_FUN_03f5d7b8();
      local_b0 = &local_6c;
      local_b8 = 0;
      local_a8 = &local_68;
      local_68[0x14] = 0;
      param_1 = local_68;
      auVar17 = local_90;
      if (local_6c == 2) {
LAB_0745cca4:
        local_90 = auVar17;
        local_a8 = &local_68;
        local_b0 = &local_6c;
        local_b8 = 0;
        local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        local_6c = -1;
        *param_1 = -1;
LAB_0745ccbc:
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_07467eb8(local_80,0);
LAB_0745ccd8:
        iVar12 = 0x1a;
        local_68[0x12] = local_68[0x12] - local_68[0x1a];
        local_68[0x13] = local_68[0x1a] + local_68[0x13];
      }
      else {
        plVar13 = *(long **)(lVar16 + 0x30);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar13;
        uVar15 = *(undefined8 *)(local_68 + 0xc);
        iVar12 = local_68[0x13];
        iVar1 = local_68[0x1a];
        uVar8 = *(undefined8 *)(local_68 + 0x1c);
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185920) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_0745d134;
            }
            uVar11 = uVar11 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185920,3);
LAB_0745d134:
        uVar5 = (*(code *)*puVar6)(plVar13,uVar15,iVar12,iVar1,uVar8,0,puVar6[1]);
        local_68[0x14] = uVar5;
        plVar13 = *(long **)(lVar16 + 0x28);
        if ((char)local_68[0xe] == '\0') {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*plVar13 + 0x398))
                    (plVar13,*(undefined8 *)(local_68 + 0x1c),0,uVar5,
                     *(undefined8 *)(*plVar13 + 0x3a0));
          goto LAB_0745ccd8;
        }
        lVar10 = *(long *)(local_68 + 0x1c);
        local_c8 = 0;
        local_c0 = 0;
        if (lVar10 == 0) {
          if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_c8 = 0;
          local_c0 = 0;
        }
        else {
          if (*(uint *)(lVar10 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_c8 = lVar10;
          thunk_FUN_03f5d7b8(&local_c8,lVar10);
          local_c0 = (ulong)uVar5 << 0x20;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar17 = (**(code **)(*plVar13 + 0x338))
                            (plVar13,local_c8,local_c0,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar13 + 0x340));
        local_90 = auVar17;
        if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae0);
        }
        auVar17 = System_Threading_Tasks_ValueTask__GetAwaiter(local_90,0);
        local_80 = auVar17;
        if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918cae8);
        }
        uVar11 = FUN_07467d78(local_80,0);
        if ((uVar11 & 1) != 0) goto LAB_0745ccbc;
        local_6c = 2;
        *local_68 = 2;
        *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
        thunk_FUN_03f5d7b8(local_68 + 0x16,0);
        piVar9 = local_68;
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09181780,extraout_x1_01,local_68);
        }
        iVar12 = 0xd;
        FUN_04992ca0(piVar9 + 2,local_80,local_68,DAT_091c1478);
      }
      FUN_03eae278(&local_b8);
      if ((iVar12 != 0x1a) && (iVar12 != 0)) {
        return;
      }
      piVar9 = local_68 + 0x1c;
      piVar9[0] = 0;
      piVar9[1] = 0;
      thunk_FUN_03f5d7b8(piVar9,0);
    }
  }
LAB_0745cd44:
  piVar9 = local_68 + 2;
  *local_68 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(piVar9,0);
  return;
}

