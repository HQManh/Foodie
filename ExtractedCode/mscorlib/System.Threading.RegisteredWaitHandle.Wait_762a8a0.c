// rea decompile_all
// name: System.Threading.RegisteredWaitHandle$$Wait
// address: 0x762a8a0
// body: available
// range: 0x762a8a0-0x762aacf inclusive
// range: 0x762aafc-0x762ab2f inclusive
// range: 0x762abdc-0x762acaf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762ab00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762ab2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762aca4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762aca8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762acac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0762aafc) */

void System_Threading_RegisteredWaitHandle__Wait(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_c0;
  char *local_b8;
  long *local_b0;
  long local_a8;
  char *local_a0;
  long *local_98;
  undefined4 local_80;
  char local_74 [4];
  long local_70;
  char local_64 [4];
  long local_58;
  
  local_58 = param_1;
  if ((DAT_095221a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d7338);
    FUN_03f5c2a4(&DAT_0918ce78);
    FUN_03f5c2a4(&DAT_09180830);
    FUN_03f5c2a4(&DAT_0918cea8);
    DAT_095221a1 = 1;
  }
  local_a0 = local_64;
  local_64[0] = '\0';
  local_a8 = 0;
  local_98 = &local_58;
  local_70 = 0;
  local_74[0] = '\0';
  local_80 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = System_Threading_WaitHandle__get_SafeWaitHandle();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(lVar2,local_64,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180830,2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *(long *)(local_58 + 0x18);
  if ((lVar2 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3[4] = lVar2;
  thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
  lVar2 = *(long *)(local_58 + 0x38);
  if ((lVar2 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3[5] = lVar2;
  thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
  while( true ) {
    uVar6 = *(undefined8 *)(local_58 + 0x40);
    if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cea8);
    }
    iVar1 = System_Threading_WaitHandle__WaitAny(plVar3,uVar6,0);
    if (*(char *)(local_58 + 0x4d) != '\0') break;
    local_70 = local_58;
    local_74[0] = '\0';
    local_c0 = 0;
    local_b8 = local_74;
    local_b0 = &local_70;
    System_Threading_Monitor__Enter(local_58,local_74);
    *(int *)(local_58 + 0x48) = *(int *)(local_58 + 0x48) + 1;
    if (local_74[0] != '\0') {
      FUN_03f6a050(*local_b0);
    }
    uVar6 = thunk_FUN_03f9944c(DAT_0918ce78);
    System_Threading_WaitCallback___ctor(uVar6,local_58,DAT_091d7338);
    local_c0 = CONCAT71(local_c0._1_7_,iVar1 == 0x102);
    uVar5 = FUN_03f5c42c(DAT_09535400,&local_c0);
    System_Threading_ThreadPool__QueueUserWorkItem(uVar6,uVar5);
    if ((*(char *)(local_58 + 0x4d) != '\0') || (*(char *)(local_58 + 0x4c) != '\0')) break;
  }
  local_b8 = local_74;
  local_c0 = 0;
  local_b0 = &local_70;
  local_74[0] = '\0';
  local_70 = local_58;
  System_Threading_Monitor__Enter(local_58,local_74);
  *(undefined1 *)(local_58 + 0x4d) = 1;
  if ((*(int *)(local_58 + 0x48) == 0) && (*(long *)(local_58 + 0x30) != 0)) {
    System_Threading_WaitHandle__get_SafeWaitHandle();
    System_Threading_NativeEventCalls__SetEvent();
    *(undefined8 *)(local_58 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x30),0);
  }
  if (*local_b8 != '\0') {
    FUN_03f6a050(*local_b0);
  }
  if (local_c0 == 0) {
    if (*local_a0 != '\0') {
      if ((*(long *)(*local_98 + 0x18) == 0) ||
         (lVar2 = System_Threading_WaitHandle__get_SafeWaitHandle(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_InteropServices_SafeHandle__DangerousRelease(lVar2,0);
    }
    if (local_a8 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

