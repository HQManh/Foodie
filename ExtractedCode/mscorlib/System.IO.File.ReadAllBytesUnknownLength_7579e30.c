// rea decompile_all
// name: System.IO.File$$ReadAllBytesUnknownLength
// address: 0x7579e30
// body: available
// range: 0x7579e30-0x757a133 inclusive
// range: 0x757a138-0x757a257 inclusive
// range: 0x757a2e8-0x757a2eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757a130 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757a194 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757a224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757a23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757a254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757a2e8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_File__ReadAllBytesUnknownLength(long *param_1)

{
  undefined1 auVar1 [12];
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_2b0 [520];
  long local_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined1 *local_90;
  ulong uStack_88;
  undefined1 *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_a8 = tpidr_el0;
  local_68 = *(long *)(local_a8 + 0x28);
  if ((DAT_09521a9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba900);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba918);
    FUN_03f5c2a4(&DAT_091ba920);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba928);
    FUN_03f5c2a4(&DAT_091ba938);
    DAT_09521a9b = 1;
  }
  local_70 = 0;
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  memset(auStack_2b0,0,0x200);
  plStack_98 = &local_70;
  local_78 = 0x200;
  local_a0 = 0;
  uVar3 = 0;
  local_80 = auStack_2b0;
  do {
    uVar10 = uVar3;
    auVar11._8_8_ = local_78 & 0xffffffff;
    auVar11._0_8_ = local_80;
    auVar1 = auVar11._0_12_;
    if (uVar10 == (uint)local_78) {
      uVar3 = uVar10 << 1;
      if (0x7fffffc7 < uVar3) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Math__Max(0x7fffffc7,uVar10 + 1,0);
      }
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = DAT_09197190;
      lVar5 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
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
      plVar7 = (long *)**(long **)(lVar6 + 0xb8);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(local_a8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_0757a2e8;
      }
      lVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x180));
      auVar11 = FUN_0610892c(lVar6,DAT_091ba938);
      FUN_06108408(&local_80,auVar11._0_8_,auVar11._8_8_,DAT_091ba900);
      if (local_70 != 0) {
        if (*(int *)(DAT_09175020 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = DAT_09197190;
        lVar8 = *(long *)(DAT_09197190 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(lVar5 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        plVar7 = (long *)**(long **)(lVar5 + 0xb8);
        if (plVar7 == (long *)0x0) {
          if (*(long *)(local_a8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0757a2e8;
        }
        (**(code **)(*plVar7 + 0x188))(plVar7,local_70,0,*(undefined8 *)(*plVar7 + 400));
      }
      local_70 = lVar6;
      auVar11 = FUN_0610892c(lVar6,DAT_091ba938);
      auVar1 = auVar11._0_12_;
      local_78 = auVar11._8_8_;
    }
    local_80 = auVar1._0_8_;
    puVar2 = local_80;
    if (auVar1._8_4_ < uVar10) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if (param_1 == (long *)0x0) {
      if (*(long *)(local_a8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0757a2e8;
    }
    iVar4 = (**(code **)(*param_1 + 0x378))
                      (param_1,puVar2 + (int)uVar10,auVar1._8_4_ - uVar10,
                       *(undefined8 *)(*param_1 + 0x380));
    puVar2 = local_80;
    uVar3 = iVar4 + uVar10;
  } while (iVar4 != 0);
  if ((uint)local_78 < uVar10) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  uStack_88 = (ulong)uVar10;
  local_90 = puVar2;
  uVar9 = FUN_04a55b54(&local_90,DAT_091ba920);
  FUN_03eaae2c(&local_a0);
  if (*(long *)(local_a8 + 0x28) == local_68) {
    return uVar9;
  }
LAB_0757a2e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

