// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$OnDestroy
// address: 0x4175f08
// body: available
// range: 0x4175f08-0x4176227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4176208 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__OnDestroy(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((DAT_095165f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_091745f0);
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09174588);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091c6368);
    FUN_03f5c2a4(&DAT_091c6370);
    FUN_03f5c2a4(&DAT_091c6378);
    FUN_03f5c2a4(&DAT_091c6380);
    FUN_03f5c2a4(&DAT_091c6388);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165f6 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09174588);
  FUN_070a8c30(uVar1,param_1,DAT_091c6370,0);
  CakeOrder_InGame_LevelPlayLoadAndSetupControl__remove_onLevelEnded(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174948);
  FUN_071c30b0(uVar1,param_1,DAT_091c6378,0);
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__remove_onPickIntervalChanged(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_091745f0);
  FUN_070a7634(uVar1,param_1,DAT_091c6388,0);
  CakeOrder_InGame_CookingBotAutoRetry__remove_onWorkWaitStrategyChanged(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174570);
  FUN_070a4758(uVar1,param_1,DAT_091c6380,0);
  CakeOrder_InGame_CookingBotAutoRetry__remove_onVerboseLoggingChanged(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_091747c0);
  FUN_070a7580(uVar1,param_1,DAT_091c6368,0);
  CakeOrder_InGame_CookingBotAutoRetry__remove_onAdaptiveStrategyIntervalChanged(uVar1,0);
  CakeOrder_InGame_UICakePauseMenuInGame__UnregisterAutoplay(param_1,0);
  if (DAT_09516604 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09516604 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) == '\0') {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_InGame_CookingBotAutoRetry__ClearTimeScale(0);
  }
  if (DAT_09516605 == '\0') {
    FUN_03f5c2a4(&DAT_09182cf8);
    DAT_09516605 = '\x01';
  }
  uVar1 = **(undefined8 **)(DAT_09182cf8 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if ((uVar2 & 1) != 0) {
    if (DAT_09516602 == '\0') {
      FUN_03f5c2a4(&DAT_09182cf8);
      DAT_09516602 = '\x01';
    }
    **(undefined8 **)(DAT_09182cf8 + 0xb8) = 0;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182cf8 + 0xb8),0);
    return;
  }
  return;
}

