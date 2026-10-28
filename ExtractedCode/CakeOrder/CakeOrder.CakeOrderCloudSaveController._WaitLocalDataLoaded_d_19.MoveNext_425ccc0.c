// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController.<WaitLocalDataLoaded>d__19$$MoveNext
// address: 0x425ccc0
// body: available
// range: 0x425ccc0-0x425ceb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425cea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425ceac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425ceb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderCloudSaveController_<WaitLocalDataLoaded>d__19__MoveNext(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_38;
  int iStack_34;
  
  if ((DAT_09516f5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2258);
    FUN_03f5c2a4(&DAT_091b9e08);
    FUN_03f5c2a4(&DAT_091b9d90);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516f5a = 1;
  }
  lVar9 = *(long *)(param_1 + 6);
  local_38 = 0;
  iStack_34 = 0;
  if (*param_1 != 0) goto LAB_0425cd70;
  iStack_34 = param_1[8];
  param_1[8] = 0;
  *param_1 = -1;
  local_38 = 0;
  do {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_34,0);
LAB_0425cd70:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = FUN_06076f48(*(long *)(lVar9 + 0x40),DAT_091b9e08);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = FUN_06076f48(*(long *)(lVar9 + 0x48),DAT_091b9d90);
      cVar2 = DAT_095162d8;
      if ((uVar5 & 1) != 0) {
        *param_1 = -2;
        if (cVar2 == '\0') {
          FUN_03f5c2a4(&DAT_091866a8);
          DAT_095162d8 = '\x01';
        }
        plVar8 = *(long **)(param_1 + 2);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 == 0) goto LAB_0425ce64;
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        break;
      }
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
    _local_38 = CONCAT44(iStack_34,uVar3);
    iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_38,0);
    iStack_34 = iVar4;
    uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_34,0);
    uVar1 = DAT_091c2258;
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      param_1[8] = iStack_34;
      FUN_042657b4(param_1 + 2,&iStack_34,param_1,uVar1);
      return;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_091866a8) {
      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
      goto LAB_0425ce84;
    }
  }
LAB_0425ce64:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_0425ce84:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}

