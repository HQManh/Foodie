// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$.ctor
// address: 0x422f270
// body: available
// range: 0x422f270-0x422f527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422f524 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09516db1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af030);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ae368);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091ad848);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c668);
    FUN_03f5c2a4(&DAT_0917c460);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_0917d050);
    DAT_09516db1 = 1;
  }
  uVar1 = DAT_0917c668;
  *(undefined4 *)(param_1 + 0x28) = 0x3e800000;
  *(undefined8 *)(param_1 + 0x30) = 0x800000009;
  *(undefined8 *)(param_1 + 0x48) = 0x33f866666;
  *(undefined8 *)(param_1 + 0x40) = 0x3e19999a3ecccccd;
  *(undefined8 *)(param_1 + 0x58) = 0x3eb3333300000004;
  *(undefined8 *)(param_1 + 0x60) = 0x900000001;
  *(undefined8 *)(param_1 + 0x68) = 0x3e8000003da3d70a;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091ae368);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(uVar1,DAT_091aed10);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c8f0);
  FUN_057f7434(uVar1,DAT_091af030);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c8f0);
  FUN_057f7434(uVar1,DAT_091af030);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c460);
  FUN_057808d4(uVar1,DAT_091ad848);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar1,DAT_091adc70);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(uVar1,DAT_091b19a0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(uVar1,DAT_091b19a0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

