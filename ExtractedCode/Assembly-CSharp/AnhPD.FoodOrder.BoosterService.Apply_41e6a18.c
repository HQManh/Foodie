// rea decompile_all
// name: AnhPD.FoodOrder.BoosterService$$Apply
// address: 0x41e6a18
// body: available
// range: 0x41e6a18-0x41e6eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e6cec to 0x41dcee8 AnhPD.FoodOrder.AutoCompleteOrderFx$$add_onFinished (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e6da4 to 0x41e7054 AnhPD.FoodOrder.BoosterService.<>c__DisplayClass14_0$$<Apply>g__EndHeldEffect|1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e6ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BoosterService__Apply(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_34 [2];
  
  if ((DAT_09516b08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e64b8);
    FUN_03f5c2a4(&DAT_091e64c0);
    FUN_03f5c2a4(&DAT_0918e920);
    DAT_09516b08 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918e920);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) {
LAB_041e6ea8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_3);
  plVar6 = (long *)(lVar2 + 0x20);
  *plVar6 = param_2;
  thunk_FUN_03f5d7b8(plVar6,param_2);
  *(long *)(lVar2 + 0x28) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28),param_1);
  lVar4 = *plVar6;
  *(undefined1 *)(lVar2 + 0x10) = 0;
  if (lVar4 == 0) goto LAB_041e6ea8;
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      AnhPD_FoodOrder_BoosterService__BeginHold(param_1);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar3 & 1) == 0) {
LAB_041e6d90:
          AnhPD_FoodOrder_BoosterService_<>c__DisplayClass14_0__<Apply>g__EndHeldEffect_1(lVar2);
          return;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
          uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar7,lVar2,DAT_091e64b8,0);
          if (lVar4 != 0) {
            uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__BeginPickAnyIngredient
                              (lVar4,uVar7,0);
            if ((uVar3 & 1) != 0) {
              return;
            }
            goto LAB_041e6d90;
          }
        }
      }
      goto LAB_041e6ea8;
    }
    if (iVar1 == 3) {
      AnhPD_FoodOrder_BoosterService__BeginHold(param_1);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar3 & 1) == 0) goto LAB_041e6d90;
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
          uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar7,lVar2,DAT_091e64b8,0);
          if (lVar4 != 0) {
            uVar3 = AnhPD_FoodOrder_GridIngController__RunSpiderCleanBooster(lVar4,uVar7,0);
            if ((uVar3 & 1) != 0) {
              return;
            }
            goto LAB_041e6d90;
          }
        }
      }
      goto LAB_041e6ea8;
    }
  }
  else {
    if (iVar1 == 4) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_041e6ea8;
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar4 == 0)) goto LAB_041e6ea8;
        AnhPD_FoodOrder_IngredientSpawnerController__PromoteRowToFront(lVar4,2,0);
      }
      if (*(char *)(lVar2 + 0x10) != '\0') {
        return;
      }
      lVar5 = *(long *)(lVar2 + 0x18);
      *(undefined1 *)(lVar2 + 0x10) = 1;
      if (lVar5 == 0) {
        return;
      }
      lVar4 = *plVar6;
      goto LAB_041e6e14;
    }
    if (iVar1 == 9) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_041e6ea8;
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      uVar7 = 0;
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) goto LAB_041e6ea8;
        uVar7 = AnhPD_FoodOrder_FCustomerLineHandle__PickAutoCompleteLine(lVar4,0);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) != 0) {
        uVar8 = **(undefined8 **)(DAT_091881a0 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar3 & 1) != 0) {
          if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041e6ea8;
          uVar3 = AnhPD_FoodOrder_MessyController__TryAutoCompleteOrderFx
                            (**(long **)(DAT_091881a0 + 0xb8),uVar7,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = *(long *)(param_1 + 0x28);
            if (lVar4 == 0) goto LAB_041e6ea8;
            if (*(char *)(lVar4 + 0x30) != '\0') {
              AnhPD_FoodOrder_BoosterService__BeginHold(param_1);
              lVar4 = *(long *)(param_1 + 0x28);
              uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar7,lVar2,DAT_091e64c0,0);
              if (lVar4 != 0) {
                AnhPD_FoodOrder_AutoCompleteOrderFx__add_onFinished(lVar4,uVar7,0);
                return;
              }
              goto LAB_041e6ea8;
            }
            if (*(char *)(lVar4 + 0x41) != '\0') goto LAB_041e6e68;
          }
        }
      }
      lVar4 = *plVar6;
      local_34[0] = 0;
      FUN_05c290f8(local_34,0,DAT_091b6a48);
      if (lVar4 != 0) {
        *(undefined2 *)(lVar4 + 0x10) = local_34[0];
LAB_041e6e68:
        if (*(char *)(lVar2 + 0x10) == '\0') {
          lVar4 = *(long *)(lVar2 + 0x18);
          *(undefined1 *)(lVar2 + 0x10) = 1;
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*plVar6,*(undefined8 *)(lVar4 + 0x28));
          }
        }
        return;
      }
      goto LAB_041e6ea8;
    }
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  if (lVar5 == 0) {
    return;
  }
LAB_041e6e14:
                    /* WARNING: Could not recover jumptable at 0x041e6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),lVar4,*(undefined8 *)(lVar5 + 0x28));
  return;
}

