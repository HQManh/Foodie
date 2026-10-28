// rea decompile_all
// name: System.DefaultBinder$$ExactPropertyBinding
// address: 0x75e8ff4
// body: available
// range: 0x75e8ff4-0x75e929b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e91fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9200 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9250 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9298 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DefaultBinder__ExactPropertyBinding(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int local_6c;
  long local_68;
  
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921f240);
    System_ArgumentNullException___ctor(uVar4,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c8268);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar7);
  }
  if (param_3 == 0) {
    local_6c = 0;
  }
  else {
    local_6c = *(int *)(param_3 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    local_68 = 0;
  }
  else {
    uVar9 = 0;
    local_68 = 0;
    do {
      if (uVar1 <= uVar9) goto LAB_075e9200;
      plVar8 = (long *)(param_1 + uVar9 * 8 + 0x20);
      plVar2 = (long *)*plVar8;
      if (plVar2 == (long *)0x0) {
LAB_075e91fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(*plVar2 + 0x270));
      if (0 < local_6c) {
        if (lVar3 == 0) goto LAB_075e91fc;
        lVar6 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar6) goto LAB_075e9200;
          plVar2 = *(long **)(lVar3 + 0x20 + lVar6 * 8);
          if ((plVar2 == (long *)0x0) ||
             (uVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0)),
             param_3 == 0)) goto LAB_075e91fc;
          if (*(uint *)(param_3 + 0x18) <= (uint)lVar6) goto LAB_075e9200;
          uVar7 = *(undefined8 *)(param_3 + 0x20 + lVar6 * 8);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Type__op_Inequality(uVar4,uVar7,0);
          if ((uVar5 & 1) != 0) goto LAB_075e91c0;
          lVar6 = lVar6 + 1;
        } while (local_6c != (int)lVar6);
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__op_Inequality(param_2,0,0);
      if ((uVar5 & 1) == 0) {
LAB_075e9190:
        uVar5 = System_Reflection_PropertyInfo__op_Inequality(local_68,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_091fb838);
          uVar4 = System_Environment__GetResourceString(uVar4,0);
          thunk_FUN_03fc39d4(&DAT_09181088);
          uVar7 = thunk_FUN_03f9944c();
          System_Reflection_AmbiguousMatchException___ctor(uVar7,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091c8268);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar4);
        }
        if (*(uint *)(param_1 + 0x18) <= uVar9) {
LAB_075e9200:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_68 = *plVar8;
      }
      else {
        if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_075e9200;
        plVar2 = (long *)*plVar8;
        if (plVar2 == (long *)0x0) goto LAB_075e91fc;
        uVar4 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar5 = System_Type__op_Inequality(param_2,uVar4,0);
        if ((uVar5 & 1) == 0) goto LAB_075e9190;
      }
LAB_075e91c0:
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  return local_68;
}

