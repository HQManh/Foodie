// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBlenderVisual$$Render
// address: 0x44c81e0
// body: available
// range: 0x44c81e0-0x44c8417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c8350 to 0x85db37c UnityEngine.AudioSource$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c8410 to 0x44c875c CookOrder.Cooking.Implement.CookingBlenderVisual$$Sound (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c8414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingBlenderVisual__Render(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  if ((DAT_09518294 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518294 = 1;
  }
  if (param_2 == 0) {
LAB_044c8414:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    bVar1 = *(byte *)(param_2 + 0x19);
    iVar2 = (uint)bVar1 << 1;
    if (iVar2 != *(int *)(param_1 + 0x98)) {
      *(int *)(param_1 + 0x98) = iVar2;
      *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
      CookOrder_Cooking_Implement_CookingBlenderVisual__SetPaused(param_1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_044c8414;
        UnityEngine_AudioSource__Stop(*(long *)(param_1 + 0x90),0);
      }
      CookOrder_Cooking_Implement_CookingBlenderVisual__HoldEnd
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      if (bVar1 == 0) {
        CookOrder_Cooking_Implement_CookingBlenderVisual__Play
                  (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),0);
        uVar5 = *(undefined8 *)(param_1 + 0x80);
      }
      else {
        CookOrder_Cooking_Implement_CookingBlenderVisual__Play
                  (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50),0);
        uVar5 = *(undefined8 *)(param_1 + 0x78);
      }
      CookOrder_Cooking_Implement_CookingBlenderVisual__Sound(param_1,uVar5);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x98) != 1) {
    dVar8 = *(double *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x98) = 1;
    fVar6 = 1.0;
    if (0.0 < dVar8) {
      fVar6 = (float)CookOrder_Cooking_Implement_CookingBlenderVisual__ClipDuration
                               (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
      fVar7 = (float)CookOrder_Cooking_Implement_CookingBlenderVisual__ClipDuration
                               (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
      fVar6 = (fVar6 + fVar7) / (float)*(double *)(param_2 + 0x28);
    }
    *(float *)(param_1 + 0x9c) = fVar6;
    CookOrder_Cooking_Implement_CookingBlenderVisual__Play
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = CookOrder_Cooking_Implement_CookingBlenderVisual__Has
                          (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40)),
       (uVar3 & 1) != 0)) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_1 + 0x20),0),
         lVar4 == 0)) goto LAB_044c8414;
      Spine_AnimationState__AddAnimation(0,lVar4,0,*(undefined8 *)(param_1 + 0x40),1,0);
    }
    CookOrder_Cooking_Implement_CookingBlenderVisual__Play
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),1);
    CookOrder_Cooking_Implement_CookingBlenderVisual__SetPaused(param_1,0);
    CookOrder_Cooking_Implement_CookingBlenderVisual__Sound(param_1,*(undefined8 *)(param_1 + 0x70))
    ;
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) != 0) {
        UnityEngine_AudioSource__Play(*(long *)(param_1 + 0x90),0);
        return;
      }
      goto LAB_044c8414;
    }
  }
  return;
}

