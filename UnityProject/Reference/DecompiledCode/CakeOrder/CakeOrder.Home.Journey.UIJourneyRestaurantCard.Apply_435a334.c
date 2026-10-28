// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyRestaurantCard$$Apply
// address: 0x435a334
// body: available
// range: 0x435a334-0x435a8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435a8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyRestaurantCard__Apply(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  float fVar13;
  uint local_68;
  uint local_64;
  undefined8 local_58;
  
  if ((DAT_09517843 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092265c0);
    FUN_03f5c2a4(&DAT_09219680);
    FUN_03f5c2a4(&DAT_09211658);
    FUN_03f5c2a4(&DAT_0921f180);
    FUN_03f5c2a4(&DAT_091fedc0);
    DAT_09517843 = 1;
  }
  lVar9 = DAT_09188ad0;
  uVar3 = *(uint *)(param_1 + 0xdc);
  iVar11 = 0;
  local_58 = 0;
  uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar5 = param_2;
  if ((int)uVar1 <= (int)param_2) {
    uVar5 = uVar1;
  }
  uVar2 = 0;
  if (-1 < (int)param_2) {
    uVar2 = uVar5;
  }
  if ((((param_3 & 1) != 0) && (iVar11 = 1, 0 < (int)uVar3)) && ((int)uVar1 <= (int)uVar2)) {
    iVar11 = 2;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(param_1 + 0xf4) = iVar11;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),1,0);
  }
  if (iVar11 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  }
  else {
    bVar4 = 0;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x30);
    if ((bVar4 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
    }
    if (plVar7 == (long *)0x0) goto LAB_0435a8b4;
    (**(code **)(*plVar7 + 0x348))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x350));
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x48),iVar11 == 0 & (bVar4 ^ 1),0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (iVar11 == 0) {
      bVar4 = *(byte *)(param_1 + 0xf0) ^ 1;
    }
    else {
      bVar4 = 0;
    }
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x50),bVar4 != 0,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x38),iVar11 != 0,0);
  }
  local_58 = 0;
  if ((iVar11 == 0) || (*(char *)(param_1 + 0xf0) != '\0')) {
    uVar5 = 0;
    cVar12 = '\x01';
  }
  else {
    uVar5 = CakeOrder_Home_Journey_UIJourneyRestaurantCard__TryGetExtraLevelLockText
                      (param_1,uVar2,&local_58);
    cVar12 = *(char *)(param_1 + 0xf0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive
              (*(long *)(param_1 + 0x68),cVar12 != '\0' || (uVar5 & 1) != 0,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive
              (*(long *)(param_1 + 0x88),cVar12 == '\0' && (uVar5 & 1) == 0,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0435a8b4;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xb8),0,0);
  }
  CakeOrder_Home_Journey_UIJourneyRestaurantCard__ApplyNoti(param_1,iVar11 == 0,uVar2);
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if ((uVar5 & 1) == 0) {
      if (iVar11 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0xa8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(param_1 + 0xa8);
          if (*(int *)(param_1 + 0xf4) == 2) {
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = CakeOrder_Localization_CakeLocalization__Get
                               (DAT_09211658,DAT_09219680,DAT_091fedc0,0);
          }
          else {
            local_64 = uVar2;
            uVar10 = FUN_03f5c42c(DAT_09535420,&local_64);
            local_68 = uVar1;
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_68);
            uVar10 = System_String__Format(DAT_092265c0,uVar10,uVar8,0);
          }
          if (plVar7 == (long *)0x0) goto LAB_0435a8b4;
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x560));
        }
        if ((int)uVar3 < 1) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = (float)(int)uVar2 / (float)(int)uVar1;
        }
        CakeOrder_Home_Journey_UIJourneyRestaurantCard__ApplyFill(fVar13,param_1);
        return;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x70);
      uVar10 = CakeOrder_Home_Journey_UIJourneyRestaurantCard__GetUnlockText(param_1);
      if (plVar7 == (long *)0x0) goto LAB_0435a8b4;
      lVar9 = *plVar7;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) goto LAB_0435a8b4;
      lVar9 = *plVar7;
      uVar10 = local_58;
    }
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x70);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921f180,0);
    if (plVar7 == (long *)0x0) {
LAB_0435a8b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar7;
  }
  (**(code **)(lVar9 + 0x558))(plVar7,uVar10,*(undefined8 *)(lVar9 + 0x560));
  return;
}

