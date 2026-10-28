// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController.<LoadCloudDataIntoLocal>d__20$$MoveNext
// address: 0x425bf7c
// body: available
// range: 0x425bf7c-0x425c137 inclusive
// range: 0x425c154-0x425c293 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425c128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c12c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425c290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderCloudSaveController_<LoadCloudDataIntoLocal>d__20__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_09516f57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2248);
    FUN_03f5c2a4(&DAT_091941b8);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091e65c8);
    FUN_03f5c2a4(&DAT_0918ea78);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516f57 = 1;
  }
  local_34 = 0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_34 = param_1[0xc];
    param_1[0xc] = 0;
    *param_1 = -1;
    goto LAB_0425c190;
  }
  lVar8 = *(long *)(param_1 + 6);
  lVar2 = thunk_FUN_03f9944c(DAT_0918ea78);
  System_Object___ctor(lVar2,0);
  plVar7 = (long *)(param_1 + 10);
  *plVar7 = lVar2;
  thunk_FUN_03f5d7b8(plVar7,lVar2);
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*plVar7 + 0x10) = *(undefined8 *)(param_1 + 6);
  thunk_FUN_03f5d7b8();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = param_1[8];
  *(undefined1 *)(*plVar7 + 0x18) = 0;
  if ((char)iVar1 == '\0') {
    uVar3 = CakeOrder_CakeOrderCloudSaveController_<>c__DisplayClass20_0__<LoadCloudDataIntoLocal>g__ApplyCloudData_0
                      ();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar3,uVar3);
    }
    UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar3,0);
  }
  else {
    lVar2 = *(long *)(DAT_091b4b80 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar8 = *plVar7;
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_091941b8);
    SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor(uVar3,lVar8,DAT_091e65c8,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_CakeOrderSceneLoader__LoadHome(lVar2,uVar3,0,0,0);
  }
  while( true ) {
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar2 + 0x18) != '\0') break;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = Cysharp_Threading_Tasks_UniTask__Yield(0);
    local_34 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_38,0);
    uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_34,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      uVar3 = DAT_091c2248;
      param_1[0xc] = local_34;
      FUN_0426559c(param_1 + 2,&local_34,param_1,uVar3);
      return;
    }
LAB_0425c190:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_34,0);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(param_1 + 10,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0425c270;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0425c270:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  return;
}

