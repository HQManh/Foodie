// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$TrackCurrencyChange
// address: 0x730a450
// body: available
// range: 0x730a450-0x730ab33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730ab2c to 0x72fabb0 IapAdsSystem.DataTrackingManager$$LogEvent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730ab30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_DataTrackingManager__TrackCurrencyChange
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_095204b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183318);
    FUN_03f5c2a4(&DAT_091aee10);
    FUN_03f5c2a4(&DAT_091aee20);
    FUN_03f5c2a4(&DAT_091aee08);
    FUN_03f5c2a4(&DAT_0917c878);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09217e10);
    FUN_03f5c2a4(&DAT_09219f70);
    FUN_03f5c2a4(&DAT_09222fa8);
    FUN_03f5c2a4(&DAT_09219f60);
    FUN_03f5c2a4(&DAT_09218eb0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_09219f68);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_095204b2 = 1;
  }
  param_4 = param_5 - param_4;
  if (param_4 == 0) {
    return;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = -param_4;
  if (-1 < param_4) {
    iVar1 = param_4;
  }
  if (*(int *)(DAT_09183318 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = IapAdsSystem_DataTrackingManager__NormalizeCurrencyName(param_2);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c878);
  FUN_057e0478(lVar4,6,DAT_091aee08);
  uVar7 = DAT_0921e6b0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if (lVar10 == 0) {
      lVar10 = **(long **)(DAT_09535468 + 0xb8);
    }
    uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(uVar5,uVar7,lVar10,0);
    lVar10 = DAT_091aee10;
    if (lVar4 != 0) {
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar6 = uVar5;
          thunk_FUN_03f5d7b8(puVar6,uVar5);
        }
        else {
          FUN_057e0c68(lVar4,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(uVar7,DAT_09225370,(long)iVar1,0);
        lVar10 = DAT_091aee10;
        lVar9 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar6 = uVar7;
            thunk_FUN_03f5d7b8(puVar6,uVar7);
          }
          else {
            FUN_057e0c68(lVar4,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(uVar7,DAT_09219f68,uVar3,0);
          lVar10 = DAT_091aee10;
          lVar9 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar4 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
              puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar6 = uVar7;
              thunk_FUN_03f5d7b8(puVar6,uVar7);
            }
            else {
              FUN_057e0c68(lVar4,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (param_4 < 1) {
              uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(uVar7,DAT_09217e10,(long)param_5,0);
              lVar10 = DAT_091aee10;
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0730ab30;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *puVar6 = uVar7;
                thunk_FUN_03f5d7b8(puVar6,uVar7);
              }
              else {
                FUN_057e0c68(lVar4,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(DAT_09183318 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = IapAdsSystem_DataTrackingManager__NormalizeSpendSource(param_3);
              uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(uVar5,DAT_09222fa8,uVar7,0);
              lVar10 = DAT_091aee10;
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0730ab30;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *puVar6 = uVar5;
                thunk_FUN_03f5d7b8(puVar6,uVar5);
              }
              else {
                FUN_057e0c68(lVar4,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar8 = System_String__IsNullOrEmpty(param_6,0);
              uVar7 = DAT_09220d28;
              if ((uVar8 & 1) != 0) {
                param_6 = IapAdsSystem_DataTrackingManager__CurrencySpendPlacement(param_1,param_3);
              }
              uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(uVar5,uVar7,param_6,0);
              lVar10 = DAT_091aee10;
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0730ab30;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *puVar6 = uVar5;
                thunk_FUN_03f5d7b8(puVar6,uVar5);
              }
              else {
                FUN_057e0c68(lVar4,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar8 = System_String__op_Equality(uVar3,DAT_09218eb0,0);
              if ((uVar8 & 1) != 0) {
                lVar10 = *(long *)(param_1 + 0x20);
                if (lVar10 == 0) goto LAB_0730ab30;
                if (*(char *)(lVar10 + 0x38) != '\0') {
                  *(int *)(lVar10 + 0x4c) = *(int *)(lVar10 + 0x4c) + iVar1;
                }
              }
            }
            else {
              if (*(int *)(DAT_09183318 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = IapAdsSystem_DataTrackingManager__NormalizeEarnPlacement(param_3);
              uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(uVar5,DAT_09220d28,uVar7,0);
              lVar10 = DAT_091aee10;
              lVar9 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0730ab30;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *puVar6 = uVar5;
                thunk_FUN_03f5d7b8(puVar6,uVar5);
              }
              else {
                FUN_057e0c68(lVar4,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x28) == 0) {
              IapAdsSystem_DataTrackingManager__SetUpUserProperties(param_1);
            }
            uVar8 = System_String__op_Equality(uVar3,DAT_09218eb0,0);
            if ((uVar8 & 1) != 0) {
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_0730ab30;
              IapAdsSystem_UserAnalyticsState__RecordCurrency
                        (*(long *)(param_1 + 0x28),0 < param_4,iVar1,0);
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              IapAdsSystem_UserAnalyticsState__Save(*(long *)(param_1 + 0x28),1,0);
              IapAdsSystem_DataTrackingManager__SyncUserProperties(param_1);
              puVar6 = &DAT_09219f60;
              if (param_4 < 1) {
                puVar6 = &DAT_09219f70;
              }
              uVar3 = *puVar6;
              uVar7 = FUN_057e28a4(lVar4,DAT_091aee20);
              IapAdsSystem_DataTrackingManager__LogEvent(param_1,uVar3,uVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_0730ab30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

