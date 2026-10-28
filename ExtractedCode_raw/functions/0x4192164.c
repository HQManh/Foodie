// rea decompile_all
// name: UniRx.Examples.Sample06_ConvertToCoroutine.<TestNewCustomYieldInstruction>d__2$$MoveNext
// address: 0x4192164
// body: available
// range: 0x4192164-0x419269f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419269c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
UniRx_Examples_Sample06_ConvertToCoroutine_<TestNewCustomYieldInstruction>d__2__MoveNext
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((DAT_095167ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09179158);
    FUN_03f5c2a4(&DAT_09178f78);
    FUN_03f5c2a4(&DAT_091b7df8);
    FUN_03f5c2a4(&DAT_091b7e00);
    FUN_03f5c2a4(&DAT_091b7e08);
    FUN_03f5c2a4(&DAT_091b7e10);
    FUN_03f5c2a4(&DAT_091d51a8);
    FUN_03f5c2a4(&DAT_091d52b8);
    FUN_03f5c2a4(&DAT_091d52d0);
    FUN_03f5c2a4(&DAT_091d52c0);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091d5520);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091ef650);
    FUN_03f5c2a4(&DAT_091ef658);
    FUN_03f5c2a4(&DAT_091940a8);
    FUN_03f5c2a4(&DAT_0921ce68);
    DAT_095167ab = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_TimeSpan__FromSeconds(0x3ff0000000000000,0);
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188b78);
      }
      uVar2 = UniRx_Observable__Timer(uVar2,0);
      uVar2 = FUN_04c48024(uVar2,DAT_091d52b8);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar6 = 1;
      uVar2 = 1;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_TimeSpan__FromSeconds(0x3ff0000000000000,0);
      if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a698);
      }
      uVar5 = UniRx_Scheduler__get_MainThreadIgnoreTimeScale(0);
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188b78);
      }
      uVar2 = UniRx_Observable__Timer(uVar2,uVar5,0);
      uVar2 = FUN_04c48024(uVar2,DAT_091d52b8);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar2 = 1;
      uVar6 = 2;
    }
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = UniRx_ObservableWWW__Get(DAT_0921ce68,0,0,0);
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188b78);
    }
    uVar2 = FUN_04c482d8(uVar2,0,DAT_091d52d0);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    *puVar8 = uVar2;
    thunk_FUN_03f5d7b8(puVar8,uVar2);
    *(undefined8 *)(param_1 + 0x18) = *puVar8;
    thunk_FUN_03f5d7b8();
    uVar2 = 1;
    uVar6 = 3;
  }
  else {
    if (iVar1 == 3) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar3 = FUN_05d3ec4c(*(long *)(param_1 + 0x28),DAT_091b7e00);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (plVar4 = *(long **)(*(long *)(param_1 + 0x28) + 0x40), plVar4 == (long *)0x0))
          goto LAB_0419269c;
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar5,0);
        }
        lVar7 = *(long *)(param_1 + 0x28);
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x39) != '\0') {
            uVar5 = *(undefined8 *)(lVar7 + 0x30);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__Log(uVar5,0);
          }
          if (*(int *)(DAT_091940a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar8 = *(undefined8 **)(DAT_091940a8 + 0xb8);
          lVar7 = puVar8[1];
          if (lVar7 == 0) {
            if (*(int *)(DAT_091940a8 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar8 = *(undefined8 **)(DAT_091940a8 + 0xb8);
            }
            uVar5 = *puVar8;
            lVar7 = thunk_FUN_03f9944c(DAT_09178f78);
            FUN_05324070(lVar7,uVar5,DAT_091ef650,0);
            plVar4 = (long *)(*(long *)(DAT_091940a8 + 0xb8) + 8);
            *plVar4 = lVar7;
            thunk_FUN_03f5d7b8(plVar4,lVar7);
          }
          uVar2 = FUN_04c4e270(uVar2,lVar7,0,0,DAT_091d5520);
          if (*(int *)(DAT_091940a8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091940a8);
          }
          puVar8 = *(undefined8 **)(DAT_091940a8 + 0xb8);
          lVar7 = puVar8[2];
          if (lVar7 == 0) {
            if (*(int *)(DAT_091940a8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091940a8);
              puVar8 = *(undefined8 **)(DAT_091940a8 + 0xb8);
            }
            uVar5 = *puVar8;
            lVar7 = thunk_FUN_03f9944c(DAT_09179158);
            FUN_05322d94(lVar7,uVar5,DAT_091ef658,0);
            plVar4 = (long *)(*(long *)(DAT_091940a8 + 0xb8) + 0x10);
            *plVar4 = lVar7;
            thunk_FUN_03f5d7b8(plVar4,lVar7);
          }
          if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = FUN_04c3d964(uVar2,lVar7,DAT_091d51a8);
          uVar2 = FUN_04c480d0(uVar2,DAT_091d52c0);
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          thunk_FUN_03f5d7b8();
          uVar2 = 1;
          uVar6 = 4;
          goto LAB_04192688;
        }
      }
LAB_0419269c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar1 != 4) {
      return 0;
    }
    uVar6 = 0xffffffff;
  }
LAB_04192688:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return uVar2;
}

