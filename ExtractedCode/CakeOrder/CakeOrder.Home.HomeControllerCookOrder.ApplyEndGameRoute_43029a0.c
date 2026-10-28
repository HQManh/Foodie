// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$ApplyEndGameRoute
// address: 0x43029a0
// body: available
// range: 0x43029a0-0x4302d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4302d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__ApplyEndGameRoute
               (undefined8 param_1,ulong param_2,undefined8 *param_3,uint *param_4,
               undefined8 *param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint local_64;
  undefined8 local_58;
  
  if ((DAT_0951755c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_0921ccb0);
    FUN_03f5c2a4(&DAT_0921cca8);
    DAT_0951755c = 1;
  }
  local_58 = 0;
  local_64 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = 0xffffffff;
  iVar1 = CakeOrder_Home_HomeControllerCookOrder__GetLastPlayableMapIndex();
  if (iVar1 < 0) {
    return;
  }
  lVar4 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
  if (lVar4 == 0) goto LAB_04302d24;
  lVar4 = *(long *)(lVar4 + 0x38);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x20) == 2)) {
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar9 = **(long **)(lVar5 + 0xb8);
    lVar5 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar6 = CakeOrder_Home_HomeControllerCookOrder__TryFindFirstExtraLevelNotWon
                      (&local_58,&local_64);
    if ((uVar6 & 1) == 0) {
      uVar6 = CakeOrder_Home_HomeControllerCookOrder__IsAllPlayableMapsDone(1);
      if ((uVar6 & 1) != 0) {
        uVar7 = CakeOrder_Home_HomeControllerCookOrder__FindNextComingSoonMapId(iVar1);
        uVar6 = System_String__IsNullOrEmpty(uVar7,0);
        if ((uVar6 & 1) == 0) {
          uVar8 = System_String__Concat(DAT_0921cca8,uVar7,0);
          iVar2 = UnityEngine_PlayerPrefs__GetInt(uVar8,0,0);
          if (iVar2 == 0) {
            UnityEngine_PlayerPrefs__SetInt(uVar8,1,0);
            UnityEngine_PlayerPrefs__Save(0);
            if ((lVar4 == 0) ||
               (uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x10),0),
               (uVar6 & 1) != 0)) {
              if (lVar9 == 0) {
LAB_04302d24:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar9,iVar1,0);
              *param_3 = uVar8;
              thunk_FUN_03f5d7b8(param_3,uVar8);
              if (lVar5 == 0) goto LAB_04302d24;
              uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelIndexToShow
                                (lVar5,*param_3,0);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
            }
            else {
              *param_3 = *(undefined8 *)(lVar4 + 0x10);
              thunk_FUN_03f5d7b8(param_3);
              uVar3 = *(uint *)(lVar4 + 0x18);
            }
            *param_4 = uVar3;
            *param_5 = uVar7;
            thunk_FUN_03f5d7b8(param_5,uVar7);
            *param_6 = 0;
          }
          else {
            *param_3 = uVar7;
            thunk_FUN_03f5d7b8(param_3,uVar7);
            *param_4 = 0;
          }
        }
      }
    }
    else {
      if ((param_2 & 1) == 0) {
        if (lVar9 == 0) goto LAB_04302d24;
      }
      else {
        if ((lVar4 == 0) || (lVar9 == 0)) goto LAB_04302d24;
        CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar9,*(undefined8 *)(lVar4 + 0x10),0);
        iVar2 = CakeOrder_Home_HomeControllerCookOrder__GetFirstExtraLevelNotWon();
        if (-1 < iVar2) {
          return;
        }
      }
      uVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar9,iVar1,0);
      uVar8 = System_String__Concat(DAT_0921ccb0,uVar7,0);
      iVar1 = UnityEngine_PlayerPrefs__GetInt(uVar8,0,0);
      if (iVar1 == 0) {
        UnityEngine_PlayerPrefs__SetInt(uVar8,1,0);
        UnityEngine_PlayerPrefs__Save(0);
        *param_3 = uVar7;
        thunk_FUN_03f5d7b8(param_3,uVar7);
        if ((lVar4 == 0) ||
           (uVar6 = System_String__op_Equality(*(undefined8 *)(lVar4 + 0x10),uVar7,0),
           (uVar6 & 1) == 0)) {
          if (lVar5 == 0) goto LAB_04302d24;
          uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelIndexToShow
                            (lVar5,uVar7,0);
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar3 = *(uint *)(lVar4 + 0x18);
        }
        *param_4 = uVar3;
        *param_5 = local_58;
        thunk_FUN_03f5d7b8(param_5);
        *param_6 = local_64;
      }
      else {
        *param_3 = local_58;
        thunk_FUN_03f5d7b8(param_3);
        *param_4 = local_64;
      }
    }
  }
  return;
}

