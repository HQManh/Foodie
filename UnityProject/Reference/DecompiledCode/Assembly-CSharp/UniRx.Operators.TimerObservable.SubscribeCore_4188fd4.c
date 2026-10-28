// rea decompile_all
// name: UniRx.Operators.TimerObservable$$SubscribeCore
// address: 0x4188fd4
// body: available
// range: 0x4188fd4-0x41896e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4189530 to 0x409d474 UniRx.Scheduler$$Schedule (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41896e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UniRx_Operators_TimerObservable__SubscribeCore
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((DAT_09516756 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091743a8);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09186560);
    FUN_03f5c2a4(&DAT_09186558);
    FUN_03f5c2a4(&DAT_091b6c78);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091b6c80);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_0918a8d0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f0e70);
    FUN_03f5c2a4(&DAT_09195108);
    FUN_03f5c2a4(&DAT_091f0e58);
    FUN_03f5c2a4(&DAT_091950e8);
    FUN_03f5c2a4(&DAT_091950f0);
    FUN_03f5c2a4(&DAT_091f0e60);
    FUN_03f5c2a4(&DAT_091950f8);
    FUN_03f5c2a4(&DAT_091f0e68);
    FUN_03f5c2a4(&DAT_09195100);
    DAT_09516756 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091950e8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    uVar2 = thunk_FUN_03f9944c(DAT_09195108);
    UniRx_Operators_TimerObservable_Timer___ctor(uVar2,param_2,param_3);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),uVar2);
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar2 = FUN_05c38210(param_1 + 0x30,DAT_091b7518);
    }
    else {
      auVar13 = FUN_05c2cb04((char *)(param_1 + 0x18),DAT_091b6c80);
      plVar9 = *(long **)(param_1 + 0x50);
      if (plVar9 == (long *)0x0) goto LAB_041896e4;
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186558) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04189204;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186558,0);
LAB_04189204:
      auVar14 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeOffset__op_Subtraction
                        (auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,0);
    }
    pcVar11 = (char *)(param_1 + 0x40);
    if (*pcVar11 == '\0') {
      plVar9 = *(long **)(param_1 + 0x50);
      if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UniRx_Scheduler__Normalize(uVar2,0);
      uVar12 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar12,lVar1,DAT_091f0e58,0);
      if (plVar9 != (long *)0x0) {
        lVar1 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09186558) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_04189648;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186558,2);
LAB_04189648:
        UNRECOVERED_JUMPTABLE = (code *)*puVar3;
        uVar8 = puVar3[1];
LAB_04189678:
                    /* WARNING: Could not recover jumptable at 0x0418968c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE)(plVar9,uVar2,uVar12,uVar8);
        return lVar1;
      }
    }
    else {
      lVar5 = thunk_FUN_03f9944c(DAT_091950f0);
      System_Object___ctor(lVar5,0);
      if (lVar5 != 0) {
        plVar10 = (long *)(lVar5 + 0x18);
        *plVar10 = lVar1;
        thunk_FUN_03f5d7b8(plVar10,lVar1);
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        lVar4 = thunk_FUN_03f99350(uVar12,DAT_09186560);
        lVar1 = DAT_09186560;
        plVar9 = (long *)(lVar5 + 0x10);
        *plVar9 = lVar4;
        uVar12 = thunk_FUN_03f99350(uVar12,lVar1);
        thunk_FUN_03f5d7b8(plVar9,uVar12);
        if (*plVar9 == 0) {
          lVar1 = thunk_FUN_03f9944c(DAT_09195100);
          System_Object___ctor(lVar1,0);
          if (lVar1 != 0) {
            *(long *)(lVar1 + 0x18) = lVar5;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar5);
            uVar12 = FUN_05c38210(pcVar11,DAT_091b7518);
            if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918a698);
            }
            uVar12 = UniRx_Scheduler__Normalize(uVar12,0);
            *(undefined8 *)(lVar1 + 0x10) = uVar12;
            uVar8 = *(undefined8 *)(param_1 + 0x50);
            uVar2 = UniRx_Scheduler__Normalize(uVar2,0);
            uVar12 = thunk_FUN_03f9944c(DAT_091743a8);
            FUN_070a8c30(uVar12,lVar1,DAT_091f0e68,0);
            lVar1 = UniRx_Scheduler__Schedule(uVar8,uVar2,uVar12,0);
            return lVar1;
          }
        }
        else {
          uVar12 = FUN_05c38210(pcVar11,DAT_091b7518);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          uVar6 = System_TimeSpan__op_Equality(uVar2,uVar12,0);
          if ((uVar6 & 1) == 0) {
            lVar1 = thunk_FUN_03f9944c(DAT_091950f8);
            System_Object___ctor(lVar1,0);
            if (lVar1 != 0) {
              *(long *)(lVar1 + 0x18) = lVar5;
              thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar5);
              lVar5 = thunk_FUN_03f9944c(DAT_0918a8d0);
              UniRx_SerialDisposable___ctor(lVar5,0);
              plVar10 = (long *)(lVar1 + 0x10);
              *plVar10 = lVar5;
              thunk_FUN_03f5d7b8(plVar10,lVar5);
              lVar5 = *plVar10;
              plVar9 = *(long **)(param_1 + 0x50);
              if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UniRx_Scheduler__Normalize(uVar2,0);
              uVar12 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar12,lVar1,DAT_091f0e60,0);
              if (plVar9 != (long *)0x0) {
                lVar1 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == DAT_09186558) {
                      puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                      goto LAB_041896a0;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186558,2);
LAB_041896a0:
                uVar2 = (*(code *)*puVar3)(plVar9,uVar2,uVar12,puVar3[1]);
                if (lVar5 != 0) {
                  UniRx_SerialDisposable__set_Disposable(lVar5,uVar2,0);
                  return *plVar10;
                }
              }
            }
          }
          else {
            plVar9 = (long *)*plVar9;
            if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UniRx_Scheduler__Normalize(uVar2,0);
            if (*plVar10 != 0) {
              uVar8 = *(undefined8 *)(*plVar10 + 0x10);
              uVar12 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar12,uVar8,DAT_091f0e70,0);
              if (plVar9 != (long *)0x0) {
                lVar1 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == DAT_09186560) {
                      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_04189668;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186560,0);
LAB_04189668:
                UNRECOVERED_JUMPTABLE = (code *)*puVar3;
                uVar8 = puVar3[1];
                goto LAB_04189678;
              }
            }
          }
        }
      }
    }
  }
LAB_041896e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

