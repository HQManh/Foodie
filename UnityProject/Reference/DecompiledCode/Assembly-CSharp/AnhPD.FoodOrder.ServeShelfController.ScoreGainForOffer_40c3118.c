// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$ScoreGainForOffer
// address: 0x40c3118
// body: available
// range: 0x40c3118-0x40c31ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c31fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController__ScoreGainForOffer
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  uVar2 = AnhPD_FoodOrder_ServeShelfController__get_IsInteractBlocked();
  uVar1 = 0;
  if (((uVar2 & 1) == 0) && (param_2 != 0)) {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      lVar3 = AnhPD_FoodOrder_ServeShelfController__get_Info(0);
      uVar1 = 0;
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c31fc;
        AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
        uVar2 = AnhPD_FoodOrder_ServeShelfController__TryPickMergeTarget
                          (param_1,param_2,param_3,lVar3,&local_28,&local_38,(long)&local_38 + 4);
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        else {
          uVar2 = AnhPD_FoodOrder_ServeShelfController__CanHandOverNow(param_1,local_28);
          uVar1 = local_38._4_4_;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
          }
        }
      }
    }
    else {
      lVar3 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
      if (lVar3 == 0) {
LAB_040c31fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_48 = *(undefined8 *)(param_2 + 0x18);
      local_50 = *(undefined8 *)(param_2 + 0x10);
      local_40 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__CanCaptureWith
                        (lVar3,&local_50,param_3,0);
      uVar1 = uVar1 & 1;
    }
  }
  return uVar1;
}

