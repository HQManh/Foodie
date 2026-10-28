// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.LevelSimpleBBQ$$Start
// address: 0x41b7bcc
// body: available
// range: 0x41b7bcc-0x41b7f03 inclusive
// range: 0x41b7f38-0x41b7fe7 inclusive
// range: 0x41b7fec-0x41b7ff3 inclusive
// range: 0x41b807c-0x41b8343 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b7fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b7ff0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b82ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b82f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b82f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b82f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b82fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8300 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b830c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041b7efc) */
/* WARNING: Removing unreachable block (ram,0x041b7f00) */
/* WARNING: Removing unreachable block (ram,0x041b7fec) */
/* WARNING: Removing unreachable block (ram,0x041b7f60) */
/* WARNING: Removing unreachable block (ram,0x041b7fdc) */
/* WARNING: Removing unreachable block (ram,0x041b7fe0) */
/* WARNING: Removing unreachable block (ram,0x041b8318) */
/* WARNING: Removing unreachable block (ram,0x041b80a4) */

void Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__Start(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long extraout_x1;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 local_120;
  undefined8 *puStack_118;
  ulong local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 *local_f8;
  long local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09516954 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_0919d380);
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_091c9b10);
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a1dc8);
    FUN_03f5c2a4(&DAT_091a32f0);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a32f8);
    FUN_03f5c2a4(&DAT_091a1dd0);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_091a1dd8);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a3300);
    FUN_03f5c2a4(&DAT_09178ac8);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091ad940);
    FUN_03f5c2a4(&DAT_091aa650);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091ad948);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091ecb28);
    FUN_03f5c2a4(&DAT_09192408);
    FUN_03f5c2a4(&DAT_09204b00);
    DAT_09516954 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  Datpt_Cook_Order_LevelControlCookOrder__LevelConfigStart(param_1,0);
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    return;
  }
  if (param_1[0x3b] != 0) {
    FUN_057e185c(&local_120,param_1[0x3b],DAT_091ad940);
    local_70 = local_110;
    local_e8 = &local_80;
    puStack_78 = puStack_118;
    local_80 = local_120;
    local_f0 = 0;
    while (uVar4 = FUN_071bd28c(&local_80,DAT_091a32f8), uVar6 = local_70, lVar9 = local_f0,
          (uVar4 & 1) != 0) {
      if (param_1[0x3b] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = param_1[0x3c];
      uVar3 = FUN_057e1a08(param_1[0x3b],local_70,DAT_091ad948);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = Datpt_Cook_Order_Level_SimpleBBQ_IngreHardConfig__GetStackAllIngreOnOrder(uVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06ef050c(lVar9,uVar3,uVar5,DAT_0919d380);
      lVar9 = Datpt_Cook_Order_Level_SimpleBBQ_IngreHardConfig__GetAllIngreTypeOnSkew(uVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_120,lVar9,DAT_091aa650);
      local_100 = 0;
      puStack_98 = puStack_118;
      local_a0 = local_120;
      local_90 = local_110;
      local_f8 = &local_a0;
      while (uVar4 = FUN_071bd28c(&local_a0,DAT_091a1dd0), (uVar4 & 1) != 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_0579a6a8(&local_120,local_90,DAT_091ac7f8);
        local_c0 = local_120;
        local_120 = 0;
        puStack_b8 = puStack_118;
        local_b0 = local_110;
        puStack_118 = &local_c0;
        while (uVar4 = FUN_071aef5c(&local_c0,DAT_091a2b18), (uVar4 & 1) != 0) {
          (**(code **)(*param_1 + 0x328))
                    (param_1,local_b0 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
        }
        FUN_071aef58(&local_c0,DAT_091a2b10);
      }
      FUN_071bd288(local_f8,DAT_091a1dc8);
      if (local_100 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548();
      }
      if (*(long *)(uVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0579a6a8(&local_120,*(long *)(uVar6 + 0x20),DAT_091ac7f8);
      local_c0 = local_120;
      local_120 = 0;
      puStack_b8 = puStack_118;
      local_b0 = local_110;
      puStack_118 = &local_c0;
      while (uVar6 = FUN_071aef5c(&local_c0,DAT_091a2b18), (uVar6 & 1) != 0) {
        (**(code **)(*param_1 + 0x328))
                  (param_1,local_b0 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
      }
      FUN_071aef58(&local_c0,DAT_091a2b10);
    }
    FUN_071bd288(local_e8,DAT_091a32f0);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar9);
    }
    if (param_1[0x39] != 0) {
      FUN_06f2d6f4(&local_120,param_1[0x39],DAT_0919cab0);
      iVar8 = 0;
      puStack_d8 = puStack_118;
      local_e0 = local_120;
      uStack_c8 = uStack_108;
      local_d0 = local_110;
      local_120 = 0;
      puStack_118 = &local_e0;
      while( true ) {
        uVar6 = FUN_0726063c(&local_e0,DAT_091a5da0);
        if ((uVar6 & 1) == 0) {
          FUN_07260744(&local_e0,DAT_091a5d98);
          Datpt_Cook_Order_LevelControlCookOrder__AddItemNum(param_1,iVar8,0);
          return;
        }
        lVar9 = thunk_FUN_03f9944c(DAT_09192408);
        System_Object___ctor(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(ulong *)(lVar9 + 0x10) = local_d0;
        lVar10 = param_1[0x2e];
        uVar5 = thunk_FUN_03f9944c(DAT_09178ac8);
        FUN_053150f0(uVar5,lVar9,DAT_091ecb28,0);
        FUN_04ae2af0(lVar10,uVar5,DAT_091c9b10);
        if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(lVar9 + 0x14);
        iVar2 = *(int *)(extraout_x1 + 0xa0);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar11 = (float)iVar1 / (float)iVar2;
        iVar1 = -0x80000000;
        if ((float)(int)fVar11 != INFINITY) {
          iVar1 = (int)fVar11;
        }
        iVar8 = iVar1 + iVar8;
        plVar7 = (long *)FUN_03f5c394(DAT_09180318,2);
        if (plVar7 == (long *)0x0) break;
        if ((DAT_09204b00 != 0) &&
           (lVar10 = thunk_FUN_03f99350(DAT_09204b00,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
        {
          uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar7[4] = DAT_09204b00;
        thunk_FUN_03f5d7b8();
        fVar11 = (float)*(int *)(lVar9 + 0x14) / (float)*(int *)(extraout_x1 + 0xa0);
        iVar1 = -0x80000000;
        if ((float)(int)fVar11 != INFINITY) {
          iVar1 = (int)fVar11;
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar1);
        lVar9 = FUN_03f5c42c(DAT_09535420,&local_f0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
          uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,0);
        }
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar7[5] = lVar9;
        thunk_FUN_03f5d7b8(plVar7 + 5,lVar9);
        if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_DebugCustom__LogColor(plVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

