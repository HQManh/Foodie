// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.AsyncOperationConfiguredSource$$Create
// address: 0x7dab6f0
// body: available
// range: 0x7dab6f0-0x7daba1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7daba1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource__Create
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,byte param_5,
               undefined2 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  local_48 = param_4;
  if ((DAT_09525f40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_091959b8);
    FUN_03f5c2a4(&DAT_09181948);
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bca18);
    FUN_03f5c2a4(&DAT_091f36b0);
    FUN_03f5c2a4(&DAT_09196d80);
    FUN_03f5c2a4(&DAT_091bdb50);
    DAT_09525f40 = 1;
  }
  local_58 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_48,0);
  uVar2 = local_48;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09181948 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__CreateFromCanceled(uVar2,param_6,0);
    return;
  }
  if (*(int *)(DAT_091959b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = FUN_05d7fc40(*(undefined8 *)(DAT_091959b8 + 0xb8),&local_58,DAT_091bca18);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_091959b8);
    Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource___ctor();
    local_58 = lVar4;
  }
  if (local_58 != 0) {
    *(long *)(local_58 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(local_58 + 0x18),param_1);
    if (local_58 != 0) {
      *(undefined8 *)(local_58 + 0x20) = param_3;
      thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x20),param_3);
      if (local_58 != 0) {
        *(undefined8 *)(local_58 + 0x28) = local_48;
        thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x28),0);
        if (local_58 != 0) {
          *(undefined1 *)(local_58 + 0x49) = 0;
          *(byte *)(local_58 + 0x48) = param_5 & 1;
          if (param_1 != 0) {
            UnityEngine_AsyncOperation__add_completed(param_1,*(undefined8 *)(local_58 + 0x78),0);
            if ((param_5 & 1) != 0) {
              if (*(int *)(DAT_09182348 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = System_Threading_CancellationToken__get_CanBeCanceled(&local_48,0);
              uVar2 = local_48;
              lVar4 = local_58;
              if ((uVar3 & 1) != 0) {
                if (*(int *)(DAT_09196d80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar6 = *(undefined8 **)(DAT_09196d80 + 0xb8);
                lVar7 = puVar6[1];
                if (lVar7 == 0) {
                  if (*(int *)(DAT_09196d80 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar6 = *(undefined8 **)(DAT_09196d80 + 0xb8);
                  }
                  uVar8 = *puVar6;
                  lVar7 = thunk_FUN_03f9944c(DAT_09174850);
                  FUN_070a8c30(lVar7,uVar8,DAT_091f36b0,0);
                  plVar5 = (long *)(*(long *)(DAT_09196d80 + 0xb8) + 8);
                  *plVar5 = lVar7;
                  thunk_FUN_03f5d7b8(plVar5,lVar7);
                }
                lVar1 = local_58;
                if (*(int *)(DAT_09182358 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                          (&local_70,uVar2,lVar7,lVar1,0);
                if (lVar4 == 0) goto LAB_07daba1c;
                *(undefined8 *)(lVar4 + 0x38) = uStack_68;
                *(undefined8 *)(lVar4 + 0x30) = local_70;
                *(undefined8 *)(lVar4 + 0x40) = local_60;
                thunk_FUN_03f5d7b8(lVar4 + 0x30,0);
              }
            }
            lVar4 = local_58;
            if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(param_2,lVar4,0);
            if (local_58 != 0) {
              *param_6 = *(undefined2 *)(local_58 + 0x60);
              return;
            }
          }
        }
      }
    }
  }
LAB_07daba1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

