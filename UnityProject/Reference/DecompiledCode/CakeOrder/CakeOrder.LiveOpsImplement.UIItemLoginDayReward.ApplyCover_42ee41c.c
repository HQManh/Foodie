// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$ApplyCover
// address: 0x42ee41c
// body: available
// range: 0x42ee41c-0x42ee643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ee580 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ee63c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ee640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__ApplyCover
               (long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09517496 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517496 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  plVar4 = (long *)(param_1 + 0x90);
  if (*plVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*plVar4,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    thunk_FUN_03f5d7b8(plVar4,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_042ee640;
    UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x80),0,0);
  }
  if ((param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 != 0) {
        uVar3 = 1;
        goto LAB_042ee628;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x78);
      if (plVar4 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x178);
        uVar3 = *(undefined8 *)(*plVar4 + 0x180);
        goto LAB_042ee5f8;
      }
    }
  }
  else {
    if ((param_3 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar1 & 1) == 0) {
        lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
        if (lVar2 == 0) goto LAB_042ee640;
        uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
        if ((uVar1 & 1) != 0) {
          uVar3 = CakeOrder_LiveOpsImplement_UIItemLoginDayReward__IERevealCover(param_1);
          uVar3 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
          *(undefined8 *)(param_1 + 0x90) = uVar3;
          thunk_FUN_03f5d7b8(plVar4);
          return;
        }
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 != 0) {
        uVar3 = 0;
LAB_042ee628:
        UnityEngine_GameObject__SetActive(lVar2,uVar3,0);
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x78);
      if (plVar4 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x1a8);
        uVar3 = *(undefined8 *)(*plVar4 + 0x1b0);
LAB_042ee5f8:
                    /* WARNING: Could not recover jumptable at 0x042ee608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar4,uVar3);
        return;
      }
    }
  }
LAB_042ee640:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

