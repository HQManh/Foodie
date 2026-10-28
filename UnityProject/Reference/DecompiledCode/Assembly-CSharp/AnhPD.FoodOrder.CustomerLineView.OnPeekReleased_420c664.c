// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$OnPeekReleased
// address: 0x420c664
// body: available
// range: 0x420c664-0x420c7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420c7b4 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420c7c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__OnPeekReleased
               (float param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09516c3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6f90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    DAT_09516c3c = 1;
  }
  if (param_1 < 0.0) {
    param_1 = *(float *)(param_2 + 0x60);
  }
  if (*(char *)(param_2 + 0x13c) != '\0') {
    AnhPD_FoodOrder_CustomerLineView__TweenPeekShift
              (*(undefined4 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0x134),
               *(undefined4 *)(param_2 + 0x138),param_1,param_2,param_4);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_2 + 0x58) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0x58),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
    if ((uVar1 & 1) != 0) {
      DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_2 + 0x58),0,0);
      uVar4 = AnhPD_FoodOrder_CustomerLineView__TweenSpacer(0,param_1,param_2,param_4);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,param_2,DAT_091c6f90,0);
      FUN_04d956bc(uVar4,uVar3,DAT_091dbd20);
      return;
    }
  }
  return;
}

