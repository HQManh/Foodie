// rea decompile_all
// name: System.Reflection.MethodBase$$GetMethodFromHandle
// address: 0x74e117c
// body: available
// range: 0x74e117c-0x74e133b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e1234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e1294 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e1338 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_MethodBase__GetMethodFromHandle(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  local_28 = param_1;
  uVar1 = System_RuntimeMethodHandle__IsNullHandle(&local_28,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920f670);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
LAB_074e1300:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d3768);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  plVar2 = (long *)FUN_03f65a20(local_28,0,1);
  uVar1 = System_Reflection_MethodBase__op_Equality(plVar2,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920f670);
    System_ArgumentException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d3768);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar1 = System_Type__op_Inequality(plVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (plVar3 == (long *)0x0) goto LAB_074e1234;
      uVar1 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
      if ((uVar1 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fe268);
        uVar5 = System_Environment__GetResourceString(uVar5,0);
        FUN_039b1d98(plVar3);
        uVar6 = (**(code **)(*plVar3 + 0x468))(plVar3,*(undefined8 *)(*plVar3 + 0x470));
        uVar4 = System_String__Format(uVar4,uVar5,plVar2,uVar6,0);
        goto LAB_074e1300;
      }
    }
    return plVar2;
  }
LAB_074e1234:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

