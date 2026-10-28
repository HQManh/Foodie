// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$TweenPeekShift
// address: 0x420c7cc
// body: available
// range: 0x420c7cc-0x420c94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420c930 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__TweenPeekShift
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5,
               undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_09516c3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6f48);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516c3f = 1;
  }
  if (*(long *)(param_5 + 0x140) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_5 + 0x140),0,0);
  }
  *(undefined1 *)(param_5 + 0x13c) = 1;
  uVar1 = DG_Tweening_ShortcutExtensions__DOLocalMove
                    (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0xa0),0,0);
  uVar1 = FUN_04d95e8c(uVar1,param_6,DAT_091dbeb0);
  *(undefined8 *)(param_5 + 0x140) = uVar1;
  thunk_FUN_03f5d7b8(param_5 + 0x140,uVar1);
  param_1 = param_1 - *(float *)(param_5 + 0x130);
  param_2 = param_2 - *(float *)(param_5 + 0x134);
  param_3 = param_3 - *(float *)(param_5 + 0x138);
  if (param_3 * param_3 + param_1 * param_1 + param_2 * param_2 < 9.9999994e-11) {
    uVar2 = *(undefined8 *)(param_5 + 0x140);
    uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar1,param_5,DAT_091c6f48,0);
    FUN_04d956bc(uVar2,uVar1,DAT_091dbd20);
    return;
  }
  return;
}

