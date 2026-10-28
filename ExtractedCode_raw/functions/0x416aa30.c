// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$Roll
// address: 0x416aa30
// body: available
// range: 0x416aa30-0x416ad43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416ad40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiOrderStrategy__Roll(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_095165a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091790e0);
    FUN_03f5c2a4(&DAT_09186798);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b670);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_095165a2 = 1;
  }
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = AnhPD_FoodOrder_SushiOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  uVar7 = 0;
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId(lVar2,param_3,&local_38,0);
    uVar7 = 0;
    if ((uVar3 & 1) != 0) {
      uVar7 = AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(lVar2,local_38,0);
      plVar4 = (long *)thunk_FUN_03f99350(uVar7,DAT_09186798);
      if (plVar4 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = thunk_FUN_03f9944c(DAT_091790e0);
        lVar2 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186798) {
              lVar2 = lVar2 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_0416abc0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        lVar2 = FUN_03f95da8(plVar4,DAT_09186798,0);
LAB_0416abc0:
        FUN_05316834(uVar7,plVar4,*(undefined8 *)(lVar2 + 8),0);
      }
    }
  }
  if (param_3 < 3) {
    if (param_3 == 1) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__RollNigiri(&local_60,uVar1,uVar7);
      goto LAB_0416ad18;
    }
    if (param_3 == 2) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__RollMaki(&local_60,uVar1,uVar7);
      goto LAB_0416ad18;
    }
  }
  else {
    if (param_3 == 3) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__RollGunkan(&local_60,uVar1,uVar7);
      goto LAB_0416ad18;
    }
    if (param_3 == 4) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__RollSashimi(&local_60,uVar1,uVar7);
      goto LAB_0416ad18;
    }
    if (param_3 == 5) {
      if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(DAT_0918b670 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar2 + 0x10);
      local_60 = *(undefined8 *)(lVar2 + 8);
      local_50 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_0416ad18;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  local_50 = puVar5[2];
LAB_0416ad18:
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}

