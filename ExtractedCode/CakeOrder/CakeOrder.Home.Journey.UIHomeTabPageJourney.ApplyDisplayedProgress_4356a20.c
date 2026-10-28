// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$ApplyDisplayedProgress
// address: 0x4356a20
// body: available
// range: 0x4356a20-0x4356d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4356d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4356d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplyDisplayedProgress
               (float param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_095177e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b50);
    FUN_03f5c2a4(&DAT_091a4b58);
    FUN_03f5c2a4(&DAT_091a4b60);
    FUN_03f5c2a4(&DAT_091b1500);
    FUN_03f5c2a4(&DAT_091b1508);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e7 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  *(float *)(param_2 + 0x148) = param_1;
  if (*(long *)(param_2 + 0x120) == 0) goto LAB_04356d84;
  if (*(int *)(*(long *)(param_2 + 0x120) + 0x18) != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar4 & 1) != 0) {
      if (DAT_09516626 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516626 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = -0x80000000;
      if ((float)(int)param_1 != INFINITY) {
        iVar1 = (int)param_1;
      }
      if (iVar1 != *(int *)(param_2 + 0x14c)) {
        CakeOrder_Home_Journey_UIHomeTabPageJourney__RefreshItemStates(param_2,iVar1);
      }
      uVar9 = CakeOrder_Home_Journey_UIHomeTabPageJourney__ToDisplayLevel(param_1);
      if ((param_3 & 1) != 0) {
        CakeOrder_Home_Journey_UIHomeTabPageJourney__FireMilestonesPassed
                  (*(undefined4 *)(param_2 + 0x158),uVar9,param_2);
      }
      *(undefined4 *)(param_2 + 0x158) = uVar9;
      if (*(long *)(param_2 + 0x120) != 0) {
        FUN_057e185c(&local_88,*(long *)(param_2 + 0x120),DAT_091b1500);
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_60 = local_78;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar4 = FUN_071bd28c(&local_70,DAT_091a4b58), (uVar4 & 1) != 0) {
          if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CakeOrder_Home_Journey_UIJourneyChapterSection__SetFillAtLevel(uVar9,local_60,0);
        }
        FUN_071bd288(&local_70,DAT_091a4b50);
        uVar7 = *(undefined8 *)(param_2 + 0xd0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar5 = CakeOrder_Home_Journey_UIHomeTabPageJourney__SectionForLevel(uVar9,param_2);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
        if ((uVar4 & 1) == 0) {
          uVar9 = CakeOrder_Home_Journey_UIHomeTabPageJourney__GetLevelWorldY(uVar9,param_2);
        }
        else {
          if (lVar5 == 0) goto LAB_04356d84;
          uVar9 = CakeOrder_Home_Journey_UIJourneyChapterSection__GetLevelWorldY(uVar9,lVar5,0);
        }
        if ((*(long *)(param_2 + 0xd0) != 0) &&
           (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0xd0),0), lVar6 != 0))
        {
          UnityEngine_GameObject__SetActive(lVar6,1,0);
          lVar8 = *(long *)(param_2 + 0xd0);
          lVar6 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance();
          if ((lVar6 != 0) && (lVar8 != 0)) {
            iVar2 = iVar1;
            if (*(int *)(lVar6 + 0x20) <= iVar1) {
              iVar2 = *(int *)(lVar6 + 0x20);
            }
            iVar3 = 0;
            if (-1 < iVar1) {
              iVar3 = iVar2;
            }
            CakeOrder_Home_Journey_UIJourneyMarker__SetLevel(lVar8,iVar3,0);
            if (*(long *)(param_2 + 0xd0) != 0) {
              lVar6 = CakeOrder_Home_Journey_UIJourneyMarker__get_RectTransform
                                (*(long *)(param_2 + 0xd0),0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
              if ((uVar4 & 1) == 0) {
                if (lVar6 != 0) {
                  uVar10 = UnityEngine_Transform__get_position(lVar6,0);
                  goto LAB_04356d28;
                }
              }
              else if ((lVar5 != 0) &&
                      (uVar10 = CakeOrder_Home_Journey_UIJourneyChapterSection__get_WorldCenterX
                                          (lVar5,0), lVar6 != 0)) {
LAB_04356d28:
                UnityEngine_Transform__get_position(lVar6,0);
                UnityEngine_Transform__set_position(uVar10,uVar9,lVar6,0);
                if ((param_3 & 1) == 0) {
                  return;
                }
                CakeOrder_Home_Journey_UIHomeTabPageJourney__ToContentLocalY(uVar9,param_2);
                CakeOrder_Home_Journey_UIHomeTabPageJourney__CenterOnContentLocalY(param_2);
                return;
              }
            }
          }
        }
      }
LAB_04356d84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

