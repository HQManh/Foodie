// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$PlayThawHop
// address: 0x40eded0
// body: available
// range: 0x40eded0-0x40ee0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ee090 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40ee0a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__PlayThawHop(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_095160bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091cfde0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbf30);
    DAT_095160bf = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((((uVar1 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x100))) &&
     (0.0 < *(float *)(param_1 + 0x104))) {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Application__get_isPlaying(0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x110),0,0);
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_Transform__set_localPosition
                  (*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),
                   *(undefined4 *)(param_1 + 0x120),*(long *)(param_1 + 0x60),0);
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                          (*(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x100),
                           *(float *)(param_1 + 0x104) * 0.5,*(undefined8 *)(param_1 + 0x60),0,0);
        uVar3 = FUN_04d95e8c(uVar3,*(undefined4 *)(param_1 + 0x108),DAT_091dbeb0);
        uVar3 = FUN_04d962f4(uVar3,2,1,DAT_091dbf30);
        uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar2,param_1,DAT_091cfde0,0);
        uVar3 = FUN_04d956bc(uVar3,uVar2,DAT_091dbd10);
        *(undefined8 *)(param_1 + 0x110) = uVar3;
        thunk_FUN_03f5d7b8(param_1 + 0x110);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

