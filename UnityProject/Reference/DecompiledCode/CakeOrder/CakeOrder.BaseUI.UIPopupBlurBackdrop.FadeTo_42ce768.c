// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$FadeTo
// address: 0x42ce768
// body: available
// range: 0x42ce768-0x42ceb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ceb00 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ceb04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__FadeTo
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined4 in_stack_00000000;
  
  uVar11 = param_2;
  uVar12 = param_3;
  uVar13 = param_4;
  if ((DAT_09517384 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091f1808);
    FUN_03f5c2a4(&DAT_091f1810);
    FUN_03f5c2a4(&DAT_091f1818);
    FUN_03f5c2a4(&DAT_09195780);
    DAT_09517384 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09195780);
  auVar14 = System_Object___ctor(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x18) = param_9;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),param_9);
    *(undefined4 *)(lVar5 + 0x30) = param_1;
    *(undefined4 *)(lVar5 + 0x34) = param_2;
    *(undefined4 *)(lVar5 + 0x38) = param_3;
    *(undefined4 *)(lVar5 + 0x3c) = param_4;
    *(undefined4 *)(lVar5 + 0x50) = param_5;
    *(undefined4 *)(lVar5 + 0x54) = param_6;
    *(undefined4 *)(lVar5 + 0x58) = param_7;
    *(undefined4 *)(lVar5 + 0x5c) = param_8;
    uVar8 = extraout_x1;
    if (*(long *)(param_9 + 0x160) != 0) {
      DG_Tweening_TweenExtensions__Kill(*(long *)(param_9 + 0x160),0,0);
      uVar8 = extraout_x1_00;
    }
    plVar6 = *(long **)(param_9 + 0x88);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar8;
    auVar14 = auVar14 << 0x40;
    if (plVar6 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      lVar4 = DAT_09188ad0;
      *(undefined4 *)(lVar5 + 0x20) = uVar10;
      *(undefined4 *)(lVar5 + 0x24) = uVar11;
      *(undefined4 *)(lVar5 + 0x28) = uVar12;
      *(undefined4 *)(lVar5 + 0x2c) = uVar13;
      uVar9 = *(undefined8 *)(param_9 + 0x50);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar14 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((auVar14._0_8_ & 1) == 0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
      }
      else {
        plVar6 = *(long **)(param_9 + 0x50);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar14._8_8_;
        auVar14 = auVar1 << 0x40;
        if (plVar6 == (long *)0x0) goto LAB_042ceb04;
        uVar10 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      }
      *(undefined4 *)(lVar5 + 0x40) = uVar10;
      *(undefined4 *)(lVar5 + 0x44) = uVar11;
      *(undefined4 *)(lVar5 + 0x48) = uVar12;
      *(undefined4 *)(lVar5 + 0x4c) = uVar13;
      if (*(float *)(lVar5 + 0x2c) <= 0.0) {
        uVar8 = (ulong)(0.0 < *(float *)(lVar5 + 0x3c));
      }
      else {
        uVar8 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      auVar14 = auVar2 << 0x40;
      if (*(long *)(param_9 + 0x88) != 0) {
        UnityEngine_Behaviour__set_enabled(*(long *)(param_9 + 0x88),uVar8,0);
        uVar9 = *(undefined8 *)(param_9 + 0x50);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(float *)(lVar5 + 0x4c) <= 0.0) {
            uVar8 = (ulong)(0.0 < *(float *)(lVar5 + 0x5c));
          }
          else {
            uVar8 = 1;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar8;
          auVar14 = auVar3 << 0x40;
          if (*(long *)(param_9 + 0x50) == 0) goto LAB_042ceb04;
          UnityEngine_Behaviour__set_enabled(*(long *)(param_9 + 0x50),uVar8,0);
        }
        uVar9 = DAT_09175e18;
        *(undefined4 *)(lVar5 + 0x10) = 0;
        uVar9 = thunk_FUN_03f9944c(uVar9);
        FUN_06dfb188(uVar9,lVar5,DAT_091f1808,0);
        uVar7 = thunk_FUN_03f9944c(DAT_09175e68);
        FUN_06dfc2b4(uVar7,lVar5,DAT_091f1810,0);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = DG_Tweening_DOTween__To(0x3f800000,in_stack_00000000,uVar9,uVar7,0);
        uVar9 = FUN_04d95e8c(uVar9,6,DAT_091dbe80);
        uVar9 = FUN_04d9656c(uVar9,1,DAT_091dc008);
        uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar7,lVar5,DAT_091f1818,0);
        uVar9 = FUN_04d956bc(uVar9,uVar7,DAT_091dbcf8);
        *(undefined8 *)(param_9 + 0x160) = uVar9;
        thunk_FUN_03f5d7b8(param_9 + 0x160);
        return;
      }
    }
  }
LAB_042ceb04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar14._0_8_,auVar14._8_8_);
}

