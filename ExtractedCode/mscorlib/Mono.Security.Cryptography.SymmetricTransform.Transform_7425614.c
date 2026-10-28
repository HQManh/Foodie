// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$Transform
// address: 0x7425614
// body: available
// range: 0x7425614-0x7425783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74256e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7425780 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_SymmetricTransform__Transform
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      puVar6 = (undefined8 *)(*param_1 + 0x238);
      puVar7 = (undefined8 *)(*param_1 + 0x240);
    }
    else {
      if (iVar1 != 2) {
LAB_074256e8:
        plVar3 = (long *)param_1[2];
        FUN_039b1d98(plVar3);
        uVar2 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
        local_38 = thunk_FUN_03fc39d4(&DAT_09182538);
        uStack_30 = 0xffffffffffffffff;
        local_28 = uVar2;
        uVar4 = System_Enum__ToString(&local_38,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_092124a8);
        uVar4 = System_String__Concat(uVar5,uVar4);
        thunk_FUN_03fc39d4(&DAT_09188910);
        uVar5 = thunk_FUN_03f9944c();
        System_NotImplementedException___ctor(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091dab00);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
      puVar6 = (undefined8 *)(*param_1 + 0x228);
      puVar7 = (undefined8 *)(*param_1 + 0x230);
    }
  }
  else if (iVar1 == 3) {
    puVar6 = (undefined8 *)(*param_1 + 600);
    puVar7 = (undefined8 *)(*param_1 + 0x260);
  }
  else if (iVar1 == 4) {
    puVar6 = (undefined8 *)(*param_1 + 0x248);
    puVar7 = (undefined8 *)(*param_1 + 0x250);
  }
  else {
    if (iVar1 != 5) goto LAB_074256e8;
    puVar6 = (undefined8 *)(*param_1 + 0x268);
    puVar7 = (undefined8 *)(*param_1 + 0x270);
  }
                    /* WARNING: Could not recover jumptable at 0x074256e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(param_1,param_2,param_3,*puVar7);
  return;
}

