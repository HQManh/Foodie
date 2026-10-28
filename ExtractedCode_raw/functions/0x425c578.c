// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController.<LoadLocalDataOnSetUp>d__21$$MoveNext
// address: 0x425c578
// body: available
// range: 0x425c578-0x425c807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425c7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderCloudSaveController_<LoadLocalDataOnSetUp>d__21__MoveNext(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_28;
  
  if ((DAT_09516f58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2250);
    FUN_03f5c2a4(&DAT_091b9dd0);
    FUN_03f5c2a4(&DAT_091b9d60);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516f58 = 1;
  }
  lVar9 = *(long *)(param_1 + 6);
  local_28 = 0;
  local_28._0_4_ = 0;
  if (*param_1 == 0) {
    local_28._4_4_ = param_1[8];
    param_1[8] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_28._4_4_ = param_1[8];
      param_1[8] = 0;
      *param_1 = -1;
      goto LAB_0425c6cc;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
    local_28 = CONCAT44(local_28._4_4_,uVar3);
    iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_28,0);
    local_28._4_4_ = iVar4;
    uVar6 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted((long)&local_28 + 4,0);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      uVar1 = DAT_091c2250;
      param_1[8] = local_28._4_4_;
      FUN_042656a8(param_1 + 2,(long)&local_28 + 4,param_1,uVar1);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult((long)&local_28 + 4,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_0607731c(*(long *)(lVar9 + 0x40),0,DAT_091b9dd0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
  local_28 = CONCAT44(local_28._4_4_,uVar3);
  iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_28,0);
  local_28._4_4_ = iVar4;
  uVar6 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted((long)&local_28 + 4,0);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    uVar1 = DAT_091c2250;
    param_1[8] = local_28._4_4_;
    FUN_042656a8(param_1 + 2,(long)&local_28 + 4,param_1,uVar1);
    return;
  }
LAB_0425c6cc:
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult((long)&local_28 + 4,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_0607731c(*(long *)(lVar9 + 0x48),0,DAT_091b9d60);
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0425c7dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_0425c7dc:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
  return;
}

