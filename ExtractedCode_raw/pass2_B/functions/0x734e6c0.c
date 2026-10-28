// rea decompile_all
// name: Lean.Touch.LeanSelectByFinger$$ShouldRemoveSelectable
// address: 0x734e6c0
// body: available
// range: 0x734e6c0-0x734e81b inclusive
// range: 0x734e858-0x734e86f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734e814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x734e818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Lean_Touch_LeanSelectByFinger__ShouldRemoveSelectable(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((DAT_09520748 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a55b8);
    FUN_03f5c2a4(&DAT_091a55c0);
    FUN_03f5c2a4(&DAT_091a55c8);
    FUN_03f5c2a4(&DAT_09187718);
    FUN_03f5c2a4(&DAT_091b3240);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520748 = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  uStack_30 = 0;
  if (param_2 != (long *)0x0) {
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 + -8)
             != DAT_09187718) {
      param_2 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    if ((param_2 == (long *)0x0) || (param_2[0xd] == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0595a294(&local_40,param_2[0xd],DAT_091b3240);
    while (uVar1 = FUN_07228424(&local_40,DAT_091a55c0), (uVar1 & 1) != 0) {
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(local_28 + 0x18) != '\0') || (*(char *)(local_28 + 0x19) == '\0')) break;
    }
    uVar1 = uVar1 ^ 1;
    FUN_07228420(&local_40,DAT_091a55b8);
  }
  return uVar1 & 1;
}

