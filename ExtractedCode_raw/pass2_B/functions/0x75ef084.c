// rea decompile_all
// name: System.Exception$$get_Source
// address: 0x75ef084
// body: available
// range: 0x75ef084-0x75ef19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ef198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Exception__get_Source(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_09521f22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b128);
    DAT_09521f22 = 1;
  }
  plVar5 = (long *)(param_1 + 0x68);
  if (*plVar5 != 0) {
LAB_075ef0bc:
    return *plVar5;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b128);
  System_Diagnostics_StackTrace___ctor(plVar2,param_1,1,0);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (iVar1 < 1) goto LAB_075ef0bc;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,0,*(undefined8 *)(*plVar2 + 400));
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      uVar3 = System_Reflection_MethodBase__op_Inequality(plVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_075ef0bc;
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        if (plVar2 != (long *)0x0) {
          plVar2 = (long *)(**(code **)(*plVar2 + 0x308))(plVar2,*(undefined8 *)(*plVar2 + 0x310));
          if (plVar2 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
            if (lVar4 != 0) {
              *plVar5 = *(long *)(lVar4 + 0x10);
              thunk_FUN_03f5d7b8(plVar5);
              goto LAB_075ef0bc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

