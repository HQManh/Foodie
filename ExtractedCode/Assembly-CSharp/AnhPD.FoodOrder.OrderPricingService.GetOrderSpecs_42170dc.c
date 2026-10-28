// rea decompile_all
// name: AnhPD.FoodOrder.OrderPricingService$$GetOrderSpecs
// address: 0x42170dc
// body: available
// range: 0x42170dc-0x421751b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42174fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421750c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4217518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderPricingService__GetOrderSpecs(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 local_1d0;
  undefined8 *puStack_1c8;
  undefined8 local_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [72];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  
  if ((DAT_09516ccf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091aed28);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091ac250);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091aed58);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516ccf = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(lVar3,DAT_091aed10);
  if (param_2 != 0) {
    uVar4 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(param_2,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_2 + 0x30);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 1)) {
        if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
           ((lVar5 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar5 == 0 ||
            (lVar5 = AnhPD_FoodOrder_LevelInfo__GetRandomListOrder(lVar5,0), lVar5 == 0))))
        goto LAB_04217518;
        FUN_057e185c(&local_a8,lVar5,DAT_091b05a8);
        puStack_1c8 = &local_c0;
        uStack_b8 = uStack_a0;
        local_c0 = local_a8;
        local_b0 = local_98;
        local_1d0 = 0;
        while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a45a0), (uVar4 & 1) != 0) {
          if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_LevelInfo__BuildOrderSpec(&local_a8,lVar6,local_b0,lVar5,0);
          memcpy(auStack_178,&local_a8,0x48);
          lVar6 = DAT_091aed20;
          if (lVar3 == 0) {
LAB_042174fc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_042174fc;
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x48;
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            memcpy((void *)(lVar9 + 0x20),auStack_178,0x48);
            thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
          }
          else {
            uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
            memcpy(&local_a8,auStack_178,0x48);
            FUN_057ef254(lVar3,&local_a8,uVar7);
          }
        }
        puVar8 = &local_c0;
        puVar10 = &DAT_091a4598;
      }
      else {
        FUN_057e185c(&local_a8,lVar5,DAT_091ac248);
        uStack_d8 = uStack_a0;
        local_e0 = local_a8;
        local_d0 = local_98;
        puStack_180 = &local_e0;
        local_188 = 0;
        while (uVar4 = FUN_071bd28c(&local_e0,DAT_091a28a8), lVar5 = local_d0, (uVar4 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar11 = *(int *)(lVar3 + 0x18);
          uVar7 = AnhPD_FoodOrder_LevelInfo__ConvertOrderData
                            (lVar6,*(undefined8 *)(local_d0 + 0x10),0);
          FUN_057ef4bc(lVar3,uVar7,DAT_091aed28);
          iVar1 = *(int *)(lVar3 + 0x18);
          for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
            FUN_057eeec4(&local_a8,lVar3,iVar11,DAT_091aed50);
            memcpy(&local_130,&local_a8,0x48);
            AnhPD_FoodOrder_OrderSpec__WithSource
                      (&local_1d0,&local_130,*(undefined4 *)(param_2 + 0x20),
                       *(undefined4 *)(lVar5 + 0x1c),*(undefined1 *)(lVar5 + 0x20),0);
            memcpy(&local_a8,&local_1d0,0x48);
            FUN_057eef28(lVar3,iVar11,&local_a8,DAT_091aed58);
            iVar1 = *(int *)(lVar3 + 0x18);
          }
        }
        puVar8 = &local_e0;
        puVar10 = &DAT_091a28a0;
      }
      FUN_071bd288(puVar8,*puVar10);
    }
    return lVar3;
  }
LAB_04217518:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

