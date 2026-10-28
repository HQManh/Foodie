// rea decompile_all
// name: UniRx.Operators.WhenAllObservable.WhenAll.WhenAllCollectionObserver$$OnCompleted
// address: 0x418ad08
// body: available
// range: 0x418ad08-0x418ae63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418ae50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ae58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ae5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ae60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418ae54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Operators_WhenAllObservable_WhenAll_WhenAllCollectionObserver__OnCompleted(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char local_34 [4];
  
  if ((DAT_09516764 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09516764 = 1;
  }
  local_34[0] = '\0';
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar2,local_34,0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar3 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (int)plVar3[6] + 1;
    *(int *)(plVar3 + 6) = iVar1;
    if (iVar1 == *(int *)((long)plVar3 + 0x34)) {
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515ed7 == '\0') {
        FUN_03f5c2a4(&DAT_0918c670);
        DAT_09515ed7 = '\x01';
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*plVar3 + 0x1b8))
                (plVar3,**(undefined1 **)(DAT_0918c670 + 0xb8),*(undefined8 *)(*plVar3 + 0x1c0));
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    }
  }
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar2,0);
  }
  return;
}

