// rea decompile_all
// name: System.IO.Stream.<CopyToAsyncInternal>d__28$$MoveNext
// address: 0x75811c4
// body: available
// range: 0x75811c4-0x75813f7 inclusive
// range: 0x7581408-0x758164f inclusive
// range: 0x7581658-0x7581783 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75813f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7581578 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7581644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758164c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7581658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream_<CopyToAsyncInternal>d__28__MoveNext(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  unkbyte10 Var11;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  uint *puStack_d0;
  uint **local_c8;
  undefined4 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  uint local_84;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  uint *local_58;
  
  local_58 = param_1;
  if ((DAT_09521aed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091c16a0);
    FUN_03f5c2a4(&DAT_091c12c8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_091b4700);
    FUN_03f5c2a4(&DAT_091b9638);
    FUN_03f5c2a4(&DAT_091beb80);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521aed = 1;
  }
  local_84 = *param_1;
  plVar9 = *(long **)(param_1 + 10);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  if (1 < local_84) {
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_09197190;
    lVar2 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    plVar4 = (long *)**(long **)(lVar3 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,local_58[8],*(undefined8 *)(*plVar4 + 0x180));
    *(undefined8 *)(local_58 + 0x10) = uVar5;
    thunk_FUN_03f5d7b8();
  }
  puStack_d0 = &local_84;
  local_d8 = 0;
  local_c8 = &local_58;
  if (local_84 == 0) {
    local_84 = 0xffffffff;
    uStack_98 = *(ulong *)(local_58 + 0x14);
    local_a0 = *(undefined8 *)(local_58 + 0x12);
    local_58[0x12] = 0;
    local_58[0x13] = 0;
    local_58[0x14] = 0;
    local_58[0x15] = 0;
    *local_58 = 0xffffffff;
    goto LAB_07581528;
  }
  if (local_84 != 1) goto LAB_07581408;
  local_84 = 0xffffffff;
  uStack_a8 = *(ulong *)(local_58 + 0x18);
  local_b0 = *(undefined8 *)(local_58 + 0x16);
  local_58[0x16] = 0;
  local_58[0x17] = 0;
  local_58[0x18] = 0;
  local_58[0x19] = 0;
  *local_58 = 0xffffffff;
  do {
    FUN_06fb78b0(&local_b0,0);
LAB_07581408:
    local_e0 = 0;
    lVar3 = *(long *)(local_58 + 0x10);
    if (lVar3 == 0) {
      local_e8 = 0;
      local_e0 = 0;
    }
    else {
      local_e8 = lVar3;
      thunk_FUN_03f5d7b8(&local_e8,lVar3);
      local_e0 = *(long *)(lVar3 + 0x18) << 0x20;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = (**(code **)(*plVar9 + 0x2f8))
                        (plVar9,local_e8,local_e0,*(undefined8 *)(local_58 + 0xc),
                         *(undefined8 *)(*plVar9 + 0x300));
    lVar3 = DAT_091beb80;
    local_80 = 0;
    uStack_78 = 0;
    if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_80 = auVar10._0_8_;
    thunk_FUN_03f5d7b8(&local_80,auVar10._0_8_);
    uVar5 = local_80;
    uVar6 = uStack_78 >> 0x30;
    uStack_78._0_6_ = auVar10._8_6_;
    uStack_78 = CONCAT26((short)uVar6,(undefined6)uStack_78) & 0xff00ffffffffffff;
    uVar6 = uStack_78;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_68 = uVar6;
    local_70 = uVar5;
    thunk_FUN_03f5d7b8(&local_70,0);
    uVar6 = uStack_68;
    uVar5 = local_70;
    local_70 = 0;
    uStack_68 = 0;
    if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = uVar5;
    uStack_68 = uVar6;
    thunk_FUN_03f5d7b8(&local_70,0);
    lVar3 = *(long *)(DAT_0919bb00 + 0x20);
    uStack_98 = uStack_68;
    local_a0 = local_70;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar6 = FUN_065b1370(&local_a0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    if ((uVar6 & 1) == 0) {
      local_84 = 0;
      *local_58 = 0;
      *(ulong *)(local_58 + 0x14) = uStack_98;
      *(undefined8 *)(local_58 + 0x12) = local_a0;
      thunk_FUN_03f5d7b8(local_58 + 0x12,0);
      puVar7 = local_58;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181780,extraout_x1,local_58);
      }
      FUN_04991278(puVar7 + 2,&local_a0,local_58,DAT_091c12c8);
      goto LAB_07581714;
    }
LAB_07581528:
    lVar3 = *(long *)(DAT_0919baf8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar1 = FUN_065b149c(&local_a0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
    if (uVar1 == 0) {
      iVar8 = 10;
      goto LAB_07581718;
    }
    local_e8 = 0;
    local_e0 = 0;
    plVar4 = *(long **)(local_58 + 0xe);
    lVar3 = *(long *)(local_58 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if (*(uint *)(lVar3 + 0x18) < uVar1) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    local_e8 = lVar3;
    thunk_FUN_03f5d7b8(&local_e8,lVar3);
    local_e0 = (ulong)uVar1 << 0x20;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Var11 = (**(code **)(*plVar4 + 0x338))
                      (plVar4,local_e8,local_e0,*(undefined8 *)(local_58 + 0xc),
                       *(undefined8 *)(*plVar4 + 0x340));
    if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_78 = 0;
    local_80 = (long)Var11;
    thunk_FUN_03f5d7b8(&local_80,(long)Var11);
    uStack_78._0_3_ = (uint3)(ushort)((unkuint10)Var11 >> 0x40);
    uStack_68 = uStack_78;
    local_70 = local_80;
    thunk_FUN_03f5d7b8(&local_70,0);
    thunk_FUN_03f5d7b8(&local_70,0);
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    uVar6 = FUN_06fb7770(&local_b0,0);
  } while ((uVar6 & 1) != 0);
  local_84 = 1;
  *local_58 = 1;
  *(ulong *)(local_58 + 0x18) = uStack_a8;
  *(undefined8 *)(local_58 + 0x16) = local_b0;
  thunk_FUN_03f5d7b8(local_58 + 0x16,0);
  puVar7 = local_58;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09181780,extraout_x1_00,local_58);
  }
  FUN_04994f84(puVar7 + 2,&local_b0,local_58,DAT_091c16a0);
LAB_07581714:
  iVar8 = 7;
LAB_07581718:
  FUN_03eb47a0(&local_d8);
  if ((iVar8 == 0) || (iVar8 == 10)) {
    *local_58 = 0xfffffffe;
    puVar7 = local_58 + 0x10;
    puVar7[0] = 0;
    puVar7[1] = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    puVar7 = local_58;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(puVar7 + 2,0);
  }
  return;
}

