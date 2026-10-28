// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<TryEnsureLoaded>d__76$$MoveNext
// address: 0x421d1e4
// body: available
// range: 0x421d1e4-0x421d37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421d374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421d378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421d37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader_<TryEnsureLoaded>d__76__MoveNext(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_38;
  
  if ((DAT_09516cfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198498);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919f5e0);
    DAT_09516cfe = 1;
  }
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0421d280:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 10);
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0;
      goto LAB_0421d2b8;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar3 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06fd8648(*(long *)(lVar3 + 0xb0),*(undefined8 *)(param_1 + 8),DAT_0919f5e0);
    if ((uVar2 & 1) == 0) {
      lVar3 = AnhPD_FoodOrder_CustomerLoader__LoadCustomer
                        (lVar3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar3,0);
      uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d6ab8(param_1 + 2,&local_38,param_1,DAT_09198498);
        return;
      }
      goto LAB_0421d280;
    }
  }
  uVar4 = 1;
LAB_0421d2b8:
  iVar1 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar4,DAT_091985d0);
  return;
}

