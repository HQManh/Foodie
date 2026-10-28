// rea decompile_all
// name: AnhPD.Home.UIHomeMapSection$$Setup
// address: 0x41d2bec
// body: available
// range: 0x41d2bec-0x41d2d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d2d94 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41d2d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_UIHomeMapSection__Setup
               (long param_1,long param_2,undefined4 param_3,ulong param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_09516a49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091dca10);
    FUN_03f5c2a4(&DAT_091dca18);
    DAT_09516a49 = 1;
  }
  lVar1 = DAT_091b4b60;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar1 = *(long *)(lVar1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(**(long **)(lVar1 + 0xb8),param_3,0);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(param_1 + 0xb0) = param_5;
    plVar3 = (long *)(param_1 + 0x98);
    *plVar3 = param_2;
    thunk_FUN_03f5d7b8(plVar3,param_2);
    lVar1 = *plVar3;
    uVar2 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar2,param_1,DAT_091dca18,0);
    if (lVar1 != 0) {
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onMapBuildingUnlocked
                (lVar1,uVar2,0);
      lVar1 = *(long *)(param_1 + 0x98);
      uVar2 = thunk_FUN_03f9944c(DAT_09174e30);
      FUN_071cd244(uVar2,param_1,DAT_091dca10,0);
      if (lVar1 != 0) {
        CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onHomeBuildingItemBought
                  (lVar1,uVar2,0);
        if ((param_4 & 1) == 0) {
          AnhPD_Home_UIHomeMapSection__Lock(param_1);
        }
        else {
          AnhPD_Home_UIHomeMapSection__Unlock();
        }
        auVar4 = AnhPD_Home_UIHomeMapSection__LoadMapThumbnailAsync(param_1);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar4._0_8_,auVar4._8_8_,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

