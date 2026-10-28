// rea decompile_all
// name: System.Enum$$ToObject
// address: 0x75eb5c4
// body: available
// range: 0x75eb5c4-0x75eba57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75eb690 to 0x75ec11c System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb700 to 0x75eba68 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb760 to 0x75ec950 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb7c0 to 0x75ebdd4 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb810 to 0x75ecaf4 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb860 to 0x75ec7ac System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb8b0 to 0x75ec608 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb900 to 0x75ec2c0 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb950 to 0x75ebf78 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb9a0 to 0x75ec464 System.Enum$$ToObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eb9e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eb9f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eba54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's Func
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_Enum__ToObject(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09521efb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_09521efb = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c9050);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_Convert__GetTypeCode(param_2,0);
  if (iVar1 < 8) {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
          puVar4 = (undefined1 *)thunk_FUN_03f99594(param_2);
          System_Enum__ToObject(param_1,*puVar4);
          return;
        }
      }
      else {
        if (iVar1 != 4) {
LAB_075eb9f4:
          uVar6 = thunk_FUN_03fc39d4(&DAT_09210300);
          uVar6 = System_Environment__GetResourceString(uVar6,0);
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar7 = thunk_FUN_03f9944c();
          uVar8 = thunk_FUN_03fc39d4(&DAT_09225370);
          System_ArgumentException___ctor(uVar7,uVar6,uVar8,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091c9050);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar6);
        }
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535460 + 0x40)) {
          puVar2 = (undefined2 *)thunk_FUN_03f99594(param_2);
          System_Enum__ToObject(param_1,*puVar2);
          return;
        }
      }
    }
    else if (iVar1 == 5) {
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535408 + 0x40)) {
        puVar4 = (undefined1 *)thunk_FUN_03f99594(param_2);
        System_Enum__ToObject(param_1,*puVar4);
        return;
      }
    }
    else if (iVar1 == 6) {
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
        puVar4 = (undefined1 *)thunk_FUN_03f99594(param_2);
        System_Enum__ToObject(param_1,*puVar4);
        return;
      }
    }
    else {
      if (iVar1 != 7) goto LAB_075eb9f4;
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535410 + 0x40)) {
        puVar2 = (undefined2 *)thunk_FUN_03f99594(param_2);
        System_Enum__ToObject(param_1,*puVar2);
        return;
      }
    }
  }
  else if (iVar1 < 10) {
    if (iVar1 == 8) {
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535418 + 0x40)) {
        puVar2 = (undefined2 *)thunk_FUN_03f99594(param_2);
        System_Enum__ToObject(param_1,*puVar2);
        return;
      }
    }
    else {
      if (iVar1 != 9) goto LAB_075eb9f4;
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535420 + 0x40)) {
        puVar5 = (undefined4 *)thunk_FUN_03f99594(param_2);
        System_Enum__ToObject(param_1,*puVar5);
        return;
      }
    }
  }
  else if (iVar1 == 10) {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535428 + 0x40)) {
      puVar5 = (undefined4 *)thunk_FUN_03f99594(param_2);
      System_Enum__ToObject(param_1,*puVar5);
      return;
    }
  }
  else if (iVar1 == 0xb) {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535440 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_03f99594(param_2);
      System_Enum__ToObject(param_1,*puVar3);
      return;
    }
  }
  else {
    if (iVar1 != 0xc) goto LAB_075eb9f4;
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*param_2 + 0x40) == *(long *)(DAT_09535448 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_03f99594(param_2);
      System_Enum__ToObject(param_1,*puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_2);
}

