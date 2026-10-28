// rea decompile_all
// name: CakeOrder.SceneTransitionBehaviourWeather$$PlayTransitionOut
// address: 0x4277364
// body: available
// range: 0x4277364-0x42778c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427789c to 0x4252cd0 CakeOrder.AudioManagerCakeOrder$$PlaySfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42778c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42778c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SceneTransitionBehaviourWeather__PlayTransitionOut
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  
  if ((DAT_09517064 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091ef870);
    FUN_03f5c2a4(&DAT_091ef878);
    FUN_03f5c2a4(&DAT_09194238);
    DAT_09517064 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194238);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_2);
    *(undefined8 *)(lVar2 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_3);
    puVar7 = (undefined8 *)(param_2 + 0xd0);
    uVar3 = DG_Tweening_TweenExtensions__IsActive(*puVar7,0);
    if ((uVar3 & 1) != 0) {
      DG_Tweening_TweenExtensions__Complete(*puVar7,0);
    }
    lVar8 = *(long *)(param_2 + 0x88);
    if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar1)) {
      lVar10 = 0;
      do {
        if (uVar1 <= (uint)lVar10) goto LAB_042778c4;
        lVar4 = *(long *)(lVar8 + 0x20 + lVar10 * 8);
        if (lVar4 == 0) goto LAB_042778c0;
        UnityEngine_UI_Image__set_fillAmount(0x3f800000,lVar4,0);
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar1);
    }
    lVar8 = *(long *)(param_2 + 0x70);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        lVar10 = 0;
        do {
          if (uVar1 <= (uint)lVar10) {
LAB_042778c4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5 = *(long **)(lVar8 + 0x20 + lVar10 * 8);
          if (plVar5 == (long *)0x0) goto LAB_042778c0;
          (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
          uVar1 = *(uint *)(lVar8 + 0x18);
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < (int)uVar1);
      }
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = DG_Tweening_DOTween__Sequence(0);
      *(undefined8 *)(param_2 + 0xd0) = uVar6;
      thunk_FUN_03f5d7b8(puVar7,uVar6);
      if (*(char *)(param_2 + 0xe0) != '\0') {
        lVar8 = CakeOrder_SceneTransitionBehaviourWeather__GetVisualByWeather
                          (param_2,*(undefined4 *)(param_2 + 0xdc));
        uVar9 = *(undefined8 *)(param_2 + 0xd0);
        uVar6 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY
                          (*(undefined4 *)(param_2 + 0x9c),param_1,*(undefined8 *)(param_2 + 0x78),0
                           ,0);
        uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_2 + 0xb0),DAT_091dbe90);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Append(uVar9,uVar6,0);
        uVar9 = DG_Tweening_DOTweenModuleUI__DOColor
                          (*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xbc),
                           *(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4),param_1,
                           *(undefined8 *)(param_2 + 0x90),0);
        uVar9 = FUN_04d95e8c(uVar9,*(undefined4 *)(param_2 + 0xb0),DAT_091dbe70);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar9,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                          (*(undefined4 *)(param_2 + 200),uVar6,0);
        uVar9 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar9,lVar2,DAT_091ef870,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar6,uVar9,0);
        uVar9 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY
                          (*(undefined4 *)(param_2 + 0x98),param_1,*(undefined8 *)(param_2 + 0x78),0
                           ,0);
        uVar9 = FUN_04d95e8c(uVar9,*(undefined4 *)(param_2 + 0xb4),DAT_091dbe90);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar9,0);
        if (lVar8 == 0) goto LAB_042778c0;
        uVar9 = DG_Tweening_DOTweenModuleUI__DOColor
                          (*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                           *(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),param_1,
                           *(undefined8 *)(param_2 + 0x90),0);
        uVar9 = FUN_04d95e8c(uVar9,*(undefined4 *)(param_2 + 0xb4),DAT_091dbe70);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar9,0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval(*(undefined4 *)(param_2 + 0xcc),uVar6,0)
        ;
      }
      uVar9 = *(undefined8 *)(param_2 + 0xd0);
      uVar6 = DG_Tweening_DOTweenModuleUI__DOFade(0,param_1,*(undefined8 *)(param_2 + 0xa0),0);
      uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_2 + 0xac),DAT_091dbe80);
      uVar6 = DG_Tweening_TweenSettingsExtensions__Append(uVar9,uVar6,0);
      uVar9 = *(undefined8 *)(param_2 + 0x58);
      fVar11 = *(float *)(param_2 + 0x60);
      if (DAT_09515ce9 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce9 = '\x01';
      }
      uVar9 = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                        (fVar11 * *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 8),
                         fVar11 * *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0xc),param_1,uVar9,0,0
                        );
      uVar9 = FUN_04d95e8c(uVar9,*(undefined4 *)(param_2 + 0x68),DAT_091dbe90);
      DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar9,0);
      uVar6 = FUN_04d9656c(*(undefined8 *)(param_2 + 0xd0),1,DAT_091dc030);
      uVar9 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar9,lVar2,DAT_091ef878,0);
      uVar6 = FUN_04d956bc(uVar6,uVar9,DAT_091dbd18);
      FUN_04d8dd74(uVar6,DAT_091dbcc0);
      uVar6 = *(undefined8 *)(param_2 + 0x50);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        CakeOrder_AudioManagerCakeOrder__PlaySfx
                  (0x3f800000,**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_2 + 0x50),3,0);
        return;
      }
    }
  }
LAB_042778c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

