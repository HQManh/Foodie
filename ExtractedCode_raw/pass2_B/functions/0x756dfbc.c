// rea decompile_all
// name: System.IO.StreamReader.<ReadBufferAsync>d__69$$MoveNext
// address: 0x756dfbc
// body: available
// range: 0x756dfbc-0x756e2c3 inclusive
// range: 0x756e2f8-0x756e617 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756e26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e2bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e2c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e31c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e600 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e60c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756e614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded funct
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0756e108) */

void System_IO_StreamReader_<ReadBufferAsync>d__69__MoveNext(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  long local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  if ((DAT_09521a23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198b48);
    FUN_03f5c2a4(&DAT_09198bd8);
    FUN_03f5c2a4(&DAT_09175248);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_091b4708);
    FUN_03f5c2a4(&DAT_091b4700);
    FUN_03f5c2a4(&DAT_091beb80);
    DAT_09521a23 = 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    uStack_88 = *(ulong *)(param_1 + 0x10);
    local_90 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_0756e428;
  }
  if (*param_1 != 1) {
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar10 + 0x30);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar10 + 0x18);
      thunk_FUN_03f5d7b8();
      if (*(char *)(lVar10 + 0x55) != '\0') goto LAB_0756e2f8;
      *(undefined4 *)(lVar10 + 0x48) = 0;
      goto LAB_0756e114;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uStack_88 = *(ulong *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0xe);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = -1;
  do {
    lVar7 = *(long *)(DAT_0919baf8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    iVar5 = FUN_065b149c(&local_90,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(int *)(lVar10 + 0x48) = iVar5;
    if (iVar5 == 0) {
LAB_0756e53c:
      uVar3 = *(undefined4 *)(lVar10 + 0x44);
      *param_1 = -2;
      piVar9 = param_1 + 10;
      piVar9[0] = 0;
      piVar9[1] = 0;
      thunk_FUN_03f5d7b8(piVar9,0);
      piVar9 = param_1 + 0xc;
      piVar9[0] = 0;
      piVar9[1] = 0;
      thunk_FUN_03f5d7b8(piVar9,0);
      if (*(int *)(DAT_09175248 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_069f5d88(param_1 + 2,uVar3,DAT_09198bd8);
      return;
    }
    while( true ) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(bool *)(lVar10 + 0x56) = iVar5 < *(int *)(*(long *)(param_1 + 10) + 0x18);
      uVar8 = System_IO_StreamReader__IsPreamble(lVar10,0);
      if ((uVar8 & 1) == 0) {
        if ((*(char *)(lVar10 + 0x54) != '\0') && (1 < *(int *)(lVar10 + 0x48))) {
          System_IO_StreamReader__DetectEncoding(lVar10,0);
        }
        plVar11 = *(long **)(lVar10 + 0x28);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar6 = *(int *)(lVar10 + 0x44);
        iVar5 = (**(code **)(*plVar11 + 0x1b8))
                          (plVar11,*(undefined8 *)(param_1 + 10),0,*(undefined4 *)(lVar10 + 0x48),
                           *(undefined8 *)(lVar10 + 0x38),iVar6,*(undefined8 *)(*plVar11 + 0x1c0));
        iVar5 = iVar5 + iVar6;
        *(int *)(lVar10 + 0x44) = iVar5;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0x44);
      }
      if (iVar5 != 0) goto LAB_0756e53c;
      if (*(char *)(lVar10 + 0x55) == '\0') break;
LAB_0756e2f8:
      lVar7 = *(long *)(param_1 + 10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar10 + 0x4c);
      uVar2 = *(uint *)(lVar7 + 0x18);
      plVar11 = *(long **)(param_1 + 0xc);
      local_b0 = 0;
      local_a8 = 0;
      if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_b0 = lVar7;
      thunk_FUN_03f5d7b8(&local_b0,lVar7);
      local_a8 = CONCAT44(uVar2 - uVar1,uVar1);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar12 = (**(code **)(*plVar11 + 0x2f8))
                          (plVar11,local_b0,local_a8,0,*(undefined8 *)(*plVar11 + 0x300));
      lVar7 = DAT_091beb80;
      local_80 = 0;
      uStack_78 = 0;
      if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_80 = auVar12._0_8_;
      thunk_FUN_03f5d7b8(&local_80,auVar12._0_8_);
      uVar4 = local_80;
      uVar8 = uStack_78 >> 0x30;
      uStack_78._0_6_ = auVar12._8_6_;
      uStack_78 = CONCAT26((short)uVar8,(undefined6)uStack_78) & 0xff00ffffffffffff;
      uVar8 = uStack_78;
      local_70 = 0;
      uStack_68 = 0;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_68 = uVar8;
      local_70 = uVar4;
      thunk_FUN_03f5d7b8(&local_70,0);
      uVar8 = uStack_68;
      uVar4 = local_70;
      local_70 = 0;
      uStack_68 = 0;
      if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = uVar4;
      uStack_68 = uVar8;
      thunk_FUN_03f5d7b8(&local_70,0);
      lVar7 = *(long *)(DAT_0919bb00 + 0x20);
      uStack_88 = uStack_68;
      local_90 = local_70;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      uVar8 = FUN_065b1370(&local_90,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(ulong *)(param_1 + 0x10) = uStack_88;
        *(undefined8 *)(param_1 + 0xe) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09175248 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045dbe18(param_1 + 2,&local_90,param_1,DAT_09198b48);
        return;
      }
LAB_0756e428:
      lVar7 = *(long *)(DAT_0919baf8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      iVar5 = FUN_065b149c(&local_90,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
      if (iVar5 == 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < *(int *)(lVar10 + 0x48)) {
          plVar11 = *(long **)(lVar10 + 0x28);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar5 = *(int *)(lVar10 + 0x44);
          iVar6 = (**(code **)(*plVar11 + 0x1b8))
                            (plVar11,*(undefined8 *)(param_1 + 10),0,*(int *)(lVar10 + 0x48),
                             *(undefined8 *)(lVar10 + 0x38),iVar5,*(undefined8 *)(*plVar11 + 0x1c0))
          ;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          *(int *)(lVar10 + 0x44) = iVar6 + iVar5;
        }
        goto LAB_0756e53c;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = *(int *)(lVar10 + 0x48) + iVar5;
      *(int *)(lVar10 + 0x48) = iVar5;
    }
LAB_0756e114:
    lVar7 = *(long *)(param_1 + 10);
    plVar11 = *(long **)(param_1 + 0xc);
    local_a8 = 0;
    if (lVar7 == 0) {
      local_b0 = 0;
      local_a8 = 0;
    }
    else {
      local_b0 = lVar7;
      thunk_FUN_03f5d7b8(&local_b0,lVar7);
      local_a8 = *(long *)(lVar7 + 0x18) << 0x20;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = (**(code **)(*plVar11 + 0x2f8))
                        (plVar11,local_b0,local_a8,0,*(undefined8 *)(*plVar11 + 0x300));
    lVar7 = DAT_091beb80;
    local_80 = 0;
    uStack_78 = 0;
    if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_80 = auVar12._0_8_;
    thunk_FUN_03f5d7b8(&local_80,auVar12._0_8_);
    uVar4 = local_80;
    uVar8 = uStack_78 >> 0x30;
    uStack_78._0_6_ = auVar12._8_6_;
    uStack_78 = CONCAT26((short)uVar8,(undefined6)uStack_78) & 0xff00ffffffffffff;
    uVar8 = uStack_78;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_68 = uVar8;
    local_70 = uVar4;
    thunk_FUN_03f5d7b8(&local_70,0);
    uVar8 = uStack_68;
    uVar4 = local_70;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = uVar4;
    uStack_68 = uVar8;
    thunk_FUN_03f5d7b8(&local_70,0);
    lVar7 = *(long *)(DAT_0919bb00 + 0x20);
    uStack_88 = uStack_68;
    local_90 = local_70;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    uVar8 = FUN_065b1370(&local_90,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      *(ulong *)(param_1 + 0x10) = uStack_88;
      *(undefined8 *)(param_1 + 0xe) = local_90;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09175248 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045dbe18(param_1 + 2,&local_90,param_1,DAT_09198b48);
      return;
    }
  } while( true );
}

