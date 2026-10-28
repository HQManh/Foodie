// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WaitUntilPromise$$Create
// address: 0x7d94588
// body: available
// range: 0x7d94588-0x7d94877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d94874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_WaitUntilPromise__Create
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
               undefined2 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  local_48 = param_3;
  if ((DAT_09525dfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09181948);
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bc970);
    FUN_03f5c2a4(&DAT_091f3630);
    FUN_03f5c2a4(&DAT_09196d38);
    FUN_03f5c2a4(&DAT_091bdc10);
    FUN_03f5c2a4(&DAT_09195948);
    DAT_09525dfe = 1;
  }
  local_50 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_48,0);
  uVar2 = local_48;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09181948 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__CreateFromCanceled(uVar2,param_5);
    return;
  }
  if (*(int *)(DAT_09195948 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = FUN_05d7fc40(*(undefined8 *)(DAT_09195948 + 0xb8),&local_50,DAT_091bc970);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_09195948);
    System_Object___ctor(lVar4,0);
    local_50 = lVar4;
  }
  if (local_50 != 0) {
    *(undefined8 *)(local_50 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(local_50 + 0x18),param_1);
    if (local_50 != 0) {
      *(undefined8 *)(local_50 + 0x20) = local_48;
      thunk_FUN_03f5d7b8((undefined8 *)(local_50 + 0x20),0);
      if (local_50 != 0) {
        *(byte *)(local_50 + 0x40) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Threading_CancellationToken__get_CanBeCanceled(&local_48,0);
          uVar2 = local_48;
          lVar4 = local_50;
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_09196d38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_09196d38 + 0xb8);
            lVar7 = puVar6[1];
            if (lVar7 == 0) {
              if (*(int *)(DAT_09196d38 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_09196d38 + 0xb8);
              }
              uVar8 = *puVar6;
              lVar7 = thunk_FUN_03f9944c(DAT_09174850);
              FUN_070a8c30(lVar7,uVar8,DAT_091f3630,0);
              plVar5 = (long *)(*(long *)(DAT_09196d38 + 0xb8) + 8);
              *plVar5 = lVar7;
              thunk_FUN_03f5d7b8(plVar5,lVar7);
            }
            lVar1 = local_50;
            if (*(int *)(DAT_09182358 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                      (&local_68,uVar2,lVar7,lVar1);
            if (lVar4 == 0) goto LAB_07d94874;
            *(undefined8 *)(lVar4 + 0x30) = uStack_60;
            *(undefined8 *)(lVar4 + 0x28) = local_68;
            *(undefined8 *)(lVar4 + 0x38) = local_58;
            thunk_FUN_03f5d7b8(lVar4 + 0x28,0);
          }
        }
        lVar4 = local_50;
        if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(param_2,lVar4);
        if (local_50 != 0) {
          *param_5 = *(undefined2 *)(local_50 + 0x58);
          return;
        }
      }
    }
  }
LAB_07d94874:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

