// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$KillMorph
// address: 0x422bb9c
// body: available
// range: 0x422bb9c-0x422bd5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422bd50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422bd54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422bd58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__KillMorph(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09516d9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a37a0);
    FUN_03f5c2a4(&DAT_091a37a8);
    FUN_03f5c2a4(&DAT_091a37b0);
    FUN_03f5c2a4(&DAT_091ae378);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d9c = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  plVar5 = (long *)(param_1 + 0xe8);
  local_50 = 0;
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill(*plVar5,0,0);
    *plVar5 = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_057e185c(&local_78,*(long *)(param_1 + 0x70),DAT_091ae378);
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_50 = local_68;
    local_78 = 0;
    puStack_70 = &local_60;
    while( true ) {
      do {
        uVar1 = FUN_071bd28c(&local_60,DAT_091a37a8);
        lVar3 = local_50;
        if ((uVar1 & 1) == 0) {
          FUN_071bd288(&local_60,DAT_091a37a0);
          return;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
      } while ((uVar1 & 1) == 0);
      if (lVar3 == 0) break;
      uVar2 = UnityEngine_Component__get_transform(lVar3,0);
      DG_Tweening_ShortcutExtensions__DOKill(uVar2,0,0);
      lVar3 = UnityEngine_Component__get_transform(lVar3,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

