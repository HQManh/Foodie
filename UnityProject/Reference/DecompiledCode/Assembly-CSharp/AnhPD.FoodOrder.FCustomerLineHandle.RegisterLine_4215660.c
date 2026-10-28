// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$RegisterLine
// address: 0x4215660
// body: available
// range: 0x4215660-0x42159e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42159c8 to 0x4213b30 AnhPD.FoodOrder.FCustomerLine$$SetEmotionThresholds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42159e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle__RegisterLine(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09516caf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174600);
    FUN_03f5c2a4(&DAT_09174e88);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c7040);
    FUN_03f5c2a4(&DAT_091cc118);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5660);
    FUN_03f5c2a4(&DAT_091e9f60);
    FUN_03f5c2a4(&DAT_091e9f68);
    FUN_03f5c2a4(&DAT_091e9f70);
    FUN_03f5c2a4(&DAT_091e9f78);
    FUN_03f5c2a4(&DAT_091e9f80);
    FUN_03f5c2a4(&DAT_09190888);
    DAT_09516caf = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190888);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    plVar4 = (long *)(lVar1 + 0x18);
    *plVar4 = param_2;
    thunk_FUN_03f5d7b8(plVar4,param_2);
    lVar5 = *plVar4;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*plVar4 != 0) {
      AnhPD_FoodOrder_FCustomerLine__SetEnterFromRight(*plVar4,*(undefined1 *)(param_1 + 0x58));
      lVar5 = *plVar4;
      uVar6 = *(undefined8 *)(param_1 + 0xe0);
      uVar3 = thunk_FUN_03f9944c(DAT_09174e88);
      FUN_071ce50c(uVar3,uVar6,DAT_091d5660,0);
      if (lVar5 != 0) {
        AnhPD_FoodOrder_FCustomerLine__add_onSpawnCoin(lVar5,uVar3);
        lVar5 = *(long *)(lVar1 + 0x18);
        uVar3 = thunk_FUN_03f9944c(DAT_09174600);
        FUN_070a8c30(uVar3,lVar1,DAT_091e9f60,0);
        if (lVar5 != 0) {
          AnhPD_FoodOrder_FCustomerLine__add_onCustomerLeave(lVar5,uVar3);
          lVar5 = *plVar4;
          uVar6 = *(undefined8 *)(param_1 + 200);
          uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar3,uVar6,DAT_091c7040,0);
          if (lVar5 != 0) {
            AnhPD_FoodOrder_FCustomerLine__add_onLoaded(lVar5,uVar3);
            lVar5 = *(long *)(lVar1 + 0x18);
            uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar3,lVar1,DAT_091e9f68,0);
            if (lVar5 != 0) {
              AnhPD_FoodOrder_FCustomerLine__add_onLeaveStarted(lVar5,uVar3);
              lVar5 = *plVar4;
              uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar3,param_1,DAT_091cc118,0);
              if (lVar5 != 0) {
                AnhPD_FoodOrder_FCustomerLine__add_onBoardFreed(lVar5,uVar3);
                lVar5 = *(long *)(lVar1 + 0x18);
                uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
                System_Action___ctor(uVar3,lVar1,DAT_091e9f70,0);
                if (lVar5 != 0) {
                  AnhPD_FoodOrder_FCustomerLine__add_onOrderShown(lVar5,uVar3);
                  lVar5 = *(long *)(lVar1 + 0x18);
                  uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
                  System_Action___ctor(uVar3,lVar1,DAT_091e9f78,0);
                  if (lVar5 != 0) {
                    AnhPD_FoodOrder_FCustomerLine__add_onMysteryRevealed(lVar5,uVar3);
                    lVar5 = *(long *)(lVar1 + 0x18);
                    uVar3 = thunk_FUN_03f9944c(DAT_09177ab8);
                    FUN_053007d8(uVar3,lVar1,DAT_091e9f80,0);
                    if (lVar5 != 0) {
                      AnhPD_FoodOrder_FCustomerLine__SetTimerHoldSource(lVar5,uVar3);
                      lVar1 = AnhPD_FoodOrder_FCustomerLineHandle__get_InitData();
                      if (lVar1 == 0) {
                        return;
                      }
                      if (*(long *)(lVar1 + 0xc0) == 0) {
                        return;
                      }
                      if (*plVar4 != 0) {
                        AnhPD_FoodOrder_FCustomerLine__SetEmotionThresholds
                                  (*plVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
                        return;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

