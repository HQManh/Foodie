// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$Awake
// address: 0x44c498c
// body: available
// range: 0x44c498c-0x44c4b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c4b7c to 0x43882ac CakeOrder.InGame.CookingBotAutoRetry$$add_onAdaptiveStrategyIntervalChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__Awake(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_0951826e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_091745f0);
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091c6520);
    FUN_03f5c2a4(&DAT_091c6528);
    FUN_03f5c2a4(&DAT_091c6530);
    FUN_03f5c2a4(&DAT_091c6538);
    DAT_0951826e = 1;
  }
  CakeOrder_InGame_LevelBaseCakeOrderAbstract__Awake(param_1,0);
  if (DAT_09516603 == '\0') {
    FUN_03f5c2a4(&DAT_0918c338);
    DAT_09516603 = '\x01';
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
  *puVar1 = param_1;
  thunk_FUN_03f5d7b8(puVar1,param_1);
  uVar2 = thunk_FUN_03f9944c(DAT_09174948);
  FUN_071c30b0(uVar2,param_1,DAT_091c6528,0);
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__add_onPickIntervalChanged(uVar2,0);
  uVar2 = thunk_FUN_03f9944c(DAT_091745f0);
  FUN_070a7634(uVar2,param_1,DAT_091c6538,0);
  CakeOrder_InGame_CookingBotAutoRetry__add_onWorkWaitStrategyChanged(uVar2,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09174570);
  FUN_070a4758(uVar2,param_1,DAT_091c6530,0);
  CakeOrder_InGame_CookingBotAutoRetry__add_onVerboseLoggingChanged(uVar2,0);
  uVar2 = thunk_FUN_03f9944c(DAT_091747c0);
  FUN_070a7580(uVar2,param_1,DAT_091c6520,0);
  CakeOrder_InGame_CookingBotAutoRetry__add_onAdaptiveStrategyIntervalChanged(uVar2,0);
  return;
}

