// rea decompile_all
// name: CakeOrder.Shop.ShopPlayerFacts$$.ctor
// address: 0x4361cd8
// body: available
// range: 0x4361cd8-0x4361e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4361e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_ShopPlayerFacts___ctor(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((DAT_09517855 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_091b4908);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09222a70);
    DAT_09517855 = 1;
  }
  local_28 = 0;
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar2 = CakeOrder_Shop_ShopPlayerFacts__ReadGlobalLevel();
  uVar3 = DAT_091b4908;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar4 = FUN_05a8eda4(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(DAT_091b4900 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__get_TimeSinceFirstOpen(lVar5,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar3 = System_TimeSpan__get_TotalDays(&local_28,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar2 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__get_CountOpenDay(lVar5,0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    uVar2 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__GetInt(lVar5,DAT_09222a70,0,0);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  bVar1 = CakeOrder_Shop_ShopPlayerFacts__ReadHasAnyIap();
  *(byte *)(param_1 + 0x2c) = bVar1 & 1;
  return;
}

