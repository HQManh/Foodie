// rea decompile_all
// name: _GAME.EventSale.EventSaleManager$$SavePackBuyed
// address: 0x77fbfe8
// body: available
// range: 0x77fbfe8-0x77fc1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fc148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fc1d4 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSaleManager__SavePackBuyed(int param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((DAT_0952316a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_091ab400);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ab410);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_091ba3f0);
    FUN_03f5c2a4(&DAT_0917e718);
    DAT_0952316a = 1;
  }
  if (**(long **)(DAT_09184268 + 0xb8) == 0) {
    return;
  }
  lVar3 = _GAME_EventSale_EventSaleManager__get_PackStatus();
  if (lVar3 == 0) {
    uVar4 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(uVar4,DAT_091ab3e0);
    _GAME_EventSale_EventSaleManager__set_PackStatus(uVar4);
  }
  lVar3 = _GAME_EventSale_EventSaleManager__get_PackStatus();
  do {
    if (lVar3 == 0) {
LAB_077fc148:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    lVar5 = _GAME_EventSale_EventSaleManager__get_PackStatus();
    lVar3 = DAT_091ab3e8;
    if (param_1 < iVar1) {
      if (lVar5 != 0) {
        uVar6 = FUN_0571bde4(lVar5,param_1,DAT_091ab408);
        if ((uVar6 & 1) != 0) {
          return;
        }
        lVar3 = _GAME_EventSale_EventSaleManager__get_PackStatus();
        if ((lVar3 != 0) &&
           (FUN_0571be38(lVar3,param_1,1,DAT_091ab410), **(long **)(DAT_09184268 + 0xb8) != 0)) {
          _GAME_EventSale_EventSaleDbModel__AddSaveAction();
          if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_060df854(DAT_091ba3f0);
          return;
        }
      }
      goto LAB_077fc148;
    }
    if (lVar5 == 0) goto LAB_077fc148;
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_077fc148;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined1 *)(lVar7 + (int)uVar2 + 0x20) = 0;
    }
    else {
      FUN_0571c0e8(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = _GAME_EventSale_EventSaleManager__get_PackStatus();
  } while( true );
}

