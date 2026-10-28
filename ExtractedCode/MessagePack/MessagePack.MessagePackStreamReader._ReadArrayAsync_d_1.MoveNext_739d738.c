// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<ReadArrayAsync>d__1$$MoveNext
// address: 0x739d738
// body: available
// range: 0x739d738-0x739d93b inclusive
// range: 0x739d948-0x739dd53 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739d934 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739d938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739dcfc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739dd00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739dd04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739dd4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739dd50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackStreamReader_<ReadArrayAsync>d__1__MoveNext(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09520b35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1108);
    FUN_03f5c2a4(&DAT_091c1110);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919bad8);
    FUN_03f5c2a4(&DAT_0919bae8);
    FUN_03f5c2a4(&DAT_0919baf0);
    FUN_03f5c2a4(&DAT_091b46b0);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b6938);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091ecf48);
    FUN_03f5c2a4(&DAT_091beb48);
    DAT_09520b35 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x98);
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar9 = ZEXT816(0);
  local_b8 = 0;
  local_168 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (iVar6 == -4) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(char *)(param_1 + 0x80) == '\0') {
      if (*(int *)(param_1 + 200) == 0x7fffffff) {
        uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,DAT_091ecf48);
      }
      iVar6 = *(int *)(param_1 + 200) + 1;
      *(int *)(param_1 + 200) = iVar6;
LAB_0739d9ec:
      if (iVar6 < *(int *)(param_1 + 0xb0)) {
        local_b0 = auVar9;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        MessagePack_MessagePackStreamReader__ReadAsync
                  (&local_70,lVar7,*(undefined8 *)(param_1 + 0xa0),0);
        uVar5 = local_70;
        lVar7 = DAT_091beb48;
        uVar1 = (ushort)uStack_48;
        uStack_128 = local_60;
        local_130 = uStack_68;
        uStack_118 = uStack_50;
        local_120 = uStack_58;
        uStack_58 = 0;
        local_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        local_70 = 0;
        if ((*(byte *)(*(long *)(DAT_091beb48 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = uVar5;
        thunk_FUN_03f5d7b8(&local_70,uVar5);
        local_60 = uStack_128;
        uStack_68 = local_130;
        uStack_50 = uStack_118;
        uStack_58 = local_120;
        thunk_FUN_03f5d7b8(&local_60,0);
        uStack_48._0_3_ = (uint3)uVar1;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        local_180 = 0;
        uStack_78 = uStack_48;
        local_80 = uStack_50;
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_88 = uStack_58;
        local_90 = local_60;
        if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_178 = uStack_78;
        local_180 = local_80;
        uStack_198 = uStack_98;
        local_1a0 = local_a0;
        uStack_188 = uStack_88;
        local_190 = local_90;
        thunk_FUN_03f5d7b8(&local_1a0,0);
        uStack_158 = uStack_198;
        local_160 = local_1a0;
        uStack_148 = uStack_188;
        uStack_150 = local_190;
        uStack_58 = 0;
        local_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_138 = uStack_178;
        local_140 = local_180;
        uStack_68 = 0;
        local_70 = 0;
        if ((*(byte *)(*(long *)(DAT_0919bad8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_48 = uStack_138;
        uStack_50 = local_140;
        uStack_68 = uStack_158;
        local_70 = local_160;
        uStack_58 = uStack_148;
        local_60 = uStack_150;
        thunk_FUN_03f5d7b8(&local_70,0);
        uStack_f8 = uStack_58;
        local_100 = local_60;
        uStack_e8 = uStack_48;
        local_f0 = uStack_50;
        lVar7 = *(long *)(DAT_0919baf0 + 0x20);
        uStack_108 = uStack_68;
        local_110 = local_70;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        uVar2 = FUN_06573678(&local_110,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
        if ((uVar2 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x10) = 1;
          *(undefined8 *)(param_1 + 0xd8) = uStack_108;
          *(undefined8 *)(param_1 + 0xd0) = local_110;
          *(undefined8 *)(param_1 + 0xe8) = uStack_f8;
          *(undefined8 *)(param_1 + 0xe0) = local_100;
          *(undefined8 *)(param_1 + 0xf8) = uStack_e8;
          *(undefined8 *)(param_1 + 0xf0) = local_f0;
          thunk_FUN_03f5d7b8(param_1 + 0xd0,0);
          local_b8 = param_1;
          FUN_0498a8ec(param_1 + 0x18,&local_110,&local_b8,DAT_091c1110);
          return;
        }
        goto LAB_0739db64;
      }
    }
  }
  else {
    if (iVar6 == 0) {
      local_b0 = *(undefined1 (*) [16])(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0739d948;
    }
    if (iVar6 == 1) {
      uStack_108 = *(undefined8 *)(param_1 + 0xd8);
      local_110 = *(undefined8 *)(param_1 + 0xd0);
      uStack_f8 = *(undefined8 *)(param_1 + 0xe8);
      local_100 = *(undefined8 *)(param_1 + 0xe0);
      uStack_e8 = *(undefined8 *)(param_1 + 0xf8);
      local_f0 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      local_b0 = ZEXT816(0);
LAB_0739db64:
      lVar7 = *(long *)(DAT_0919bae8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      FUN_065737a4(&local_70,&local_110,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
      uStack_d8 = uStack_68;
      local_e0 = local_70;
      uVar5 = local_e0;
      uStack_c8 = uStack_58;
      uStack_d0 = local_60;
      local_e0._0_1_ = (char)local_70;
      local_e0 = uVar5;
      if ((char)local_e0 == '\0') {
        thunk_FUN_03fc39d4(&DAT_09183fe0);
        uVar5 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbb0);
        System_IO_EndOfStreamException___ctor(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091ecf48);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
      FUN_05c25078(&local_a0,&local_e0,DAT_091b6938);
      uStack_68 = uStack_98;
      local_70 = local_a0;
      local_60 = local_90;
      *(undefined8 *)(param_1 + 0x70) = uStack_98;
      *(undefined8 *)(param_1 + 0x68) = local_a0;
      *(undefined8 *)(param_1 + 0x78) = local_90;
      thunk_FUN_03f5d7b8(param_1 + 0x68,0);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      uVar5 = 1;
      goto LAB_0739dc50;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      MessagePack_MessagePackStreamReader__RecycleLastMessage(lVar7,0);
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 0xa0,0);
      while( true ) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = MessagePack_MessagePackStreamReader__TryReadArrayHeader(lVar7,param_1 + 0xb0,0);
        if ((uVar2 & 1) != 0) break;
        lVar3 = MessagePack_MessagePackStreamReader__TryReadMoreDataAsync
                          (lVar7,*(undefined8 *)(param_1 + 0xa0),0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar9 = FUN_062e82b0(lVar3,0,DAT_091bcba0);
        local_b0 = auVar9;
        uVar2 = FUN_06daadec(local_b0,DAT_0919b9e0);
        if ((uVar2 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined1 (*) [16])(param_1 + 0xb8) = local_b0;
          thunk_FUN_03f5d7b8(param_1 + 0xb8,0);
          local_b8 = param_1;
          FUN_0498a870(param_1 + 0x18,local_b0,&local_b8,DAT_091c1108);
          return;
        }
LAB_0739d948:
        uVar2 = FUN_06daae34(local_b0,DAT_0919b9d8);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09183fe0);
          uVar5 = thunk_FUN_03f9944c();
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920ff90);
          System_IO_EndOfStreamException___ctor(uVar5,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091ecf48);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar4);
        }
      }
      iVar6 = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      auVar9 = local_b0;
      goto LAB_0739d9ec;
    }
  }
  plVar8 = (long *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffe;
  local_b0 = auVar9;
  if (*plVar8 != 0) {
    System_Threading_CancellationTokenSource__Dispose(*plVar8,0);
    *plVar8 = 0;
    thunk_FUN_03f5d7b8(plVar8,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  System_Runtime_CompilerServices_AsyncIteratorMethodBuilder__Complete(param_1 + 0x18,0);
  uVar5 = 0;
LAB_0739dc50:
  FUN_05a22088(param_1 + 0x30,uVar5,DAT_091b46b0);
  return;
}

