// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.LeaseManager$$ManageLeases
// address: 0x74907f0
// body: available
// range: 0x74907f0-0x74909cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74909a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74909c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074909c0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Lifetime_LeaseManager__ManageLeases(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  char local_34 [4];
  
  if ((DAT_095212f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a9d0);
    DAT_095212f9 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  local_34[0] = '\0';
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar4,local_34,0);
  iVar2 = 0;
  while( true ) {
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    plVar3 = *(long **)(param_1 + 0x10);
    if (iVar1 <= iVar2) {
      if (plVar3 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        if (iVar2 == 0) {
          System_Runtime_Remoting_Lifetime_LeaseManager__StopManager(param_1);
        }
        if (local_34[0] != '\0') {
          System_Threading_Monitor__Exit(uVar4,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,iVar2,*(undefined8 *)(*plVar3 + 0x2f0));
    if (plVar3 == (long *)0x0) break;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a9d0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
        DAT_0918a9d0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    if (plVar3[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_Remoting_Lifetime_Lease__UpdateState(plVar3[0xd],0);
    if (plVar3[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(plVar3[0xd] + 0x20) == 4) {
      plVar5 = *(long **)(param_1 + 0x10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar5 + 0x3d8))(plVar5,iVar2,*(undefined8 *)(*plVar5 + 0x3e0));
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

