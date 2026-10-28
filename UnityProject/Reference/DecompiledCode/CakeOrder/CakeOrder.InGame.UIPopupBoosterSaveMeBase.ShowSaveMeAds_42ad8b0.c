// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$ShowSaveMeAds
// address: 0x42ad8b0
// body: available
// range: 0x42ad8b0-0x42adadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42adadc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__ShowSaveMeAds(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((DAT_0951729d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09180fe0);
    FUN_03f5c2a4(&DAT_09180fe8);
    FUN_03f5c2a4(&DAT_09182c40);
    FUN_03f5c2a4(&DAT_091dcee8);
    FUN_03f5c2a4(&DAT_0921d4a8);
    FUN_03f5c2a4(&DAT_09221ec8);
    DAT_0951729d = 1;
  }
  lVar4 = *(long *)(param_1 + 400);
  lVar1 = thunk_FUN_03f9944c(DAT_09180fe8);
  IapAdsSystem_AdsRuntimeData___ctor(lVar1,0);
  local_58 = DAT_09180fe0;
  local_48 = *(undefined4 *)(param_1 + 0x100);
  uStack_50 = 0xffffffffffffffff;
  uVar2 = System_Enum__ToString(&local_58,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0x168) != 0) {
      local_60 = *(undefined4 *)(*(long *)(param_1 + 0x168) + 0x18);
      local_70 = DAT_09182c40;
      uStack_68 = 0xffffffffffffffff;
      uVar2 = System_Enum__ToString(&local_70,0);
      *(undefined8 *)(lVar1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x168) != 0) {
        local_88 = DAT_09180fe0;
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x10);
        local_78 = *(undefined4 *)(param_1 + 0x100);
        uStack_80 = 0xffffffffffffffff;
        *(undefined4 *)(lVar1 + 0x28) = local_78;
        uVar2 = System_Enum__ToString(&local_88,0);
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(lVar1 + 0x38) = DAT_0921d4a8;
        thunk_FUN_03f5d7b8();
        if (*(long *)(param_1 + 0x168) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
        }
        uVar3 = System_String__IsNullOrEmpty(uVar2,0);
        uVar2 = DAT_09221ec8;
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x168) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
          }
        }
        *(undefined8 *)(lVar1 + 0x40) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
        uVar2 = DAT_09180e78;
        *(undefined4 *)(lVar1 + 0x48) = 1;
        uVar2 = thunk_FUN_03f9944c(uVar2);
        System_Action___ctor(uVar2,param_1,DAT_091dcee8,0);
        if (lVar4 != 0) {
          CakeOrder_InGame_UIInLevelCakeOrder__ShowBoosterOrSaveMeRewardAds(lVar4,lVar1,uVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

