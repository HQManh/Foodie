// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourAnimator.<IERunIn>d__17$$MoveNext
// address: 0x781d3b8
// body: available
// range: 0x781d3b8-0x781d487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781d484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool SceneTransitionR1_SceneTransitionBehaviourAnimator_<IERunIn>d__17__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_0781d484;
    uVar3 = SceneTransitionR1_SceneTransitionBehaviourAnimator__WaitUntilStateEnteredAndFinished
                      (lVar4,*(undefined8 *)(lVar4 + 0x40));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) {
LAB_0781d484:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Animator__set_speed(0x3f800000,*(long *)(lVar4 + 0x38),0);
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x48),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar4 + 0x38) == 0) goto LAB_0781d484;
      UnityEngine_Animator__Play(0,*(long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x48),0,0);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return iVar1 == 0;
}

