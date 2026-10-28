// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemSlotDailyRewards$$SetUp
// address: 0x42e85ac
// body: available
// range: 0x42e85ac-0x42e86bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e86a4 to 0x877f618 UnityEngine.UI.Image$$set_sprite (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e86b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetUp
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517468 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517468 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x90) = param_2;
  if (plVar1 == (long *)0x0) {
LAB_042e86b8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar1 + 0x558))(plVar1,param_3,*(undefined8 *)(*plVar1 + 0x560));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      param_4 = *(undefined8 *)(param_1 + 0x38);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(param_4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x30),param_4,0);
        return;
      }
      goto LAB_042e86b8;
    }
  }
  return;
}

