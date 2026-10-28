// rea decompile_all
// name: UniRx.ObservableWWW.<Fetch>d__20$$MoveNext
// address: 0x40a94b8
// body: available
// range: 0x40a94b8-0x40a9947 inclusive
// range: 0x40a9b50-0x40a9b63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a9920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a992c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a993c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a9b60 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040a9b50) */

undefined8 UniRx_ObservableWWW_<Fetch>d__20__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined4 uVar10;
  
  if ((DAT_09515e8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b298);
    FUN_03f5c2a4(&DAT_0917b2a8);
    FUN_03f5c2a4(&DAT_0918ce60);
    DAT_09515e8b = 1;
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
        if ((uVar2 & 1) != 0) goto LAB_040a9654;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
        uVar10 = 2;
        goto LAB_040a9910;
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
        plVar9 = *(long **)(param_1 + 0x28);
        uVar10 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b2a8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040a98ec;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b2a8,0);
LAB_040a98ec:
        (*(code *)*puVar3)(uVar10,plVar9,puVar3[1]);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar10 = 1;
LAB_040a9910:
        *(undefined4 *)(param_1 + 0x10) = uVar10;
        return 1;
      }
    }
  }
LAB_040a9654:
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
  if ((uVar2 & 1) == 0) {
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b2a8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040a96f4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b2a8,0);
LAB_040a96f4:
      (*(code *)*puVar3)(uVar10,plVar9,puVar3[1]);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = UnityEngine_WWW__get_error(*(long *)(param_1 + 0x20),0);
    uVar2 = System_String__IsNullOrEmpty(uVar4,0);
    plVar9 = *(long **)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x20);
    if ((uVar2 & 1) == 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_WWW__get_text(lVar6,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918ce60);
      UniRx_WWWErrorException___ctor(uVar5,lVar6,uVar4);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b298) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_040a9894;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b298,1);
LAB_040a9894:
      (*(code *)*puVar3)(plVar9,uVar5,puVar3[1]);
    }
    else {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b298) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040a9808;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b298,0);
LAB_040a9808:
      (*(code *)*puVar3)(plVar9,lVar6,puVar3[1]);
      plVar9 = *(long **)(param_1 + 0x30);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b298) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_040a9874;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b298,2);
LAB_040a9874:
      (*(code *)*puVar3)(plVar9,puVar3[1]);
    }
    UniRx_ObservableWWW_<Fetch>d__20__<>m__Finally1(param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
  }
  else {
    UniRx_ObservableWWW_<Fetch>d__20__<>m__Finally1(param_1);
  }
  return 0;
}

