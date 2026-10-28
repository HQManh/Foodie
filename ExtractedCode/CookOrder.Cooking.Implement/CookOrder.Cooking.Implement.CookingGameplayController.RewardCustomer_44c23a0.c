// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$RewardCustomer
// address: 0x44c23a0
// body: available
// range: 0x44c23a0-0x44c2717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c2714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__RewardCustomer
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong local_48;
  
  if ((DAT_09518266 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9cb0);
    FUN_03f5c2a4(&DAT_091cab50);
    FUN_03f5c2a4(&DAT_091787a8);
    FUN_03f5c2a4(&DAT_091787b8);
    FUN_03f5c2a4(&DAT_091ac610);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_0918a218);
    FUN_03f5c2a4(&DAT_091e6e00);
    FUN_03f5c2a4(&DAT_091e6e10);
    FUN_03f5c2a4(&DAT_0918f000);
    FUN_03f5c2a4(&DAT_0918eff0);
    DAT_09518266 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918f000);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    lVar8 = *(long *)(param_1 + 0x120);
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
      lVar8 = FUN_057e0998(lVar8,param_2,DAT_091ac208);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x98);
        uVar5 = thunk_FUN_03f9944c(DAT_091787b8);
        FUN_05322d94(uVar5,lVar4,DAT_091e6e10,0);
        lVar6 = FUN_04ae5fd0(uVar11,uVar5,DAT_091c9cb0);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x10) == 1) {
            return;
          }
          if (lVar6 == 0) {
            uVar12 = 0;
          }
          else {
            lVar6 = *(long *)(lVar6 + 0x30);
            uVar12 = 0;
            if (lVar6 != 0) {
              if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar9 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
              lVar13 = puVar9[1];
              if (lVar13 == 0) {
                if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar9 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
                }
                uVar5 = *puVar9;
                lVar13 = thunk_FUN_03f9944c(DAT_091787a8);
                FUN_053239c8(lVar13,uVar5,DAT_091e6e00,0);
                plVar7 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 8);
                *plVar7 = lVar13;
                thunk_FUN_03f5d7b8(plVar7,lVar13);
              }
              uVar2 = FUN_04b0264c(lVar6,lVar13,DAT_091cab50);
              local_48 = 0;
              FUN_05c3078c(&local_48,uVar2,DAT_091b6f98);
              uVar12 = local_48 >> 0x20;
            }
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Math__Max(1,uVar12,0);
          iVar3 = System_Math__Min(5,uVar2,0);
          if (*(long *)(param_1 + 0xd8) != 0) {
            iVar1 = 0;
            iVar10 = (int)uVar12;
            if (iVar3 != 0) {
              iVar1 = iVar10 / iVar3;
            }
            CookOrder_Cooking_Implement_CookingGameplayPresentation__CustomerPosition
                      (*(long *)(param_1 + 0xd8),*(undefined4 *)(lVar4 + 0x10),0);
            if (0 < iVar10) {
              if (*(long *)(param_1 + 0x138) == 0) goto LAB_044c2714;
              CookOrder_Cooking_Implement_CookingMoneyPresenter__SpawnCoin
                        (*(long *)(param_1 + 0x138),iVar3,iVar1,0);
            }
            iVar10 = iVar10 - iVar1 * iVar3;
            if (iVar10 != 0) {
              if ((*(long *)(param_1 + 0x40) == 0) ||
                 (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar4 == 0))
              goto LAB_044c2714;
              CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__Change(lVar4,iVar10,0);
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
              lVar4 = thunk_FUN_03f9944c(DAT_0918a218);
              CakeOrder_InGame_ResultCustomerData___ctor(lVar4,0);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x38);
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10));
                lVar8 = *(long *)(lVar8 + 0x20);
                *(undefined4 *)(lVar4 + 0x18) = 3;
                if ((lVar8 != 0) &&
                   (*(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar8 + 0x18), lVar6 != 0)) {
                  CakeOrder_InGame_CakeLevelRuntimeDataCustomer__AddServedCustomer(lVar6,lVar4,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_044c2714:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

