// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ResetAlpha
// address: 0x422bdd0
// body: available
// range: 0x422bdd0-0x422bf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422bf34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422bf38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422bf3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__ResetAlpha(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_09516d95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c58d0);
    FUN_03f5c2a4(&DAT_091a37a0);
    FUN_03f5c2a4(&DAT_091a37a8);
    FUN_03f5c2a4(&DAT_091a37b0);
    FUN_03f5c2a4(&DAT_091ae378);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d95 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_057e185c(&local_70,*(long *)(param_1 + 0x70),DAT_091ae378);
    local_40 = local_60;
    uStack_48 = puStack_68;
    local_50 = local_70;
    local_70 = 0;
    puStack_68 = &local_50;
    while( true ) {
      do {
        uVar2 = FUN_071bd28c(&local_50,DAT_091a37a8);
        lVar1 = local_40;
        if ((uVar2 & 1) == 0) {
          FUN_071bd288(&local_50,DAT_091a37a0);
          return;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      } while ((uVar2 & 1) == 0);
      if (lVar1 == 0) break;
      uVar2 = FUN_04a6b048(lVar1,&local_58,DAT_091c58d0);
      if ((uVar2 & 1) != 0) {
        DG_Tweening_ShortcutExtensions__DOKill(local_58,0,0);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_CanvasGroup__set_alpha(0x3f800000,local_58,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

