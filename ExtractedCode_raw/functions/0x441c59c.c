// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$EstimatePipelineFootprint
// address: 0x441c59c
// body: available
// range: 0x441c59c-0x441cc43 inclusive
// range: 0x441cc48-0x441cc4b inclusive
// range: 0x441cc50-0x441cc53 inclusive
// range: 0x441cd20-0x441cd5f inclusive
// range: 0x441cd70-0x441cd73 inclusive
// range: 0x441cd78-0x441cd7f inclusive
// range: 0x441cd84-0x441cd87 inclusive
// range: 0x441cd8c-0x441cd8f inclusive
// range: 0x441cda4-0x441cdab inclusive
// range: 0x441cdb0-0x441cdb7 inclusive
// range: 0x441ce64-0x441cf0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441cc40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cc48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cc50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cd70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cd7c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cd84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cda8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cdb4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cf04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441cf0c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0441cda4) */
/* WARNING: Removing unreachable block (ram,0x0441cab8) */
/* WARNING: Removing unreachable block (ram,0x0441cd78) */
/* WARNING: Removing unreachable block (ram,0x0441cbd4) */
/* WARNING: Removing unreachable block (ram,0x0441cdb0) */

int CookingGraph_EstimatorBotScorer__EstimatePipelineFootprint(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_128;
  undefined8 *puStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_78;
  
  if ((DAT_09517f0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d028);
    FUN_03f5c2a4(&DAT_0919d030);
    FUN_03f5c2a4(&DAT_0919d038);
    FUN_03f5c2a4(&DAT_0919d098);
    FUN_03f5c2a4(&DAT_0919d020);
    FUN_03f5c2a4(&DAT_0919d080);
    FUN_03f5c2a4(&DAT_0919d040);
    FUN_03f5c2a4(&DAT_0919d0a0);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_0919d048);
    FUN_03f5c2a4(&DAT_091762c0);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091cab08);
    FUN_03f5c2a4(&DAT_091a5e10);
    FUN_03f5c2a4(&DAT_091a5210);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a5e18);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a5218);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_091a5e20);
    FUN_03f5c2a4(&DAT_091a5220);
    FUN_03f5c2a4(&DAT_091cb778);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_09178088);
    FUN_03f5c2a4(&DAT_091a9408);
    FUN_03f5c2a4(&DAT_091a9410);
    FUN_03f5c2a4(&DAT_091b29d0);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091b29d8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f0f = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_78 = 0;
  local_d0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_091762d0);
  FUN_06fe1e44(lVar7,param_2,DAT_0919d080);
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_0441cf04:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = System_Math__Max(1,iVar5 << 1 | 1,0);
  do {
    if (iVar5 < 1) break;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_0441cf04;
    iVar5 = iVar5 + -1;
    FUN_057e185c(&local_128,*(long *)(param_1 + 0x48),DAT_091b29d0);
    bVar2 = false;
    local_90 = local_118;
    local_f8 = &local_a0;
    puStack_98 = puStack_120;
    local_a0 = local_128;
    local_100 = 0;
    while (uVar8 = FUN_071bd28c(&local_a0,DAT_091a5218), lVar4 = local_90, lVar9 = local_100,
          (uVar8 & 1) != 0) {
      if (local_90 != 0) {
        uVar10 = *(undefined8 *)(local_90 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar10,0,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(*(long *)(lVar4 + 0x18) + 0x18) != 0) {
            lVar9 = thunk_FUN_03f9944c(DAT_091762c0);
            FUN_06fc96ac(lVar9,DAT_0919d020);
            if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_128,*(long *)(lVar4 + 0x18),DAT_091ada18);
            local_b0 = local_118;
            puStack_b8 = puStack_120;
            local_c0 = local_128;
            local_128 = 0;
            puStack_120 = &local_c0;
            while (uVar8 = FUN_071bd28c(&local_c0,DAT_091a3388), lVar3 = local_b0, (uVar8 & 1) != 0)
            {
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = UnityEngine_Object__op_Equality(lVar3,0,0);
              if ((uVar8 & 1) == 0) {
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_06fcbf70(lVar9,lVar3,(long)&local_78 + 4,DAT_0919d038);
                FUN_06fca434(lVar9,lVar3,local_78._4_4_ + 1,DAT_0919d048);
              }
            }
            FUN_071bd288(&local_c0,DAT_091a3380);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar6 = FUN_06fca100(lVar9,DAT_0919d040);
            if ((iVar6 != 0) &&
               (uVar8 = FUN_06fca63c(lVar9,*(undefined8 *)(lVar4 + 0x10),DAT_0919d028),
               (uVar8 & 1) == 0)) {
              FUN_06fca844(&local_128,lVar9,DAT_0919d030);
              local_d0 = local_108;
              puStack_e8 = puStack_120;
              local_f0 = local_128;
              uStack_d8 = uStack_110;
              local_e0 = local_118;
              fVar11 = INFINITY;
              puStack_120 = &local_f0;
              local_128 = 0;
              while (uVar8 = FUN_07272f90(&local_f0,DAT_091a5e18), uVar10 = uStack_d8,
                    (uVar8 & 1) != 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_06fe4630(lVar7,local_e0,&local_78,DAT_0919d098);
                fVar12 = (float)local_78;
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar11 = (float)System_Math__Min(fVar11,fVar12 / (float)(int)uVar10,0);
              }
              FUN_072730b4(&local_f0,DAT_091a5e10);
              if (ABS(fVar11) != INFINITY) {
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar11 = (float)(int)(fVar11 + 0.0001);
                if (0.0 < fVar11) {
                  FUN_06fca844(&local_128,lVar9,DAT_0919d030);
                  local_d0 = local_108;
                  puStack_e8 = puStack_120;
                  local_f0 = local_128;
                  uStack_d8 = uStack_110;
                  local_e0 = local_118;
                  local_128 = 0;
                  puStack_120 = &local_f0;
                  while (uVar8 = FUN_07272f90(&local_f0,DAT_091a5e18), uVar10 = uStack_d8,
                        lVar9 = local_e0, (uVar8 & 1) != 0) {
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    fVar12 = (float)FUN_06fe2a7c(lVar7,local_e0,DAT_0919d0a0);
                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    System_Math__Max(0,fVar12 - fVar11 * (float)(int)uVar10,0);
                    FUN_06fe2ae8(lVar7,lVar9,DAT_0919d0b0);
                  }
                  FUN_072730b4(&local_f0,DAT_091a5e10);
                  uVar10 = *(undefined8 *)(lVar4 + 0x10);
                  uVar1 = *(undefined4 *)(lVar4 + 0x20);
                  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar6 = System_Math__Max(1,uVar1,0);
                  if (*(int *)(DAT_09184160 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  bVar2 = true;
                  CookingGraph_EstimatorBotScorer__Add(fVar11 * (float)iVar6,lVar7,uVar10);
                }
              }
            }
          }
        }
      }
    }
    FUN_071bd288(local_f8,DAT_091a5210);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar9);
    }
  } while (bVar2);
  uVar10 = thunk_FUN_03f9944c(DAT_09178088);
  FUN_0530973c(uVar10,param_1,DAT_091cb778,0);
  fVar11 = (float)FUN_04b024e4(lVar7,uVar10,DAT_091cab08);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = -0x80000000;
  if ((float)(int)fVar11 != INFINITY) {
    iVar5 = (int)fVar11;
  }
  return iVar5;
}

