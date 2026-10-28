// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl.<IEWaitLoadThenMoveCamera>d__52$$MoveNext
// address: 0x431c0ac
// body: available
// range: 0x431c0ac-0x431c467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431c464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_HomeRestaurantsBuildingControl_<IEWaitLoadThenMoveCamera>d__52__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_09517633 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cea90);
    FUN_03f5c2a4(&DAT_091cea70);
    FUN_03f5c2a4(&DAT_091cea78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba200);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc030);
    DAT_09517633 = 1;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_0431c464;
    *(undefined1 *)(lVar5 + 0x60) = 1;
    if ((*(long *)(lVar5 + 0x90) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar5 + 0x90) + 0x30), lVar4 == 0)) goto LAB_0431c464;
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar4 + 0x48);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    if ((((*(long *)(param_4 + 0x28) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_4 + 0x28) + 0x60), lVar4 != 0)) &&
        (lVar4 = UnityEngine_Component__get_transform(lVar4,0), lVar5 != 0)) &&
       ((*(long *)(lVar5 + 0x90) != 0 &&
        (CakeOrder_Home_HomeRestaurantsBuildingControl__GetBuildingPosition
                   (lVar5,*(undefined4 *)(*(long *)(lVar5 + 0x90) + 0x28)), lVar4 != 0)))) {
      UnityEngine_Transform__set_position(lVar4,0);
      lVar4 = *(long *)(lVar5 + 0x98);
      if (lVar4 != 0) {
        DG_Tweening_TweenExtensions__Kill(lVar4,0,0);
      }
      if (*(long *)(lVar5 + 0x90) != 0) {
        uVar7 = CakeOrder_Home_HomeRestaurantsBuildingControl__GetCameraTargetForIndex
                          (lVar5,*(undefined4 *)(*(long *)(lVar5 + 0x90) + 0x28));
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = DG_Tweening_DOTween__Sequence(0);
        if (*(long *)(lVar5 + 0x30) != 0) {
          uVar2 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x30),0);
          uVar2 = DG_Tweening_ShortcutExtensions__DOMove
                            (uVar7,param_2,param_3,*(undefined4 *)(lVar5 + 0x44),uVar2,0,0);
          uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(lVar5 + 0x48),DAT_091dbeb0);
          uVar6 = DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar2,0);
          uVar2 = thunk_FUN_03f9944c(DAT_09175e18);
          FUN_06dfb188(uVar2,lVar5,DAT_091cea70,0);
          uVar3 = thunk_FUN_03f9944c(DAT_09175e68);
          FUN_06dfc2b4(uVar3,lVar5,DAT_091cea78,0);
          uVar7 = CakeOrder_Home_HomeRestaurantsBuildingControl__GetCameraSize(lVar5);
          uVar2 = DG_Tweening_DOTween__To(uVar7,*(undefined4 *)(lVar5 + 0x44),uVar2,uVar3,0);
          uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(lVar5 + 0x48),DAT_091dbe80);
          uVar6 = DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar2,0);
          uVar6 = FUN_04d9656c(uVar6,1,DAT_091dc030);
          uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar2,lVar5,DAT_091cea90,0);
          uVar6 = FUN_04d956bc(uVar6,uVar2,DAT_091dbd18);
          uVar6 = FUN_04d8dd74(uVar6,DAT_091dbcc0);
          *(undefined8 *)(lVar5 + 0x98) = uVar6;
          thunk_FUN_03f5d7b8((long *)(lVar5 + 0x98),uVar6);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28),0);
          return 0;
        }
      }
    }
  }
LAB_0431c464:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

