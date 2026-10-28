// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$.ctor
// address: 0x44e2a40
// body: available
// range: 0x44e2a40-0x44e2c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e2c88 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingToolPresentation___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0951836e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03c0);
    FUN_03f5c2a4(&DAT_091c03c8);
    FUN_03f5c2a4(&DAT_0919e010);
    FUN_03f5c2a4(&DAT_0919d678);
    FUN_03f5c2a4(&DAT_09176410);
    FUN_03f5c2a4(&DAT_091765f0);
    DAT_0951836e = 1;
  }
  lVar1 = DAT_091c03c8;
  lVar3 = *(long *)(DAT_091c03c8 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c03c8);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_03f5d7b8();
  lVar1 = DAT_091c03c8;
  lVar3 = *(long *)(DAT_091c03c8 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c03c8);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_03f5d7b8();
  lVar1 = DAT_091c03c0;
  lVar3 = *(long *)(DAT_091c03c0 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c03c0);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_03f5d7b8();
  uVar2 = thunk_FUN_03f9944c(DAT_09176410);
  FUN_06eef750(uVar2,DAT_0919d678);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_091765f0);
  FUN_06eef750(uVar2,DAT_0919e010);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_091765f0);
  FUN_06eef750(uVar2,DAT_0919e010);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar2);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

