// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineController$$RevealStrandedMysteries
// address: 0x4204110
// body: available
// range: 0x4204110-0x420439f inclusive
// range: 0x42043e4-0x4204473 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420439c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4204470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineController__RevealStrandedMysteries(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09516c08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091b8c58);
    FUN_03f5c2a4(&DAT_091b8c60);
    FUN_03f5c2a4(&DAT_091b8c48);
    FUN_03f5c2a4(&DAT_091b8c68);
    FUN_03f5c2a4(&DAT_0917e358);
    DAT_09516c08 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6e00(lVar4,DAT_091a8298);
    lVar5 = thunk_FUN_03f9944c(DAT_0917e358);
    FUN_05e2b3bc(lVar5,DAT_091b8c48);
    if (lVar8 != 0) {
      iVar1 = AnhPD_FoodOrder_OrderModel__get_Count(lVar8);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar6 = AnhPD_FoodOrder_OrderModel__IsHidden(lVar8,iVar1);
          if ((uVar6 & 1) == 0) {
            if ((lVar4 == 0) || (FUN_053d8048(lVar4,iVar1,DAT_091a82b0), lVar5 == 0))
            goto LAB_04204470;
            FUN_05e2b940(lVar5,iVar1,DAT_091b8c60);
          }
          iVar1 = iVar1 + 1;
          iVar2 = AnhPD_FoodOrder_OrderModel__get_Count(lVar8);
        } while (iVar1 < iVar2);
      }
      if (lVar5 != 0) {
        if (0 < *(int *)(lVar5 + 0x20)) {
          do {
            lVar9 = *(long *)(param_1 + 0x18);
            uVar3 = FUN_05e2babc(lVar5,DAT_091b8c58);
            if (lVar9 == 0) goto LAB_04204470;
            AnhPD_FoodOrder_CustomerLineView__GetNeighbors
                      (lVar9,uVar3,*(undefined8 *)(param_1 + 0x78));
            if (*(long *)(param_1 + 0x78) == 0) goto LAB_04204470;
            FUN_05797d74(&local_98,*(long *)(param_1 + 0x78),DAT_091adcc0);
            local_80 = local_98;
            local_98 = 0;
            puStack_78 = puStack_90;
            local_70 = local_88;
            puStack_90 = &local_80;
            while (uVar7 = FUN_071ad7a4(&local_80,DAT_091a34d8), uVar6 = local_70, (uVar7 & 1) != 0)
            {
              uVar7 = AnhPD_FoodOrder_OrderModel__IsHidden(lVar8,local_70 & 0xffffffff);
              if ((uVar7 & 1) != 0) {
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar7 = FUN_053d8048(lVar4,uVar6 & 0xffffffff,DAT_091a82b0);
                if ((uVar7 & 1) != 0) {
                  FUN_05e2b940(lVar5,uVar6 & 0xffffffff,DAT_091b8c60);
                }
              }
            }
            FUN_071ad7a0(&local_80,DAT_091a34d0);
          } while (0 < *(int *)(lVar5 + 0x20));
        }
        iVar1 = AnhPD_FoodOrder_OrderModel__get_Count(lVar8);
        if (0 < iVar1) {
          if (lVar4 == 0) goto LAB_04204470;
          iVar1 = 0;
          do {
            uVar6 = FUN_053d750c(lVar4,iVar1,DAT_091a82c0);
            if (((uVar6 & 1) == 0) &&
               (uVar6 = AnhPD_FoodOrder_OrderModel__Reveal(lVar8,iVar1), (uVar6 & 1) != 0)) {
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_04204470;
              AnhPD_FoodOrder_CustomerLineView__RefreshItem(*(long *)(param_1 + 0x18),iVar1,0);
            }
            iVar1 = iVar1 + 1;
            iVar2 = AnhPD_FoodOrder_OrderModel__get_Count(lVar8);
          } while (iVar1 < iVar2);
        }
        return;
      }
    }
  }
LAB_04204470:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

