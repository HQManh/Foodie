// rea decompile_all
// name: CakeOrder.BaseUI.ButtonBuyWithSale$$SetUp
// address: 0x42d649c
// body: available
// range: 0x42d649c-0x42d65bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d65bc to 0x42d6144 CakeOrder.BaseUI.ButtonBuyWithSale$$UpdateVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_ButtonBuyWithSale__SetUp(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_095173cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095173cb = 1;
  }
  *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x88) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    uVar2 = uVar2 ^ 1;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 < 1) {
    if (*(int *)(DAT_09182e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = CakeOrder_CookingdomInappPackListDefinition__GetSaleTagPercent(param_2,0);
  }
  iVar1 = 0;
  if ((uVar2 & 1) == 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x90) = iVar1;
  CakeOrder_BaseUI_ButtonBuyWithSale__UpdateVisual(param_1);
  return;
}

