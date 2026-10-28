// rea decompile_all
// name: AnhPD.PopupMinigame.PourLiquidController$$SetUpBeforeShow
// address: 0x41ce590
// body: available
// range: 0x41ce590-0x41ce737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ce730 to 0x437529c CakeOrder.PopupMinigame.CookOrderPopupMinigameControllerAbstract$$SetUpBeforeShow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ce734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PopupMinigame_PourLiquidController__SetUpBeforeShow
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((DAT_09516a1c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d6488);
    FUN_03f5c2a4(&DAT_091d6490);
    FUN_03f5c2a4(&DAT_091d6498);
    FUN_03f5c2a4(&DAT_091d64a8);
    DAT_09516a1c = 1;
  }
  AnhPD_PopupMinigame_PourLiquidController__ForceRestart(param_1);
  lVar2 = *(long *)(param_1 + 0x88);
  uVar1 = thunk_FUN_03f9944c(DAT_09174948);
  FUN_071c30b0(uVar1,param_1,DAT_091d6498,0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x40);
    *puVar3 = uVar1;
    thunk_FUN_03f5d7b8(puVar3,uVar1);
    lVar2 = *(long *)(param_1 + 0x88);
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091d64a8,0);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x48);
      *puVar3 = uVar1;
      thunk_FUN_03f5d7b8(puVar3,uVar1);
      lVar2 = *(long *)(param_1 + 0x88);
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_1,DAT_091d6488,0);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x50);
        *puVar3 = uVar1;
        thunk_FUN_03f5d7b8(puVar3,uVar1);
        lVar2 = *(long *)(param_1 + 0x78);
        uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar1,param_1,DAT_091d6490,0);
        if (lVar2 != 0) {
          puVar3 = (undefined8 *)(lVar2 + 0x60);
          *puVar3 = uVar1;
          thunk_FUN_03f5d7b8(puVar3,uVar1);
          CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__SetUpBeforeShow
                    (param_1,param_2,param_3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

