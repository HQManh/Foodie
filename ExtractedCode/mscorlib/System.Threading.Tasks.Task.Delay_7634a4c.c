// rea decompile_all
// name: System.Threading.Tasks.Task$$Delay
// address: 0x7634a4c
// body: available
// range: 0x7634a4c-0x7634df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7634d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7634df0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_Tasks_Task__Delay(int param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_0952220c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09194eb8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918be10);
    FUN_03f5c2a4(&DAT_0918be00);
    FUN_03f5c2a4(&DAT_091f0bf0);
    FUN_03f5c2a4(&DAT_091f0bf8);
    FUN_03f5c2a4(&DAT_09194ea8);
    DAT_0952220c = 1;
  }
  if (param_1 < -1) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar9 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921f688);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092102b0);
    System_ArgumentOutOfRangeException___ctor(uVar9,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091dae98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar5);
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar9 = local_38;
  if ((uVar1 & 1) == 0) {
    if (param_1 == 0) {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095175b2 == '\0') {
        FUN_03f5c2a4(&DAT_0918b8c8);
        DAT_095175b2 = '\x01';
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return *(long *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
    }
    lVar2 = thunk_FUN_03f9944c(DAT_09194eb8);
    System_Threading_Tasks_Task_DelayPromise___ctor(lVar2,uVar9);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Threading_CancellationToken__get_CanBeCanceled(&local_38,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09194ea8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = *(undefined8 **)(DAT_09194ea8 + 0xb8);
      lVar8 = puVar7[1];
      if (lVar8 == 0) {
        if (*(int *)(DAT_09194ea8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar7 = *(undefined8 **)(DAT_09194ea8 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar8 = thunk_FUN_03f9944c(DAT_09174850);
        FUN_070a8c30(lVar8,uVar9,DAT_091f0bf0,0);
        plVar3 = (long *)(*(long *)(DAT_09194ea8 + 0xb8) + 8);
        *plVar3 = lVar8;
        thunk_FUN_03f5d7b8(plVar3,lVar8);
      }
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__InternalRegisterWithoutEC
                (&local_58,&local_38,lVar8,lVar2,0);
      if (lVar2 == 0) goto LAB_07634d24;
      *(undefined8 *)(lVar2 + 0x68) = uStack_50;
      *(undefined8 *)(lVar2 + 0x60) = local_58;
      *(undefined8 *)(lVar2 + 0x70) = local_48;
      thunk_FUN_03f5d7b8(lVar2 + 0x60,0);
    }
    if (param_1 != -1) {
      if (*(int *)(DAT_09194ea8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = *(undefined8 **)(DAT_09194ea8 + 0xb8);
      lVar8 = puVar7[2];
      if (lVar8 == 0) {
        if (*(int *)(DAT_09194ea8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar7 = *(undefined8 **)(DAT_09194ea8 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar8 = thunk_FUN_03f9944c(DAT_0918be10);
        System_Threading_TimerCallback___ctor(lVar8,uVar9,DAT_091f0bf8);
        plVar3 = (long *)(*(long *)(DAT_09194ea8 + 0xb8) + 0x10);
        *plVar3 = lVar8;
        thunk_FUN_03f5d7b8(plVar3,lVar8);
      }
      lVar4 = thunk_FUN_03f9944c(DAT_0918be00);
      System_MarshalByRefObject___ctor(lVar4,0);
      System_Threading_Timer__Init(lVar4,lVar8,lVar2,param_1,0xffffffffffffffff);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0x78);
        *plVar3 = lVar4;
        thunk_FUN_03f5d7b8(plVar3,lVar4);
        if (*plVar3 != 0) {
          return lVar2;
        }
      }
LAB_07634d24:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_Threading_Tasks_Task__FromCancellation(uVar9);
  }
  return lVar2;
}

