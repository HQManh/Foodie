// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$SetHintDim
// address: 0x40ebe88
// body: available
// range: 0x40ebe88-0x40ec02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ec02c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__SetHintDim(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_095160b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cfde8);
    FUN_03f5c2a4(&DAT_091cfdf0);
    FUN_03f5c2a4(&DAT_091dbfa0);
    DAT_095160b9 = 1;
  }
  if (*(byte *)(param_1 + 0xe3) == (param_2 & 1)) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  *(byte *)(param_1 + 0xe3) = param_2 & 1;
  if (lVar1 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09175e18);
  FUN_06dfb188(uVar2,param_1,DAT_091cfde8,0);
  uVar3 = thunk_FUN_03f9944c(DAT_09175e68);
  FUN_06dfc2b4(uVar3,param_1,DAT_091cfdf0,0);
  uVar4 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = DG_Tweening_DOTween__To(uVar4,0x3e4ccccd,uVar2,uVar3,0);
  uVar2 = FUN_04d9642c(uVar2,param_1,DAT_091dbfa0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xe8));
  return;
}

