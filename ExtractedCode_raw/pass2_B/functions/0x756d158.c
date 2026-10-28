// rea decompile_all
// name: System.IO.StreamReader.<ReadAsyncInternal>d__66$$MoveNext
// address: 0x756d158
// body: available
// range: 0x756d158-0x756d413 inclusive
// range: 0x756d440-0x756d66f inclusive
// range: 0x756d674-0x756d6ab inclusive
// range: 0x756d6b4-0x756d76f inclusive
// range: 0x756d7bc-0x756da6f inclusive
// range: 0x756da78-0x756daaf inclusive
// range: 0x756dab8-0x756db93 inclusive
// range: 0x756db9c-0x756dc93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756d334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d40c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d4a0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d620 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d66c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d6a8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d75c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756d768 to 0x3f5c550 FUN_03f5c550 (exter
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_IO_StreamReader_<ReadAsyncInternal>d__66__MoveNext(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  long local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  if ((DAT_09521a21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a248);
    FUN_03f5c2a4(&DAT_0919a250);
    FUN_03f5c2a4(&DAT_0919a288);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_091b4708);
    FUN_03f5c2a4(&DAT_091b4700);
    FUN_03f5c2a4(&DAT_091b4760);
    FUN_03f5c2a4(&DAT_091b4768);
    FUN_03f5c2a4(&DAT_091b9758);
    FUN_03f5c2a4(&DAT_091ba960);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba958);
    FUN_03f5c2a4(&DAT_091bcc68);
    FUN_03f5c2a4(&DAT_091beb80);
    DAT_09521a21 = 1;
  }
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  auVar4 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  uStack_98 = 0;
  iVar7 = *param_1;
  lVar11 = *(long *)(param_1 + 10);
  local_b0._8_8_ = 0;
  local_a0 = 0;
  local_b0._0_8_ = 0;
  auVar3 = ZEXT816(0);
  local_b8 = 0;
  if (iVar7 == 0) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_0756d310:
    iVar7 = FUN_06dab124(local_90,DAT_0919ba18);
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_0756d7c0;
    }
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    auVar14 = local_90;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (iVar7 == 1) {
      uStack_98 = *(ulong *)(param_1 + 0x22);
      local_a0 = *(undefined8 *)(param_1 + 0x20);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *param_1 = -1;
      goto LAB_0756d5ac;
    }
    if (iVar7 == 2) {
      uStack_98 = *(ulong *)(param_1 + 0x22);
      local_a0 = *(undefined8 *)(param_1 + 0x20);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *param_1 = -1;
      local_b0 = ZEXT816(0);
      local_90 = auVar4;
      goto LAB_0756d938;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar11 + 0x40) == *(int *)(lVar11 + 0x44)) {
      lVar9 = System_IO_StreamReader__ReadBufferAsync(lVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_90 = FUN_062ebc5c(lVar9,0,DAT_091bcc68);
      uVar10 = FUN_06dab0dc(local_90,DAT_0919ba20);
      if ((uVar10 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
        FUN_04778858(param_1 + 2,local_90,param_1,DAT_0919a248);
        return;
      }
      goto LAB_0756d310;
    }
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(lVar11 + 0x30);
  local_90 = auVar14;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(lVar11 + 0x18);
  thunk_FUN_03f5d7b8();
  uVar6 = FUN_05a4a9fc(param_1 + 0xc,DAT_091b4760);
  param_1[0x18] = uVar6;
  do {
    if ((int)uVar6 < 1) break;
    uVar12 = *(int *)(lVar11 + 0x44) - *(int *)(lVar11 + 0x40);
    param_1[0x1e] = uVar12;
    if (uVar12 == 0) {
      cVar2 = *(char *)(lVar11 + 0x55);
      *(undefined8 *)(lVar11 + 0x40) = 0;
      if (cVar2 == '\0') {
        *(undefined4 *)(lVar11 + 0x48) = 0;
      }
      *(bool *)(param_1 + 0x13) = *(int *)(lVar11 + 0x50) <= (int)uVar6;
      if (cVar2 == '\0') goto LAB_0756d820;
      while( true ) {
        lVar9 = *(long *)(param_1 + 0x14);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(uint *)(lVar11 + 0x4c);
        uVar12 = *(uint *)(lVar9 + 0x18);
        plVar13 = *(long **)(param_1 + 0x16);
        local_d0 = 0;
        local_c8 = 0;
        if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        local_d0 = lVar9;
        thunk_FUN_03f5d7b8(&local_d0,lVar9);
        local_c8 = CONCAT44(uVar12 - uVar6,uVar6);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar14 = (**(code **)(*plVar13 + 0x2f8))
                            (plVar13,local_d0,local_c8,*(undefined8 *)(param_1 + 0x10),
                             *(undefined8 *)(*plVar13 + 0x300));
        lVar9 = DAT_091beb80;
        local_80 = 0;
        uStack_78 = 0;
        if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_80 = auVar14._0_8_;
        thunk_FUN_03f5d7b8(&local_80,auVar14._0_8_);
        uVar5 = local_80;
        uVar10 = uStack_78 >> 0x30;
        uStack_78._0_6_ = auVar14._8_6_;
        uStack_78 = CONCAT26((short)uVar10,(undefined6)uStack_78) & 0xff00ffffffffffff;
        uVar10 = uStack_78;
        local_70 = 0;
        uStack_68 = 0;
        if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_68 = uVar10;
        local_70 = uVar5;
        thunk_FUN_03f5d7b8(&local_70,0);
        uVar10 = uStack_68;
        uVar5 = local_70;
        local_70 = 0;
        uStack_68 = 0;
        if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = uVar5;
        uStack_68 = uVar10;
        thunk_FUN_03f5d7b8(&local_70,0);
        lVar9 = *(long *)(DAT_0919bb00 + 0x20);
        uStack_98 = uStack_68;
        local_a0 = local_70;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        uVar10 = FUN_065b1370(&local_a0,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
        auVar3 = local_b0;
        auVar4 = local_90;
        if ((uVar10 & 1) == 0) {
          *param_1 = 1;
          *(ulong *)(param_1 + 0x22) = uStack_98;
          *(undefined8 *)(param_1 + 0x20) = local_a0;
          thunk_FUN_03f5d7b8(param_1 + 0x20,0);
          FUN_047788e8(param_1 + 2,&local_a0,param_1,DAT_0919a250);
          return;
        }
LAB_0756d5ac:
        lVar9 = *(long *)(DAT_0919baf8 + 0x20);
        local_b0 = auVar3;
        local_90 = auVar4;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        iVar7 = FUN_065b149c(&local_a0,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
        if (iVar7 == 0) break;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar7 = *(int *)(lVar11 + 0x48) + iVar7;
        *(int *)(lVar11 + 0x48) = iVar7;
        while( true ) {
          if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(bool *)(lVar11 + 0x56) = iVar7 < *(int *)(*(long *)(param_1 + 0x14) + 0x18);
          uVar10 = System_IO_StreamReader__IsPreamble(lVar11);
          if ((uVar10 & 1) == 0) {
            if ((*(char *)(lVar11 + 0x54) != '\0') && (1 < *(int *)(lVar11 + 0x48))) {
              System_IO_StreamReader__DetectEncoding(lVar11);
              *(bool *)(param_1 + 0x13) = *(int *)(lVar11 + 0x50) <= param_1[0x18];
            }
            *(undefined4 *)(lVar11 + 0x40) = 0;
            if ((char)param_1[0x13] == '\0') {
              plVar13 = *(long **)(lVar11 + 0x28);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar7 = (**(code **)(*plVar13 + 0x1b8))
                                (plVar13,*(undefined8 *)(param_1 + 0x14),0,
                                 *(undefined4 *)(lVar11 + 0x48),*(undefined8 *)(lVar11 + 0x38),0,
                                 *(undefined8 *)(*plVar13 + 0x1c0));
              param_1[0x1e] = iVar7;
              *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + iVar7;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x14);
              iVar1 = param_1[0x1e];
              plVar13 = *(long **)(lVar11 + 0x28);
              uVar6 = *(uint *)(lVar11 + 0x48);
              if (lVar9 == 0) {
                uVar12 = 0;
                lVar9 = 0;
                if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
                }
              }
              else {
                if (*(uint *)(lVar9 + 0x18) < uVar6) {
                    /* WARNING: Subroutine does not return */
                  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
                }
                lVar9 = lVar9 + 0x20;
                uVar12 = uVar6;
              }
              auVar14 = FUN_05a50e74(param_1 + 0xc,DAT_091b4768);
              uVar6 = param_1[0x12];
              local_b0 = auVar14;
              if (auVar14._8_4_ < uVar6) {
                    /* WARNING: Subroutine does not return */
                System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
              }
              if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
                FUN_03f95a6c();
              }
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar7 = (**(code **)(*plVar13 + 0x1e8))
                                (plVar13,lVar9,uVar12,auVar14._0_8_ + (long)(int)uVar6 * 2,
                                 auVar14._8_4_ - uVar6,0,*(undefined8 *)(*plVar13 + 0x1f0));
              iVar7 = iVar7 + iVar1;
              param_1[0x1e] = iVar7;
              *(undefined4 *)(lVar11 + 0x44) = 0;
            }
          }
          else {
            iVar7 = param_1[0x1e];
          }
          if (iVar7 != 0) goto LAB_0756db24;
          if (*(char *)(lVar11 + 0x55) != '\0') break;
LAB_0756d820:
          lVar9 = *(long *)(param_1 + 0x14);
          plVar13 = *(long **)(param_1 + 0x16);
          local_c8 = 0;
          if (lVar9 == 0) {
            local_d0 = 0;
            local_c8 = 0;
          }
          else {
            local_d0 = lVar9;
            thunk_FUN_03f5d7b8(&local_d0,lVar9);
            local_c8 = *(long *)(lVar9 + 0x18) << 0x20;
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar14 = (**(code **)(*plVar13 + 0x2f8))
                              (plVar13,local_d0,local_c8,*(undefined8 *)(param_1 + 0x10),
                               *(undefined8 *)(*plVar13 + 0x300));
          lVar9 = DAT_091beb80;
          local_80 = 0;
          uStack_78 = 0;
          if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_80 = auVar14._0_8_;
          thunk_FUN_03f5d7b8(&local_80,auVar14._0_8_);
          uVar5 = local_80;
          uVar10 = uStack_78 >> 0x30;
          uStack_78._0_6_ = auVar14._8_6_;
          uStack_78 = CONCAT26((short)uVar10,(undefined6)uStack_78) & 0xff00ffffffffffff;
          uVar10 = uStack_78;
          local_70 = 0;
          uStack_68 = 0;
          if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uStack_68 = uVar10;
          local_70 = uVar5;
          thunk_FUN_03f5d7b8(&local_70,0);
          uVar10 = uStack_68;
          uVar5 = local_70;
          local_70 = 0;
          uStack_68 = 0;
          if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_70 = uVar5;
          uStack_68 = uVar10;
          thunk_FUN_03f5d7b8(&local_70,0);
          lVar9 = *(long *)(DAT_0919bb00 + 0x20);
          uStack_98 = uStack_68;
          local_a0 = local_70;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          uVar10 = FUN_065b1370(&local_a0,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
          if ((uVar10 & 1) == 0) {
            *param_1 = 2;
            *(ulong *)(param_1 + 0x22) = uStack_98;
            *(undefined8 *)(param_1 + 0x20) = local_a0;
            thunk_FUN_03f5d7b8(param_1 + 0x20,0);
            FUN_047788e8(param_1 + 2,&local_a0,param_1,DAT_0919a250);
            return;
          }
LAB_0756d938:
          lVar9 = *(long *)(DAT_0919baf8 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          iVar7 = FUN_065b149c(&local_a0,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(int *)(lVar11 + 0x48) = iVar7;
          if (iVar7 == 0) goto LAB_0756d99c;
        }
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = *(uint *)(lVar11 + 0x48);
      if (0 < (int)uVar6) {
        plVar13 = *(long **)(lVar11 + 0x28);
        if ((char)param_1[0x13] == '\0') {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar7 = (**(code **)(*plVar13 + 0x1b8))
                            (plVar13,*(undefined8 *)(param_1 + 0x14),0,uVar6,
                             *(undefined8 *)(lVar11 + 0x38),0,*(undefined8 *)(*plVar13 + 0x1c0));
          param_1[0x1e] = iVar7;
          *(int *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x44) + iVar7;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x14);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          if (*(uint *)(lVar9 + 0x18) < uVar6) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          auVar14 = FUN_05a50e74(param_1 + 0xc,DAT_091b4768);
          uVar12 = param_1[0x12];
          local_b0 = auVar14;
          if (auVar14._8_4_ < uVar12) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar7 = (**(code **)(*plVar13 + 0x1e8))
                            (plVar13,lVar9 + 0x20,uVar6,auVar14._0_8_ + (long)(int)uVar12 * 2,
                             auVar14._8_4_ - uVar12,0,*(undefined8 *)(*plVar13 + 0x1f0));
          param_1[0x1e] = iVar7;
          *(undefined4 *)(lVar11 + 0x44) = 0;
        }
      }
LAB_0756d99c:
      *(undefined1 *)(lVar11 + 0x56) = 1;
LAB_0756db24:
      uVar12 = param_1[0x1e];
      if (uVar12 == 0) break;
      uVar6 = param_1[0x18];
    }
    if ((int)uVar6 < (int)uVar12) {
      param_1[0x1e] = uVar6;
      uVar12 = uVar6;
    }
    if ((char)param_1[0x13] == '\0') {
      lVar9 = *(long *)(lVar11 + 0x38);
      uVar6 = *(uint *)(lVar11 + 0x40);
      if (lVar9 == 0) {
        local_b0._0_8_ = 0;
        local_b0._8_4_ = 0;
        if (uVar12 != 0 || uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
      }
      else {
        if ((*(uint *)(lVar9 + 0x18) < uVar6) || (*(uint *)(lVar9 + 0x18) - uVar6 < uVar12)) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        local_b0._0_8_ = lVar9 + (long)(int)uVar6 * 2 + 0x20;
        local_b0._8_4_ = uVar12;
      }
      local_b0._12_4_ = 0;
      auVar15 = FUN_05a50e74(param_1 + 0xc,DAT_091b4768);
      uVar6 = param_1[0x12];
      if (auVar15._8_4_ < uVar6) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      FUN_06109210(local_b0,auVar15._0_8_ + (long)(int)uVar6 * 2,auVar15._8_4_ - uVar6,DAT_091ba960)
      ;
      uVar12 = param_1[0x1e];
      *(uint *)(lVar11 + 0x40) = uVar12 + *(int *)(lVar11 + 0x40);
      uVar6 = param_1[0x18];
    }
    uVar6 = uVar6 - uVar12;
    param_1[0x18] = uVar6;
    param_1[0x12] = uVar12 + param_1[0x12];
  } while (*(char *)(lVar11 + 0x56) == '\0');
  iVar7 = param_1[0x12];
LAB_0756d7c0:
  *param_1 = -2;
  piVar8 = param_1 + 0x14;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  piVar8 = param_1 + 0x16;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_03f5d7b8(piVar8,0);
  FUN_06b3dc04(param_1 + 2,iVar7,DAT_0919a288);
  return;
}

