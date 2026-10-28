// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourneyCards$$OnClickView
// address: 0x435a938
// body: available
// range: 0x435a938-0x435ab2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435ab28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__OnClickView(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_095177fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177fb = 1;
  }
  lVar5 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar5 + 0xb8) != 0) &&
     (CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar5 + 0xb8),0,0), param_2 != 0)) {
    local_48 = *(undefined4 *)(param_2 + 0xd8);
    iVar2 = *(int *)(param_2 + 0xdc);
    uStack_38 = *(undefined8 *)(param_2 + 0xe8);
    local_40 = *(undefined8 *)(param_2 + 0xe0);
    uVar7 = *(undefined8 *)(param_2 + 0xd0);
    local_50 = uVar7;
    iStack_44 = iVar2;
    uVar6 = CakeOrder_Home_Journey_JourneyProgress__IsChapterOpen(&local_50,0);
    if ((uVar6 & 1) == 0) {
      CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__ShowLockedToast(param_1,param_2);
    }
    else if (*(long *)(param_1 + 0x50) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar6 & 1) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            CakeOrder_Home_HomeControllerCookOrder__ShowTab(*(long *)(param_1 + 0x48),2,0);
            lVar5 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (**(long **)(lVar5 + 0xb8) != 0) {
              uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelIndexToShow
                                (**(long **)(lVar5 + 0xb8),uVar7,0);
              if ((*(long *)(param_1 + 0x50) != 0) &&
                 (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 != 0)) {
                uVar3 = iVar2 - 1;
                uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
                uVar1 = uVar4;
                if ((int)uVar3 <= (int)uVar4) {
                  uVar1 = uVar3;
                }
                uVar3 = 0;
                if (-1 < (int)uVar4) {
                  uVar3 = uVar1;
                }
                CakeOrder_Home_HomeSelectionControl__ChangeMapAndLevel(0,lVar5,uVar7,uVar3,0);
                return;
              }
            }
          }
          goto LAB_0435ab28;
        }
      }
    }
    return;
  }
LAB_0435ab28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

