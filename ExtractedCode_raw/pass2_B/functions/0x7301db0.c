// rea decompile_all
// name: IapAdsSystem.AdsManager$$ShowBanner
// address: 0x7301db0
// body: available
// range: 0x7301db0-0x73025e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7301f34 to 0x7301760 IapAdsSystem.AdsManager$$HideBanner (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73025d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73025d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73025e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ShowBanner(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 local_24;
  
  if ((DAT_09520463 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fb0);
    FUN_03f5c2a4(&DAT_09181a20);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    FUN_03f5c2a4(&DAT_09185658);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0920d320);
    FUN_03f5c2a4(&DAT_0920d318);
    FUN_03f5c2a4(&DAT_0920d328);
    DAT_09520463 = 1;
  }
  uVar5 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseAds(0);
  if ((uVar5 & 1) == 0) goto LAB_07301f20;
  lVar9 = *(long *)(param_1 + 0xf0);
  if (lVar9 == 0) {
    IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 == 0) goto LAB_073025d4;
  }
  if (*(int *)(lVar9 + 0x44) == 1) {
    plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 == 0) {
      IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
      lVar9 = *(long *)(param_1 + 0xf0);
      if (lVar9 == 0) goto LAB_073025d4;
    }
    if (plVar6 == (long *)0x0) goto LAB_073025d4;
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_073025dc;
    if ((int)plVar6[3] == 0) goto LAB_073025d8;
    plVar6[4] = lVar9;
    thunk_FUN_03f5d7b8(plVar6 + 4,lVar9);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = &DAT_0920d318;
  }
  else {
    if ((param_2 != 1) || (*(int *)(lVar9 + 0x4c) == 1)) {
      iVar1 = IapAdsSystem_IapAdsGlobalConfig__get_MaxMainLvIndexWinned(0);
      iVar2 = IapAdsSystem_AdsManager__get_BannerPassLvRq(param_1);
      if (iVar1 < iVar2) {
        plVar6 = (long *)FUN_03f5c394(DAT_09180318,2);
        uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_MaxMainLvIndexWinned(0);
        local_48 = CONCAT44(local_48._4_4_,uVar3);
        lVar9 = FUN_03f5c42c(DAT_09535420,&local_48);
        if (plVar6 != (long *)0x0) {
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_073025dc:
            uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar9;
            thunk_FUN_03f5d7b8(plVar6 + 4,lVar9);
            local_24 = IapAdsSystem_AdsManager__get_BannerPassLvRq(param_1);
            lVar9 = FUN_03f5c42c(DAT_09535420,&local_24);
            if ((lVar9 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_073025dc;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
              plVar6[5] = lVar9;
              thunk_FUN_03f5d7b8(plVar6 + 5,lVar9);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogFormat(DAT_0920d328,plVar6,0);
              IapAdsSystem_AdsManager__HideBanner(param_1);
              return;
            }
          }
LAB_073025d8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_073025d4;
      }
      lVar9 = thunk_FUN_03f9944c(DAT_09180fb0);
      System_Object___ctor(lVar9,0);
      local_48 = DAT_09181a20;
      uStack_40 = 0xffffffffffffffff;
      local_38 = param_2;
      uVar8 = System_Enum__ToString(&local_48,0);
      if (lVar9 == 0) goto LAB_073025d4;
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar9 + 0x18) = param_3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x18),param_3);
      if (*(int *)(param_1 + 0x60) == 1) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_073025d4;
        iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Banner();
        if (iVar1 == 2) {
          lVar7 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
          if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0,lVar7), lVar7 == 0))
          goto LAB_073025d4;
          uVar5 = FUN_039afee4(0,DAT_091852f8,lVar7);
          if ((uVar5 & 1) != 0) {
            lVar7 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
            if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0,lVar7), lVar7 == 0))
            goto LAB_073025d4;
            FUN_039aff78(0,DAT_09185658,lVar7,lVar9);
            lVar9 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
            if ((lVar9 == 0) || (lVar9 = FUN_039afee4(5,DAT_091852f0,lVar9), lVar9 == 0))
            goto LAB_073025d4;
            FUN_039afee4(1,DAT_09185658,lVar9);
            uVar3 = 2;
LAB_07302478:
            uVar4 = IapAdsSystem_AdsManager__DefaultBannerHeightPixels();
            goto LAB_073025bc;
          }
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_073025d4;
          if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) == 1) {
            lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
            if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0,lVar7), lVar7 == 0))
            goto LAB_073025d4;
            uVar5 = FUN_039afee4(0,DAT_091852f8,lVar7);
            if ((uVar5 & 1) != 0) {
              lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
              if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0,lVar7), lVar7 == 0))
              goto LAB_073025d4;
              FUN_039aff78(0,DAT_09185658,lVar7,lVar9);
              lVar9 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
              if ((lVar9 == 0) || (lVar9 = FUN_039afee4(5,DAT_091852f0,lVar9), lVar9 == 0))
              goto LAB_073025d4;
              uVar3 = 1;
              FUN_039afee4(1,DAT_09185658,lVar9);
              goto LAB_07302478;
            }
          }
          lVar9 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
          if ((lVar9 == 0) || (lVar9 = FUN_039afee4(5,DAT_091852f0,lVar9), lVar9 == 0))
          goto LAB_073025d4;
          FUN_039afee4(1,DAT_09185658,lVar9);
          lVar9 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
          if (lVar9 == 0) goto LAB_073025d4;
          lVar9 = FUN_039afee4(5,DAT_091852f0,lVar9);
          goto joined_r0x0730259c;
        }
        if (iVar1 == 1) {
          lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
          if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0,lVar7), lVar7 == 0))
          goto LAB_073025d4;
          uVar5 = FUN_039afee4(0,DAT_091852f8,lVar7);
          lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
          if ((uVar5 & 1) == 0) {
            if ((lVar7 == 0) || (lVar9 = FUN_039afee4(5,DAT_091852f0), lVar9 == 0))
            goto LAB_073025d4;
            FUN_039afee4(1,DAT_09185658,lVar9);
            uVar3 = 0;
          }
          else {
            if ((lVar7 == 0) || (lVar7 = FUN_039afee4(5,DAT_091852f0), lVar7 == 0))
            goto LAB_073025d4;
            FUN_039aff78(0,DAT_09185658,lVar7,lVar9);
            uVar3 = 1;
          }
          lVar9 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
          if ((lVar9 == 0) || (lVar9 = FUN_039afee4(5,DAT_091852f0,lVar9), lVar9 == 0))
          goto LAB_073025d4;
          FUN_039afee4(1,DAT_09185658,lVar9);
          if ((uVar5 & 1) != 0) goto LAB_07302478;
        }
        else {
          IapAdsSystem_AdsManager__HideBanner(param_1);
        }
      }
      else if (*(int *)(param_1 + 0x60) == 2) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_073025d4;
        iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Banner();
        plVar6 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if (iVar1 != 0) {
          if (plVar6 == (long *)0x0) goto LAB_073025d4;
          lVar7 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091852f0) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_0730238c;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091852f0,5);
LAB_0730238c:
          plVar6 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
          if (plVar6 == (long *)0x0) goto LAB_073025d4;
          lVar7 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185658) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_073023f4;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185658,0);
LAB_073023f4:
          (*(code *)*puVar10)(plVar6,lVar9,puVar10[1]);
          uVar3 = 1;
          goto LAB_07302478;
        }
        if (plVar6 == (long *)0x0) goto LAB_073025d4;
        lVar9 = FUN_039afee4(5,DAT_091852f0,plVar6);
joined_r0x0730259c:
        if (lVar9 == 0) {
LAB_073025d4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_039afee4(1,DAT_09185658,lVar9);
      }
      uVar4 = 0;
      uVar3 = 0;
LAB_073025bc:
      IapAdsSystem_AdsManager__SetBannerHeight(param_1,uVar4,uVar3);
      return;
    }
    plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 == 0) {
      IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
      lVar9 = *(long *)(param_1 + 0xf0);
      if (lVar9 == 0) goto LAB_073025d4;
    }
    if (plVar6 == (long *)0x0) goto LAB_073025d4;
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_073025dc;
    if ((int)plVar6[3] == 0) goto LAB_073025d8;
    plVar6[4] = lVar9;
    thunk_FUN_03f5d7b8(plVar6 + 4,lVar9);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = &DAT_0920d320;
  }
  UnityEngine_Debug__LogFormat(*puVar10,plVar6,0);
LAB_07301f20:
  IapAdsSystem_AdsManager__HideBanner(param_1);
  return;
}

