// rea decompile_all
// name: _GAME.EventSale.EventSaleManager$$ResetData
// address: 0x77faf58
// body: available
// range: 0x77faf58-0x77faf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSaleManager__ResetData(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_0952315f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2be8);
    FUN_03f5c2a4(&DAT_091a2bf0);
    FUN_03f5c2a4(&DAT_091a2bf8);
    FUN_03f5c2a4(&DAT_09184260);
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ac930);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_0918a4c8);
    FUN_03f5c2a4(&DAT_091ba3f0);
    FUN_03f5c2a4(&DAT_0917e718);
    DAT_0952315f = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (**(long **)(DAT_09184268 + 0xb8) == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_09184260);
    _GAME_EventSale_EventSaleDbModel___ctor();
    **(undefined8 **)(DAT_09184268 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184268 + 0xb8),uVar2);
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917bd08);
  FUN_0571b84c(uVar2,DAT_091ab3e0);
  _GAME_EventSale_EventSaleManager__set_PackStatus(uVar2);
  if (*(int *)(DAT_0918a4c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = _GAME_EventSale_SOEventSaleConfig__get_ListPack();
  if (lVar3 != 0) {
    FUN_057e185c(&uStack_58,lVar3,DAT_091ac930);
    while (uVar4 = FUN_071bd28c(&uStack_58,DAT_091a2bf0), (uVar4 & 1) != 0) {
      lVar5 = _GAME_EventSale_EventSaleManager__get_PackStatus();
      lVar3 = DAT_091ab3e8;
      if (lVar5 == 0) {
LAB_077fb1b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_077fb1b4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0;
      }
      else {
        FUN_0571c0e8(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071bd288(&uStack_58,DAT_091a2be8);
    if (**(long **)(DAT_09184268 + 0xb8) != 0) {
      _GAME_EventSale_EventSaleDbModel__AddSaveAction();
      if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_060df854(DAT_091ba3f0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

