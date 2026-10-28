// rea decompile_all
// name: System.RuntimeType$$get_FullName
// address: 0x75f89e8
// body: available
// range: 0x75f89e8-0x75f8ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f8ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__get_FullName(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_09521f6d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091883e0);
    DAT_09521f6d = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)System_Type__GetRootElementType(param_1,0);
    if (plVar2 == (long *)0x0) goto LAB_075f8ad4;
    uVar1 = (**(code **)(*plVar2 + 1000))(plVar2,*(undefined8 *)(*plVar2 + 0x3f0));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  plVar2 = param_1 + 3;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_091883e0);
    System_MonoTypeInfo___ctor(lVar3,0);
    *plVar2 = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
    lVar3 = *plVar2;
    if (lVar3 == 0) {
LAB_075f8ad4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  plVar2 = (long *)(lVar3 + 0x10);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    lVar3 = FUN_03f6e9f0(param_1,1,0);
    *plVar2 = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
  }
  return lVar3;
}

