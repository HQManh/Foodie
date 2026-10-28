// rea decompile_all
// name: AnhPD.FoodOrder.SpawnService$$Spawn
// address: 0x41e9820
// body: available
// range: 0x41e9820-0x41e9b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e9b00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * AnhPD_FoodOrder_SpawnService__Spawn
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,uint param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_58;
  
  if ((DAT_09516bd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fa38);
    FUN_03f5c2a4(&DAT_0919fa48);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091871c8);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918cb90);
    FUN_03f5c2a4(&DAT_092189d0);
    DAT_09516bd1 = 1;
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    uVar2 = AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(*(long *)(param_4 + 0x28),param_5,0)
    ;
    plVar3 = (long *)AnhPD_FoodOrder_SpawnService__SpawnSingle
                               (param_1,param_2,param_3,param_4,uVar2,param_6 & 1,param_7 & 1,
                                param_8);
    uVar2 = AnhPD_FoodOrder_RecipeConfigSO__BaseIdOf(param_5,0);
    uVar4 = System_String__op_Inequality(uVar2,param_5,0);
    if (((uVar4 & 1) != 0) && (plVar3 != (long *)0x0)) {
      lVar7 = *plVar3;
      if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
          DAT_09184728)) {
        (**(code **)(lVar7 + 600))(plVar3,param_5,*(undefined8 *)(lVar7 + 0x260));
      }
    }
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__Born(plVar3);
    if (plVar3 != (long *)0x0) {
      if (plVar3[0x14] != 0) {
        local_58 = *(undefined8 *)(plVar3[0x14] + 0x10);
        uVar5 = FUN_03f5c42c(DAT_0918cb90,&local_58);
        uVar5 = System_String__Format(DAT_092189d0,uVar5,0);
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189140);
        }
        AnhPD_FoodOrder_PieceLedger__Step(plVar3,uVar5);
      }
      lVar7 = DAT_091ac690;
      lVar6 = *(long *)(param_4 + 0x10);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = (long)plVar3;
            thunk_FUN_03f5d7b8(plVar9,plVar3);
          }
          else {
            FUN_057e0c68(lVar6,plVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = *(long *)(param_4 + 0x18);
          uVar5 = thunk_FUN_03f9944c(DAT_091871c8);
          AnhPD_FoodOrder_ItemGroup___ctor(uVar5,uVar2,0);
          if (lVar7 != 0) {
            FUN_06fda034(lVar7,uVar2,uVar5,DAT_0919fa38);
            if ((*(long *)(param_4 + 0x18) != 0) &&
               (lVar7 = FUN_06fd83d4(*(long *)(param_4 + 0x18),uVar2,DAT_0919fa48), lVar7 != 0)) {
              AnhPD_FoodOrder_ItemGroup__AddItem(lVar7,plVar3,0);
              return plVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

