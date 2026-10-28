// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderGrid$$Setup
// address: 0x4118114
// body: available
// range: 0x4118114-0x41183af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4118394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4118398 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411839c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41183a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41183a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41183a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41183ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderGrid__Setup(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516247 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0500);
    FUN_03f5c2a4(&DAT_091b0508);
    FUN_03f5c2a4(&DAT_091b0510);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_09516247 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        lVar9 = 0;
        do {
          if (uVar2 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(lVar5 + 0x20 + lVar9 * 8) == 0) goto LAB_041183a0;
          AnhPD_FoodOrder_StationHolder__Hide();
          uVar2 = *(uint *)(lVar5 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar2);
      }
      if (param_2 != 0) {
        FUN_057e185c(&local_98,param_2,DAT_091b05a8);
        local_70 = local_88;
        uStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        do {
          do {
            uVar4 = FUN_071bd28c(&local_80,DAT_091a45a0);
            uVar3 = local_70;
            if ((uVar4 & 1) == 0) {
              FUN_071bd288(&local_80,DAT_091a4598);
              AnhPD_FoodOrder_StationHolderGrid__Layout(param_1);
              return;
            }
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar5 + 0x18);
          } while ((int)uVar2 < 1);
          lVar9 = 0;
          do {
            if (uVar2 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar8 = *(long **)(lVar5 + 0x20 + lVar9 * 8);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = AnhPD_FoodOrder_StationHolder__IsContainStationId(plVar8,uVar3);
            if ((uVar4 & 1) != 0) {
              (**(code **)(*plVar8 + 0x1c8))(plVar8,uVar3,*(undefined8 *)(*plVar8 + 0x1d0));
              if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = FUN_057e1004(*(long *)(param_1 + 0x38),plVar8,DAT_091b0510);
              lVar5 = DAT_091b0500;
              if ((uVar4 & 1) != 0) break;
              lVar9 = *(long *)(param_1 + 0x38);
              if (lVar9 != 0) {
                lVar6 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar7 = plVar8;
                    thunk_FUN_03f5d7b8(puVar7,plVar8);
                  }
                  else {
                    FUN_057e0c68(lVar9,plVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  break;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar5 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar2);
        } while( true );
      }
    }
  }
LAB_041183a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

