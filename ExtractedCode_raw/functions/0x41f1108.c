// rea decompile_all
// name: AnhPD.FoodOrder.LevelInitializer$$InitStation
// address: 0x41f1108
// body: available
// range: 0x41f1108-0x41f13ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f13dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f13fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelInitializer__InitStation(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_78;
  long *plStack_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09516b77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091b05e8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b77 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar2,DAT_091b0558);
  }
  else {
    lVar2 = AnhPD_FoodOrder_LevelSupply__StationList();
  }
  if ((lVar2 != 0) && (FUN_057e272c(lVar2,DAT_091b05e8), param_2 != 0)) {
    AnhPD_FoodOrder_StationHolderGrid__Setup(param_2,lVar2,0);
    lVar2 = AnhPD_FoodOrder_StationHolderGrid__GetListStation(param_2,0);
    if (param_3 != 0) {
      plVar5 = (long *)(param_3 + 0x10);
      *plVar5 = lVar2;
      thunk_FUN_03f5d7b8(plVar5,lVar2);
      lVar2 = AnhPD_FoodOrder_LevelInitializer__get_InitData();
      if ((lVar2 != 0) && (*plVar5 != 0)) {
        lVar2 = *(long *)(lVar2 + 0x60);
        FUN_057e185c(&local_78,*plVar5,DAT_091ac068);
        local_50 = local_68;
        uStack_58 = plStack_70;
        local_60 = local_78;
        local_78 = 0;
        plStack_70 = &local_60;
        do {
          uVar3 = FUN_071bd28c(&local_60,DAT_091a27d0);
          lVar1 = local_50;
          lVar4 = local_78;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(plStack_70,DAT_091a27c8);
            if (lVar4 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c548(lVar4);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar3 & 1) == 0) {
LAB_041f12fc:
            lVar4 = 0;
          }
          else {
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = AnhPD_FoodOrder_RecipeConfigSO__GetStationComponent
                              (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x28),0);
            if (lVar4 == 0) {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = AnhPD_FoodOrder_RecipeConfigSO__GetStationComponent
                                (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x30),0);
              if (lVar4 == 0) goto LAB_041f12fc;
            }
            lVar4 = *(long *)(lVar4 + 0x20);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
            if ((uVar3 & 1) != 0) {
              if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = CakeOrder_MapToolConfig__GetToolSO(lVar2,*(undefined8 *)(lVar1 + 0x28),0);
              if (lVar4 == 0) {
                lVar4 = CakeOrder_MapToolConfig__GetToolSO(lVar2,*(undefined8 *)(lVar1 + 0x30),0);
              }
            }
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            AnhPD_FoodOrder_CookingStation__Setup
                      (lVar1,lVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),0
                      );
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

