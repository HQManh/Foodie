// rea decompile_all
// name: System.Enum$$Format
// address: 0x75ecd48
// body: available
// range: 0x75ecd48-0x75ed2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ecf84 to 0x75ea7b8 System.Enum$$InternalFlagsFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ed008 to 0x75ea180 System.Enum$$InternalFormattedHexString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ed058 to 0x75ea60c System.Enum$$InternalFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ed05c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ed0f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ed148 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ed2c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Enum__Format(long *param_1,long *param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  
  if ((DAT_09521efc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521efc = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_0921b048;
    goto LAB_075ed0c8;
  }
  if (param_1 == (long *)0x0) goto LAB_075ed05c;
  uVar2 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  if ((uVar2 & 1) == 0) {
    puVar9 = &DAT_092112c0;
LAB_075ed0fc:
    uVar5 = thunk_FUN_03fc39d4(puVar9);
    uVar6 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921b048);
    System_ArgumentException___ctor(uVar5,uVar6,uVar8,0);
    goto LAB_075ed2b4;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09225370;
LAB_075ed0c8:
    uVar6 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c8fc8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (param_3 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_0921ba70;
    goto LAB_075ed0c8;
  }
  if (*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400) {
      plVar10 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (plVar10 == (long *)0x0) {
    puVar9 = &DAT_09211258;
    goto LAB_075ed0fc;
  }
  plVar3 = (long *)System_Object__GetType(param_2,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  plVar4 = (long *)System_Enum__GetUnderlyingType(param_1);
  if (plVar3 == (long *)0x0) goto LAB_075ed05c;
  uVar2 = (**(code **)(*plVar3 + 0x5d8))(plVar3,*(undefined8 *)(*plVar3 + 0x5e0));
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Inequality(plVar3,plVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar5,2);
      FUN_039b1d98(plVar3);
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      FUN_039b1d98(uVar5);
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,0,uVar6);
      FUN_039b1d98(plVar4);
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,1,uVar6);
      puVar9 = &DAT_09201670;
      goto LAB_075ed280;
    }
  }
  else {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Enum__GetUnderlyingType(plVar3);
    uVar2 = (**(code **)(*plVar3 + 0x8e8))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x8f0));
    if ((uVar2 & 1) == 0) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar5,2);
      FUN_039b1d98(plVar3);
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      FUN_039b1d98(uVar5);
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,0,uVar6);
      FUN_039b1d98(param_1);
      uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,1,uVar6);
      puVar9 = &DAT_09209510;
LAB_075ed280:
      uVar6 = thunk_FUN_03fc39d4(puVar9);
      uVar6 = System_Environment__GetResourceString(uVar6,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar5,uVar6,0);
      goto LAB_075ed2b4;
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09535470 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09535470 + 0x130) * 8 + -8) !=
        DAT_09535470)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    param_2 = (long *)FUN_03f72c2c(param_2);
  }
  if (*(int *)(param_3 + 0x10) == 1) {
    uVar1 = System_String__get_Chars(param_3,0,0);
    if (uVar1 < 100) {
      if (uVar1 < 0x47) {
        if (uVar1 == 0x44) {
LAB_075ed00c:
          if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x075ed02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
            return;
          }
LAB_075ed05c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (uVar1 == 0x46) {
LAB_075ecf5c:
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Enum__InternalFlagsFormat(plVar10,param_2);
          return;
        }
      }
      else {
        if (uVar1 == 0x47) {
LAB_075ed030:
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Enum__InternalFormat(plVar10,param_2);
          return;
        }
        if (uVar1 == 0x58) {
LAB_075ecfe4:
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Enum__InternalFormattedHexString(param_2);
          return;
        }
      }
    }
    else if (uVar1 < 0x67) {
      if (uVar1 == 100) goto LAB_075ed00c;
      if (uVar1 == 0x66) goto LAB_075ecf5c;
    }
    else {
      if (uVar1 == 0x67) goto LAB_075ed030;
      if (uVar1 == 0x78) goto LAB_075ecfe4;
    }
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_09202d68);
  uVar6 = System_Environment__GetResourceString(uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09184908);
  uVar5 = thunk_FUN_03f9944c();
  System_FormatException___ctor(uVar5,uVar6,0);
LAB_075ed2b4:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c8fc8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

