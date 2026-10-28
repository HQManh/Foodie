// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$PlayRejectBump
// address: 0x40e679c
// body: available
// range: 0x40e679c-0x40e695f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e6948 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e695c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__PlayRejectBump(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((DAT_095160c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091cfdc8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    DAT_095160c1 = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Application__get_isPlaying(0);
  if ((uVar1 & 1) != 0) {
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0xd0) == '\0')) &&
       (*(char *)(param_1 + 0x160) == '\0')) {
      *(undefined1 *)(param_1 + 0x160) = 1;
      AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapableVisual(param_1);
    }
    AnhPD_FoodOrder_IngredientConveyorItem__PlayRejectFlash(param_1);
    if ((*(long *)(param_1 + 0x148) == 0) && (*(char *)(param_1 + 0x160) != '\0')) {
      *(undefined1 *)(param_1 + 0x160) = 0;
      AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapableVisual(param_1);
    }
    if ((0.0 < *(float *)(param_1 + 0x124)) && (0.0 < *(float *)(param_1 + 0x128))) {
      if (*(long *)(param_1 + 0x140) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x140),0,0);
      }
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8),
                   *(undefined4 *)(param_1 + 0xdc),lVar2,0);
        uVar3 = UnityEngine_Component__get_transform(param_1,0);
        fVar5 = *(float *)(param_1 + 0x124);
        uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale
                          (*(float *)(param_1 + 0xd4) * fVar5,*(float *)(param_1 + 0xd8) * fVar5,
                           *(float *)(param_1 + 0xdc) * fVar5,*(undefined4 *)(param_1 + 0x128),
                           0x3f000000,uVar3,1,0);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,param_1,DAT_091cfdc8,0);
        uVar3 = FUN_04d956bc(uVar3,uVar4,DAT_091dbd28);
        *(undefined8 *)(param_1 + 0x140) = uVar3;
        thunk_FUN_03f5d7b8(param_1 + 0x140);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

