// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$DrawPendingLinks
// address: 0x40d9a28
// body: available
// range: 0x40d9a28-0x40d9e2b inclusive
// range: 0x40d9e9c-0x40d9eeb inclusive
// range: 0x40d9efc-0x40d9f13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d9e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d9f00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d9f04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d9f08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d9f10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040d9efc) */
/* WARNING: Removing unreachable block (ram,0x040d9e20) */
/* WARNING: Removing unreachable block (ram,0x040d9f0c) */

int AnhPD_FoodOrder_ConveyorChainRopeView__DrawPendingLinks
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              long param_5,long param_6,long param_7,uint param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_14c;
  int local_148;
  undefined8 local_118;
  undefined8 *puStack_110;
  ulong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  
  uVar16 = param_3;
  if ((DAT_09516026 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4d30);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a4d38);
    FUN_03f5c2a4(&DAT_091a4d40);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091b1a10);
    FUN_03f5c2a4(&DAT_091b1a18);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516026 = 1;
  }
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  if ((param_7 != 0) && (lVar9 = *(long *)(param_7 + 0x18), lVar9 != 0)) {
    if (*(int *)(param_7 + 0x14) <= *(int *)(lVar9 + 0x18)) {
      return param_9;
    }
    lVar8 = *(long *)(param_5 + 0x90);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (param_6 != 0) {
        AnhPD_FoodOrder_ConveyorGrid__AppendPendingChainCells
                  (param_6,*(undefined4 *)(param_7 + 0x10));
        FUN_057e185c(&local_118,lVar9,DAT_091abe78);
        local_b0 = local_108;
        puStack_b8 = puStack_110;
        local_c0 = local_118;
        local_14c = param_9;
        while( true ) {
          uVar6 = FUN_071bd28c(&local_c0,DAT_091a2728);
          uVar5 = local_b0;
          if ((uVar6 & 1) == 0) {
            FUN_071bd288(&local_c0,DAT_091a2720);
            return local_14c;
          }
          if (*(long *)(param_5 + 0x90) == 0) break;
          FUN_058afb70(&local_118,*(long *)(param_5 + 0x90),DAT_091b1a18);
          local_d0 = local_108;
          puStack_d8 = puStack_110;
          local_e0 = local_118;
          local_148 = local_14c;
          puStack_110 = &local_e0;
          local_118 = 0;
          while (uVar7 = FUN_071fed28(&local_e0,DAT_091a4d38), uVar6 = local_d0, (uVar7 & 1) != 0) {
            if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar3 = (int)local_d0;
            iVar4 = local_d0._4_4_;
            iVar2 = *(int *)(uVar5 + 0x20);
            if (DAT_09516086 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516086 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = iVar2 - iVar3;
            iVar1 = -iVar2;
            if (-1 < iVar2) {
              iVar1 = iVar2;
            }
            if (iVar1 == 1) {
              AnhPD_FoodOrder_ConveyorChainRopeView__IsBright(uVar5);
              uVar15 = *(undefined4 *)(param_5 + 0x4c);
              uVar11 = *(undefined4 *)(param_5 + 0x50);
              uVar12 = AnhPD_FoodOrder_ConveyorGrid__CellCenter(param_6,uVar6 & 0xffffffff,iVar4);
              local_f0 = CONCAT44(uVar15,uVar12);
              uVar14 = uVar15;
              uVar17 = uVar16;
              local_e8 = uVar16;
              uVar13 = AnhPD_FoodOrder_ConveyorGrid__CellCenter
                                 (param_6,*(undefined4 *)(uVar5 + 0x20),
                                  *(undefined4 *)(uVar5 + 0x24));
              uVar10 = *(undefined8 *)(uVar5 + 0x10);
              local_100 = CONCAT44(uVar14,uVar13);
              local_f8 = uVar17;
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
              if ((uVar6 & 1) != 0) {
                if (*(int *)(uVar5 + 0x24) == iVar4) {
                  uVar14 = AnhPD_FoodOrder_IngredientConveyorItem__SideAnchor
                                     (*(undefined8 *)(uVar5 + 0x10),*(int *)(uVar5 + 0x20) < iVar3,0
                                     );
                  uVar15 = uVar11;
                  uVar16 = uVar17;
                }
                else {
                  uVar14 = AnhPD_FoodOrder_IngredientConveyorItem__NearestAnchorTo
                                     (uVar12,*(undefined8 *)(uVar5 + 0x10),0);
                }
                local_100 = CONCAT44(uVar15,uVar14);
                local_f8 = uVar16;
                AnhPD_FoodOrder_ConveyorChainRopeView__AddAnchor(param_5);
              }
              if (((param_8 & 1) == 0) ||
                 (uVar16 = param_3,
                 uVar6 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipToWindow
                                   (param_1,param_2,param_3,param_4,param_5,&local_100,&local_f0),
                 (uVar6 & 1) != 0)) {
                uVar10 = AnhPD_FoodOrder_ConveyorChainRopeView__GetLine(param_5,local_148);
                uVar16 = local_f8;
                AnhPD_FoodOrder_ConveyorChainRopeView__Apply
                          (local_100 & 0xffffffff,local_100._4_4_,local_f8,(undefined4)local_f0,
                           local_f0._4_4_,local_e8,uVar10,uVar10);
                local_148 = local_148 + 1;
              }
            }
          }
          local_14c = local_148;
          FUN_071fed24(&local_e0,DAT_091a4d30);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

