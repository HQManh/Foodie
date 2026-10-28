// rea decompile_all
// name: CakeOrder.Home.HomeMapNpcSpawnControl$$OnClickNpc
// address: 0x432e250
// body: available
// range: 0x432e250-0x432e63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432e634 to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x432e638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapNpcSpawnControl__OnClickNpc(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_095176be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ad630);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c3e8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_0918a290);
    FUN_03f5c2a4(&DAT_09220008);
    DAT_095176be = 1;
  }
  if ((*(char *)(param_1 + 0x48) != '\0') || (*(long *)(param_1 + 0x30) == 0)) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (**(long **)(lVar3 + 0xb8) != 0)) {
    lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                      (**(long **)(lVar3 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),0
                      );
    lVar8 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (((lVar3 != 0) && (*(long *)(param_1 + 0x30) != 0)) && (**(long **)(lVar8 + 0xb8) != 0)) {
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                (**(long **)(lVar8 + 0xb8),*(undefined8 *)(lVar3 + 0x18),
                 *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),DAT_09220008,0,0);
      lVar8 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (**(long **)(lVar8 + 0xb8) != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar8 + 0xb8),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar4 = CakeOrder_Home_HomeMapNpcSpawnControl__GetKeyClaimedReward
                            (*(undefined8 *)(param_1 + 0x40),
                             *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x10));
          UnityEngine_PlayerPrefs__SetInt(uVar4,1,0);
          UnityEngine_PlayerPrefs__Save(0);
          *(undefined1 *)(param_1 + 0x48) = 1;
          if (param_2 != 0) {
            CakeOrder_Home_NpcHomeControl__HideNoti(param_2);
            lVar8 = *(long *)(DAT_091b4cf8 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            lVar10 = **(long **)(lVar8 + 0xb8);
            lVar5 = thunk_FUN_03f9944c(DAT_0918a290);
            CakeOrder_UI_RewardListData___ctor(lVar5,0);
            lVar6 = thunk_FUN_03f9944c(DAT_0917c3e8);
            FUN_057e0400(lVar6,DAT_091ad628);
            lVar8 = DAT_091ad630;
            if (lVar6 != 0) {
              lVar9 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar7 = lVar3;
                  thunk_FUN_03f5d7b8(plVar7,lVar3);
                }
                else {
                  FUN_057e0c68(lVar6,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                if (lVar5 != 0) {
                  *(long *)(lVar5 + 0x10) = lVar6;
                  thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),lVar6);
                  lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
                  FUN_05796918(lVar8,DAT_091adc70);
                  lVar3 = DAT_091adc88;
                  if ((*(long *)(param_1 + 0x30) != 0) && (lVar8 != 0)) {
                    lVar6 = *(long *)(lVar8 + 0x10);
                    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20);
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
                      }
                      else {
                        FUN_057971a8(lVar8,uVar1,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar5 + 0x18) = lVar8;
                      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar8);
                      if (lVar10 != 0) {
                        uVar4 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(lVar10,lVar5,0,0,0);
                        Utilities_AsyncExtension__RunWithLogException(uVar4,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

