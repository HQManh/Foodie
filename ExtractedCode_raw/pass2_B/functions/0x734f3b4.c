// rea decompile_all
// name: Lean.Touch.LeanSelectableByFinger$$FindSelectable
// address: 0x734f3b4
// body: available
// range: 0x734f3b4-0x734f55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734f558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x734f55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Lean_Touch_LeanSelectableByFinger__FindSelectable(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  
  if ((DAT_09520755 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36e0);
    FUN_03f5c2a4(&DAT_091a36e8);
    FUN_03f5c2a4(&DAT_091a36f0);
    FUN_03f5c2a4(&DAT_09187718);
    FUN_03f5c2a4(&DAT_09187710);
    FUN_03f5c2a4(&DAT_091a9f00);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520755 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = (long *)0x0;
  uStack_60 = 0;
  if (*(int *)(DAT_09187710 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187710 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_056326a0(&local_70,**(long **)(DAT_09187710 + 0xb8),DAT_091a9f00);
  do {
    do {
      uVar1 = FUN_071bd040(&local_70,DAT_091a36e8);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)0x0;
        goto LAB_0734f530;
      }
      if (local_58 == (long *)0x0) {
LAB_0734f4d4:
        plVar2 = (long *)0x0;
      }
      else {
        if (*(byte *)(*local_58 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) goto LAB_0734f4d4;
        plVar2 = local_58;
        if (*(long *)(*(long *)(*local_58 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 + -8)
            != DAT_09187718) {
          plVar2 = (long *)0x0;
        }
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(plVar2,0,0);
    } while ((uVar1 & 1) == 0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = Lean_Touch_LeanSelectableByFinger__IsSelectedBy(plVar2,param_1);
  } while ((uVar1 & 1) == 0);
LAB_0734f530:
  FUN_071bd1e0(&local_70,DAT_091a36e0);
  return plVar2;
}

