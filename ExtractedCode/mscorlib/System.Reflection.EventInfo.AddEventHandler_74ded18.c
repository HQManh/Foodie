// rea decompile_all
// name: System.Reflection.EventInfo$$AddEventHandler
// address: 0x74ded18
// body: available
// range: 0x74ded18-0x74dee97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dee40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dee44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dee50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dee94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_EventInfo__AddEventHandler(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0952158d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952158d = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x278))(param_1,0,*(undefined8 *)(*param_1 + 0x280));
  if (plVar2 != (long *)0x0) {
    if (param_2 == 0) {
      uVar1 = (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(*plVar2 + 0x270));
      if ((uVar1 >> 4 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_0918b8b0);
        uVar6 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fd8c0);
        System_Reflection_TargetException___ctor(uVar6,uVar5);
        goto LAB_074dee80;
      }
    }
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((param_3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = param_3;
      thunk_FUN_03f5d7b8(plVar3 + 4,param_3);
                    /* WARNING: Could not recover jumptable at 0x074dee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x368))(plVar2,param_2,0,0,plVar3,0,*(undefined8 *)(*plVar2 + 0x370));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar6 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_091fd950);
  System_InvalidOperationException___ctor(uVar6,uVar5,0);
LAB_074dee80:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091cb890);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

