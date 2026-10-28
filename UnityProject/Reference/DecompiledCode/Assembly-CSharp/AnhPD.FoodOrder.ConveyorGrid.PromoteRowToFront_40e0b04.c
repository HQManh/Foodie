// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$PromoteRowToFront
// address: 0x40e0b04
// body: available
// range: 0x40e0b04-0x40e0d1f inclusive
// range: 0x40e0d5c-0x40e0d73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e0d1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e0d70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_ConveyorGrid__PromoteRowToFront(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_0951605e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091b22c8);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091add18);
    DAT_0951605e = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (param_2 < 1) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x60) + 0x18)) {
      return 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_053d74ac(*(long *)(param_1 + 0x70),DAT_091a82b8);
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        iVar3 = 0;
        iVar4 = 0;
        do {
          if (*(int *)(lVar2 + 0x18) <= iVar4) {
            if (0 < iVar3) {
              AnhPD_FoodOrder_ConveyorGrid__RebuildOccupancy(param_1);
              return iVar3;
            }
            return iVar3;
          }
          if (*(long *)(param_1 + 0x70) == 0) break;
          uVar1 = FUN_053d750c(*(long *)(param_1 + 0x70),iVar4,DAT_091a82c0);
          if ((uVar1 & 1) == 0) {
            AnhPD_FoodOrder_ConveyorGrid__BuildColumnGroup
                      (param_1,iVar4,param_2,*(undefined8 *)(param_1 + 0x68));
            if (*(long *)(param_1 + 0x68) == 0) break;
            FUN_05797d74(&local_98,*(long *)(param_1 + 0x68),DAT_091adcc0);
            local_80 = local_98;
            local_98 = 0;
            puStack_78 = puStack_90;
            local_70 = local_88;
            puStack_90 = &local_80;
            while (uVar1 = FUN_071ad7a4(&local_80,DAT_091a34d8), (uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053d8048(*(long *)(param_1 + 0x70),local_70 & 0xffffffff,DAT_091a82b0);
            }
            FUN_071ad7a0(&local_80,DAT_091a34d0);
            uVar1 = AnhPD_FoodOrder_ConveyorGrid__BuildPromoteShift
                              (param_1,*(undefined8 *)(param_1 + 0x68),param_2);
            if ((uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x68) == 0) break;
              iVar3 = *(int *)(*(long *)(param_1 + 0x68) + 0x18) + iVar3;
            }
          }
          lVar2 = *(long *)(param_1 + 0x18);
          iVar4 = iVar4 + 1;
        } while (lVar2 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

