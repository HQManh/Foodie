// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$AppendPendingChainCells
// address: 0x40d9f88
// body: available
// range: 0x40d9f88-0x40da1b3 inclusive
// range: 0x40da1b8-0x40da1bb inclusive
// range: 0x40da204-0x40da227 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40da1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40da1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40da224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__AppendPendingChainCells(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0951604b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a26c0);
    FUN_03f5c2a4(&DAT_091a26c8);
    FUN_03f5c2a4(&DAT_091a26d0);
    FUN_03f5c2a4(&DAT_091b1a08);
    FUN_03f5c2a4(&DAT_091abda0);
    FUN_03f5c2a4(&DAT_091abdb8);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091abe48);
    DAT_0951604b = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (param_2 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    uVar9 = 0;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar9) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 == 0) break;
      iVar2 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar2) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar2,0);
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar6 == 0) break;
      }
      lVar6 = FUN_057e0998(lVar6,uVar9 & 0xffffffff,DAT_091abe48);
      if (lVar6 == 0) break;
      AnhPD_FoodOrder_ConveyorColumn__AppendPendingBundles(lVar6,*(undefined8 *)(param_1 + 0x48));
      if (*(long *)(param_1 + 0x48) == 0) break;
      FUN_057e185c(&local_98,*(long *)(param_1 + 0x48),DAT_091abdb8);
      local_80 = local_98;
      local_98 = 0;
      puStack_78 = puStack_90;
      local_70 = local_88;
      puStack_90 = &local_80;
LAB_040da0e8:
      uVar7 = FUN_071bd28c(&local_80,DAT_091a26c8);
      if ((uVar7 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(local_70 + 0x28) == param_2) {
          iVar2 = *(int *)(local_70 + 0x24);
          iVar4 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_1);
          iVar5 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_1);
          lVar6 = DAT_091b1a08;
          if (param_3 != 0) {
            lVar8 = *(long *)(param_3 + 0x10);
            iVar1 = iVar2;
            if (iVar4 <= iVar2) {
              iVar1 = iVar4;
            }
            if (iVar2 < 1) {
              iVar1 = 1;
            }
            *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar3 = *(uint *)(param_3 + 0x18);
              uVar7 = uVar9 | (ulong)(uint)(iVar5 - iVar1) << 0x20;
              if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(param_3 + 0x18) = uVar3 + 1;
                *(ulong *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
              }
              else {
                FUN_058aefa4(param_3,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_040da0e8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040da0e8;
      }
      FUN_071bd288(&local_80,DAT_091a26c0);
      lVar6 = *(long *)(param_1 + 0x18);
      uVar9 = uVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

