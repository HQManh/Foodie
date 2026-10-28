// rea decompile_all
// name: System.Threading.SpinLock$$ContinueTryEnter
// address: 0x7620a60
// body: available
// range: 0x7620a60-0x7620f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7620b4c to 0x7621000 System.Threading.SpinLock$$ContinueTryEnterWithThreadTracking (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7620e34 to 0x762117c System.Threading.SpinLock$$DecrementWaiters (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7620e88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620f0c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_SpinLock__ContinueTryEnter(uint *param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int local_64;
  
  if ((DAT_0952212c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091891b0);
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_0952212c = 1;
  }
  System_Threading_Thread__EndCriticalRegion(0);
  if (*param_3 != '\0') {
    *param_3 = '\0';
    uVar6 = thunk_FUN_03fc39d4(&DAT_092100f8);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d9748);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  if (param_2 < -1) {
    local_64 = param_2;
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_64);
    uVar7 = thunk_FUN_03fc39d4(&DAT_092100e8);
    uVar7 = System_Environment__GetResourceString(uVar7,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_0921f698);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar6,uVar7,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d9748);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar6);
  }
  if (param_2 + 1U < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = System_Environment__get_TickCount(0);
  }
  if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = *param_1;
  thunk_FUN_03f6a5cc();
  if (-1 < (int)uVar3) {
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__ContinueTryEnterWithThreadTracking(param_1,param_2,iVar1,param_3);
    return;
  }
  uVar3 = *param_1;
  thunk_FUN_03f6a5cc();
  if ((uVar3 & 1) == 0) {
    System_Threading_Thread__BeginCriticalRegion(0);
    thunk_FUN_03f6a5cc();
    uVar2 = thunk_FUN_03f95894(param_1,uVar3 | 1,uVar3,param_3,0);
    if (uVar2 == uVar3) {
      return;
    }
    System_Threading_Thread__EndCriticalRegion(0);
LAB_07620bf8:
    uVar3 = 0x7fffffff;
  }
  else {
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar3 & 0x7ffffffe) == **(uint **)(DAT_0918aef0 + 0xb8)) goto LAB_07620bf8;
    thunk_FUN_03f6a5cc();
    uVar3 = thunk_FUN_03f95694(param_1,2,0);
    uVar3 = uVar3 >> 1 & 0x3fffffff;
  }
  if (param_2 == 0) {
LAB_07620e08:
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__DecrementWaiters(param_1);
    return;
  }
  if (param_2 != -1) {
    iVar4 = System_Environment__get_TickCount(0);
    if ((iVar4 - iVar1 < 0) || (param_2 - (iVar4 - iVar1) < 1)) goto LAB_07620e08;
  }
  if (*(int *)(DAT_091891b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = System_Threading_PlatformHelper__get_ProcessorCount();
  if (((int)uVar3 < iVar4) && (iVar5 = uVar3 * 100, 0 < iVar5)) {
    iVar11 = 1;
    iVar10 = iVar5;
    do {
      iVar10 = iVar10 + 100;
      System_Threading_Thread__SpinWait(iVar10 * iVar11,0);
      uVar3 = *param_1;
      if (iVar11 < iVar4) {
        iVar11 = iVar11 + 1;
      }
      thunk_FUN_03f6a5cc();
      if ((uVar3 & 1) == 0) {
        System_Threading_Thread__BeginCriticalRegion(0);
        uVar2 = uVar3;
        if ((uVar3 & 0x7ffffffe) != 0) {
          uVar2 = uVar3 - 2;
        }
        thunk_FUN_03f6a5cc();
        uVar2 = thunk_FUN_03f95894(param_1,uVar2 | 1,uVar3,param_3,0);
        if (uVar2 == uVar3) {
          return;
        }
        System_Threading_Thread__EndCriticalRegion(0);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_2 != -1) {
    iVar4 = System_Environment__get_TickCount(0);
    if ((iVar4 - iVar1 < 0) || (param_2 - (iVar4 - iVar1) < 1)) goto LAB_07620e08;
  }
  iVar4 = 0;
  do {
    uVar3 = *param_1;
    thunk_FUN_03f6a5cc();
    if ((uVar3 & 1) == 0) {
      System_Threading_Thread__BeginCriticalRegion(0);
      uVar2 = uVar3;
      if ((uVar3 & 0x7ffffffe) != 0) {
        uVar2 = uVar3 - 2;
      }
      thunk_FUN_03f6a5cc();
      uVar2 = thunk_FUN_03f95894(param_1,uVar2 | 1,uVar3,param_3,0);
      if (uVar2 == uVar3) {
        return;
      }
      System_Threading_Thread__EndCriticalRegion(0);
    }
    uVar3 = iVar4 * -0x33333333 + 0x19999998;
    if ((uVar3 >> 3 | iVar4 * -0x60000000) < 0x6666667) {
      System_Threading_Thread__Sleep(1,0);
      iVar5 = iVar4 % 10;
LAB_07620dc4:
      if ((param_2 != -1) && (iVar5 == 0)) {
        iVar5 = System_Environment__get_TickCount(0);
        if ((iVar5 - iVar1 < 0) || (param_2 - (iVar5 - iVar1) < 1)) goto LAB_07620e08;
      }
    }
    else {
      if ((uVar3 >> 1 | iVar4 * -0x80000000) < 0x19999999) {
        System_Threading_Thread__Sleep(0,0);
        iVar5 = 0;
        goto LAB_07620dc4;
      }
      thunk_FUN_03f8a230(0);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

