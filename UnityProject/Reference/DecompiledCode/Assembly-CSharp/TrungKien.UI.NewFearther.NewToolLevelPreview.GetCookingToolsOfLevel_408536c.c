// rea decompile_all
// name: TrungKien.UI.NewFearther.NewToolLevelPreview$$GetCookingToolsOfLevel
// address: 0x408536c
// body: available
// range: 0x408536c-0x40856b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4085698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408569c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40856a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40856a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40856a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40856b0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long TrungKien_UI_NewFearther_NewToolLevelPreview__GetCookingToolsOfLevel(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515c8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091ab800);
    FUN_03f5c2a4(&DAT_091ab808);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b05e8);
    FUN_03f5c2a4(&DAT_091ab7f8);
    FUN_03f5c2a4(&DAT_0917bdd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c8f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917bdd8);
  FUN_057e0400(lVar2,DAT_091ab7f8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((param_2 != 0) && ((uVar3 & 1) != 0)) {
    if (param_1 == 0) {
LAB_040856a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = AnhPD_FoodOrder_StackModeService__ResolveQueueIngredientIds
                        (param_2,lVar8,*(undefined8 *)(param_1 + 0xd8),0);
      lVar5 = AnhPD_FoodOrder_LevelSupply__Build(lVar8,uVar4,0);
      if ((lVar5 == 0) || (lVar5 = AnhPD_FoodOrder_LevelSupply__StationList(lVar5,0), lVar5 == 0))
      goto LAB_040856a8;
      FUN_057e272c(lVar5,DAT_091b05e8);
      FUN_057e185c(&local_98,lVar5,DAT_091b05a8);
      uStack_78 = puStack_90;
      local_80 = local_98;
      puStack_90 = &local_80;
      local_70 = local_88;
      local_98 = 0;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a45a0), uVar4 = local_70, lVar5 = local_98,
            (uVar3 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = AnhPD_FoodOrder_RecipeConfigSO__GetStationComponent(lVar8,local_70,0);
        if (lVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar3 & 1) == 0) {
          uVar10 = *(undefined8 *)(param_2 + 0x60);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_2 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = CakeOrder_MapToolConfig__GetToolSO(*(long *)(param_2 + 0x60),uVar4,0);
          }
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar3 & 1) != 0) {
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_057e1004(lVar2,uVar9,DAT_091ab808);
          lVar5 = DAT_091ab800;
          if ((uVar3 & 1) == 0) {
            lVar7 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar9;
              thunk_FUN_03f5d7b8(puVar6,uVar9);
            }
            else {
              FUN_057e0c68(lVar2,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      FUN_071bd288(puStack_90,DAT_091a4598);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar5);
      }
    }
  }
  return lVar2;
}

