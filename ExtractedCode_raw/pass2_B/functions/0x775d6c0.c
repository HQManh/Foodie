// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$IsRestaurantCompleted
// address: 0x775d6c0
// body: available
// range: 0x775d6c0-0x775d803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775d800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_Bridge_CookOrderBridge__IsRestaurantCompleted(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09522c04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522c04 = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar2 = _GAME_Bridge_CookOrderBridge__get_IsMapProgressReady();
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance(0);
  if (lVar3 == 0) {
LAB_0775d800:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = CakeOrder_Home_Journey_JourneyLevelMap__TryGetRange(lVar3,param_1,&local_40,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar2 = CakeOrder_Home_Journey_JourneyLevelMap_MapRange__get_HasLevels(&local_40,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0775d800;
  lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar3 + 0xb8),param_1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) goto LAB_0775d800;
    iVar4 = *(int *)(lVar3 + 0x50);
    if (0 < *(int *)(lVar3 + 0x50)) goto LAB_0775d7d4;
  }
  iVar4 = uStack_38._4_4_;
LAB_0775d7d4:
  iVar1 = CakeOrder_Home_Journey_JourneyProgress__MaxWinLevelsInMap(param_1,0);
  return iVar4 <= iVar1;
}

