// rea decompile_all
// name: System.IO.File.<InternalReadAllBytesUnknownLengthAsync>d__72$$MoveNext
// address: 0x757b8e4
// body: available
// range: 0x757b8e4-0x757bb17 inclusive
// range: 0x757bb24-0x757bedb inclusive
// range: 0x757bee8-0x757c007 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757bb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757bec4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757bed8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757bff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757bffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757c000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757c004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_File_<InternalReadAllBytesUnknownLengthAsync>d__72__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 local_d8;
  int *piStack_d0;
  int **local_c8;
  undefined8 uStack_c0;
  int local_b8;
  long local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  int local_8c;
  int *local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  local_88 = param_1;
  if ((DAT_09521aa7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_09198310);
    FUN_03f5c2a4(&DAT_09198358);
    FUN_03f5c2a4(&DAT_091751b8);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d2ea0);
    FUN_03f5c2a4(&DAT_091d2f08);
    FUN_03f5c2a4(&DAT_091ba920);
    FUN_03f5c2a4(&DAT_091beb80);
    DAT_09521aa7 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_8c = *param_1;
  local_b8 = 0;
  if (local_8c != 0) {
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_09197190;
    lVar3 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    plVar5 = (long *)**(long **)(lVar4 + 0xb8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,0x200,*(undefined8 *)(*plVar5 + 0x180));
    *(undefined8 *)(local_88 + 0xc) = uVar6;
    thunk_FUN_03f5d7b8();
    piStack_d0 = &local_8c;
    local_d8 = 0;
    local_c8 = &local_88;
    if (local_8c != 0) {
      iVar1 = 0;
      local_88[0xe] = 0;
      goto LAB_0757bb60;
    }
  }
  local_c8 = &local_88;
  piStack_d0 = &local_8c;
  local_d8 = 0;
  local_8c = -1;
  uStack_98 = *(ulong *)(local_88 + 0x12);
  local_a0 = *(undefined8 *)(local_88 + 0x10);
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0;
  *local_88 = -1;
  do {
    lVar4 = *(long *)(DAT_0919baf8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    iVar1 = FUN_065b149c(&local_a0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
    if (iVar1 == 0) {
      lVar4 = *(long *)(local_88 + 0xc);
      uVar2 = local_88[0xe];
      uVar7 = (ulong)uVar2;
      if (*(long *)(DAT_091d2f08 + 0x38) == 0) {
        FUN_03f95ac8();
      }
      if (lVar4 == 0) {
        if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        local_b0 = 0;
        uVar7 = 0;
      }
      else {
        if (*(uint *)(lVar4 + 0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        local_b0 = lVar4 + 0x20;
      }
      uStack_a8 = uVar7;
      uVar6 = FUN_04a55b54(&local_b0,DAT_091ba920);
      iVar1 = 10;
      goto LAB_0757bf10;
    }
    iVar1 = local_88[0xe] + iVar1;
    local_88[0xe] = iVar1;
LAB_0757bb60:
    lVar4 = *(long *)(local_88 + 0xc);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar10 = *(int *)(lVar4 + 0x18);
    if (iVar1 == iVar10) {
      uVar2 = iVar1 << 1;
      if (0x7fffffc7 < uVar2) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
          iVar10 = *(int *)(lVar4 + 0x18);
        }
        uVar2 = System_Math__Max(0x7fffffc7,iVar10 + 1,0);
      }
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = DAT_09197190;
      lVar3 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x180));
      System_Buffer__BlockCopy(*(undefined8 *)(local_88 + 0xc),0,uVar6,0,local_88[0xe],0);
      lVar4 = DAT_09197190;
      lVar3 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar5 + 0x188))
                (plVar5,*(undefined8 *)(local_88 + 0xc),0,*(undefined8 *)(*plVar5 + 400));
      *(undefined8 *)(local_88 + 0xc) = uVar6;
      thunk_FUN_03f5d7b8(local_88 + 0xc,uVar6);
      lVar4 = *(long *)(local_88 + 0xc);
      iVar1 = local_88[0xe];
    }
    plVar5 = *(long **)(local_88 + 8);
    auVar11 = FUN_04c02d98(lVar4,iVar1,DAT_091d2ea0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = (**(code **)(*plVar5 + 0x2f8))
                        (plVar5,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(local_88 + 10),
                         *(undefined8 *)(*plVar5 + 0x300));
    lVar4 = DAT_091beb80;
    local_80 = 0;
    uStack_78 = 0;
    if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_80 = auVar11._0_8_;
    thunk_FUN_03f5d7b8(&local_80,auVar11._0_8_);
    uVar6 = local_80;
    uVar7 = uStack_78 >> 0x30;
    uStack_78._0_6_ = auVar11._8_6_;
    uStack_78 = CONCAT26((short)uVar7,(undefined6)uStack_78) & 0xff00ffffffffffff;
    uVar7 = uStack_78;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_68 = uVar7;
    local_70 = uVar6;
    thunk_FUN_03f5d7b8(&local_70,0);
    uVar7 = uStack_68;
    uVar6 = local_70;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = uVar6;
    uStack_68 = uVar7;
    thunk_FUN_03f5d7b8(&local_70,0);
    lVar4 = *(long *)(DAT_0919bb00 + 0x20);
    uStack_98 = uStack_68;
    local_a0 = local_70;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    uVar7 = FUN_065b1370(&local_a0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
  } while ((uVar7 & 1) != 0);
  local_8c = 0;
  *local_88 = 0;
  *(ulong *)(local_88 + 0x12) = uStack_98;
  *(undefined8 *)(local_88 + 0x10) = local_a0;
  thunk_FUN_03f5d7b8(local_88 + 0x10,0);
  piVar8 = local_88;
  if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091751b8,extraout_x1,local_88);
  }
  FUN_045e2418(piVar8 + 2,&local_a0,local_88,DAT_09198310);
  uVar6 = 0;
  iVar1 = 8;
LAB_0757bf10:
  FUN_03eb43f4(&local_d8);
  if (iVar1 == 10) {
    *local_88 = -2;
    piVar8 = local_88 + 0xc;
    piVar8[0] = 0;
    piVar8[1] = 0;
    thunk_FUN_03f5d7b8(piVar8,0);
    piVar8 = local_88;
    if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f7d10(piVar8 + 2,uVar6,DAT_09198358);
  }
  else if (iVar1 == 0) {
    uVar6 = (&uStack_c0)[local_b8 + -1];
    *local_88 = -2;
    piVar8 = local_88 + 0xc;
    piVar8[0] = 0;
    piVar8[1] = 0;
    thunk_FUN_03f5d7b8(piVar8,0);
    piVar8 = local_88;
    lVar4 = thunk_FUN_03fc39d4(&DAT_091751b8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = thunk_FUN_03fc39d4(&DAT_09198350);
    FUN_069f7f5c(piVar8 + 2,uVar6,uVar9);
  }
  return;
}

