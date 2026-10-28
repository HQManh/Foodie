// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.<RunOnThreadPool>d__83$$MoveNext
// address: 0x7d9d0b8
// body: available
// range: 0x7d9d0b8-0x7d9d423 inclusive
// range: 0x7d9d558-0x7d9d56b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9d414 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9d418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9d41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9d420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_<RunOnThreadPool>d__83__MoveNext(int *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int local_28;
  undefined1 local_24 [4];
  
  if ((DAT_09525e44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f50);
    FUN_03f5c2a4(&DAT_091c22b0);
    FUN_03f5c2a4(&DAT_09194d50);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e44 = 1;
  }
  lVar3 = DAT_09194d50;
  local_24[0] = 0;
  local_28 = 0;
  if (*param_1 == 0) {
    local_24[0] = (undefined1)param_1[0xe];
    *(undefined1 *)(param_1 + 0xe) = 0;
    iVar1 = *(int *)(lVar3 + 0xe4);
    *param_1 = -1;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
    if ((char)param_1[8] != '\0') {
      piVar7 = param_1 + 0x10;
      piVar7[0] = 0;
      piVar7[1] = 0;
      thunk_FUN_03f5d7b8(piVar7,0);
      lVar3 = *(long *)(param_1 + 10);
      param_1[0x12] = 0;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_1 + 0xc),
                   *(undefined8 *)(lVar3 + 0x28));
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_28 = 8;
        *param_1 = 1;
        uVar5 = DAT_091c22b0;
        param_1[0x13] = 8;
        FUN_049b3e88(param_1 + 2,&local_28,param_1,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(param_1 + 10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_1 + 0xc),
               *(undefined8 *)(lVar3 + 0x28));
  }
  else {
    if (*param_1 != 1) {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_24[0] = 0;
      if (*(int *)(DAT_09194d50 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_049b09ac(param_1 + 2,local_24,param_1,DAT_091c1f50);
      return;
    }
    local_28 = param_1[0x13];
    param_1[0x13] = 0;
    piVar7 = param_1 + 0x10;
    plVar8 = *(long **)piVar7;
    *param_1 = -1;
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
          DAT_091842a0)) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091f1ef8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(plVar8,uVar5);
      }
      lVar3 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar8,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar3,0);
    }
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091866a8) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_07d9d3e4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_07d9d3e4:
                    /* WARNING: Could not recover jumptable at 0x07d9d3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar8,puVar4[1]);
  return;
}

