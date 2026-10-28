// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewCoke$$Play
// address: 0x4105e88
// body: available
// range: 0x4105e88-0x4105fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4105fbc to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4105fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewCoke__Play(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0951618f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    DAT_0951618f = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    AnhPD_FoodOrder_GroupViewCoke__ResetVisual(param_2);
    fVar5 = (param_1 - *(float *)(param_2 + 0x68)) - *(float *)(param_2 + 0x6c);
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    puVar3 = (undefined8 *)(param_2 + 0xa0);
    *puVar3 = uVar2;
    thunk_FUN_03f5d7b8(puVar3,uVar2);
    uVar4 = *puVar3;
    uVar2 = AnhPD_FoodOrder_GroupViewCoke__GetExtendTween(param_2);
    DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar2,0);
    uVar4 = *puVar3;
    uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade
                      (0x3f800000,*(undefined4 *)(param_2 + 0x6c),*(undefined8 *)(param_2 + 0x50),0)
    ;
    DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar2,0);
    uVar4 = *puVar3;
    uVar2 = AnhPD_FoodOrder_GroupViewCoke__GetRiseTween(fVar6,param_2);
    DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar2,0);
    if (*(long *)(param_2 + 0x20) != 0) {
      UnityEngine_AudioSource__Play(*(long *)(param_2 + 0x20),0);
      if (*(long *)(param_2 + 0x38) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_2 + 0x38),1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

