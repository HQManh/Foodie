// rea decompile_all
// name: DG.Tweening.DOTweenAnimation$$ReEvaluateRelativeTween
// address: 0x455f688
// body: available
// range: 0x455f688-0x455f8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455f7b0 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455f89c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455f8a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenAnimation__ReEvaluateRelativeTween
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  undefined8 local_30;
  float local_28;
  
  if ((DAT_0951882f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c168);
    FUN_03f5c2a4(&DAT_0918cbd0);
    FUN_03f5c2a4(&DAT_092260e8);
    DAT_0951882f = 1;
  }
  if (*(char *)(param_4 + 0x70) == '\0') {
    lVar1 = *(long *)(param_4 + 0x78);
  }
  else {
    lVar1 = UnityEngine_Component__get_gameObject(param_4,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject(param_4,0);
    if (lVar1 != 0) {
      uVar3 = UnityEngine_Object__GetName(lVar1,0);
      uVar3 = System_String__Format(DAT_092260e8,uVar3,0);
      uVar4 = UnityEngine_Component__get_gameObject(param_4,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar3,uVar4,0);
      return;
    }
    goto LAB_0455f89c;
  }
  if (*(int *)(param_4 + 0xb8) == 2) {
    if (lVar1 == 0) goto LAB_0455f89c;
    plVar5 = *(long **)(param_4 + 0x68);
    lVar1 = UnityEngine_GameObject__get_transform(lVar1,0);
    if (lVar1 == 0) goto LAB_0455f89c;
    fVar6 = (float)UnityEngine_Transform__get_localPosition(lVar1,0);
  }
  else {
    if (*(int *)(param_4 + 0xb8) != 1) {
      return;
    }
    if (lVar1 == 0) goto LAB_0455f89c;
    plVar5 = *(long **)(param_4 + 0x68);
    lVar1 = UnityEngine_GameObject__get_transform(lVar1,0);
    if (lVar1 == 0) goto LAB_0455f89c;
    fVar6 = (float)UnityEngine_Transform__get_position(lVar1,0);
  }
  local_28 = param_3 + *(float *)(param_4 + 0xd4);
  local_30 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(param_4 + 0xcc) >> 0x20),
                      fVar6 + (float)*(undefined8 *)(param_4 + 0xcc));
  uVar3 = FUN_03f5c42c(DAT_0918cbd0,&local_30);
  if (plVar5 != (long *)0x0) {
    lVar1 = *plVar5;
    if ((*(byte *)(DAT_0918c168 + 0x130) <= *(byte *)(lVar1 + 0x130)) &&
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(DAT_0918c168 + 0x130) * 8 + -8) ==
        DAT_0918c168)) {
      (**(code **)(lVar1 + 0x1e8))(plVar5,uVar3,1,*(undefined8 *)(lVar1 + 0x1f0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar5);
  }
LAB_0455f89c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

