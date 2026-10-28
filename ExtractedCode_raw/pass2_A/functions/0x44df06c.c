// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingSaveMeBagView$$OnPointerDown
// address: 0x44df06c
// body: available
// range: 0x44df06c-0x44df1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44df1e8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingSaveMeBagView__OnPointerDown(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09518348 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091dc030);
    DAT_09518348 = 1;
  }
  uVar1 = DG_Tweening_TweenExtensions__IsActive(*(undefined8 *)(param_1 + 0x60),0);
  if ((((uVar1 & 1) == 0) && (lVar4 = *(long *)(param_1 + 0x68), lVar4 != 0)) &&
     (uVar1 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28)),
     (uVar1 & 1) != 0)) {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc030);
    uVar2 = FUN_04d9642c(uVar2,param_1,DAT_091dbfd8);
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                      (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x34),
                       *(float *)(param_1 + 0x38) * 0.5,*(undefined8 *)(param_1 + 0x20),0,0);
    uVar3 = FUN_04d95e8c(uVar3,5,DAT_091dbeb0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                      (*(undefined4 *)(param_1 + 0x54),*(float *)(param_1 + 0x38) * 0.5,
                       *(undefined8 *)(param_1 + 0x20),0,0);
    uVar3 = FUN_04d95e8c(uVar3,0x1b,DAT_091dbeb0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}

