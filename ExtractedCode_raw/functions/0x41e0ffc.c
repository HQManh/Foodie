// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$TakeCandidate
// address: 0x41e0ffc
// body: available
// range: 0x41e0ffc-0x41e12af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e1278 to 0x41e2790 AnhPD.FoodOrder.AutoCompleteOrderFx$$TakeFromBelt (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e12a0 to 0x41e2958 AnhPD.FoodOrder.AutoCompleteOrderFx$$TakeFromPending (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e12ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_AutoCompleteOrderFx__TakeCandidate
          (undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09516ae7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09217c38);
    FUN_03f5c2a4(&DAT_09217c30);
    DAT_09516ae7 = 1;
  }
  *param_4 = 0;
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(param_2 + 0x28) != 0) {
          uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__TakeFromBelt(param_1,param_2,param_3,param_4)
          ;
          return uVar4;
        }
        if (*(long *)(param_2 + 0x30) != 0) {
          uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__TakeFromPending(param_1,param_2,param_4);
          return uVar4;
        }
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceLedger__Step(uVar4,DAT_09217c38,0);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        if (*(int *)(DAT_09181918 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_AutoCompleteOrderFx__PrepareFlyer(uVar4);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
      }
    }
    else {
      uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      lVar3 = 0;
      if ((uVar1 & 1) != 0) {
        if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x100), lVar3 == 0))
        goto LAB_041e12ac;
        lVar3 = *(long *)(lVar3 + 0x18);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
      uVar2 = 0;
      if ((uVar1 & 1) != 0) {
        if (lVar3 == 0) goto LAB_041e12ac;
        uVar2 = AnhPD_FoodOrder_ServeShelfController__TakePlateDishForFx
                          (lVar3,*(undefined8 *)(param_2 + 0x18),0);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
      uVar4 = 0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceLedger__Step(uVar2,DAT_09217c30,0);
        if (*(int *)(DAT_09181918 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_AutoCompleteOrderFx__PrepareFlyer(uVar2);
        uVar4 = uVar2;
      }
    }
    return uVar4;
  }
LAB_041e12ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

