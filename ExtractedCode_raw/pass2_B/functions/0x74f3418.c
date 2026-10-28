// rea decompile_all
// name: System.Reflection.RuntimePropertyInfo$$SetValue
// address: 0x74f3418
// body: available
// range: 0x74f3418-0x74f3603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f35ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f35f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f35f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f3600 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimePropertyInfo__SetValue
               (long *param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5,
               long param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if ((DAT_09521640 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521640 = 1;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x318))(param_1,1,*(undefined8 *)(*param_1 + 800));
  if (plVar1 == (long *)0x0) {
    uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920ccd0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091f7320);
    uVar7 = System_String__Concat(uVar5,uVar7,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d81c0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  if ((param_6 == 0) || (*(long *)(param_6 + 0x18) == 0)) {
    plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar4 == (long *)0x0) goto LAB_074f35f0;
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_074f35f8;
    plVar2 = plVar4;
    if ((int)plVar4[3] == 0) goto LAB_074f35f4;
  }
  else {
    uVar8 = (uint)*(long *)(param_6 + 0x18);
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,uVar8 + 1);
    System_Array__CopyTo(param_6,plVar2,0,0);
    if (plVar2 == (long *)0x0) {
LAB_074f35f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_074f35f8:
      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,0);
    }
    if (*(uint *)(plVar2 + 3) <= uVar8) {
LAB_074f35f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4 = plVar2 + (int)uVar8;
  }
  plVar4[4] = param_3;
  thunk_FUN_03f5d7b8(plVar4 + 4,param_3);
                    /* WARNING: Could not recover jumptable at 0x074f356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x368))
            (plVar1,param_2,param_4,param_5,plVar2,param_7,*(undefined8 *)(*plVar1 + 0x370));
  return;
}

