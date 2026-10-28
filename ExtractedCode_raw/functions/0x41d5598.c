// rea decompile_all
// name: AnhPD.FoodOrder.MessyController$$OnSetUpLevel
// address: 0x41d5598
// body: available
// range: 0x41d5598-0x41d5bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d5bf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] AnhPD_FoodOrder_MessyController__OnSetUpLevel(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_09516a75 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09174650);
    FUN_03f5c2a4(&DAT_09174c88);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091c3498);
    FUN_03f5c2a4(&DAT_091819f0);
    FUN_03f5c2a4(&DAT_09181e80);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091c54f8);
    FUN_03f5c2a4(&DAT_091cd7d0);
    FUN_03f5c2a4(&DAT_09187800);
    FUN_03f5c2a4(&DAT_09187808);
    FUN_03f5c2a4(&DAT_091d3738);
    FUN_03f5c2a4(&DAT_091d3728);
    FUN_03f5c2a4(&DAT_091d3730);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918b118);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516a75 = 1;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceLedger__Reset(0);
  AnhPD_FoodOrder_MessyController__PrepareRandomOrders(param_1);
  lVar2 = param_1[0x1a];
  uVar1 = AnhPD_FoodOrder_StackModeService__ResolveQueueIngredientIds
                    (param_1[7],lVar2,param_1[0x1b],0);
  lVar2 = AnhPD_FoodOrder_LevelSupply__Build(lVar2,uVar1,0);
  param_1[0x26] = lVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x26,lVar2);
  lVar2 = param_1[0x1a];
  lVar6 = param_1[0x26];
  lVar3 = thunk_FUN_03f9944c(DAT_09187808);
  AnhPD_FoodOrder_LevelInitializer___ctor(lVar3,lVar2,lVar6,0);
  lVar2 = param_1[0x1f];
  lVar6 = param_1[0x20];
  lVar7 = param_1[0x21];
  lVar9 = param_1[0x25];
  uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar1,param_1,DAT_091d3728,0);
  if (lVar3 != 0) {
    AnhPD_FoodOrder_LevelInitializer__Initialize(lVar3,lVar2,lVar6,lVar7,lVar9,uVar1,0);
    param_1[0x29] = *(long *)(lVar3 + 0x28);
    thunk_FUN_03f5d7b8(param_1 + 0x29);
    param_1[0x28] = *(long *)(lVar3 + 0x20);
    thunk_FUN_03f5d7b8(param_1 + 0x28);
    param_1[0x2a] = *(long *)(lVar3 + 0x40);
    thunk_FUN_03f5d7b8(param_1 + 0x2a);
    param_1[0x27] = *(long *)(lVar3 + 0x30);
    thunk_FUN_03f5d7b8(param_1 + 0x27);
    lVar2 = param_1[0x1a];
    lVar6 = param_1[0x1b];
    lVar9 = param_1[0x29];
    lVar10 = param_1[0x1c];
    lVar7 = thunk_FUN_03f9944c(DAT_09187800);
    AnhPD_FoodOrder_LevelInfo___ctor(lVar7,lVar2,lVar9,lVar6,lVar10,0);
    if ((param_1[0x26] != 0) && (lVar7 != 0)) {
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_1[0x26] + 0x20);
      thunk_FUN_03f5d7b8();
      param_1[0x22] = lVar7;
      thunk_FUN_03f5d7b8(param_1 + 0x22,lVar7);
      if ((param_1[0x26] != 0) &&
         ((param_1[7] != 0 && (lVar2 = *(long *)(param_1[0x26] + 0x20), lVar2 != 0)))) {
        AnhPD_FoodOrder_LevelPieceBook__Setup
                  (lVar2,param_1[0x22],*(undefined8 *)(param_1[7] + 0x98),0);
        lVar2 = param_1[0x20];
        lVar6 = param_1[0x21];
        lVar9 = param_1[0x22];
        lVar10 = param_1[0x1a];
        lVar7 = thunk_FUN_03f9944c(DAT_0918b118);
        AnhPD_FoodOrder_StackModeService___ctor(lVar7,lVar2,lVar6,lVar9,lVar10,0);
        param_1[0x2b] = lVar7;
        thunk_FUN_03f5d7b8(param_1 + 0x2b,lVar7);
        if ((param_1[0x20] != 0) && (param_1[0x21] != 0)) {
          lVar6 = param_1[0x22];
          uVar1 = *(undefined8 *)(param_1[0x20] + 0x10);
          uVar8 = *(undefined8 *)(param_1[0x21] + 0x20);
          lVar7 = param_1[0x30];
          lVar2 = thunk_FUN_03f9944c(DAT_09181918);
          AnhPD_FoodOrder_AutoCompleteOrderFx___ctor(lVar2,lVar6,uVar1,uVar8,lVar7);
          param_1[0x2c] = lVar2;
          thunk_FUN_03f5d7b8(param_1 + 0x2c,lVar2);
          lVar6 = param_1[6];
          lVar2 = thunk_FUN_03f9944c(DAT_091819f0);
          AnhPD_FoodOrder_BackgroundTintService___ctor(lVar2,lVar6,0);
          param_1[0x2f] = lVar2;
          thunk_FUN_03f5d7b8(param_1 + 0x2f,lVar2);
          lVar2 = param_1[0x20];
          lVar6 = param_1[0x21];
          lVar9 = param_1[0x22];
          lVar10 = param_1[0x2c];
          lVar7 = param_1[0x2f];
          uVar1 = thunk_FUN_03f9944c(DAT_09174570);
          FUN_070a4758(uVar1,lVar7,DAT_091c3498,0);
          lVar7 = thunk_FUN_03f9944c(DAT_09181e80);
          AnhPD_FoodOrder_BoosterService___ctor(lVar7,lVar2,lVar6,lVar9,lVar10,uVar1,0);
          param_1[0x2e] = lVar7;
          thunk_FUN_03f5d7b8(param_1 + 0x2e,lVar7);
          if (param_1[0x20] != 0) {
            uVar1 = *(undefined8 *)(param_1[0x20] + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar1,0);
            if ((uVar4 & 1) != 0) {
              if ((param_1[0x20] == 0) || (lVar2 = *(long *)(param_1[0x20] + 0x10), lVar2 == 0))
              goto LAB_041d5bf4;
              AnhPD_FoodOrder_GridIngController__SetupCellGrid(lVar2,param_1[7],0);
            }
            if (param_1[0x20] != 0) {
              uVar1 = *(undefined8 *)(param_1[0x20] + 0x18);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar1,0);
              if ((uVar4 & 1) != 0) {
                if ((((param_1[0x20] == 0) || (param_1[7] == 0)) ||
                    (lVar2 = *(long *)(param_1[7] + 0xb8), lVar2 == 0)) ||
                   (lVar6 = *(long *)(param_1[0x20] + 0x18), lVar6 == 0)) goto LAB_041d5bf4;
                *(undefined4 *)(lVar6 + 0x7c) = *(undefined4 *)(lVar2 + 0x14);
              }
              AnhPD_FoodOrder_DifficultySprite__ApplyAllInScene(0);
              AnhPD_FoodOrder_SpineSkinSwitcher__ApplyAllInScene(0);
              if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = CakeOrder_CheatManagerCakeOrder__get_IsShowDebug(0);
              if ((uVar4 & 1) != 0) {
                uVar1 = FUN_04a6a14c(param_1,DAT_091c54f8);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar4 = UnityEngine_Object__op_Implicit(uVar1,0);
                if ((uVar4 & 1) == 0) {
                  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
                  if (lVar2 == 0) goto LAB_041d5bf4;
                  FUN_04b7c294(lVar2,DAT_091cd7d0);
                }
              }
              if (*(long *)(lVar3 + 0x38) != 0) {
                *(long *)(*(long *)(lVar3 + 0x38) + 0x18) = param_1[0x22];
                thunk_FUN_03f5d7b8();
                lVar2 = param_1[0x27];
                lVar6 = param_1[0x22];
                uVar1 = thunk_FUN_03f9944c(DAT_09174c88);
                FUN_071cd244(uVar1,param_1,DAT_091d3738,0);
                if (lVar2 != 0) {
                  AnhPD_FoodOrder_SpawnService__SetInteractContext(lVar2,lVar6,uVar1,0);
                  lVar2 = param_1[0x27];
                  uVar1 = thunk_FUN_03f9944c(DAT_09174650);
                  FUN_070a8c30(uVar1,param_1,DAT_091d3730,0);
                  if (lVar2 != 0) {
                    puVar5 = (undefined8 *)(lVar2 + 0x40);
                    *puVar5 = uVar1;
                    thunk_FUN_03f5d7b8(puVar5,uVar1);
                    if (param_1[0x2b] != 0) {
                      AnhPD_FoodOrder_StackModeService__Setup(param_1[0x2b],0);
                      (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
                      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      return *(undefined1 (*) [16])(*(long *)(DAT_0918c610 + 0xb8) + 0x10);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_041d5bf4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

