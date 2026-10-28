// rea decompile_all
// name: DG.Tweening.DOTweenVisualManager$$OnDisable
// address: 0x455b2c8
// body: available
// range: 0x455b2c8-0x455b4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455b398 to 0x8662bb0 UnityEngine.Object$$Destroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455b4d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenVisualManager__OnDisable(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  
  if ((DAT_095187fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095187fc = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x30);
      if (plVar3 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x1a8);
        uVar4 = *(undefined8 *)(*plVar3 + 0x1b0);
        goto LAB_0455b4c0;
      }
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x30);
      if (plVar3 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x1c8);
        uVar4 = *(undefined8 *)(*plVar3 + 0x1d0);
LAB_0455b4c0:
                    /* WARNING: Could not recover jumptable at 0x0455b4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar3,uVar4);
        return;
      }
    }
  }
  else {
    if (iVar1 == 3) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 5) {
          return;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          plVar3 = *(long **)(param_1 + 0x30);
          if (plVar3 == (long *)0x0) goto LAB_0455b4d8;
          (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
        }
        uVar4 = UnityEngine_Component__get_gameObject(param_1,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        UnityEngine_Object__Destroy(uVar4,0);
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x30);
      if (plVar3 == (long *)0x0) goto LAB_0455b4d8;
      (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
    }
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
      uVar4 = *(undefined8 *)(*plVar3 + 0x230);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x228);
      goto LAB_0455b4c0;
    }
  }
LAB_0455b4d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

