// rea decompile_all
// name: System.Threading.SemaphoreSlim$$WaitAsync
// address: 0x761f1bc
// body: available
// range: 0x761f1bc-0x761f48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761f2a0 to 0x4d7c4c0 FUN_04d7c4c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x761f480 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761f488 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761f48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761f484) */

undefined8 System_Threading_SemaphoreSlim__WaitAsync(long param_1,int param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 *local_48;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_0952211f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918a848);
    FUN_03f5c2a4(&DAT_091dad88);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_0952211f = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  System_Threading_SemaphoreSlim__CheckDispose(param_1);
  if (param_2 < -1) {
    local_58 = CONCAT44(local_58._4_4_,param_2);
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_58);
    thunk_FUN_03fc39d4(&DAT_0918a848);
    FUN_039afb80();
    thunk_FUN_03fc39d4(&DAT_092100f0);
    uVar2 = System_Threading_SemaphoreSlim__GetResourceString();
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092241d8);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar6,uVar2,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8968);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x20), thunk_FUN_03f6a5cc(), 1 < iVar1)) {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = FUN_04d7c4c0(param_3,DAT_091dad88);
    return uVar6;
  }
  local_38 = *(undefined8 *)(param_1 + 0x20);
  pcStack_50 = local_3c;
  local_3c[0] = '\0';
  local_58 = 0;
  local_48 = &local_38;
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  iVar1 = *(int *)(param_1 + 0x10);
  thunk_FUN_03f6a5cc();
  if (iVar1 < 1) {
    if (param_2 == 0) {
      if (*(int *)(DAT_0918a848 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = *(undefined8 *)(*(long *)(DAT_0918a848 + 0xb8) + 8);
    }
    else {
      uVar6 = System_Threading_SemaphoreSlim__CreateAndAddAsyncWaiter(param_1);
      if (param_2 == -1) {
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_3 == 0) goto LAB_0761f3bc;
      }
      uVar6 = System_Threading_SemaphoreSlim__WaitUntilCountOrTimeoutAsync
                        (param_1,uVar6,param_2,param_3);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    thunk_FUN_03f6a5cc();
    thunk_FUN_03f6a5cc();
    lVar5 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    thunk_FUN_03f6a5cc();
    if ((lVar5 != 0) && (iVar1 = *(int *)(param_1 + 0x10), thunk_FUN_03f6a5cc(), iVar1 == 0)) {
      lVar5 = *(long *)(param_1 + 0x28);
      thunk_FUN_03f6a5cc();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Threading_EventWaitHandle__Reset(lVar5);
    }
    if (*(int *)(DAT_0918a848 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = **(undefined8 **)(DAT_0918a848 + 0xb8);
  }
LAB_0761f3bc:
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(*local_48,0);
  }
  return uVar6;
}

