// rea decompile_all
// name: _GAME.EventSale.EventSaleManager$$ReloadData
// address: 0x77fb3d4
// body: available
// range: 0x77fb3d4-0x77fb5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fb5a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fb5e4 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSaleManager__ReloadData(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09523160 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_091ab400);
    FUN_03f5c2a4(&DAT_091ac938);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_0918a4c8);
    FUN_03f5c2a4(&DAT_091ba3f0);
    FUN_03f5c2a4(&DAT_0917e718);
    DAT_09523160 = 1;
  }
  if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_EventSale_SOEventSaleConfig__ReloadRemoteConfig();
  uVar4 = _GAME_EventSale_EventSaleDbModel__Load();
  **(undefined8 **)(DAT_09184268 + 0xb8) = uVar4;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184268 + 0xb8),uVar4);
  if (**(long **)(DAT_09184268 + 0xb8) == 0) {
    _GAME_EventSale_EventSaleManager__ResetData();
  }
  lVar5 = _GAME_EventSale_EventSaleManager__get_PackStatus();
  if (lVar5 == 0) {
    uVar4 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(uVar4,DAT_091ab3e0);
    _GAME_EventSale_EventSaleManager__set_PackStatus(uVar4);
  }
  lVar5 = _GAME_EventSale_EventSaleManager__get_PackStatus();
  if (lVar5 != 0) {
    bVar3 = false;
    do {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a4c8);
      }
      lVar5 = _GAME_EventSale_SOEventSaleConfig__get_ListPack();
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) <= iVar1) {
        if (bVar3) {
          if (**(long **)(DAT_09184268 + 0xb8) == 0) break;
          _GAME_EventSale_EventSaleDbModel__AddSaveAction();
        }
        if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba3f0);
        return;
      }
      lVar6 = _GAME_EventSale_EventSaleManager__get_PackStatus();
      lVar5 = DAT_091ab3e8;
      if (lVar6 == 0) break;
      lVar7 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined1 *)(lVar7 + (int)uVar2 + 0x20) = 0;
      }
      else {
        FUN_0571c0e8(lVar6,0,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = _GAME_EventSale_EventSaleManager__get_PackStatus();
      bVar3 = true;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

