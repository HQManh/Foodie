// rea decompile_all
// name: SceneTransitionR1.SceneTransitionBehaviourOverlayCanvasFadeColor$$PlayTransitionOut
// address: 0x781da2c
// body: available
// range: 0x781da2c-0x781dc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781dc54 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781dc58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SceneTransitionR1_SceneTransitionBehaviourOverlayCanvasFadeColor__PlayTransitionOut
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_095232df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091ef858);
    FUN_03f5c2a4(&DAT_09194220);
    DAT_095232df = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194220);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_3);
    lVar2 = *(long *)(param_2 + 0x68);
    if (lVar2 != 0) {
      DG_Tweening_TweenExtensions__Kill(lVar2,0,0);
    }
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_2,lVar2,0);
      *(undefined8 *)(param_2 + 0x70) = 0;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x70),0);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_0781dc58;
      UnityEngine_UI_Image__set_fillAmount(0x3f800000,*(long *)(param_2 + 0x50),0);
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(*(long *)(param_2 + 0x38),0,0);
      uVar5 = DG_Tweening_DOTweenModuleUI__DOFade(0,param_1,*(undefined8 *)(param_2 + 0x38),0);
      uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_2 + 0x60),DAT_091dbe80);
      uVar5 = FUN_04d9656c(uVar5,1,DAT_091dc008);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091ef858,0);
      uVar5 = FUN_04d956bc(uVar5,uVar4,DAT_091dbcf8);
      uVar5 = FUN_04d8dd74(uVar5,DAT_091dbc98);
      *(undefined8 *)(param_2 + 0x68) = uVar5;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x68));
      return;
    }
  }
LAB_0781dc58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

