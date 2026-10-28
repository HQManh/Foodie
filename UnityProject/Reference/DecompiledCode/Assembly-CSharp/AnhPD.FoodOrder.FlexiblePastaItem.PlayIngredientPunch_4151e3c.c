// rea decompile_all
// name: AnhPD.FoodOrder.FlexiblePastaItem$$PlayIngredientPunch
// address: 0x4151e3c
// body: available
// range: 0x4151e3c-0x4151f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4151f74 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4151f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexiblePastaItem__PlayIngredientPunch
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_095164a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095164a2 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((((uVar1 & 1) == 0) || (*(float *)(param_4 + 0x108) <= 0.0)) ||
     (*(float *)(param_4 + 0x10c) <= 0.0)) {
    return;
  }
  if (*(long *)(param_4 + 0x100) != 0) {
    lVar2 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x100),0);
    if ((*(long *)(param_4 + 0x130) == 0) ||
       (uVar1 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_4 + 0x130),0),
       (uVar1 & 1) == 0)) {
      if (lVar2 != 0) {
        fVar4 = (float)UnityEngine_Transform__get_localScale(lVar2,0);
        *(float *)(param_4 + 0x138) = fVar4;
        *(float *)(param_4 + 0x13c) = param_2;
        *(undefined4 *)(param_4 + 0x140) = param_3;
        goto LAB_04151f38;
      }
    }
    else {
      DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_4 + 0x130),0,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(param_4 + 0x138),*(undefined4 *)(param_4 + 0x13c),
                   *(undefined4 *)(param_4 + 0x140),lVar2,0);
        fVar4 = *(float *)(param_4 + 0x138);
        param_2 = *(float *)(param_4 + 0x13c);
LAB_04151f38:
        uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale
                          (fVar4 * *(float *)(param_4 + 0x108),param_2 * *(float *)(param_4 + 0x108)
                           ,0,*(undefined4 *)(param_4 + 0x10c),*(undefined4 *)(param_4 + 0x114),
                           lVar2,*(undefined4 *)(param_4 + 0x110),0);
        *(undefined8 *)(param_4 + 0x130) = uVar3;
        thunk_FUN_03f5d7b8(param_4 + 0x130);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

