// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$PruneOrphanChains
// address: 0x40de938
// body: available
// range: 0x40de938-0x40ded23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ded0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ded10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ded14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ded18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ded1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ded20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__PruneOrphanChains(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516048 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d580);
    FUN_03f5c2a4(&DAT_0919d588);
    FUN_03f5c2a4(&DAT_091a26f0);
    FUN_03f5c2a4(&DAT_091a5f48);
    FUN_03f5c2a4(&DAT_091a5f50);
    FUN_03f5c2a4(&DAT_091a26f8);
    FUN_03f5c2a4(&DAT_091a5f58);
    FUN_03f5c2a4(&DAT_091a2700);
    FUN_03f5c2a4(&DAT_091abdf0);
    FUN_03f5c2a4(&DAT_091abdf8);
    FUN_03f5c2a4(&DAT_091abe00);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091be928);
    FUN_03f5c2a4(&DAT_09213c00);
    FUN_03f5c2a4(&DAT_09214820);
    FUN_03f5c2a4(&DAT_0921fec8);
    DAT_09516048 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar3 = FUN_06ef01a4(*(long *)(param_1 + 0x28),DAT_0919d580);
    if (iVar3 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x40);
    if (lVar9 != 0) {
      iVar3 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar3) {
        System_Array__Clear(*(undefined8 *)(lVar9 + 0x10),0,iVar3,0);
      }
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar9 = FUN_06ef0310(*(long *)(param_1 + 0x28),DAT_0919d588), lVar9 != 0)) {
        FUN_0652ce7c(&local_b8,lVar9,DAT_091be928);
        local_70 = local_a8;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_80;
LAB_040deb20:
        uVar4 = FUN_0725662c(&local_80,DAT_091a5f50);
        lVar9 = local_70;
        if ((uVar4 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(local_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(int *)(*(long *)(local_70 + 0x18) + 0x18) < *(int *)(local_70 + 0x14)) &&
             (uVar4 = AnhPD_FoodOrder_ConveyorGrid__HasQueuedLink
                                (param_1,*(undefined4 *)(local_70 + 0x10)), lVar2 = DAT_091abdf0,
             (uVar4 & 1) == 0)) {
            lVar5 = *(long *)(param_1 + 0x40);
            if (lVar5 != 0) {
              lVar10 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar11 = lVar9;
                  thunk_FUN_03f5d7b8(plVar11,lVar9);
                }
                else {
                  FUN_057e0c68(lVar5,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_040deb20;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_040deb20;
        }
        FUN_07256628(&local_80,DAT_091a5f48);
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_057e185c(&local_b8,*(long *)(param_1 + 0x40),DAT_091abe00);
          puStack_98 = puStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          local_b8 = 0;
          puStack_b0 = &local_a0;
          while( true ) {
            uVar4 = FUN_071bd28c(&local_a0,DAT_091a26f8);
            lVar9 = local_90;
            if ((uVar4 & 1) == 0) {
              FUN_071bd288(&local_a0,DAT_091a26f0);
              return;
            }
            if (local_90 == 0) break;
            local_bc = *(undefined4 *)(local_90 + 0x10);
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_bc);
            if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_c0 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x18);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_c0);
            local_c4 = *(undefined4 *)(lVar9 + 0x14);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_c4);
            uVar6 = System_String__Format(DAT_09213c00,uVar6,uVar7,uVar8,0);
            uVar7 = AnhPD_FoodOrder_ConveyorGrid__DescribeMembers(lVar9);
            uVar6 = System_String__Concat(uVar6,DAT_0921fec8,uVar7,DAT_09214820,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogError(uVar6,0);
            AnhPD_FoodOrder_ConveyorGrid__DissolveChain(param_1,lVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

