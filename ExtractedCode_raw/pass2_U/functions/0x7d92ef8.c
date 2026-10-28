// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DelayRealtimePromise$$Create
// address: 0x7d92ef8
// body: available
// range: 0x7d92ef8-0x7d93243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d93240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_DelayRealtimePromise__Create
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
               undefined2 *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  local_48 = param_3;
  if ((DAT_09525def & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09181948);
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09195910);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bc910);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f35f0);
    FUN_03f5c2a4(&DAT_09196d18);
    FUN_03f5c2a4(&DAT_091bdb50);
    FUN_03f5c2a4(&DAT_0918cad8);
    DAT_09525def = 1;
  }
  local_58 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_48,0);
  uVar4 = local_48;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09181948 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__CreateFromCanceled(uVar4,param_5);
    return;
  }
  if (*(int *)(DAT_09195910 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_05d7fc40(*(undefined8 *)(DAT_09195910 + 0xb8),&local_58,DAT_091bc910);
  if ((uVar2 & 1) == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_09195910);
    System_Object___ctor(lVar3,0);
    local_58 = lVar3;
  }
  lVar3 = local_58;
  if (*(int *)(DAT_0918cad8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Cysharp_Threading_Tasks_Internal_ValueStopwatch__StartNew(0);
  lVar7 = local_58;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    if ((lVar7 != 0) && (*(undefined8 *)(lVar7 + 0x18) = param_1, local_58 != 0)) {
      *(undefined8 *)(local_58 + 0x28) = local_48;
      thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x28),0);
      if (local_58 != 0) {
        *(byte *)(local_58 + 0x48) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Threading_CancellationToken__get_CanBeCanceled(&local_48,0);
          uVar4 = local_48;
          lVar3 = local_58;
          if ((uVar2 & 1) != 0) {
            if (*(int *)(DAT_09196d18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_09196d18 + 0xb8);
            lVar7 = puVar6[1];
            if (lVar7 == 0) {
              if (*(int *)(DAT_09196d18 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_09196d18 + 0xb8);
              }
              uVar8 = *puVar6;
              lVar7 = thunk_FUN_03f9944c(DAT_09174850);
              FUN_070a8c30(lVar7,uVar8,DAT_091f35f0,0);
              plVar5 = (long *)(*(long *)(DAT_09196d18 + 0xb8) + 8);
              *plVar5 = lVar7;
              thunk_FUN_03f5d7b8(plVar5,lVar7);
            }
            lVar1 = local_58;
            if (*(int *)(DAT_09182358 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                      (&local_70,uVar4,lVar7,lVar1);
            if (lVar3 == 0) goto LAB_07d93240;
            *(undefined8 *)(lVar3 + 0x38) = uStack_68;
            *(undefined8 *)(lVar3 + 0x30) = local_70;
            *(undefined8 *)(lVar3 + 0x40) = local_60;
            thunk_FUN_03f5d7b8(lVar3 + 0x30,0);
          }
        }
        lVar3 = local_58;
        if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(param_2,lVar3);
        if (local_58 != 0) {
          *param_5 = *(undefined2 *)(local_58 + 0x60);
          return;
        }
      }
    }
  }
LAB_07d93240:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

