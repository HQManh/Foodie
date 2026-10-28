// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$Stop
// address: 0x41764dc
// body: available
// range: 0x41764dc-0x4176637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4176624 to 0x85f6bb0 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__Stop(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_095165fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091fa6f8);
    FUN_03f5c2a4(&DAT_09223528);
    DAT_095165fa = 1;
  }
  lVar3 = DAT_09182cc0;
  if (*(char *)(param_1 + 0x3b) == '\0') {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516604 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516604 = '\x01';
    }
    uVar2 = DAT_09223528;
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = DAT_09182cc0;
      *(undefined1 *)(param_1 + 0x3b) = 0;
      cVar1 = *(char *)(*(long *)(lVar3 + 0xb8) + 9);
      uVar2 = DAT_09223528;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar2 = DAT_09223528;
      }
    }
    else {
      lVar3 = *(long *)(DAT_09182cc0 + 0xb8);
      *(undefined1 *)(param_1 + 0x3b) = 0;
      cVar1 = *(char *)(lVar3 + 9);
    }
    CakeOrder_InGame_CookingBotAutoRetry__Stop(uVar2,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x3b) = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_InGame_CookingBotAutoRetry__Stop(DAT_09223528,0);
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(DAT_091fa6f8,param_1,0);
  return;
}

