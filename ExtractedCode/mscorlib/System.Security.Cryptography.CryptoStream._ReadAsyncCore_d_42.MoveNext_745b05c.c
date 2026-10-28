// rea decompile_all
// name: System.Security.Cryptography.CryptoStream.<ReadAsyncCore>d__42$$MoveNext
// address: 0x745b05c
// body: available
// range: 0x745b05c-0x745b3d7 inclusive
// range: 0x745b3e4-0x745b5c7 inclusive
// range: 0x745b5d4-0x745b98f inclusive
// range: 0x745ba70-0x745bd17 inclusive
// range: 0x745bd20-0x745bfbb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745b2a8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b2fc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b348 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b3d4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b5ac to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b5c4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b824 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b87c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745b96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionMa
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_CryptoStream_<ReadAsyncCore>d__42__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  int **local_b0;
  undefined4 local_98;
  undefined1 local_90 [16];
  int local_7c;
  int *local_78;
  undefined1 local_70 [16];
  
  local_78 = param_1;
  if ((DAT_09521151 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_09198b58);
    FUN_03f5c2a4(&DAT_09198bd8);
    FUN_03f5c2a4(&DAT_09175248);
    FUN_03f5c2a4(&DAT_09185920);
    FUN_03f5c2a4(&DAT_091b4708);
    FUN_03f5c2a4(&DAT_091ba8f0);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091beb38);
    FUN_03f5c2a4(&DAT_091beb40);
    FUN_03f5c2a4(&DAT_091beb88);
    DAT_09521151 = 1;
  }
  local_7c = *param_1;
  local_90._8_8_ = 0;
  lVar15 = *(long *)(param_1 + 10);
  local_90._0_8_ = 0;
  local_98 = 0;
  if (local_7c == 1) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    local_7c = -1;
    *param_1 = -1;
    goto LAB_0745bbb8;
  }
  if (local_7c == 0) {
LAB_0745b184:
    local_b0 = &local_78;
    uStack_b8 = &local_7c;
    local_c0 = (undefined1  [8])0x0;
    local_7c = -1;
    local_90 = *(undefined1 (*) [16])(local_78 + 0x1a);
    local_78[0x1a] = 0;
    local_78[0x1b] = 0;
    local_78[0x1c] = 0;
    local_78[0x1d] = 0;
    *local_78 = -1;
LAB_0745b1a0:
    lVar6 = *(long *)(DAT_091beb38 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    iVar4 = FUN_065b149c(local_90,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0745b1d0:
    iVar1 = *(int *)(lVar15 + 0x48);
    if (iVar1 + iVar4 < *(int *)(lVar15 + 0x4c)) {
      System_Buffer__BlockCopy
                (*(undefined8 *)(local_78 + 0x16),iVar1,*(undefined8 *)(lVar15 + 0x40),iVar1,iVar4,0
                );
      *(int *)(lVar15 + 0x48) = iVar1 + iVar4;
      iVar4 = 0x11;
    }
    else {
      System_Buffer__BlockCopy
                (*(undefined8 *)(lVar15 + 0x40),0,*(undefined8 *)(local_78 + 0x16),0,iVar1,0);
      lVar6 = *(long *)(lVar15 + 0x40);
      uVar5 = *(uint *)(lVar15 + 0x48);
      if (lVar6 == 0) {
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar6 = 0;
        uVar5 = 0;
      }
      else {
        if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar6 = lVar6 + 0x20;
      }
      System_Security_Cryptography_CryptographicOperations__ZeroMemory(lVar6,uVar5,0);
      iVar1 = *(int *)(lVar15 + 0x48);
      iVar2 = *(int *)(lVar15 + 0x4c);
      *(undefined4 *)(lVar15 + 0x48) = 0;
      iVar1 = iVar1 + iVar4;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar1 / iVar2;
      }
      iVar2 = iVar4 * iVar2;
      iVar1 = iVar1 - iVar2;
      if (iVar1 != 0) {
        *(int *)(lVar15 + 0x48) = iVar1;
        System_Buffer__BlockCopy
                  (*(undefined8 *)(local_78 + 0x16),iVar2,*(undefined8 *)(lVar15 + 0x40),0,iVar1,0);
      }
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = DAT_09197190;
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
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      plVar12 = (long *)**(long **)(lVar6 + 0xb8);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = (**(code **)(*plVar12 + 0x178))
                         (plVar12,*(int *)(lVar15 + 0x5c) * iVar4,*(undefined8 *)(*plVar12 + 0x180))
      ;
      *(undefined8 *)(local_78 + 0x18) = uVar13;
      thunk_FUN_03f5d7b8();
      plVar12 = *(long **)(lVar15 + 0x30);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar12;
      uVar13 = *(undefined8 *)(local_78 + 0x16);
      uVar14 = *(undefined8 *)(local_78 + 0x18);
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185920) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_0745b54c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185920,3);
LAB_0745b54c:
      uVar5 = (*(code *)*puVar8)(plVar12,uVar13,0,iVar2,uVar14,0,puVar8[1]);
      System_Buffer__BlockCopy
                (*(undefined8 *)(local_78 + 0x18),0,*(undefined8 *)(local_78 + 0xc),local_78[0x13],
                 uVar5,0);
      lVar6 = *(long *)(local_78 + 0x18);
      if (lVar6 == 0) {
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar6 = 0;
        uVar9 = 0;
      }
      else {
        if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar6 = lVar6 + 0x20;
        uVar9 = uVar5;
      }
      System_Security_Cryptography_CryptographicOperations__ZeroMemory(lVar6,uVar9,0);
      lVar6 = DAT_09197190;
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
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      plVar12 = (long *)**(long **)(lVar6 + 0xb8);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar12 + 0x188))
                (plVar12,*(undefined8 *)(local_78 + 0x18),0,*(undefined8 *)(*plVar12 + 400));
      piVar11 = local_78 + 0x18;
      piVar11[0] = 0;
      piVar11[1] = 0;
      thunk_FUN_03f5d7b8(piVar11,0);
      iVar4 = 0x11;
      local_78[0x12] = local_78[0x12] - uVar5;
      local_78[0x13] = local_78[0x13] + uVar5;
    }
LAB_0745b698:
    FUN_03eae01c(local_c0);
    if ((iVar4 != 0x11) && (iVar4 != 0)) {
      return;
    }
    piVar11 = local_78 + 0x16;
    piVar11[0] = 0;
    piVar11[1] = 0;
    thunk_FUN_03f5d7b8(piVar11,0);
    piVar11 = local_78 + 0x18;
    piVar11[0] = 0;
    piVar11[1] = 0;
    thunk_FUN_03f5d7b8(piVar11,0);
  }
  else {
    iVar4 = param_1[8];
    iVar1 = param_1[9];
    param_1[0x12] = iVar4;
    param_1[0x13] = iVar1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = *(int *)(lVar15 + 0x58);
    if (iVar2 != 0) {
      if (iVar4 < iVar2) {
        System_Buffer__BlockCopy
                  (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(param_1 + 0xc),iVar1,iVar4,0);
        System_Buffer__BlockCopy
                  (*(undefined8 *)(lVar15 + 0x50),local_78[8],*(undefined8 *)(lVar15 + 0x50),0,
                   *(int *)(lVar15 + 0x58) - local_78[8],0);
        lVar6 = *(long *)(lVar15 + 0x50);
        uVar5 = *(int *)(lVar15 + 0x58) - local_78[8];
        *(uint *)(lVar15 + 0x58) = uVar5;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        System_Security_Cryptography_CryptographicOperations__ZeroMemory
                  (lVar6 + (int)uVar5 + 0x20,*(uint *)(lVar6 + 0x18) - uVar5,0);
        goto LAB_0745bae0;
      }
      System_Buffer__BlockCopy
                (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(param_1 + 0xc),iVar1,iVar2,0);
      uVar5 = *(uint *)(lVar15 + 0x58);
      local_78[0x12] = local_78[0x12] - uVar5;
      local_78[0x13] = local_78[0x13] + uVar5;
      lVar6 = *(long *)(lVar15 + 0x50);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      System_Security_Cryptography_CryptographicOperations__ZeroMemory
                (lVar6 + (int)uVar5 + 0x20,*(uint *)(lVar6 + 0x18) - uVar5,0);
      *(undefined4 *)(lVar15 + 0x58) = 0;
    }
    if (*(char *)(lVar15 + 0x62) != '\0') goto LAB_0745ba78;
    iVar4 = 0;
    if (*(int *)(lVar15 + 0x5c) != 0) {
      iVar4 = local_78[0x12] / *(int *)(lVar15 + 0x5c);
    }
    if (1 < iVar4) {
      plVar12 = *(long **)(lVar15 + 0x30);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185920) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_0745b6e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185920,2);
LAB_0745b6e4:
      uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      lVar6 = DAT_09175020;
      if ((uVar10 & 1) != 0) {
        local_78[0x14] = *(int *)(lVar15 + 0x4c) * iVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = DAT_09197190;
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
        lVar6 = *(long *)(lVar6 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        plVar12 = (long *)**(long **)(lVar6 + 0xb8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar13 = (**(code **)(*plVar12 + 0x178))
                           (plVar12,local_78[0x14],*(undefined8 *)(*plVar12 + 0x180));
        *(undefined8 *)(local_78 + 0x16) = uVar13;
        thunk_FUN_03f5d7b8();
        piVar11 = local_78 + 0x18;
        piVar11[0] = 0;
        piVar11[1] = 0;
        thunk_FUN_03f5d7b8(piVar11,0);
        uStack_b8 = &local_7c;
        local_c0 = (undefined1  [8])0x0;
        local_b0 = &local_78;
        if (local_7c == 0) goto LAB_0745b184;
        plVar12 = *(long **)(lVar15 + 0x28);
        if ((char)local_78[0xe] == '\0') {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar4 = (**(code **)(*plVar12 + 0x368))
                            (plVar12,*(undefined8 *)(local_78 + 0x16),*(int *)(lVar15 + 0x48),
                             local_78[0x14] - *(int *)(lVar15 + 0x48),
                             *(undefined8 *)(*plVar12 + 0x370));
          goto LAB_0745b1d0;
        }
        lVar6 = *(long *)(local_78 + 0x16);
        uVar5 = *(uint *)(lVar15 + 0x48);
        local_d0 = 0;
        local_c8 = 0;
        uVar9 = local_78[0x14] - uVar5;
        if (lVar6 == 0) {
          if (uVar9 != 0 || uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_d0 = 0;
          local_c8 = 0;
        }
        else {
          if ((*(uint *)(lVar6 + 0x18) < uVar5) || (*(uint *)(lVar6 + 0x18) - uVar5 < uVar9)) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_d0 = lVar6;
          thunk_FUN_03f5d7b8(&local_d0,lVar6);
          local_c8 = CONCAT44(uVar9,uVar5);
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = (**(code **)(*plVar12 + 0x2f8))
                            (plVar12,local_d0,local_c8,*(undefined8 *)(local_78 + 0x10),
                             *(undefined8 *)(*plVar12 + 0x300));
        local_70._0_8_ = 0;
        local_70._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091beb88 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = auVar16;
        thunk_FUN_03f5d7b8(local_70,0);
        lVar6 = *(long *)(DAT_091beb40 + 0x20);
        local_90 = local_70;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        uVar10 = FUN_065b1370(local_90,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
        if ((uVar10 & 1) != 0) goto LAB_0745b1a0;
        local_7c = 0;
        *local_78 = 0;
        *(undefined1 (*) [16])(local_78 + 0x1a) = local_90;
        thunk_FUN_03f5d7b8(local_78 + 0x1a,0);
        piVar11 = local_78;
        if (*(int *)(DAT_09175248 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09175248,extraout_x1,local_78);
        }
        FUN_045dc2a8(piVar11 + 2,local_90,local_78,DAT_09198b58);
        iVar4 = 0xc;
        goto LAB_0745b698;
      }
    }
  }
  while (0 < local_78[0x12]) {
    while( true ) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(uint *)(lVar15 + 0x48);
      iVar4 = *(int *)(lVar15 + 0x4c);
      uVar9 = iVar4 - uVar5;
      if (uVar9 == 0 || iVar4 < (int)uVar5) break;
      plVar12 = *(long **)(lVar15 + 0x28);
      if ((char)local_78[0xe] == '\0') {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = (**(code **)(*plVar12 + 0x368))
                          (plVar12,*(undefined8 *)(lVar15 + 0x40),uVar5,uVar9,
                           *(undefined8 *)(*plVar12 + 0x370));
      }
      else {
        lVar6 = *(long *)(lVar15 + 0x40);
        local_d0 = 0;
        local_c8 = 0;
        if (lVar6 == 0) {
          if (uVar9 != 0 || uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_d0 = 0;
          local_c8 = 0;
        }
        else {
          if ((*(uint *)(lVar6 + 0x18) < uVar5) || (*(uint *)(lVar6 + 0x18) - uVar5 < uVar9)) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          local_d0 = lVar6;
          thunk_FUN_03f5d7b8(&local_d0,lVar6);
          local_c8 = CONCAT44(uVar9,uVar5);
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = (**(code **)(*plVar12 + 0x2f8))
                            (plVar12,local_d0,local_c8,*(undefined8 *)(local_78 + 0x10),
                             *(undefined8 *)(*plVar12 + 0x300));
        local_c0 = (undefined1  [8])0x0;
        uStack_b8 = (int *)0x0;
        if ((*(byte *)(*(long *)(DAT_091beb88 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        _local_c0 = auVar16;
        thunk_FUN_03f5d7b8(local_c0,0);
        lVar6 = *(long *)(DAT_091beb40 + 0x20);
        local_90 = _local_c0;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        uVar10 = FUN_065b1370(local_90,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
        if ((uVar10 & 1) == 0) {
          local_7c = 1;
          *local_78 = 1;
          *(undefined1 (*) [16])(local_78 + 0x1a) = local_90;
          thunk_FUN_03f5d7b8(local_78 + 0x1a,0);
          piVar11 = local_78;
          if (*(int *)(DAT_09175248 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09175248,extraout_x1_00,local_78);
          }
          FUN_045dc2a8(piVar11 + 2,local_90,local_78,DAT_09198b58);
          return;
        }
LAB_0745bbb8:
        lVar6 = *(long *)(DAT_091beb38 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        iVar4 = FUN_065b149c(local_90,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
      }
      if (iVar4 == 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar12 = *(long **)(lVar15 + 0x30);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar12;
        uVar13 = *(undefined8 *)(lVar15 + 0x40);
        uVar3 = *(undefined4 *)(lVar15 + 0x48);
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 == 0) goto LAB_0745bda0;
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0745bd88;
      }
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + iVar4;
    }
    plVar12 = *(long **)(lVar15 + 0x30);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar12;
    uVar14 = *(undefined8 *)(lVar15 + 0x40);
    uVar13 = *(undefined8 *)(lVar15 + 0x50);
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185920) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_0745bc8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185920,3);
LAB_0745bc8c:
    uVar5 = (*(code *)*puVar8)(plVar12,uVar14,0,iVar4,uVar13,0,puVar8[1]);
    *(undefined4 *)(lVar15 + 0x48) = 0;
    if (local_78[0x12] < (int)uVar5) {
      System_Buffer__BlockCopy
                (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(local_78 + 0xc),local_78[0x13],
                 local_78[0x12],0);
      iVar4 = local_78[0x12];
      iVar1 = uVar5 - iVar4;
      *(int *)(lVar15 + 0x58) = iVar1;
      System_Buffer__BlockCopy
                (*(undefined8 *)(lVar15 + 0x50),iVar4,*(undefined8 *)(lVar15 + 0x50),0,iVar1,0);
      lVar6 = *(long *)(lVar15 + 0x50);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(uint *)(lVar15 + 0x58);
      if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      System_Security_Cryptography_CryptographicOperations__ZeroMemory
                (lVar6 + (int)uVar5 + 0x20,*(uint *)(lVar6 + 0x18) - uVar5,0);
      break;
    }
    System_Buffer__BlockCopy
              (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(local_78 + 0xc),local_78[0x13],uVar5
               ,0);
    lVar6 = *(long *)(lVar15 + 0x50);
    if (lVar6 == 0) {
      lVar6 = 0;
      uVar9 = 0;
      if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0,0);
      }
    }
    else {
      if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar6 = lVar6 + 0x20;
      uVar9 = uVar5;
    }
    System_Security_Cryptography_CryptographicOperations__ZeroMemory(lVar6,uVar9,0);
    local_78[0x12] = local_78[0x12] - uVar5;
    local_78[0x13] = local_78[0x13] + uVar5;
  }
  goto LAB_0745bae0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0745bd88:
    if (*(long *)(piVar11 + -2) == DAT_09185920) {
      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
      goto LAB_0745be84;
    }
  }
LAB_0745bda0:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185920,4);
LAB_0745be84:
  lVar6 = (*(code *)*puVar8)(plVar12,uVar13,0,uVar3,puVar8[1]);
  plVar12 = (long *)(lVar15 + 0x50);
  *plVar12 = lVar6;
  thunk_FUN_03f5d7b8(plVar12,lVar6);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = *(int *)(lVar6 + 0x18);
  *(undefined1 *)(lVar15 + 0x62) = 1;
  *(int *)(lVar15 + 0x58) = iVar4;
  if (iVar4 <= local_78[0x12]) {
    System_Buffer__BlockCopy
              (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(local_78 + 0xc),local_78[0x13],iVar4
               ,0);
    local_78[0x12] = local_78[0x12] - *(int *)(lVar15 + 0x58);
    *(undefined4 *)(lVar15 + 0x58) = 0;
    auVar16 = FUN_0610892c(*(undefined8 *)(lVar15 + 0x50),DAT_091ba938);
    System_Security_Cryptography_CryptographicOperations__ZeroMemory(auVar16._0_8_,auVar16._8_8_,0);
LAB_0745ba78:
    iVar4 = local_78[8] - local_78[0x12];
    goto LAB_0745ba84;
  }
  System_Buffer__BlockCopy
            (*(undefined8 *)(lVar15 + 0x50),0,*(undefined8 *)(local_78 + 0xc),local_78[0x13],
             local_78[0x12],0);
  iVar4 = local_78[0x12];
  iVar1 = *(int *)(lVar15 + 0x58) - iVar4;
  *(int *)(lVar15 + 0x58) = iVar1;
  System_Buffer__BlockCopy
            (*(undefined8 *)(lVar15 + 0x50),iVar4,*(undefined8 *)(lVar15 + 0x50),0,iVar1,0);
  lVar6 = *plVar12;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(uint *)(lVar15 + 0x58);
  if (*(uint *)(lVar6 + 0x18) < uVar5) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  System_Security_Cryptography_CryptographicOperations__ZeroMemory
            (lVar6 + (int)uVar5 + 0x20,*(uint *)(lVar6 + 0x18) - uVar5,0);
LAB_0745bae0:
  iVar4 = local_78[8];
LAB_0745ba84:
  piVar11 = local_78 + 2;
  *local_78 = -2;
  if (*(int *)(DAT_09175248 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f5d88(piVar11,iVar4,DAT_09198bd8);
  return;
}

