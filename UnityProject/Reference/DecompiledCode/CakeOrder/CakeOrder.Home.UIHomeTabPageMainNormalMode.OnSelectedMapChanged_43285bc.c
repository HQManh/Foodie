// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainNormalMode$$OnSelectedMapChanged
// address: 0x43285bc
// body: available
// range: 0x43285bc-0x43286df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43286d8 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43286dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainNormalMode__OnSelectedMapChanged(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09517694 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517694 = 1;
  }
  CakeOrder_Home_UIHomeTabPageMainNormalMode__ShowOnlyLevelButton(0,param_1,0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0xe8),0);
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x130) == 0) goto LAB_043286dc;
      CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x130),0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) == 0) {
LAB_043286c0:
      auVar6 = CakeOrder_Home_UIHomeTabPageMainNormalMode__UpdateAndShowProgress(param_1,0);
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar6._0_8_,auVar6._8_8_,0);
      return;
    }
    if ((((*(long *)(param_1 + 0x48) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar4 != 0)) &&
        (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      plVar1 = *(long **)(param_1 + 0x108);
      uVar5 = *(undefined8 *)(param_1 + 0x110);
      uVar3 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar4,0);
      uVar5 = System_String__Format(uVar5,uVar3,0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x558))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x560));
        goto LAB_043286c0;
      }
    }
  }
LAB_043286dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

