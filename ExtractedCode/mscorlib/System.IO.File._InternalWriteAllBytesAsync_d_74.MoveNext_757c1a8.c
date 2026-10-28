// rea decompile_all
// name: System.IO.File.<InternalWriteAllBytesAsync>d__74$$MoveNext
// address: 0x757c1a8
// body: available
// range: 0x757c1a8-0x757c5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757c548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757c5c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757c5c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757c5cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0757c5c0) */

void System_IO_File_<InternalWriteAllBytesAsync>d__74__MoveNext(uint *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  unkbyte10 Var10;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  uint *puStack_a0;
  uint **local_98;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  uint *local_28;
  
  local_28 = param_1;
  if ((DAT_09521aa9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1490);
    FUN_03f5c2a4(&DAT_091c1698);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091b9630);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521aa9 = 1;
  }
  local_54 = *param_1;
  local_70 = 0;
  uStack_68 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  if (1 < local_54) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar1 = thunk_FUN_03f9944c(DAT_09184580);
    System_IO_FileStream___ctor(uVar1,uVar7,2,2,1,0x1000,0,0x48000000);
    *(undefined8 *)(local_28 + 0xe) = uVar1;
    thunk_FUN_03f5d7b8(local_28 + 0xe,uVar1);
  }
  puStack_a0 = &local_54;
  local_98 = &local_28;
  local_a8 = 0;
  if (local_54 == 0) {
    uStack_68 = *(undefined8 *)(local_28 + 0x12);
    local_70 = *(undefined8 *)(local_28 + 0x10);
    local_28[0x10] = 0;
    local_28[0x11] = 0;
    local_28[0x12] = 0;
    local_28[0x13] = 0;
    local_54 = 0xffffffff;
    *local_28 = 0xffffffff;
LAB_0757c3bc:
    FUN_06fb78b0(&local_70,0);
    plVar8 = *(long **)(local_28 + 0xe);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,*(undefined8 *)(local_28 + 0xc),*(undefined8 *)(*plVar8 + 0x2c0));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_80 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
    uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_80,0);
    if ((uVar5 & 1) == 0) {
      local_54 = 1;
      *local_28 = 1;
      *(undefined1 (*) [16])(local_28 + 0x14) = local_80;
      thunk_FUN_03f5d7b8(local_28 + 0x14,0);
      puVar3 = local_28;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181780,extraout_x1,local_28);
      }
      FUN_04992e94(puVar3 + 2,local_80,local_28,DAT_091c1490);
LAB_0757c4d4:
      uVar9 = 6;
      goto LAB_0757c4dc;
    }
  }
  else {
    if (local_54 != 1) {
      lVar4 = *(long *)(local_28 + 10);
      plVar8 = *(long **)(local_28 + 0xe);
      local_b0 = 0;
      if (lVar4 == 0) {
        local_b8 = 0;
        local_b0 = 0;
      }
      else {
        local_b8 = lVar4;
        thunk_FUN_03f5d7b8(&local_b8,lVar4);
        local_b0 = *(long *)(lVar4 + 0x18) << 0x20;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Var10 = (**(code **)(*plVar8 + 0x338))
                        (plVar8,local_b8,local_b0,*(undefined8 *)(local_28 + 0xc),
                         *(undefined8 *)(*plVar8 + 0x340));
      local_50 = (undefined8)Var10;
      if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_48 = 0;
      thunk_FUN_03f5d7b8(&local_50,local_50);
      uStack_48._0_3_ = (uint3)(ushort)((unkuint10)Var10 >> 0x40);
      uStack_38 = uStack_48;
      local_40 = local_50;
      thunk_FUN_03f5d7b8(&local_40,0);
      thunk_FUN_03f5d7b8(&local_40,0);
      uStack_68 = uStack_38;
      local_70 = local_40;
      uVar5 = FUN_06fb7770(&local_70,0);
      if ((uVar5 & 1) != 0) goto LAB_0757c3bc;
      local_54 = 0;
      *local_28 = 0;
      *(undefined8 *)(local_28 + 0x12) = uStack_68;
      *(undefined8 *)(local_28 + 0x10) = local_70;
      thunk_FUN_03f5d7b8(local_28 + 0x10,0);
      puVar3 = local_28;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181780,extraout_x1_00,local_28);
      }
      FUN_04994f08(puVar3 + 2,&local_70,local_28,DAT_091c1698);
      goto LAB_0757c4d4;
    }
    local_80 = *(undefined1 (*) [16])(local_28 + 0x14);
    local_28[0x14] = 0;
    local_28[0x15] = 0;
    local_28[0x16] = 0;
    local_28[0x17] = 0;
    local_54 = 0xffffffff;
    *local_28 = 0xffffffff;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_80,0);
  uVar9 = 8;
LAB_0757c4dc:
  if (((int)local_54 < 0) && (plVar8 = *(long **)(*local_98 + 0xe), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0757c558;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0757c558:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  if ((uVar9 | 8) == 8) {
    puVar3 = local_28 + 0xe;
    puVar3[0] = 0;
    puVar3[1] = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
    puVar3 = local_28 + 2;
    *local_28 = 0xfffffffe;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(puVar3,0);
  }
  return;
}

