// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$FinishDeepPick
// address: 0x44bc234
// body: available
// range: 0x44bc234-0x44bc443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bc400 to 0x4d956e8 FUN_04d956e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bc440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__FinishDeepPick(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((DAT_09518245 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6580);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd40);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_09518245 = 1;
  }
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
  if ((*(long *)(param_1 + 0x2e8) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar3 != 0)) {
    *(float *)(param_1 + 0x2b8) = fVar5 + *(float *)(lVar3 + 0x14);
    if (*(long *)(param_1 + 0x2d8) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x30);
      if (lVar3 != 0) {
        CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorAll
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar3,0);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1e0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x2d0);
        *(undefined8 *)(param_1 + 0x2d0) = 0;
        thunk_FUN_03f5d7b8(param_1 + 0x2d0,0);
        if (lVar3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x044bc430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      if (*(long *)(param_1 + 0x1e0) != 0) {
        uVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x1e0),0);
        DG_Tweening_ShortcutExtensions__DOKill(uVar4,0,0);
        if (*(long *)(param_1 + 0x1e0) != 0) {
          uVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x1e0),0);
          if ((*(long *)(param_1 + 0x2e8) != 0) &&
             (lVar3 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar3 != 0)) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOMove
                              (*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),
                               *(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(lVar3 + 0x14),uVar4,
                               0,0);
            if ((*(long *)(param_1 + 0x2e8) != 0) &&
               (lVar3 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x50), lVar3 != 0)) {
              uVar4 = FUN_04d95dc4(uVar4,*(undefined8 *)(lVar3 + 0x18),DAT_091dbea8);
              uVar4 = FUN_04d9656c(uVar4,1,DAT_091dc028);
              uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar2,param_1,DAT_091c6580,0);
              FUN_04d956e8(uVar4,uVar2,DAT_091dbd40);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

