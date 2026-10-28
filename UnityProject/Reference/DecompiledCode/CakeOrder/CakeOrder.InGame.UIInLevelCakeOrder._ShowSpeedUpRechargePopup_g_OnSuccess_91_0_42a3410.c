// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$<ShowSpeedUpRechargePopup>g__OnSuccess|91_0
// address: 0x42a3410
// body: available
// range: 0x42a3410-0x42a3577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a3570 to 0x425efac CakeOrder.CakeOrderDataTracking$$TrackBoosterUsed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42a3574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__<ShowSpeedUpRechargePopup>g__OnSuccess_91_0
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_09517242 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_0921c978);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_09221b80);
    FUN_03f5c2a4(&DAT_09223088);
    DAT_09517242 = 1;
  }
  CakeOrder_InGame_UIInLevelCakeOrder__<ShowSpeedUpRechargePopup>g__CloseAndResume_91_2(param_1);
  if (*(long *)(param_1 + 0x100) != 0) {
    CakeOrder_InGame_UIInLevelHUDPuzzleStyle__ReactivateSpeedUp();
    if (((*(long *)(param_1 + 0xc0) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40), lVar5 != 0)) && (param_2 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x30);
      if (0 < *(int *)(param_2 + 0x14)) {
        if (lVar5 == 0) goto LAB_042a3574;
        CakeOrder_InGame_BoosterCounter__RecordUseBoosterByAds(lVar5,DAT_09223088,0);
      }
      iVar7 = *(int *)(param_2 + 0x18);
      if (0 < iVar7) {
        if (lVar5 == 0) goto LAB_042a3574;
        CakeOrder_InGame_BoosterCounter__RecordUseBoosterByHardCurrency(lVar5,DAT_09223088,iVar7,0);
        iVar7 = *(int *)(param_2 + 0x18);
      }
      uVar4 = DAT_09224f00;
      uVar2 = DAT_09221b80;
      uVar1 = DAT_0921c978;
      if (*(long *)(param_1 + 0xc0) != 0) {
        iVar3 = *(int *)(param_2 + 0x14);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x40);
        if (*(int *)(DAT_09182280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (iVar7 < 1) {
          uVar1 = uVar4;
        }
        if (iVar3 < 1) {
          uVar2 = uVar1;
        }
        CakeOrder_CakeOrderDataTracking__TrackBoosterUsed(DAT_09223088,uVar2,iVar7,uVar6,0);
        return;
      }
    }
  }
LAB_042a3574:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

