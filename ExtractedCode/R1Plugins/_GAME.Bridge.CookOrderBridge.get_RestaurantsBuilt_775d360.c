// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$get_RestaurantsBuilt
// address: 0x775d360
// body: available
// range: 0x775d360-0x775d4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775d4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _GAME_Bridge_CookOrderBridge__get_RestaurantsBuilt(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09522c01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091b4b68);
    DAT_09522c01 = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_05a8eda4(DAT_091b4a60), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_0775d4dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_IsDataAvailable
                      (**(long **)(lVar4 + 0xb8),0);
    if ((uVar3 & 1) != 0) {
      lVar4 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance(0);
      if (lVar4 == 0) goto LAB_0775d4dc;
      iVar1 = CakeOrder_Home_Journey_JourneyLevelMap__get_NumMaps(lVar4,0);
      if (0 < iVar1) {
        iVar1 = 0;
        iVar5 = 0;
        do {
          CakeOrder_Home_Journey_JourneyLevelMap__GetRange(&local_60,lVar4,iVar1,0);
          uStack_38 = uStack_58;
          local_40 = local_60;
          uStack_28 = uStack_48;
          uStack_30 = uStack_50;
          uVar3 = CakeOrder_Home_Journey_JourneyLevelMap_MapRange__get_HasLevels(&local_40,0);
          if ((uVar3 & 1) != 0) {
            uStack_78 = uStack_38;
            local_80 = local_40;
            uStack_68 = uStack_28;
            uStack_70 = uStack_30;
            uVar3 = CakeOrder_Home_Journey_JourneyProgress__IsChapterOpen(&local_80,0);
            if ((uVar3 & 1) != 0) {
              iVar2 = CakeOrder_Home_Journey_JourneyProgress__MaxWinLevelsInMap(local_40,0);
              if (uStack_38._4_4_ <= iVar2) {
                iVar5 = iVar5 + 1;
              }
            }
          }
          iVar1 = iVar1 + 1;
          iVar2 = CakeOrder_Home_Journey_JourneyLevelMap__get_NumMaps(lVar4,0);
        } while (iVar1 < iVar2);
        return iVar5;
      }
    }
  }
  return 0;
}

