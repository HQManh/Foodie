// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions.<Timeout>d__44$$MoveNext
// address: 0x7da67f0
// body: available
// range: 0x7da67f0-0x7da6c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da6c4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da6c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da6c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da6c58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da6c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskExtensions_<Timeout>d__44__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined4 local_98;
  long *local_90;
  ulong uStack_88;
  ulong local_80;
  long *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined1 local_50 [16];
  
  if ((DAT_09525ec0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d68);
    FUN_03f5c2a4(&DAT_0919a520);
    FUN_03f5c2a4(&DAT_0919a528);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_091bdd68);
    FUN_03f5c2a4(&DAT_091ddb78);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525ec0 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar12 = ZEXT816(0);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0x16);
    uStack_68 = *(ulong *)(param_1 + 0x14);
    local_70 = *(long **)(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_09182368);
    System_Threading_CancellationTokenSource___ctor(uVar3,0);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x10,uVar3);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = param_1[8];
    iVar2 = param_1[9];
    uVar11 = *(undefined8 *)(param_1 + 6);
    uVar3 = System_Threading_CancellationTokenSource__get_Token(*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__Delay(uVar11,iVar1,iVar2,uVar3,0);
    auVar12 = Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow(local_50);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar13 = Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow(param_1 + 10);
    FUN_04e23d3c(&local_c0,auVar13._0_8_,auVar13._8_8_,auVar12._0_8_,auVar12._8_8_,DAT_091ddb78);
    local_80 = local_b0;
    uStack_88 = uStack_b8;
    uStack_b8 = 0;
    local_b0 = 0;
    local_90 = local_c0;
    local_c0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdd68 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_b8 = uStack_88;
    local_c0 = local_90;
    local_b0 = local_80;
    thunk_FUN_03f5d7b8(&local_c0,0);
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    local_60 = local_b0;
    uVar4 = FUN_06b7f8d0(&local_70,DAT_0919a528);
    auVar12 = local_50;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(ulong *)(param_1 + 0x14) = uStack_68;
      *(long **)(param_1 + 0x12) = local_70;
      *(ulong *)(param_1 + 0x16) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_049ae484(param_1 + 2,&local_70,param_1,DAT_091c1d68);
      return;
    }
  }
  plVar10 = local_70;
  uVar4 = uStack_68;
  if (local_70 != (long *)0x0) {
    uVar4 = local_60 & 0xffff;
    lVar5 = *(long *)(DAT_0919a520 + 0x20);
    local_50 = auVar12;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07da6ac4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,0);
LAB_07da6ac4:
    uVar4 = (*(code *)*puVar6)(plVar10,uVar4,puVar6[1]);
    auVar12 = local_50;
  }
  local_50 = auVar12;
  if ((int)uVar4 == 1) {
    if (*(long *)(param_1 + 0xe) != 0) {
      System_Threading_CancellationTokenSource__Cancel(*(long *)(param_1 + 0xe),0);
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Threading_CancellationTokenSource__Dispose(*(long *)(param_1 + 0xe),0);
    }
    lVar5 = thunk_FUN_03fc39d4(&DAT_0918bd60);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeSpan__ToString(param_1 + 6,0);
    uVar11 = thunk_FUN_03fc39d4(&DAT_09201b70);
    uVar3 = System_String__Concat(uVar11,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_0918bdf8);
    uVar11 = thunk_FUN_03f9944c();
    System_TimeoutException___ctor(uVar11,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091f1f38);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar3);
  }
  plVar10 = (long *)(param_1 + 0x10);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Threading_CancellationTokenSource__Cancel(*plVar10,0);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Threading_CancellationTokenSource__Dispose(*plVar10,0);
  if ((uVar4 >> 0x20 & 1) != 0) {
    Cysharp_Threading_Tasks_Internal_Error__ThrowOperationCanceledException(0);
  }
  *param_1 = -2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  thunk_FUN_03f5d7b8(plVar10,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07da6ba8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_07da6ba8:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

