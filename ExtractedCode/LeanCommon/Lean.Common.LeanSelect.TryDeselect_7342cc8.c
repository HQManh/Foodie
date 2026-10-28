// rea decompile_all
// name: Lean.Common.LeanSelect$$TryDeselect
// address: 0x7342cc8
// body: available
// range: 0x7342cc8-0x7342e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7342e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lean_Common_LeanSelect__TryDeselect(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_095206b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187700);
    FUN_03f5c2a4(&DAT_091ae1b8);
    FUN_03f5c2a4(&DAT_091ae1c0);
    FUN_03f5c2a4(&DAT_091ae1c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be0a0);
    DAT_095206b4 = 1;
  }
  uVar1 = 0;
  if ((-1 < param_2) && (lVar3 = *(long *)(param_1 + 0x38), lVar3 != 0)) {
    if (param_2 < *(int *)(lVar3 + 0x18)) {
      lVar3 = FUN_057e0998(lVar3,param_2,DAT_091ae1c8);
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_07342e58:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e251c(*(long *)(param_1 + 0x38),param_2,DAT_091ae1b8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_07342e58;
        Lean_Common_LeanSelectable__InvokeOnDeslected(lVar3,param_1);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_0647fad4(*(long *)(param_1 + 0x48),lVar3,DAT_091be0a0);
        }
        if (*(int *)(DAT_09187700 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(DAT_09187700 + 0xb8) + 0x10);
        if (lVar4 != 0) {
          if (*(int *)(DAT_09187700 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar4 = *(long *)(*(long *)(DAT_09187700 + 0xb8) + 0x10);
            if (lVar4 == 0) goto LAB_07342e58;
          }
          (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),param_1,lVar3,*(undefined8 *)(lVar4 + 0x28));
        }
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

