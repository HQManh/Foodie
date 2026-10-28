// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$HideOrder
// address: 0x4203734
// body: available
// range: 0x4203734-0x4203947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420393c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4203940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4203944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__HideOrder(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 *puStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  
  if ((DAT_09516c4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b18);
    FUN_03f5c2a4(&DAT_091a3b20);
    FUN_03f5c2a4(&DAT_091a3b28);
    FUN_03f5c2a4(&DAT_091aec40);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c4b = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  if (*(long *)(param_1 + 0xb8) != 0) {
    UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_1 + 0xb8),0);
  }
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xa0),0), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive(lVar2,0,0);
    lVar2 = *(long *)(param_1 + 0xf8);
    if (lVar2 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar2,0);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0xf8),0);
    }
    AnhPD_FoodOrder_CustomerLineView__StopPeek(param_1);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_057e185c(&local_68,*(long *)(param_1 + 0x30),DAT_091aec40);
      local_40 = local_58;
      uStack_48 = puStack_60;
      local_50 = local_68;
      local_68 = 0;
      puStack_60 = &local_50;
      while( true ) {
        do {
          uVar3 = FUN_071bd28c(&local_50,DAT_091a3b20);
          plVar1 = local_40;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(&local_50,DAT_091a3b18);
            AnhPD_FoodOrder_CustomerLineView__ResetSpacer(param_1);
            AnhPD_FoodOrder_CustomerLineView__ResetPeekShift(param_1);
            *(undefined8 *)(param_1 + 0x148) = 0;
            thunk_FUN_03f5d7b8(param_1 + 0x148,0);
            *(undefined8 *)(param_1 + 0x150) = 0;
            thunk_FUN_03f5d7b8(param_1 + 0x150,0);
            *(undefined8 *)(param_1 + 0x158) = 0;
            thunk_FUN_03f5d7b8(param_1 + 0x158,0);
            return;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(plVar1,0);
        } while ((uVar3 & 1) == 0);
        if (plVar1 == (long *)0x0) break;
        uVar4 = UnityEngine_Component__get_transform(plVar1,0);
        DG_Tweening_ShortcutExtensions__DOKill(uVar4,0,0);
        (**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
        lVar2 = UnityEngine_Component__get_gameObject(plVar1,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar2,0,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

