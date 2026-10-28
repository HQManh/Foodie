// rea decompile_all
// name: IapAdsSystem.AdsManager$$ShowInter
// address: 0x7303018
// body: available
// range: 0x7303018-0x7303397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7303394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ShowInter(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if ((DAT_0952046a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    FUN_03f5c2a4(&DAT_0920d338);
    DAT_0952046a = 1;
  }
  local_40 = 0;
  local_50 = 0;
  local_38 = 0;
  local_48 = param_1;
  thunk_FUN_03f5d7b8(&local_48,param_1);
  local_40 = param_2;
  thunk_FUN_03f5d7b8(&local_40,param_2);
  local_38 = param_3;
  thunk_FUN_03f5d7b8(&local_38,param_3);
  uVar4 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseAds(0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d338,0);
  }
  else {
    uVar4 = IapAdsSystem_AdsManager__IsPassInterRules(param_1,&local_50);
    uVar1 = local_50;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar1,0);
    if ((uVar4 & 1) == 0) goto LAB_073031d0;
    uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_CountLvPlayedInSession(0);
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    if (((local_40 == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
       (IapAdsSystem_AdsDataTracking__AdInterLogicgame(), *(long *)(param_1 + 0x50) == 0))
    goto LAB_07303394;
    IapAdsSystem_AdsDataTracking__AppsFlyerTrackInterTriggered();
    if (*(int *)(param_1 + 0x60) == 1) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_07303394;
      iVar3 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Interstitial();
      if (iVar3 == 2) {
        lVar7 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
        if ((lVar7 == 0) || (lVar7 = FUN_039afee4(4,DAT_091852f0,lVar7), lVar7 == 0))
        goto LAB_07303394;
        uVar4 = FUN_039afee4(0,DAT_091852f8,lVar7);
        if ((uVar4 & 1) != 0) {
          IapAdsSystem_AdsManager__<ShowInter>g__ShowInterMax_111_0(param_1,&local_48);
          return;
        }
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_07303394;
        if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) != 1) goto LAB_073031d0;
        lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if (lVar7 == 0) goto LAB_07303394;
        lVar7 = FUN_039afee4(4,DAT_091852f0,lVar7);
      }
      else {
        if (iVar3 != 1) goto LAB_073031d0;
        lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if (lVar7 == 0) goto LAB_07303394;
        lVar7 = FUN_039afee4(4,DAT_091852f0,lVar7);
      }
      if (lVar7 == 0) {
LAB_07303394:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_039afee4(0,DAT_091852f8,lVar7);
    }
    else {
      if (*(int *)(param_1 + 0x60) != 2) goto LAB_073031d0;
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_07303394;
      iVar3 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Interstitial();
      if (iVar3 == 0) goto LAB_073031d0;
      plVar5 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
      if (plVar5 == (long *)0x0) goto LAB_07303394;
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091852f0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_073032cc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f0,4);
LAB_073032cc:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar5 == (long *)0x0) goto LAB_07303394;
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091852f8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07303334;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f8,0);
LAB_07303334:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if ((uVar4 & 1) != 0) {
      IapAdsSystem_AdsManager__<ShowInter>g__ShowInterAdmob_111_1(param_1,&local_48);
      return;
    }
  }
LAB_073031d0:
  if (local_38 != 0) {
    (**(code **)(local_38 + 0x18))
              (*(undefined8 *)(local_38 + 0x40),local_40,1,*(undefined8 *)(local_38 + 0x28));
  }
  return;
}

