// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineController$$RevealOrder
// address: 0x4203494
// body: available
// range: 0x4203494-0x42035f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42035f0 to 0x420448c AnhPD.FoodOrder.CustomerLineView$$SetWeather (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42035f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineController__RevealOrder(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((DAT_09516c03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6f08);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dc040);
    DAT_09516c03 = 1;
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    AnhPD_FoodOrder_CustomerLineView__ShowOrder
              (*(long *)(param_1 + 0x18),*(undefined8 *)(lVar2 + 0x18),
               *(undefined8 *)(param_1 + 0x68));
    AnhPD_FoodOrder_CustomerLineController__RevealStrandedMysteries(param_1);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) = 2;
      if (lVar2 != 0) {
        DG_Tweening_TweenExtensions__Kill(lVar2,0,0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x100);
        uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar1,param_1,DAT_091c6f08,0);
        uVar1 = DG_Tweening_DOVirtual__DelayedCall(uVar3,uVar1,1,0);
        uVar1 = FUN_04d9656c(uVar1,0,DAT_091dc040);
        *(undefined8 *)(param_1 + 0x70) = uVar1;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),uVar1);
        if (*(long *)(param_1 + 0x10) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x10) + 0x20) == '\0') {
            if ((*(long *)(param_1 + 0x18) == 0) ||
               (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar2 == 0)) goto LAB_042035f4;
            AnhPD_FoodOrder_FTimer__HideTimer(lVar2,0);
          }
          if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
            AnhPD_FoodOrder_CustomerLineView__SetWeather
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_042035f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

