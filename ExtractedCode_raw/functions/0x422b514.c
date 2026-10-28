// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ResolveConfigs
// address: 0x422b514
// body: available
// range: 0x422b514-0x422ba73 inclusive
// range: 0x422baac-0x422badb inclusive
// range: 0x422bb5c-0x422bb83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422b87c to 0x41ee560 AnhPD.FoodOrder.LevelInfo$$GetDisplayConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422ba68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422ba6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422ba70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderIngredientList__ResolveConfigs
               (undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_09516dae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1e10);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a1e18);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a1e20);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091af040);
    FUN_03f5c2a4(&DAT_091ad860);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091aa768);
    FUN_03f5c2a4(&DAT_091af038);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091af618);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516dae = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  }
  lVar4 = AnhPD_FoodOrder_OrderIngredientList__get_Info();
  if (lVar4 != 0) {
    uVar5 = System_String__IsNullOrEmpty(param_1,0);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    uVar5 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_1,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(uVar6,DAT_091b0558);
      uVar5 = AnhPD_FoodOrder_LevelInfo__TryGetDisplayIds(lVar4,param_1,uVar6,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = AnhPD_FoodOrder_LevelInfo__GetDisplayConfig(lVar4,uVar6,0);
        return lVar4;
      }
      uVar5 = AnhPD_FoodOrder_LevelInfo__get_IngredientListShowsRaw(lVar4,0);
      if ((uVar5 & 1) != 0) {
        lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar8,DAT_091b0558);
        uVar5 = AnhPD_FoodOrder_LevelInfo__TryGetDirectInputs(lVar4,param_1,lVar8,0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_0422ba70;
          uVar1 = *(undefined4 *)(lVar8 + 0x18);
          lVar9 = thunk_FUN_03f9944c(DAT_0917c8f0);
          FUN_057f74ac(lVar9,uVar1,DAT_091af038);
          FUN_057e185c(&local_80,lVar8,DAT_091b05a8);
          puStack_c0 = &local_a0;
          uStack_98 = puStack_78;
          local_a0 = local_80;
          local_90 = local_70;
          local_c8 = 0;
          while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a45a0), (uVar5 & 1) != 0) {
            AnhPD_FoodOrder_PieceLookup__PiecesOfAnyRole(&local_80,local_90,0);
            lVar3 = DAT_091af040;
            if (lVar9 == 0) {
LAB_0422ba68:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0422ba68;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined8 **)(lVar10 + 0x28) = puStack_78;
              *(undefined8 *)(lVar10 + 0x20) = local_80;
              *(undefined8 *)(lVar10 + 0x30) = local_70;
            }
            else {
              FUN_057f7d3c(lVar9,&local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_039af92c(&local_c8);
          goto LAB_0422bb70;
        }
      }
      lVar4 = AnhPD_FoodOrder_LevelInfo__GetAllDisplayConfigInRecipe(lVar4,param_1,0,0);
      if (lVar4 != 0) {
        FUN_057e185c(&local_b8,lVar4,DAT_091aa768);
        local_80 = 0;
        puStack_78 = &local_b8;
        while (uVar5 = FUN_071bd28c(&local_b8,DAT_091a1e18), lVar4 = local_a8, (uVar5 & 1) != 0) {
          if ((local_a8 != 0) && (0 < *(int *)(local_a8 + 0x18))) {
            FUN_039b48ac(&local_80);
            return lVar4;
          }
        }
        FUN_039b48ac(&local_80);
      }
    }
    else {
      uVar6 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_1,0);
      plVar7 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar4,uVar6,0);
      if (plVar7 != (long *)0x0) {
        if (*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar7 + 0x130)) {
          if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8)
              != DAT_09184728) {
            return 0;
          }
          lVar8 = (**(code **)(*plVar7 + 0x268))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x270));
          if (lVar8 == 0) {
LAB_0422ba70:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(undefined4 *)(lVar8 + 0x18);
          lVar9 = thunk_FUN_03f9944c(DAT_0917c8f0);
          FUN_057f74ac(lVar9,uVar1,DAT_091af038);
          FUN_057e185c(&local_a0,lVar8,DAT_091b05a8);
          local_c8 = 0;
          puStack_c0 = &local_a0;
          while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a45a0), (uVar5 & 1) != 0) {
            (**(code **)(*plVar7 + 0x278))
                      (&local_80,plVar7,local_90,param_1,*(undefined8 *)(*plVar7 + 0x280));
            lVar3 = DAT_091af040;
            if (lVar9 == 0) {
LAB_0422ba6c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0422ba6c;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined8 **)(lVar10 + 0x28) = puStack_78;
              *(undefined8 *)(lVar10 + 0x20) = local_80;
              *(undefined8 *)(lVar10 + 0x30) = local_70;
            }
            else {
              FUN_057f7d3c(lVar9,&local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_071bd288(&local_a0,DAT_091a4598);
LAB_0422bb70:
          lVar4 = AnhPD_FoodOrder_OrderIngredientList__ResolveInputs
                            (lVar4,lVar8,lVar9,param_2,param_3);
          return lVar4;
        }
      }
    }
  }
  return 0;
}

