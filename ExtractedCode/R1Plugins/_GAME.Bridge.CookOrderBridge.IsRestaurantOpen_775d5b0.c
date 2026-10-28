// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$IsRestaurantOpen
// address: 0x775d5b0
// body: available
// range: 0x775d5b0-0x775d6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775d6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_Bridge_CookOrderBridge__IsRestaurantOpen(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09522c03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    DAT_09522c03 = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_0775d6bc;
    iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                      (**(long **)(lVar4 + 0xb8),param_1,0);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_0775d6a8;
    }
  }
  uVar3 = _GAME_Bridge_CookOrderBridge__get_IsMapProgressReady();
  if ((uVar3 & 1) != 0) {
    lVar4 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance(0);
    if (lVar4 == 0) {
LAB_0775d6bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = CakeOrder_Home_Journey_JourneyLevelMap__TryGetRange(lVar4,param_1,&local_40,0);
    if ((uVar3 & 1) != 0) {
      uStack_58 = uStack_38;
      local_60 = local_40;
      uStack_48 = uStack_28;
      uStack_50 = uStack_30;
      uVar2 = CakeOrder_Home_Journey_JourneyProgress__IsChapterOpen(&local_60,0);
      goto LAB_0775d6a8;
    }
  }
  uVar2 = 0;
LAB_0775d6a8:
  return uVar2 & 1;
}

