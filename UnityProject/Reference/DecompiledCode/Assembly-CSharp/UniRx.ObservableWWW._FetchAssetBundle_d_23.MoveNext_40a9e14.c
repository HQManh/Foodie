// rea decompile_all
// name: UniRx.ObservableWWW.<FetchAssetBundle>d__23$$MoveNext
// address: 0x40a9e14
// body: available
// range: 0x40a9e14-0x40aa2af inclusive
// range: 0x40aa4b4-0x40aa4c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40aa288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa28c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa29c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa2a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa2a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa2a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa2ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aa4c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040aa4b4) */

undefined8 UniRx_ObservableWWW_<FetchAssetBundle>d__23__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  
  if ((DAT_09515e8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b250);
    FUN_03f5c2a4(&DAT_0917b2a8);
    FUN_03f5c2a4(&DAT_0918ce60);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09515e8d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (*(long *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = UnityEngine_WWW__get_isDone(*(long *)(param_1 + 0x20),0);
        if ((uVar2 & 1) != 0) goto LAB_040a9fb8;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
        uVar8 = 2;
        goto LAB_040aa278;
      }
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_WWW__get_isDone(*(long *)(param_1 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar7 = *(long **)(param_1 + 0x28);
        uVar8 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917b2a8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040aa254;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b2a8,0);
LAB_040aa254:
        (*(code *)*puVar3)(uVar8,plVar7,puVar3[1]);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar8 = 1;
LAB_040aa278:
        *(undefined4 *)(param_1 + 0x10) = uVar8;
        return 1;
      }
    }
  }
LAB_040a9fb8:
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
  if ((uVar2 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b2a8) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040aa058;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b2a8,0);
LAB_040aa058:
      (*(code *)*puVar3)(uVar8,plVar7,puVar3[1]);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = UnityEngine_WWW__get_error(*(long *)(param_1 + 0x20),0);
    uVar2 = System_String__IsNullOrEmpty(uVar4,0);
    plVar7 = *(long **)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x20);
    if ((uVar2 & 1) == 0) {
      uVar4 = thunk_FUN_03f9944c(DAT_0918ce60);
      UniRx_WWWErrorException___ctor(uVar4,lVar5,DAT_091f5700);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b250) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_040aa1e0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b250,1);
LAB_040aa1e0:
      (*(code *)*puVar3)(plVar7,uVar4,puVar3[1]);
    }
    else {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_WWW__get_assetBundle(lVar5,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b250) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040aa174;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b250,0);
LAB_040aa174:
      (*(code *)*puVar3)(plVar7,uVar4,puVar3[1]);
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b250) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_040aa204;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b250,2);
LAB_040aa204:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
    }
    UniRx_ObservableWWW_<FetchAssetBundle>d__23__<>m__Finally1(param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
  }
  else {
    UniRx_ObservableWWW_<FetchAssetBundle>d__23__<>m__Finally1(param_1);
  }
  return 0;
}

