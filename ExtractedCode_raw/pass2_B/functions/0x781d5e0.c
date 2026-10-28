// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourAnimator.<WaitUntilStateEnteredAndFinished>d__21$$MoveNext
// address: 0x781d5e0
// body: available
// range: 0x781d5e0-0x781d74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781d74c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
SceneTransitionR1_SceneTransitionBehaviourAnimator_<WaitUntilStateEnteredAndFinished>d__21__MoveNext
          (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar4 = *(long *)(param_1 + 0x20);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = param_1;
    if (lVar4 == 0) goto LAB_0781d74c;
    lVar2 = 0;
    if (*(long *)(lVar4 + 0x38) == 0) goto LAB_0781d74c;
    uVar1 = UnityEngine_Animator__IsInTransition(*(long *)(lVar4 + 0x38),0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
      if (*(long *)(lVar4 + 0x38) == 0) goto LAB_0781d74c;
      UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_74,*(long *)(lVar4 + 0x38),0,0);
      uStack_48 = uStack_6c;
      local_50 = local_74;
      uStack_38 = uStack_5c;
      uStack_40 = local_64;
      local_30 = local_54;
      uVar1 = UnityEngine_AnimatorStateInfo__IsName(&local_50,*(undefined8 *)(param_1 + 0x28),0);
      if ((uVar1 & 1) != 0) goto LAB_0781d6a4;
    }
    uVar3 = 1;
LAB_0781d674:
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    return 1;
  }
  lVar2 = 0;
  if (*(uint *)(param_1 + 0x10) != 2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar4 == 0) goto LAB_0781d74c;
LAB_0781d6a4:
  lVar2 = 0;
  if (*(long *)(lVar4 + 0x38) != 0) {
    UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_74,*(long *)(lVar4 + 0x38),0,0);
    uStack_48 = uStack_6c;
    local_50 = local_74;
    uStack_38 = uStack_5c;
    uStack_40 = local_64;
    local_30 = local_54;
    uVar1 = UnityEngine_AnimatorStateInfo__IsName(&local_50,*(undefined8 *)(param_1 + 0x28),0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = 0;
    if (*(long *)(lVar4 + 0x38) != 0) {
      UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_74,*(long *)(lVar4 + 0x38),0,0);
      uStack_48 = uStack_6c;
      local_50 = local_74;
      uStack_38 = uStack_5c;
      uStack_40 = local_64;
      local_30 = local_54;
      fVar5 = (float)UnityEngine_AnimatorStateInfo__get_normalizedTime(&local_50,0);
      if (1.0 <= fVar5) {
        return 0;
      }
      uVar3 = 2;
      goto LAB_0781d674;
    }
  }
LAB_0781d74c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar2);
}

