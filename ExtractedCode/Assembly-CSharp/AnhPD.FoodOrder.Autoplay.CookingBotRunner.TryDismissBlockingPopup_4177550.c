// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$TryDismissBlockingPopup
// address: 0x4177550
// body: available
// range: 0x4177550-0x41777ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41777d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41777ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__TryDismissBlockingPopup(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  
  if ((DAT_095165fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c338);
    FUN_03f5c2a4(&DAT_0918c3b8);
    FUN_03f5c2a4(&DAT_0918c458);
    FUN_03f5c2a4(&DAT_0918c460);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_091fa718);
    DAT_095165fe = 1;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (*(float *)(param_1 + 0x74) <= fVar7) {
    lVar2 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_041777d4;
      plVar6 = (long *)CakeOrder_BaseUI_SceneMainUI__get_TopPopup(lVar2,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(plVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
        *(float *)(param_1 + 0x74) = fVar7 + 0.5;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar6;
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
        fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
        *(float *)(param_1 + 0x74) = fVar7 + 0.5;
        plVar4 = (long *)System_Object__GetType(plVar6,0);
        if (plVar4 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          uVar5 = System_String__Concat(DAT_091fa718,uVar5,DAT_091f7320,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar5,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x041777d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x2b8))(plVar6,*(undefined8 *)(*plVar6 + 0x2c0));
          return;
        }
LAB_041777d4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

