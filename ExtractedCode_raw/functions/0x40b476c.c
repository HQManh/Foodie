// rea decompile_all
// name: AnhPD.FoodOrder.PopupMinigameController$$ShowMinigame
// address: 0x40b476c
// body: available
// range: 0x40b476c-0x40b494f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b4930 to 0x4375554 CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader$$ShowMinigame (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40b4948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b494c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PopupMinigameController__ShowMinigame
               (long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09515f04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091745e8);
    FUN_03f5c2a4(&DAT_09174838);
    FUN_03f5c2a4(&DAT_091b4bb8);
    FUN_03f5c2a4(&DAT_091ee848);
    FUN_03f5c2a4(&DAT_091ee850);
    FUN_03f5c2a4(&DAT_09193608);
    DAT_09515f04 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09193608);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_4);
    uVar1 = param_2 - 1;
    if ((int)uVar1 < 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) <= (int)uVar1) {
        return;
      }
      CakeOrder_TimeControlCakeOrder__StopTime(param_1,0);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar6 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
        lVar5 = *(long *)(DAT_091b4bb8 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        uVar3 = thunk_FUN_03f9944c(DAT_09174838);
        FUN_070a8c30(uVar3,lVar2,DAT_091ee848,0);
        uVar4 = thunk_FUN_03f9944c(DAT_091745e8);
        FUN_070a8c30(uVar4,lVar2,DAT_091ee850,0);
        if (lVar5 != 0) {
          CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__ShowMinigame
                    (lVar5,uVar6,param_3,uVar3,uVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

