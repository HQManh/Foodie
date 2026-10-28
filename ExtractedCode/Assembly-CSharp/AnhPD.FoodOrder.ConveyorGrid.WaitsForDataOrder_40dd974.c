// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$WaitsForDataOrder
// address: 0x40dd974
// body: available
// range: 0x40dd974-0x40ddb17 inclusive
// range: 0x40ddb54-0x40ddc5f inclusive
// range: 0x40ddca0-0x40ddce3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ddb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ddc5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ddce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ConveyorGrid__WaitsForDataOrder(long param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  lVar2 = param_1;
  if ((DAT_09516042 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a26c0);
    FUN_03f5c2a4(&DAT_091a26c8);
    FUN_03f5c2a4(&DAT_091a26d0);
    FUN_03f5c2a4(&DAT_091abda0);
    FUN_03f5c2a4(&DAT_091abdb8);
    FUN_03f5c2a4(&DAT_091abe40);
    lVar2 = FUN_03f5c2a4(&DAT_091abe48);
    DAT_09516042 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (-1 < (int)param_3) {
    iVar6 = param_2 + 1;
    if (iVar6 < param_4 + param_2) {
      do {
        lVar2 = *(long *)(param_1 + 0x18);
        if (lVar2 == 0) goto LAB_040ddce0;
        if (*(int *)(lVar2 + 0x18) <= iVar6) break;
        lVar5 = *(long *)(param_1 + 0x48);
        if (lVar5 == 0) goto LAB_040ddce0;
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        lVar3 = lVar2;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          lVar3 = *(long *)(param_1 + 0x18);
          lVar2 = 0;
          if (lVar3 == 0) goto LAB_040ddce0;
        }
        lVar5 = FUN_057e0998(lVar3,iVar6,DAT_091abe48);
        lVar2 = 0;
        if (lVar5 == 0) goto LAB_040ddce0;
        AnhPD_FoodOrder_ConveyorColumn__AppendPendingBundles(lVar5,*(undefined8 *)(param_1 + 0x48));
        lVar2 = 0;
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_040ddce0;
        FUN_057e185c(&local_98,*(long *)(param_1 + 0x48),DAT_091abdb8);
        local_80 = local_98;
        local_98 = 0;
        puStack_78 = puStack_90;
        local_70 = local_88;
        puStack_90 = &local_80;
        while (uVar4 = FUN_071bd28c(&local_80,DAT_091a26c8), (uVar4 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(local_70 + 0x3c) < param_3) goto LAB_040ddcb4;
        }
        lVar2 = FUN_071bd288(&local_80,DAT_091a26c0);
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_4 + param_2);
    }
    if (0 < param_2) {
      iVar6 = 0;
      while (lVar5 = *(long *)(param_1 + 0x48), lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
        lVar2 = 0;
        if (*(long *)(param_1 + 0x18) == 0) break;
        lVar5 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar6,DAT_091abe48);
        lVar2 = 0;
        if (lVar5 == 0) break;
        AnhPD_FoodOrder_ConveyorColumn__AppendPendingBundles(lVar5,*(undefined8 *)(param_1 + 0x48));
        lVar2 = 0;
        if (*(long *)(param_1 + 0x48) == 0) break;
        FUN_057e185c(&local_98,*(long *)(param_1 + 0x48),DAT_091abdb8);
        local_80 = local_98;
        local_98 = 0;
        puStack_78 = puStack_90;
        local_70 = local_88;
        puStack_90 = &local_80;
        while (uVar4 = FUN_071bd28c(&local_80,DAT_091a26c8), (uVar4 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(local_70 + 0x3c) < param_3) {
            iVar1 = *(int *)(local_70 + 0x20);
            if (iVar1 < 2) {
              iVar1 = 1;
            }
            if (param_2 <= iVar6 + -1 + iVar1) {
LAB_040ddcb4:
              FUN_071bd288(&local_80,DAT_091a26c0);
              return 1;
            }
          }
        }
        FUN_071bd288(&local_80,DAT_091a26c0);
        iVar6 = iVar6 + 1;
        lVar2 = 0;
        if (iVar6 == param_2) {
          return 0;
        }
      }
LAB_040ddce0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(lVar2);
    }
  }
  return 0;
}

