// rea decompile_all
// name: CakeOrder.InGame.UI.UIComboBar$$SetUp
// address: 0x42b4504
// body: available
// range: 0x42b4504-0x42b49f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b4744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b49f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UI_UIComboBar__SetUp(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined4 local_64;
  
  if ((DAT_095172c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091d4c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc840);
    FUN_03f5c2a4(&DAT_091dc848);
    FUN_03f5c2a4(&DAT_091dc850);
    FUN_03f5c2a4(&DAT_091dc858);
    FUN_03f5c2a4(&DAT_091dc860);
    FUN_03f5c2a4(&DAT_09209fe0);
    DAT_095172c1 = 1;
  }
  local_64 = 0;
  plVar10 = (long *)(param_1 + 0x78);
  *plVar10 = param_2;
  thunk_FUN_03f5d7b8(plVar10,param_2);
  lVar5 = *plVar10;
  if (lVar5 != 0) {
    iVar4 = 0;
    while( true ) {
      iVar3 = CakeOrder_InGame_InGameComboMechanicControl__get_StepRequiredToActivate(lVar5,0);
      if (iVar3 + -1 <= iVar4) break;
      uVar7 = *(undefined8 *)(param_1 + 0x98);
      uVar1 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = FUN_04c35338(uVar7,uVar1,DAT_091d4c40);
      if ((*plVar10 == 0) ||
         (iVar3 = CakeOrder_InGame_InGameComboMechanicControl__get_StepRequiredToActivate
                            (*plVar10,0), lVar5 == 0)) goto LAB_042b4744;
      fVar12 = (float)(iVar4 + 1) / (float)iVar3;
      UnityEngine_RectTransform__set_anchorMin(fVar12,0,lVar5,0);
      UnityEngine_RectTransform__set_anchorMax(fVar12,0x3f800000,lVar5,0);
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],
                 lVar5,0);
      lVar11 = DAT_091af738;
      lVar6 = *(long *)(param_1 + 0xa8);
      if (lVar6 == 0) goto LAB_042b4744;
      lVar8 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_042b4744;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *plVar9 = lVar5;
        thunk_FUN_03f5d7b8(plVar9,lVar5);
      }
      else {
        FUN_057e0c68(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar5 = UnityEngine_Component__get_gameObject(lVar5,0);
      if (lVar5 == 0) goto LAB_042b4744;
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      lVar5 = *plVar10;
      iVar4 = iVar4 + 1;
      if (lVar5 == 0) goto LAB_042b4744;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar5 = *(long *)(param_1 + 0x80);
      iVar4 = CakeOrder_InGame_InGameComboMechanicControl__get_StepRequiredToActivate
                        (*(long *)(param_1 + 0x78),0);
      if (lVar5 != 0) {
        UnityEngine_UI_Slider__set_maxValue((float)iVar4,lVar5,0);
        plVar10 = *(long **)(param_1 + 0x80);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x428))(0,plVar10,*(undefined8 *)(*plVar10 + 0x430));
          if ((*(long *)(param_1 + 0x88) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x88),0), lVar5 != 0
             )) {
            UnityEngine_GameObject__SetActive(lVar5,1,0);
            if (*(long *)(param_1 + 0x78) != 0) {
              plVar10 = *(long **)(param_1 + 0x88);
              local_64 = CakeOrder_InGame_InGameComboMechanicControl__get_TotalProgress
                                   (*(long *)(param_1 + 0x78),0);
              uVar7 = System_Single__ToString(&local_64,DAT_09209fe0,0);
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x558))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x560));
                *(undefined4 *)(param_1 + 0xc4) = 0;
                if ((*(long *)(param_1 + 0x90) != 0) &&
                   (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x90),0),
                   lVar5 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar5,0,0);
                  if (*(long *)(param_1 + 0xd8) != 0) {
                    Coffee_UIExtensions_UIParticle__Stop(*(long *)(param_1 + 0xd8),0);
                    lVar5 = *(long *)(param_1 + 0xe0);
                    if ((lVar5 == 0) || (uVar2 = *(uint *)(lVar5 + 0x18), (int)uVar2 < 1))
                    goto LAB_042b4888;
                    lVar11 = 0;
                    goto LAB_042b4850;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_042b4744;
  while( true ) {
    Coffee_UIExtensions_UIParticle__Stop(lVar6,0);
    Coffee_UIExtensions_UIParticle__Clear(lVar6,0);
    uVar2 = *(uint *)(lVar5 + 0x18);
    lVar11 = lVar11 + 1;
    if ((int)uVar2 <= (int)lVar11) break;
LAB_042b4850:
    if (uVar2 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar5 + 0x20 + lVar11 * 8);
    if (lVar6 == 0) goto LAB_042b4744;
  }
LAB_042b4888:
  lVar5 = *(long *)(param_1 + 0x78);
  uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar7,param_1,DAT_091dc858,0);
  if (lVar5 != 0) {
    CakeOrder_InGame_InGameComboMechanicControl__add_onComboStepIncreased(lVar5,uVar7,0);
    lVar5 = *(long *)(param_1 + 0x78);
    uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar7,param_1,DAT_091dc850,0);
    if (lVar5 != 0) {
      CakeOrder_InGame_InGameComboMechanicControl__add_onComboStepExpired(lVar5,uVar7,0);
      lVar5 = *(long *)(param_1 + 0x78);
      uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar7,param_1,DAT_091dc840,0);
      if (lVar5 != 0) {
        CakeOrder_InGame_InGameComboMechanicControl__add_onComboActivated(lVar5,uVar7,0);
        lVar5 = *(long *)(param_1 + 0x78);
        uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar7,param_1,DAT_091dc848,0);
        if (lVar5 != 0) {
          CakeOrder_InGame_InGameComboMechanicControl__add_onComboDeactivated(lVar5,uVar7,0);
          lVar5 = *(long *)(param_1 + 0x78);
          uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar7,param_1,DAT_091dc860,0);
          if (lVar5 != 0) {
            CakeOrder_InGame_InGameComboMechanicControl__add_onFailedAllComboSteps(lVar5,uVar7,0);
            if (*(char *)(param_1 + 0xb8) != '\0') {
              plVar10 = *(long **)(param_1 + 0xb0);
              if (plVar10 == (long *)0x0) goto LAB_042b4744;
              (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            }
            return;
          }
        }
      }
    }
  }
LAB_042b4744:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

