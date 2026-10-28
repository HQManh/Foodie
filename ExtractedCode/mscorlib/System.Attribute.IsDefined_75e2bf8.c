// rea decompile_all
// name: System.Attribute$$IsDefined
// address: 0x75e2bf8
// body: available
// range: 0x75e2bf8-0x75e2ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e2d7c to 0x75e2608 System.Attribute$$InternalIsDefined (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e2dd0 to 0x75e2678 System.Attribute$$InternalIsDefined (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e2dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e2e04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e2e6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e2ebc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Attribute__IsDefined(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09521ed7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170f60);
    FUN_03f5c2a4(&DAT_09184220);
    FUN_03f5c2a4(&DAT_09189788);
    DAT_09521ed7 = 1;
  }
  uVar2 = System_Reflection_MemberInfo__op_Equality(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(param_2,0,0);
    uVar3 = DAT_09170f60;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (param_2 != (long *)0x0) {
        uVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,uVar3,*(undefined8 *)(*param_2 + 0x2b0));
        uVar3 = DAT_09170f60;
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          uVar2 = System_Type__op_Inequality(param_2,uVar3,0);
          if ((uVar2 & 1) != 0) {
            uVar3 = thunk_FUN_03fc39d4(&DAT_092112b0);
            uVar3 = System_Environment__GetResourceString(uVar3,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar5 = thunk_FUN_03f9944c();
            System_ArgumentException___ctor(uVar5,uVar3,0);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091c3298);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar3);
          }
        }
        if (param_1 != (long *)0x0) {
          iVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
          if (iVar1 == 2) {
            if ((*(byte *)(DAT_09184220 + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09184220 + 0x130) * 8 +
                         -8) == DAT_09184220)) {
              System_Attribute__InternalIsDefined(param_1,param_2,param_3 & 1);
              return;
            }
          }
          else {
            if (iVar1 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x075e2df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x1f8))
                        (param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 0x200));
              return;
            }
            if ((*(byte *)(DAT_09189788 + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 +
                         -8) == DAT_09189788)) {
              System_Attribute__InternalIsDefined(param_1,param_2,param_3 & 1);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09217bc0;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_0921ada8;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar3,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c3298);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

