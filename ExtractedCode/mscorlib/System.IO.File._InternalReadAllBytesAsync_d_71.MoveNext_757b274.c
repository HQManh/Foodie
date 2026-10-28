// rea decompile_all
// name: System.IO.File.<InternalReadAllBytesAsync>d__71$$MoveNext
// address: 0x757b274
// body: available
// range: 0x757b274-0x757b3e7 inclusive
// range: 0x757b3f0-0x757b76f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757b41c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757b590 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757b59c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757b764 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757b76c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0757b768) */

void System_IO_File_<InternalReadAllBytesAsync>d__71__MoveNext(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  int iVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int *piStack_b0;
  int **local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_90;
  ulong uStack_88;
  int local_74;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  int *local_48;
  
  local_48 = param_1;
  if ((DAT_09521aa5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198308);
    FUN_03f5c2a4(&DAT_09198358);
    FUN_03f5c2a4(&DAT_091751b8);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091b4708);
    FUN_03f5c2a4(&DAT_091beb80);
    DAT_09521aa5 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_74 = *param_1;
  local_98 = 0;
  if (local_74 != 0) {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8(param_1 + 0xe);
    piStack_b0 = &local_74;
    local_b8 = 0;
    local_a8 = &local_48;
    if (local_74 != 0) {
      local_48[0x10] = 0;
      uVar3 = FUN_03f5c394(DAT_0917fc88,local_48[10]);
      *(undefined8 *)(local_48 + 0x12) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar11 = local_48[0x10];
      iVar7 = local_48[10];
      goto LAB_0757b3f0;
    }
  }
  local_a8 = &local_48;
  piStack_b0 = &local_74;
  local_b8 = 0;
  local_74 = -1;
  uStack_88 = *(ulong *)(local_48 + 0x16);
  local_90 = *(undefined8 *)(local_48 + 0x14);
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_48[0x16] = 0;
  local_48[0x17] = 0;
  *local_48 = -1;
  do {
    lVar10 = *(long *)(DAT_0919baf8 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    iVar2 = FUN_065b149c(&local_90,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
    if (iVar2 == 0) {
      uVar3 = System_IO_Error__GetEndOfFile(0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091ea0b8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar6);
    }
    iVar7 = local_48[10];
    uVar11 = local_48[0x10] + iVar2;
    local_48[0x10] = uVar11;
    if (iVar7 <= (int)uVar11) {
      uVar3 = *(undefined8 *)(local_48 + 0x12);
      iVar7 = 10;
      goto LAB_0757b608;
    }
LAB_0757b3f0:
    lVar10 = *(long *)(local_48 + 0x12);
    plVar9 = *(long **)(local_48 + 8);
    uVar1 = iVar7 - uVar11;
    local_c8 = 0;
    local_c0 = 0;
    if (lVar10 == 0) {
      if (uVar1 != 0 || uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_c8 = 0;
      local_c0 = 0;
    }
    else {
      if ((*(uint *)(lVar10 + 0x18) < uVar11) || (*(uint *)(lVar10 + 0x18) - uVar11 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      local_c8 = lVar10;
      thunk_FUN_03f5d7b8(&local_c8,lVar10);
      local_c0 = CONCAT44(uVar1,uVar11);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = (**(code **)(*plVar9 + 0x2f8))
                        (plVar9,local_c8,local_c0,*(undefined8 *)(local_48 + 0xc),
                         *(undefined8 *)(*plVar9 + 0x300));
    lVar10 = DAT_091beb80;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = auVar12._0_8_;
    thunk_FUN_03f5d7b8(&local_70,auVar12._0_8_);
    uVar3 = local_70;
    uVar4 = uStack_68 >> 0x30;
    uStack_68._0_6_ = auVar12._8_6_;
    uStack_68 = CONCAT26((short)uVar4,(undefined6)uStack_68) & 0xff00ffffffffffff;
    uVar4 = uStack_68;
    local_60 = 0;
    uStack_58 = 0;
    if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_58 = uVar4;
    local_60 = uVar3;
    thunk_FUN_03f5d7b8(&local_60,0);
    uVar4 = uStack_58;
    uVar3 = local_60;
    local_60 = 0;
    uStack_58 = 0;
    if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_60 = uVar3;
    uStack_58 = uVar4;
    thunk_FUN_03f5d7b8(&local_60,0);
    lVar10 = *(long *)(DAT_0919bb00 + 0x20);
    uStack_88 = uStack_58;
    local_90 = local_60;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    uVar4 = FUN_065b1370(&local_90,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10));
  } while ((uVar4 & 1) != 0);
  local_74 = 0;
  *local_48 = 0;
  *(ulong *)(local_48 + 0x16) = uStack_88;
  *(undefined8 *)(local_48 + 0x14) = local_90;
  thunk_FUN_03f5d7b8(local_48 + 0x14,0);
  piVar8 = local_48;
  if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091751b8,extraout_x1,local_48);
  }
  FUN_045e21d0(piVar8 + 2,&local_90,local_48,DAT_09198308);
  uVar3 = 0;
  iVar7 = 6;
LAB_0757b608:
  if ((local_74 < 0) && (plVar9 = *(long **)(*local_a8 + 0xe), plVar9 != (long *)0x0)) {
    lVar10 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0757b678;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_0757b678:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  if (iVar7 == 10) {
    piVar8 = local_48 + 2;
    *local_48 = -2;
    if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f7d10(piVar8,uVar3,DAT_09198358);
  }
  else if (iVar7 == 0) {
    uVar3 = (&uStack_a0)[local_98 + -1];
    piVar8 = local_48 + 2;
    *local_48 = -2;
    lVar10 = thunk_FUN_03fc39d4(&DAT_091751b8);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = thunk_FUN_03fc39d4(&DAT_09198350);
    FUN_069f7f5c(piVar8,uVar3,uVar6);
  }
  return;
}

