// rea decompile_all
// name: UniRx.ObservableWWW.<FetchText>d__21$$MoveNext
// address: 0x40aae08
// body: available
// range: 0x40aae08-0x40ab2af inclusive
// range: 0x40ab4bc-0x40ab4cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ab284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab28c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab29c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab2a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab2a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab2a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab2ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ab4cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040ab4bc) */

undefined8 UniRx_ObservableWWW_<FetchText>d__21__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  
  if ((DAT_09515e91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b280);
    FUN_03f5c2a4(&DAT_0917b2a8);
    FUN_03f5c2a4(&DAT_0918ce60);
    DAT_09515e91 = 1;
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
        if ((uVar2 & 1) != 0) goto LAB_040aafa4;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
        uVar9 = 2;
        goto LAB_040ab274;
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
        plVar8 = *(long **)(param_1 + 0x28);
        uVar9 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b2a8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040ab250;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b2a8,0);
LAB_040ab250:
        (*(code *)*puVar3)(uVar9,plVar8,puVar3[1]);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar9 = 1;
LAB_040ab274:
        *(undefined4 *)(param_1 + 0x10) = uVar9;
        return 1;
      }
    }
  }
LAB_040aafa4:
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
  if ((uVar2 & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = UnityEngine_WWW__get_progress(*(long *)(param_1 + 0x20),0);
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b2a8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_040ab044;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b2a8,0);
LAB_040ab044:
      (*(code *)*puVar3)(uVar9,plVar8,puVar3[1]);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = UnityEngine_WWW__get_error(*(long *)(param_1 + 0x20),0);
    uVar2 = System_String__IsNullOrEmpty(uVar4,0);
    plVar8 = *(long **)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x20);
    if ((uVar2 & 1) == 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_WWW__get_text(lVar6,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918ce60);
      UniRx_WWWErrorException___ctor(uVar5,lVar6,uVar4);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b280) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_040ab1d8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b280,1);
LAB_040ab1d8:
      (*(code *)*puVar3)(plVar8,uVar5,puVar3[1]);
    }
    else {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_WWW__get_text(lVar6,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b280) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_040ab16c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b280,0);
LAB_040ab16c:
      (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b280) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_040ab1fc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b280,2);
LAB_040ab1fc:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
    }
    UniRx_ObservableWWW_<FetchText>d__21__<>m__Finally1(param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
  }
  else {
    UniRx_ObservableWWW_<FetchText>d__21__<>m__Finally1(param_1);
  }
  return 0;
}

