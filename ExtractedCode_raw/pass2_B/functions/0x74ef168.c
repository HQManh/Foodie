// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$Invoke
// address: 0x74ef168
// body: available
// range: 0x74ef168-0x74ef333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ef2d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef2dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef330 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeMethodInfo__Invoke
               (long *param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long local_38;
  
  local_38 = 0;
  uVar1 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if ((uVar1 >> 4 & 1) == 0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar2 + 0x8d8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x8e0));
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_0918b8b0);
      uVar4 = thunk_FUN_03f9944c();
      if (param_2 == 0) {
        puVar6 = &DAT_09208d98;
      }
      else {
        puVar6 = &DAT_09209428;
      }
      uVar7 = thunk_FUN_03fc39d4(puVar6);
      System_Reflection_TargetException___ctor(uVar4,uVar7);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091d8188);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar7);
    }
  }
  if (param_4 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_4 = System_Type__get_DefaultBinder(0);
  }
  uVar4 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
  System_Reflection_RuntimeMethodInfo__ConvertValues(param_4,param_5,uVar4,param_6,param_3);
  uVar3 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
  if ((uVar3 & 1) == 0) {
    if ((param_3 >> 0x19 & 1) == 0) {
      FUN_03f65778(param_1,param_2,param_5,&local_38);
    }
    else {
      FUN_03f65778(param_1,param_2,param_5,&local_38);
    }
    lVar5 = local_38;
    if (local_38 == 0) {
      return;
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    lVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09206968);
    System_InvalidOperationException___ctor(lVar5,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d8188);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(lVar5,uVar4);
}

