// rea decompile_all
// name: IapAdsSystem.AdsManager$$ResolveCampaignProfile
// address: 0x7300d50
// body: available
// range: 0x7300d50-0x7300f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7300f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300f84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300f90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ResolveCampaignProfile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_09520477 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fb630);
    DAT_09520477 = 1;
  }
  lVar1 = IapAdsSystem_AdsManager__get_CampaignName(param_1);
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar2 = IapAdsSystem_AdsCampaignConfig__ResolveProfileId(*(long *)(param_1 + 0xe8),lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    uVar6 = 0;
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x40);
      uVar6 = IapAdsSystem_AdsCampaignProfile__GetRemoteKey(uVar2,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar6,uVar6);
      }
      uVar6 = IapAdsSystem_RemoteConfigManager__GetString(lVar7,uVar6,0);
    }
    plVar4 = (long *)IapAdsSystem_AdsCampaignProfile__Create(uVar2,uVar6);
    plVar8 = (long *)(param_1 + 0xf0);
    plVar5 = (long *)*plVar8;
    if (plVar5 == (long *)0x0) {
      *plVar8 = (long)plVar4;
      thunk_FUN_03f5d7b8(plVar8,plVar4);
    }
    else {
      uVar2 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      if (plVar4 == (long *)0x0) goto LAB_07300f80;
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar3 = System_String__op_Inequality(uVar2,uVar6,0);
      *plVar8 = (long)plVar4;
      thunk_FUN_03f5d7b8(plVar8,plVar4);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    plVar8 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar8 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_07300f88:
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar1;
        thunk_FUN_03f5d7b8(plVar8 + 4,lVar1);
        if ((plVar4 != (long *)0x0) &&
           (lVar1 = thunk_FUN_03f99350(plVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar1 == 0))
        goto LAB_07300f88;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = (long)plVar4;
          thunk_FUN_03f5d7b8(plVar8 + 5,plVar4);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogFormat(DAT_091fb630,plVar8,0);
          if ((plVar5 != (long *)0x0) && (lVar1 = *(long *)(param_1 + 0x110), lVar1 != 0)) {
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07300f80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

