// rea decompile_all
// name: AnhPD.FoodOrder.SpawnBagSaveMe$$BuildPreview
// address: 0x40fd064
// body: available
// range: 0x40fd064-0x40fd2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fd2b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fd2b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fd2bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpawnBagSaveMe__BuildPreview(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_34 [4];
  
  if ((DAT_09516155 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_09516155 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  local_34[0] = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      lVar1 = FUN_057e0998(lVar1,0,DAT_091adb28);
      if (((**(long **)(DAT_091881a0 + 0xb8) == 0) || (lVar1 == 0)) ||
         (lVar2 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar2 == 0))
      goto LAB_040fd2b4;
      uVar3 = AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar2,*(undefined8 *)(lVar1 + 0x10),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar4 & 1) == 0) {
          lVar2 = UnityEngine_Component__get_transform(param_1,0);
        }
        else {
          lVar2 = *(long *)(param_1 + 0x30);
        }
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_34[0] = AnhPD_FoodOrder_PieceLedger__Mute(0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = **(long **)(DAT_091881a0 + 0xb8);
        UnityEngine_Transform__get_position(lVar2,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar5 = (long *)AnhPD_FoodOrder_MessyController__SpawnDragItemPrefab(lVar7,uVar3,0,0);
        AnhPD_FoodOrder_PieceLedger_Muted__Dispose(local_34,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(plVar5,0);
        if ((uVar4 & 1) != 0) {
          if (plVar5 != (long *)0x0) {
            if (((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
                (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 +
                          -8) == DAT_09184728)) &&
               (uVar4 = AnhPD_FoodOrder_FlexibleId__IsFlexible(*(undefined8 *)(lVar1 + 0x10),0),
               (uVar4 & 1) != 0)) {
              (**(code **)(*plVar5 + 600))
                        (plVar5,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(*plVar5 + 0x260));
            }
          }
          AnhPD_FoodOrder_SpawnBagSaveMe__AdoptAsPreview(param_1,plVar5);
        }
      }
    }
    return;
  }
LAB_040fd2b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

