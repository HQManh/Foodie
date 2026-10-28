// rea decompile_all
// name: System.Runtime.Remoting.RemotingConfiguration$$RegisterWellKnownClientType
// address: 0x747fc34
// body: available
// range: 0x747fc34-0x747fe47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747fdac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fdb4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fdb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fdbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fdc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fe40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747fe44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747fdb0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_RemotingConfiguration__RegisterWellKnownClientType(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_09521267 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ec0);
    DAT_09521267 = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_2c[0] = '\0';
  local_28 = *(undefined8 *)(*(long *)(DAT_09189ec0 + 0xb8) + 0x40);
  System_Threading_Monitor__Enter(local_28,local_2c,0);
  if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x20);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*plVar1 + 0x2e8))
                    (plVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*plVar1 + 0x2f0));
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x28);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar1 + 0x2e8))
                      (plVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*plVar1 + 0x2f0));
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar1 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x20);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x318))
                  (plVar1,*(undefined8 *)(param_1 + 0x20),param_1,*(undefined8 *)(*plVar1 + 800));
        thunk_FUN_03f69668(*(undefined8 *)(param_1 + 0x20),1,0);
        if (local_2c[0] != '\0') {
          System_Threading_Monitor__Exit(local_28,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fc210);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f7a50);
    uVar3 = System_String__Concat(uVar4,uVar3,uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar4 = thunk_FUN_03f9944c();
    System_SystemException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d7408);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

