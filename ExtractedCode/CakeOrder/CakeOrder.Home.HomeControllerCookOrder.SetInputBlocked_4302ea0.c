// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$SetInputBlocked
// address: 0x4302ea0
// body: available
// range: 0x4302ea0-0x4303037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4302f8c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4303030 to 0x8655d28 UnityEngine.Behaviour$$set_enabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4303034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__SetInputBlocked(long param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_0951755f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184280);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951755f = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  if ((param_2 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a0) != 0) {
        UnityEngine_Behaviour__set_enabled
                  (*(long *)(param_1 + 0x1a0),*(undefined1 *)(param_1 + 0x1a8),0);
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        thunk_FUN_03f5d7b8(param_1 + 0x1a0,0);
        return;
      }
LAB_04303034:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09184280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_EventSystems_EventSystem__get_current(0);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
      }
      *(undefined8 *)(param_1 + 0x1a0) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 0x1a0);
      uVar3 = *(undefined8 *)(param_1 + 0x1a0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x1a0) != 0) {
          bVar1 = UnityEngine_Behaviour__get_enabled(*(long *)(param_1 + 0x1a0),0);
          *(byte *)(param_1 + 0x1a8) = bVar1 & 1;
          if (*(long *)(param_1 + 0x1a0) != 0) {
            UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x1a0),0,0);
            return;
          }
        }
        goto LAB_04303034;
      }
    }
  }
  return;
}

