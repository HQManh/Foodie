// rea decompile_all
// name: System.Reflection.RuntimeFieldInfo$$GetValue
// address: 0x74ee2c8
// body: available
// range: 0x74ee2c8-0x74ee45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ee364 to 0x3f67f20 FUN_03f67f20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ee3a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ee3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ee45c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeFieldInfo__GetValue(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  if ((uVar1 >> 4 & 1) == 0) {
    if (param_2 == 0) {
      thunk_FUN_03fc39d4(&DAT_0918b8b0);
      uVar3 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09208d88);
      System_Reflection_TargetException___ctor(uVar3,uVar5);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d8128);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar5);
    }
    plVar2 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    uVar3 = System_Object__GetType(param_2,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x2c0));
    if ((uVar4 & 1) == 0) {
      uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      uVar5 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      FUN_039b1d98(param_2);
      uVar6 = System_Object__GetType(param_2,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09202920);
      uVar3 = System_String__Format(uVar7,uVar3,uVar5,uVar6,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_092201e0);
      System_ArgumentException___ctor(uVar5,uVar3,uVar6,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d8128);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar3);
    }
  }
  uVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  if ((uVar1 >> 6 & 1) == 0) {
    System_Reflection_RuntimeFieldInfo__CheckGeneric(param_1);
  }
  FUN_03f67f20(param_1,param_2);
  return;
}

