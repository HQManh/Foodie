// rea decompile_all
// name: System.Attribute$$GetCustomAttributes
// address: 0x75e31f8
// body: available
// range: 0x75e31f8-0x75e33af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e3298 to 0x75e20f0 System.Attribute$$InternalParamGetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e32fc to 0x3f5c428 thunk_FUN_03f99350 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e3344 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e33a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e33ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Attribute__GetCustomAttributes(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521ed9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fbf0);
    FUN_03f5c2a4(&DAT_09170f60);
    DAT_09521ed9 = 1;
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921ada8);
    System_ArgumentNullException___ctor(uVar2,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c3270);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar5);
  }
  uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  uVar3 = System_Reflection_MemberInfo__op_Equality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920eeb8);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921ada8);
    System_ArgumentException___ctor(uVar5,uVar2,uVar6,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091c3270);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (plVar4 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    uVar2 = DAT_09170f60;
    if ((iVar1 == 8) && ((param_2 & 1) != 0)) {
      System_Attribute__InternalParamGetCustomAttributes(param_1,0,1);
      return;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar2 = (**(code **)(*param_1 + 0x248))
                      (param_1,uVar2,param_2 & 1,*(undefined8 *)(*param_1 + 0x250));
    thunk_FUN_03f99350(uVar2,DAT_0917fbf0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

