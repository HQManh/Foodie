// rea decompile_all
// name: System.Threading.ExecutionContext$$CreateCopy
// address: 0x7622c84
// body: available
// range: 0x7622c84-0x7622dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7622da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7622df0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7622df8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_ExecutionContext__CreateCopy(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09522147 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    FUN_03f5c2a4(&DAT_09187ca0);
    DAT_09522147 = 1;
  }
  if ((*(byte *)(param_1 + 0x30) & 5) == 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09209d18);
    uVar3 = System_Environment__GetResourceString(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar5 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar5,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091cbaf8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar3);
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09184350);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 1;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    }
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = System_Threading_ExecutionContext__get_LogicalCallContext(param_1);
      if (lVar4 == 0) goto LAB_07622da0;
      plVar2 = (long *)System_Runtime_Remoting_Messaging_LogicalCallContext__Clone(lVar4,0);
      if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09187ca0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2);
      }
      *(long *)(lVar1 + 0x20) = (long)plVar2;
      thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),plVar2);
    }
    return lVar1;
  }
LAB_07622da0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

