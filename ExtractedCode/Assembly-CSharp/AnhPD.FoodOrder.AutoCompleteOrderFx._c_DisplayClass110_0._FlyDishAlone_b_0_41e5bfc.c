// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx.<>c__DisplayClass110_0$$<FlyDishAlone>b__0
// address: 0x41e5bfc
// body: available
// range: 0x41e5bfc-0x41e5d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e5d0c to 0x41e4d98 AnhPD.FoodOrder.AutoCompleteOrderFx$$Deliver (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e5d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass110_0__<FlyDishAlone>b__0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((DAT_09516b01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b01 = 1;
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    uVar1 = AnhPD_FoodOrder_FCustomerLine__get_targetPos(*(long *)(param_4 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_041e5d10;
      lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(param_4 + 0x18),0);
    }
    else {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_041e5d10;
      lVar3 = AnhPD_FoodOrder_FCustomerLine__get_targetPos(*(long *)(param_4 + 0x10),0);
    }
    if (lVar3 != 0) {
      uVar4 = UnityEngine_Transform__get_position(lVar3,0);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_AutoCompleteOrderFx__PlayDoneFood(uVar4,param_2,param_3,0);
      if (*(long *)(param_4 + 0x20) != 0) {
        AnhPD_FoodOrder_AutoCompleteOrderFx__Deliver
                  (*(long *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                   *(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x28),0);
        return;
      }
    }
  }
LAB_041e5d10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

