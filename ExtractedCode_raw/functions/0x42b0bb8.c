// rea decompile_all
// name: CakeOrder.InGame.UIPopupWinLogo.<IEIntro>d__20$$MoveNext
// address: 0x42b0bb8
// body: available
// range: 0x42b0bb8-0x42b100b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b1008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_UIPopupWinLogo_<IEIntro>d__20__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_095172af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dd038);
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_095172af = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x28);
  uVar2 = 0;
  if (1 < iVar1) {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        uVar8 = *(undefined4 *)(lVar5 + 0xec);
        uVar6 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar8,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 3;
        goto LAB_042b0fec;
      }
    }
    else if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0xc0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar2 & 1) != 0) {
          plVar7 = *(long **)(lVar5 + 0xc0);
          *(undefined1 *)(lVar5 + 0x110) = 1;
          uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
          uVar2 = System_Action___ctor(uVar6,lVar5,DAT_091dd038,0);
          if (plVar7 == (long *)0x0) goto LAB_042b1008;
          (**(code **)(*plVar7 + 0x1b8))(0,plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x1c0));
        }
        uVar8 = *(undefined4 *)(lVar5 + 0xf0);
        uVar6 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar8,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 4;
        goto LAB_042b0fec;
      }
    }
    else {
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x100) = 0;
        thunk_FUN_03f5d7b8(lVar5 + 0x100,0);
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        CakeOrder_BaseUI_UIElementAbstract__Hide(0,lVar5,0,0);
        return 0;
      }
    }
LAB_042b1008:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2);
  }
  if (iVar1 == 0) {
    fVar9 = *(float *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (0.0 < fVar9) {
      uVar6 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(fVar9,uVar6,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar5 == 0) goto LAB_042b1008;
  uVar6 = *(undefined8 *)(lVar5 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) != 0) {
    plVar7 = *(long **)(lVar5 + 0xc0);
    uVar2 = 0;
    if (plVar7 == (long *)0x0) goto LAB_042b1008;
    (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
  }
  fVar9 = *(float *)(lVar5 + 0xe8);
  uVar6 = *(undefined8 *)(lVar5 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    uVar2 = 0;
    if (*(long *)(lVar5 + 200) == 0) goto LAB_042b1008;
    lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar5 + 200),0);
    if ((lVar4 != 0) &&
       (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0xd0),0), (uVar2 & 1) == 0)) {
      lVar4 = *(long *)(lVar5 + 200);
      uVar2 = 0;
      if (lVar4 == 0) goto LAB_042b1008;
      *(undefined1 *)(lVar4 + 0x28c) = 1;
      lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar4,0);
      uVar2 = 0;
      if (lVar4 == 0) goto LAB_042b1008;
      lVar4 = Spine_AnimationState__SetAnimation(lVar4,0,*(undefined8 *)(lVar5 + 0xd0),0,0);
      uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0xd8),0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (*(long *)(lVar5 + 200) == 0) goto LAB_042b1008;
        lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar5 + 200),0);
        uVar2 = 0;
        if (lVar3 == 0) goto LAB_042b1008;
        uVar2 = Spine_AnimationState__AddAnimation(0,lVar3,0,*(undefined8 *)(lVar5 + 0xd8),1,0);
      }
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        if (*(long *)(lVar5 + 200) == 0) goto LAB_042b1008;
        fVar9 = *(float *)(*(long *)(lVar4 + 0x10) + 0x28) /
                *(float *)(*(long *)(lVar5 + 200) + 300);
      }
    }
  }
  uVar6 = *(undefined8 *)(lVar5 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    uVar2 = 0;
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042b1008;
    CakeOrder_AudioManagerCakeOrder__PlaySfx
              (0x3f800000,**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar5 + 0xe0),3,0);
  }
  uVar6 = thunk_FUN_03f9944c(DAT_0918ce98);
  UnityEngine_WaitForSecondsRealtime___ctor(fVar9,uVar6,0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
  uVar8 = 2;
LAB_042b0fec:
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  return 1;
}

