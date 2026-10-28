// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$MoveCameraTo
// address: 0x40f2e8c
// body: available
// range: 0x40f2e8c-0x40f309f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f3054 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f309c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__MoveCameraTo
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_095160f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091eba38);
    FUN_03f5c2a4(&DAT_091917f0);
    DAT_095160f7 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091917f0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_4);
    plVar5 = (long *)(lVar1 + 0x18);
    *plVar5 = param_5;
    thunk_FUN_03f5d7b8(plVar5,param_5);
    plVar4 = (long *)(param_4 + 0x98);
    if (*plVar4 != 0) {
      DG_Tweening_TweenExtensions__Kill(*plVar4,0,0);
    }
    *(undefined8 *)(param_4 + 0x98) = 0;
    thunk_FUN_03f5d7b8(plVar4,0);
    uVar6 = *(undefined8 *)(param_4 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040f3080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    if (*(long *)(param_4 + 0x80) != 0) {
      uVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x80),0);
      uVar6 = DG_Tweening_ShortcutExtensions__DOMove
                        (param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x74),uVar6,0,0);
      uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_4 + 0x78),DAT_091dbeb0);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091eba38,0);
      uVar6 = FUN_04d956bc(uVar6,uVar3,DAT_091dbd10);
      *(undefined8 *)(param_4 + 0x98) = uVar6;
      thunk_FUN_03f5d7b8(plVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

