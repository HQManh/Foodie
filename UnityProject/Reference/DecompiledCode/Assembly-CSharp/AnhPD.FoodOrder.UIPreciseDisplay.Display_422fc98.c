// rea decompile_all
// name: AnhPD.FoodOrder.UIPreciseDisplay$$Display
// address: 0x422fc98
// body: available
// range: 0x422fc98-0x422fe93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422fe90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIPreciseDisplay__Display(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((DAT_09516dbb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4b10);
    FUN_03f5c2a4(&DAT_091b4b18);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516dbb = 1;
  }
  AnhPD_FoodOrder_UIPreciseDisplay__CaptureBaseScale(param_1);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar1 != 0)) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = AnhPD_FoodOrder_UIPreciseDisplay__ResolveSprite(param_2);
    if (lVar1 != 0) {
      UnityEngine_UI_Image__set_sprite(lVar1,uVar2,0);
      uVar2 = **(undefined8 **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) == 0) {
        AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
        fVar4 = 1.0;
      }
      else {
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_0422fe90;
        lVar1 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
        uVar3 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
        fVar4 = 1.0;
        if (((uVar3 & 1) == 0) && (fVar4 = 1.0, lVar1 != 0)) {
          fVar4 = (float)AnhPD_FoodOrder_LevelInfo__GetIngredientDisplayScale(lVar1,param_2,0);
        }
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x20),0), lVar1 != 0)) {
        UnityEngine_Transform__set_localScale
                  (fVar4 * *(float *)(param_1 + 0x28),fVar4 * *(float *)(param_1 + 0x2c),
                   fVar4 * *(float *)(param_1 + 0x30),lVar1,0);
        uVar3 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
        uVar5 = 0x3f800000;
        if (((uVar3 & 1) != 0) &&
           (uVar3 = FUN_05a8eda4(DAT_091b4b18), uVar5 = 0x3f800000, (uVar3 & 1) != 0)) {
          lVar1 = *(long *)(DAT_091b4b10 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_0422fe90;
          uVar5 = AnhPD_FoodOrder_UIHintFlexibleHelper__RelativeHeight
                            (**(long **)(lVar1 + 0xb8),param_2,0);
        }
        *(undefined4 *)(param_1 + 0x38) = uVar5;
        return;
      }
    }
  }
LAB_0422fe90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

