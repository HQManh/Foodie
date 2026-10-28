// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$UpdateAutoplay
// address: 0x44c206c
// body: available
// range: 0x44c206c-0x44c22af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c2294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c22ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__UpdateAutoplay(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  
  if ((DAT_09518274 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c338);
    FUN_03f5c2a4(&DAT_0918c3b8);
    FUN_03f5c2a4(&DAT_0918c458);
    FUN_03f5c2a4(&DAT_0918c460);
    DAT_09518274 = 1;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__EnsureTimeScale(0);
  if (((*(char *)(param_1 + 0x168) != '\0') || (*(char *)(param_1 + 0xe0) != '\0')) &&
     (fVar5 = (float)UnityEngine_Time__get_unscaledTime(0), *(float *)(param_1 + 0x16c) <= fVar5)) {
    lVar2 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    plVar4 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)CakeOrder_BaseUI_SceneMainUI__get_TopPopup(lVar2,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(plVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
        *(float *)(param_1 + 0x16c) = fVar5 + 0.5;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar4;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if (((((bVar1 < *(byte *)(DAT_0918c458 + 0x130)) ||
            (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918c458 + 0x130) * 8 + -8) !=
             DAT_0918c458)) &&
           ((bVar1 < *(byte *)(DAT_0918c3b8 + 0x130) ||
            (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918c3b8 + 0x130) * 8 + -8) !=
             DAT_0918c3b8)))) &&
          ((bVar1 < *(byte *)(DAT_0918c338 + 0x130) ||
           (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918c338 + 0x130) * 8 + -8) !=
            DAT_0918c338)))) &&
         ((bVar1 < *(byte *)(DAT_0918c460 + 0x130) ||
          (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918c460 + 0x130) * 8 + -8) !=
           DAT_0918c460)))) {
        fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
        *(float *)(param_1 + 0x16c) = fVar5 + 0.5;
                    /* WARNING: Could not recover jumptable at 0x044c2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0));
        return;
      }
    }
  }
  return;
}

