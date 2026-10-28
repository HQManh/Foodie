// rea decompile_all
// name: Datpt.Cook_Order.KitchenTimer$$Show
// address: 0x41af0b4
// body: available
// range: 0x41af0b4-0x41af5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41af5d8 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41af5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_KitchenTimer__Show
               (float param_1,float param_2,float param_3,long param_4,byte param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_095168dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091d20d0);
    FUN_03f5c2a4(&DAT_091d20d8);
    FUN_03f5c2a4(&DAT_091d20e0);
    FUN_03f5c2a4(&DAT_091d20e8);
    FUN_03f5c2a4(&DAT_091d20c8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbcf0);
    FUN_03f5c2a4(&DAT_091dbd88);
    FUN_03f5c2a4(&DAT_091dbe78);
    FUN_03f5c2a4(&DAT_091dbe80);
    DAT_095168dd = 1;
  }
  plVar5 = (long *)(param_4 + 0x70);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill(*plVar5,0,0);
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_4 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8(plVar5,uVar1);
  *(float *)(param_4 + 0x6c) = param_3;
  *(byte *)(param_4 + 0x68) = param_5 & 1;
  if (*(long *)(param_4 + 0x40) != 0) {
    UnityEngine_UI_Image__set_fillAmount(0,*(long *)(param_4 + 0x40),0);
    if (*(long *)(param_4 + 0x48) != 0) {
      UnityEngine_UI_Image__set_fillAmount(0,*(long *)(param_4 + 0x48),0);
      lVar2 = UnityEngine_Component__get_transform(param_4,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar2 != 0) {
        puVar4 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale(*puVar4,puVar4[1],puVar4[2],lVar2,0);
        lVar2 = *(long *)(param_4 + 0x50);
        if (lVar2 != 0) {
          uVar7 = UnityEngine_Transform__get_localEulerAngles(lVar2,0);
          if (*(long *)(param_4 + 0x50) != 0) {
            UnityEngine_Transform__get_localEulerAngles(*(long *)(param_4 + 0x50),0);
            UnityEngine_Transform__set_localEulerAngles(uVar7,lVar2,0);
            uVar6 = *(undefined8 *)(param_4 + 0x70);
            uVar1 = UnityEngine_Component__get_transform(param_4,0);
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
            uVar1 = DG_Tweening_ShortcutExtensions__DOScale
                              (*(float *)(lVar2 + 0xc) * param_1,*(float *)(lVar2 + 0x10) * param_1,
                               *(float *)(lVar2 + 0x14) * param_1,0x3e99999a,uVar1,0);
            DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar1,0);
            lVar2 = *(long *)(param_4 + 0x50);
            if (lVar2 != 0) {
              uVar1 = *(undefined8 *)(param_4 + 0x70);
              uVar7 = UnityEngine_Transform__get_localEulerAngles(lVar2,0);
              if (*(long *)(param_4 + 0x50) != 0) {
                UnityEngine_Transform__get_localEulerAngles(*(long *)(param_4 + 0x50),0);
                uVar6 = DG_Tweening_ShortcutExtensions__DOLocalRotate(uVar7,lVar2,1,0);
                uVar6 = FUN_04d95e8c(uVar6,1,DAT_091dbe78);
                uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar3,param_4,DAT_091d20c8,0);
                uVar6 = FUN_04d95798(uVar6,uVar3,DAT_091dbd88);
                uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar3,param_4,DAT_091d20e0,0);
                uVar6 = FUN_04d956bc(uVar6,uVar3,DAT_091dbcf0);
                DG_Tweening_TweenSettingsExtensions__Append(uVar1,uVar6,0);
                uVar6 = *(undefined8 *)(param_4 + 0x70);
                uVar1 = DG_Tweening_DOTweenModuleUI__DOFillAmount
                                  (0x3f800000,param_2,*(undefined8 *)(param_4 + 0x40),0);
                uVar1 = FUN_04d95e8c(uVar1,1,DAT_091dbe80);
                DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar1,0);
                lVar2 = *(long *)(param_4 + 0x50);
                if (lVar2 != 0) {
                  uVar1 = *(undefined8 *)(param_4 + 0x70);
                  uVar7 = UnityEngine_Transform__get_localEulerAngles(lVar2,0);
                  if (*(long *)(param_4 + 0x50) != 0) {
                    UnityEngine_Transform__get_localEulerAngles(*(long *)(param_4 + 0x50),0);
                    uVar6 = DG_Tweening_ShortcutExtensions__DOLocalRotate(uVar7,lVar2,1,0);
                    uVar6 = FUN_04d95e8c(uVar6,1,DAT_091dbe78);
                    DG_Tweening_TweenSettingsExtensions__Append(uVar1,uVar6,0);
                    lVar2 = *plVar5;
                    if ((param_5 & 1) == 0) {
                      uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
                      DG_Tweening_TweenCallback___ctor(uVar1,param_4,DAT_091d20d0,0);
                    }
                    else {
                      uVar1 = DG_Tweening_DOTweenModuleUI__DOFillAmount
                                        (0x3f800000,param_3,*(undefined8 *)(param_4 + 0x48),0);
                      uVar1 = FUN_04d95e8c(uVar1,1,DAT_091dbe80);
                      DG_Tweening_TweenSettingsExtensions__Join(lVar2,uVar1,0);
                      uVar6 = *(undefined8 *)(param_4 + 0x70);
                      uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
                      DG_Tweening_TweenCallback___ctor(uVar1,param_4,DAT_091d20e8,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback
                                (param_3 * 0.5 + param_2,uVar6,uVar1,0);
                      lVar2 = *(long *)(param_4 + 0x70);
                      uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
                      DG_Tweening_TweenCallback___ctor(uVar1,param_4,DAT_091d20d8,0);
                    }
                    FUN_04d956bc(lVar2,uVar1,DAT_091dbd18);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

