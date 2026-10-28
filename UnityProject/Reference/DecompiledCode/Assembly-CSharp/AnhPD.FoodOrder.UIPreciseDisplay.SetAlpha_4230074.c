// rea decompile_all
// name: AnhPD.FoodOrder.UIPreciseDisplay$$SetAlpha
// address: 0x4230074
// body: available
// range: 0x4230074-0x4230173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4230170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIPreciseDisplay__SetAlpha
               (undefined4 param_1,undefined4 param_2,undefined1 param_3 [16],long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  if ((DAT_09516dbd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516dbd = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = *(long **)(param_4 + 0x20);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      plVar2 = *(long **)(param_4 + 0x20);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
        plVar2 = *(long **)(param_4 + 0x20);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
                    /* WARNING: Could not recover jumptable at 0x04230158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x2a8))
                    (uVar5,param_2,param_3,param_1,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

