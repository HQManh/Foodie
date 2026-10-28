// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$OnRefreshCurrencyBar
// address: 0x4306b14
// body: available
// range: 0x4306b14-0x4306b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__OnRefreshCurrencyBar(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((DAT_09517593 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a60);
    DAT_09517593 = 1;
  }
  uVar1 = CakeOrder_BaseUI_SceneMainUI__get_TopPopupWantsCurrency(param_1,0);
  if ((uVar1 & 0xff) == 0) {
    if (*(int *)(param_1 + 0x160) == 2) goto LAB_04306ad0;
  }
  else if (0xff < uVar1) {
LAB_04306ad0:
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_04306b10;
    CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0xd0),0,0,0);
    uVar2 = 1;
    goto LAB_04306af0;
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
LAB_04306b10:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xd0),0,0);
  uVar2 = 0;
LAB_04306af0:
  CakeOrder_Home_HomeControllerCookOrder__SetCounterVisible(*(undefined8 *)(param_1 + 0xe0),uVar2);
  CakeOrder_Home_HomeControllerCookOrder__SetCounterVisible(*(undefined8 *)(param_1 + 0xd8),uVar2);
  return;
}

