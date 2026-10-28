// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourAnimator$$GetClipLength
// address: 0x781d19c
// body: available
// range: 0x781d19c-0x781d2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781d2d8 to 0x85c70d0 UnityEngine.AnimationClip$$get_length (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781d2dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781d2e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
SceneTransitionR1_SceneTransitionBehaviourAnimator__GetClipLength(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  if ((DAT_095232da & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095232da = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = UnityEngine_Animator__get_runtimeAnimatorController(*(long *)(param_1 + 0x38),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 == 0) ||
         (lVar1 = UnityEngine_RuntimeAnimatorController__get_animationClips(lVar1,0), lVar1 == 0))
      goto LAB_0781d2e0;
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar2 = 0;
        uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = *(long *)(lVar1 + 0x20 + uVar2 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (lVar5 == 0) goto LAB_0781d2e0;
            uVar3 = UnityEngine_Object__GetName(lVar5,0);
            uVar4 = System_String__op_Equality(uVar3,param_2,0);
            if ((uVar4 & 1) != 0) {
              UnityEngine_AnimationClip__get_length(lVar5,0);
              auVar6._4_4_ = extraout_var;
              auVar6._0_4_ = extraout_s0;
              auVar6._8_8_ = extraout_var_00;
              return auVar6;
            }
          }
          uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
    }
    return ZEXT816(0xbf800000);
  }
LAB_0781d2e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

