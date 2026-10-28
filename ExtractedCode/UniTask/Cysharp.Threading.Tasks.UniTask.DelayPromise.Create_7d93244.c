// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DelayPromise$$Create
// address: 0x7d93244
// body: available
// range: 0x7d93244-0x7d93597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d93594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_DelayPromise__Create
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
               undefined2 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_48;
  
  local_58 = param_3;
  uStack_48 = param_1;
  if ((DAT_09525dd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09181948);
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09195908);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bc8f8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f35e0);
    FUN_03f5c2a4(&DAT_09196d10);
    FUN_03f5c2a4(&DAT_091bdc10);
    DAT_09525dd9 = 1;
  }
  local_60 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_58,0);
  uVar2 = local_58;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09181948 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__CreateFromCanceled(uVar2,param_5);
    return;
  }
  if (*(int *)(DAT_09195908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = FUN_05d7fc40(*(undefined8 *)(DAT_09195908 + 0xb8),&local_60,DAT_091bc8f8);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_09195908);
    System_Object___ctor(lVar5,0);
    local_60 = lVar5;
  }
  lVar5 = local_60;
  if (local_60 != 0) {
    *(undefined4 *)(local_60 + 0x20) = 0;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar10 = (double)System_TimeSpan__get_TotalSeconds(&uStack_48,0);
    *(float *)(lVar5 + 0x1c) = (float)dVar10;
    if (local_60 != 0) {
      *(undefined8 *)(local_60 + 0x28) = local_58;
      thunk_FUN_03f5d7b8((undefined8 *)(local_60 + 0x28),0);
      lVar5 = local_60;
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread();
      if ((uVar4 & 1) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = UnityEngine_Time__get_frameCount(0);
      }
      if ((lVar5 != 0) && (*(undefined4 *)(lVar5 + 0x18) = uVar3, local_60 != 0)) {
        *(byte *)(local_60 + 0x48) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Threading_CancellationToken__get_CanBeCanceled(&local_58,0);
          uVar2 = local_58;
          lVar5 = local_60;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_09196d10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar7 = *(undefined8 **)(DAT_09196d10 + 0xb8);
            lVar8 = puVar7[1];
            if (lVar8 == 0) {
              if (*(int *)(DAT_09196d10 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar7 = *(undefined8 **)(DAT_09196d10 + 0xb8);
              }
              uVar9 = *puVar7;
              lVar8 = thunk_FUN_03f9944c(DAT_09174850);
              FUN_070a8c30(lVar8,uVar9,DAT_091f35e0,0);
              plVar6 = (long *)(*(long *)(DAT_09196d10 + 0xb8) + 8);
              *plVar6 = lVar8;
              thunk_FUN_03f5d7b8(plVar6,lVar8);
            }
            lVar1 = local_60;
            if (*(int *)(DAT_09182358 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                      (&local_78,uVar2,lVar8,lVar1);
            if (lVar5 == 0) goto LAB_07d93594;
            *(undefined8 *)(lVar5 + 0x38) = uStack_70;
            *(undefined8 *)(lVar5 + 0x30) = local_78;
            *(undefined8 *)(lVar5 + 0x40) = local_68;
            thunk_FUN_03f5d7b8(lVar5 + 0x30,0);
          }
        }
        lVar5 = local_60;
        if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(param_2,lVar5);
        if (local_60 != 0) {
          *param_5 = *(undefined2 *)(local_60 + 0x60);
          return;
        }
      }
    }
  }
LAB_07d93594:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

