// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourZoomHole$$PlayTransitionIn
// address: 0x781de8c
// body: available
// range: 0x781de8c-0x781dfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781dfe4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781dfe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781dfec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SceneTransitionR1_SceneTransitionBehaviourZoomHole__PlayTransitionIn
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_095232e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095232e0 = 1;
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_2 + 0xb8),0,0);
  }
  lVar4 = *(long *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_2,lVar4,0);
  }
  lVar4 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar4 != 0) {
    UnityEngine_GameObject__SetActive(lVar4,1,0);
    lVar4 = *(long *)(param_2 + 0x90);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2 = *(long **)(lVar4 + 0x20 + lVar6 * 8);
          if (plVar2 == (long *)0x0) goto LAB_0781dfe8;
          (**(code **)(*plVar2 + 0x2c8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x2d0));
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x98);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_2 + 0x98) == 0) goto LAB_0781dfe8;
        UnityEngine_UI_Image__set_fillAmount(0,*(long *)(param_2 + 0x98),0);
      }
      uVar5 = SceneTransitionR1_SceneTransitionBehaviourZoomHole__IEFadeInAndChangeColor
                        (param_1,param_2,param_3);
      uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_2,uVar5,0);
      *(undefined8 *)(param_2 + 0xc0) = uVar5;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0xc0));
      return;
    }
  }
LAB_0781dfe8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

