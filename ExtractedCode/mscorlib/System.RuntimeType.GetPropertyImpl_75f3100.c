// rea decompile_all
// name: System.RuntimeType$$GetPropertyImpl
// address: 0x75f3100
// body: available
// range: 0x75f3100-0x75f338f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f3338 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f333c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f338c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__GetPropertyImpl
                 (undefined8 param_1,long param_2,uint param_3,long *param_4,long *param_5,
                 long param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09521f46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_091aa298);
    FUN_03f5c2a4(&DAT_091aa2a0);
    FUN_03f5c2a4(&DAT_091aa2a8);
    DAT_09521f46 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar2,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d82b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar4);
  }
  System_RuntimeType__GetPropertyCandidates(&local_68,param_1,param_2,param_3,param_6,0);
  if ((int)local_58 == 0) {
LAB_075f3210:
    plVar1 = (long *)0x0;
  }
  else {
    if ((param_6 == 0) || (*(long *)(param_6 + 0x18) == 0)) {
      if ((int)local_58 == 1) {
        plVar1 = (long *)FUN_05639988(&local_68,0,DAT_091aa2a8);
        if (param_5 == (long *)0x0) {
          return plVar1;
        }
        if (plVar1 == (long *)0x0) goto LAB_075f333c;
        uVar2 = (**(code **)(*plVar1 + 600))(plVar1,*(undefined8 *)(*plVar1 + 0x260));
        uVar3 = (**(code **)(*param_5 + 0x8e8))(param_5,uVar2,*(undefined8 *)(*param_5 + 0x8f0));
        if ((uVar3 & 1) != 0) {
          return plVar1;
        }
        goto LAB_075f3210;
      }
      if (param_5 == (long *)0x0) {
        uVar2 = thunk_FUN_03fc39d4(&DAT_091fb838);
        uVar2 = System_Environment__GetResourceString(uVar2,0);
        thunk_FUN_03fc39d4(&DAT_09181088);
        uVar4 = thunk_FUN_03f9944c();
        System_Reflection_AmbiguousMatchException___ctor(uVar4,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091d82b0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar2);
      }
    }
    if ((param_3 >> 0x10 & 1) == 0) {
      if (param_4 == (long *)0x0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_4 = (long *)System_Type__get_DefaultBinder(0);
        uVar2 = FUN_056399bc(&local_68,DAT_091aa298);
        if (param_4 == (long *)0x0) {
LAB_075f333c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        uVar2 = FUN_056399bc(&local_68,DAT_091aa298);
      }
      plVar1 = (long *)(**(code **)(*param_4 + 0x1c8))
                                 (param_4,param_3,uVar2,param_5,param_6,param_7,
                                  *(undefined8 *)(*param_4 + 0x1d0));
    }
    else {
      uVar2 = FUN_056399bc(&local_68,DAT_091aa298);
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183868);
      }
      plVar1 = (long *)System_DefaultBinder__ExactPropertyBinding(uVar2,param_5,param_6);
    }
  }
  return plVar1;
}

