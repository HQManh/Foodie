// rea decompile_all
// name: System.Threading.SpinLock$$ContinueTryEnterWithThreadTracking
// address: 0x7621000
// body: available
// range: 0x7621000-0x762117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762112c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7621178 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_SpinLock__ContinueTryEnterWithThreadTracking
               (int *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_44;
  
  if ((DAT_0952212e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef8);
    DAT_0952212e = 1;
  }
  local_44 = 0;
  lVar3 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = System_Threading_Thread__get_ManagedThreadId(lVar3,0);
  iVar2 = *param_1;
  thunk_FUN_03f6a5cc();
  if (iVar2 == iVar1) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920f1d8);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09187c28);
    uVar6 = thunk_FUN_03f9944c();
    System_Threading_LockRecursionException___ctor(uVar6,uVar5);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d9750);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  }
  local_44 = 0;
  do {
    do {
      do {
        if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_SpinWait__SpinOnce(&local_44);
        iVar2 = *param_1;
        thunk_FUN_03f6a5cc();
        if (iVar2 == 0) {
          System_Threading_Thread__BeginCriticalRegion(0);
          thunk_FUN_03f6a5cc();
          iVar2 = thunk_FUN_03f95894(param_1,iVar1,0,param_4,0);
          if (iVar2 == 0) {
            return;
          }
          System_Threading_Thread__EndCriticalRegion(0);
        }
      } while (param_2 == -1);
      if (param_2 == 0) {
        return;
      }
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Threading_SpinWait__get_NextSpinWillYield(&local_44);
    } while ((uVar4 & 1) == 0);
    iVar2 = System_Environment__get_TickCount(0);
    if (iVar2 - param_3 < 0) {
      return;
    }
  } while (0 < param_2 - (iVar2 - param_3));
  return;
}

