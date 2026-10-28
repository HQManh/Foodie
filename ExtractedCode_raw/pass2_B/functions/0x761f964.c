// rea decompile_all
// name: System.Threading.SemaphoreSlim$$Release
// address: 0x761f964
// body: available
// range: 0x761f964-0x761fbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761fbb0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761fbb8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761fbe8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761fbec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761fbb4) */

int System_Threading_SemaphoreSlim__Release(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 *local_58;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_09522122 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a848);
    DAT_09522122 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  System_Threading_SemaphoreSlim__CheckDispose(param_1);
  if (0 < param_2) {
    local_48 = *(undefined8 *)(param_1 + 0x20);
    pcStack_60 = local_4c;
    local_4c[0] = '\0';
    local_68 = 0;
    local_58 = &local_48;
    System_Threading_Monitor__Enter(local_48,local_4c,0);
    iVar7 = *(int *)(param_1 + 0x10);
    thunk_FUN_03f6a5cc();
    if (*(int *)(param_1 + 0x14) - iVar7 < param_2) {
      thunk_FUN_03fc39d4(&DAT_0918a840);
      uVar5 = thunk_FUN_03f9944c();
      System_Threading_SemaphoreFullException___ctor();
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d8958);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    thunk_FUN_03f6a5cc();
    param_2 = iVar7 + param_2;
    if ((param_2 == 1) || (iVar1 == 1)) {
      System_Threading_Monitor__Pulse(*(undefined8 *)(param_1 + 0x20),0);
    }
    else if (1 < iVar1) {
      System_Threading_Monitor__PulseAll(*(undefined8 *)(param_1 + 0x20),0);
    }
    iVar9 = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = param_2 - iVar1;
      while ((iVar9 = iVar1 + (uVar2 & (int)uVar2 >> 0x1f), 0 < param_2 - iVar1 &&
             (lVar8 = *(long *)(param_1 + 0x30), iVar9 = param_2, lVar8 != 0))) {
        System_Threading_SemaphoreSlim__RemoveAsyncWaiter(param_1,lVar8);
        if (*(int *)(DAT_0918a848 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_2 = param_2 + -1;
        System_Threading_ThreadPool__UnsafeQueueCustomWorkItem(lVar8,0,0);
      }
    }
    thunk_FUN_03f6a5cc();
    lVar8 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar9;
    thunk_FUN_03f6a5cc();
    if (((0 < iVar9) && (lVar8 != 0)) && (iVar7 == 0)) {
      lVar8 = *(long *)(param_1 + 0x28);
      thunk_FUN_03f6a5cc();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Threading_EventWaitHandle__Set(lVar8);
      iVar7 = 0;
    }
    if (local_4c[0] != '\0') {
      System_Threading_Monitor__Exit(*local_58,0);
    }
    return iVar7;
  }
  local_68 = CONCAT44(local_68._4_4_,param_2);
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
  thunk_FUN_03fc39d4(&DAT_0918a848);
  FUN_039afb80();
  thunk_FUN_03fc39d4(&DAT_0920fbf8);
  uVar6 = System_Threading_SemaphoreSlim__GetResourceString();
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_092217c0);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d8958);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

