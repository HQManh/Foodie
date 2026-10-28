// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitNoMembers
// address: 0x74bf814
// body: available
// range: 0x74bf814-0x74bf92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bf8a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bf92c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitNoMembers(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_09521485 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a8b8);
    DAT_09521485 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x60) + 0x10), plVar2 != (long *)0x0)) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x308))
                               (plVar2,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(*plVar2 + 0x310));
    lVar1 = DAT_0918a8b8;
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else if ((*plVar2 != DAT_0918a8b8) || (*(long **)(param_1 + 0x38) = plVar2, *plVar2 != lVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    plVar4 = (long *)(param_1 + 0x38);
    thunk_FUN_03f5d7b8(plVar4,plVar2);
    if (*plVar4 != 0) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = thunk_FUN_03f9944c(DAT_0918a8b8);
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar3,uVar5);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_03f5d7b8(plVar4,uVar3);
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0x60) + 0x10), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x074bf928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2a8))
                (plVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(*plVar2 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

