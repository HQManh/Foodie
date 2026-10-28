// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewCoating$$PlayStep
// address: 0x41057ac
// body: available
// range: 0x41057ac-0x4105b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4105b4c to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4105b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewCoating__PlayStep(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((DAT_0951618b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf0);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091dbe60);
    FUN_03f5c2a4(&DAT_091eaf50);
    FUN_03f5c2a4(&DAT_09191118);
    FUN_03f5c2a4(&DAT_091eaf58);
    FUN_03f5c2a4(&DAT_09191120);
    DAT_0951618b = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191118);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_2);
    *(undefined4 *)(lVar2 + 0x18) = param_1;
    AnhPD_FoodOrder_StationGroupView__PlayStep(param_1,param_2,0);
    if (*(char *)(param_2 + 0x38) == '\0') {
      lVar3 = thunk_FUN_03f9944c(DAT_09191120);
      System_Object___ctor(lVar3,0);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar2);
        lVar2 = UnityEngine_Component__get_transform(param_2,0);
        if (lVar2 != 0) {
          fVar6 = (float)UnityEngine_Transform__get_localEulerAngles(lVar2,0);
          *(bool *)(lVar3 + 0x10) = fVar6 != 0.0;
          uVar4 = UnityEngine_Component__get_transform(param_2,0);
          DG_Tweening_ShortcutExtensions__DOComplete(uVar4,1,0);
          uVar4 = UnityEngine_Component__get_transform(param_2,0);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
          fVar6 = (float)((ulong)uVar7 >> 0x20) * 0.3;
          DG_Tweening_ShortcutExtensions__DOPunchPosition
                    (CONCAT44(fVar6,(float)uVar7 * 0.3),fVar6,
                     *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.3,0x3e19999a,0x3f800000,
                     uVar4,1,0,0);
          uVar4 = UnityEngine_Component__get_transform(param_2,0);
          uVar1 = 0x42700000;
          if (*(char *)(lVar3 + 0x10) != '\0') {
            uVar1 = 0x42f00000;
          }
          uVar5 = DG_Tweening_ShortcutExtensions__DOLocalRotate(uVar1,0,0,0x3e19999a,uVar4,0,0);
          uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar7,lVar3,DAT_091eaf58,0);
          uVar4 = DAT_091dbcf0;
          goto LAB_04105b34;
        }
      }
    }
    else {
      lVar3 = UnityEngine_Component__get_transform(param_2,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__set_localPosition
                  (*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),0,lVar3,0);
        uVar4 = UnityEngine_Component__get_transform(param_2,0);
        DG_Tweening_ShortcutExtensions__DOComplete(uVar4,1,0);
        uVar4 = UnityEngine_Component__get_transform(param_2,0);
        if (DAT_09515faa == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
        }
        uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
        fVar6 = (float)((ulong)uVar7 >> 0x20) * 0.5;
        uVar4 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                          (CONCAT44(fVar6,(float)uVar7 * 0.5),fVar6,
                           *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.5,0x3e99999a,
                           0x3f800000,uVar4,1,0,0);
        UnityEngine_Random__Range(0,0x3dcccccd,0);
        uVar5 = FUN_04d95c7c(uVar4,DAT_091dbe60);
        uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar7,lVar2,DAT_091eaf50,0);
        uVar4 = DAT_091dbd28;
LAB_04105b34:
        FUN_04d956bc(uVar5,uVar7,uVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

