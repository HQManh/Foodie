// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$SetPatienceFill
// address: 0x44cfbd8
// body: available
// range: 0x44cfbd8-0x44cfcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cfcc0 to 0x86196e4 UnityEngine.Material$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44cfcf0 to 0x878cd44 UnityEngine.UI.Image$$set_fillAmount (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44cfcf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__SetPatienceFill
               (undefined4 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095182d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092153c0);
    DAT_095182d2 = 1;
  }
  lVar3 = DAT_09188ad0;
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0xb0) = param_1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0xf8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_2 + 0xc0) != 0) {
        UnityEngine_UI_Image__set_fillAmount(param_1,*(long *)(param_2 + 0xc0),0);
        return;
      }
    }
    else if (*(long *)(param_2 + 0xf8) != 0) {
      UnityEngine_Material__SetFloat(param_1,*(long *)(param_2 + 0xf8),DAT_092153c0,0);
      plVar2 = *(long **)(param_2 + 0xc0);
      if (plVar2 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x358))(plVar2,*(undefined8 *)(*plVar2 + 0x360));
        if (lVar3 != 0) {
          UnityEngine_Material__SetFloat(param_1,lVar3,DAT_092153c0,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

