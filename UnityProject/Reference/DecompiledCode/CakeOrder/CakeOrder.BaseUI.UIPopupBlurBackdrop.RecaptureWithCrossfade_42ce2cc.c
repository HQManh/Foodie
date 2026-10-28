// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$RecaptureWithCrossfade
// address: 0x42ce2cc
// body: available
// range: 0x42ce2cc-0x42ce523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ce520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_BaseUI_UIPopupBlurBackdrop__RecaptureWithCrossfade(long param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  float in_s3;
  
  if ((DAT_09517385 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbce8);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_091dced8);
    DAT_09517385 = 1;
  }
  if (param_2 == 3) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar3 & 1) == 0) goto LAB_042ce3a0;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_042ce520;
    uVar3 = UnityEngine_Behaviour__get_enabled(*(long *)(param_1 + 0x88),0);
    if ((uVar3 & 1) == 0) goto LAB_042ce3a0;
    plVar4 = *(long **)(param_1 + 0x88);
    if (plVar4 == (long *)0x0) goto LAB_042ce520;
    (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    bVar1 = 0.0 < in_s3;
  }
  else {
LAB_042ce3a0:
    bVar1 = false;
  }
  uVar2 = CakeOrder_BaseUI_UIPopupBlurBackdrop__TryCapture(param_1);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
LAB_042ce520:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = Utilities_CameraBlurSnapshot__get_PreviousTexture(*(long *)(param_1 + 0x90),0);
    if (bVar1) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) != 0) {
          DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x100),0,0);
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          UnityEngine_UI_RawImage__set_texture(*(long *)(param_1 + 0x30),uVar7,0);
          lVar6 = *(long *)(param_1 + 0x90);
          if ((lVar6 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
            UnityEngine_UI_RawImage__set_uvRect
                      (*(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),
                       *(undefined4 *)(lVar6 + 0x2c),*(undefined4 *)(lVar6 + 0x30),
                       *(long *)(param_1 + 0x30),0);
            plVar4 = *(long **)(param_1 + 0x88);
            if (plVar4 != (long *)0x0) {
              plVar8 = *(long **)(param_1 + 0x30);
              (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                if (*(long *)(param_1 + 0x30) != 0) {
                  UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x30),1,0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    uVar7 = DG_Tweening_DOTweenModuleUI__DOFade
                                      (0,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),
                                       *(undefined8 *)(param_1 + 0x30),0);
                    uVar7 = FUN_04d9656c(uVar7,1,DAT_091dbff0);
                    uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091dced8,0);
                    uVar7 = FUN_04d956bc(uVar7,uVar5,DAT_091dbce8);
                    *(undefined8 *)(param_1 + 0x100) = uVar7;
                    thunk_FUN_03f5d7b8(param_1 + 0x100,uVar7);
                    goto LAB_042ce50c;
                  }
                }
              }
            }
          }
        }
        goto LAB_042ce520;
      }
    }
  }
LAB_042ce50c:
  return uVar2 & 1;
}

