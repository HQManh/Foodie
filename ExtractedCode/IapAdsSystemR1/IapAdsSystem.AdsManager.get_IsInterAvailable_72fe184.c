// rea decompile_all
// name: IapAdsSystem.AdsManager$$get_IsInterAvailable
// address: 0x72fe184
// body: available
// range: 0x72fe184-0x72fe507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fe500 to 0x39afee4 FUN_039afee4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fe504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsManager__get_IsInterAvailable(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0952045a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    DAT_0952045a = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe504;
  iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mediation();
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe504;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Interstitial();
    if (iVar1 == 2) {
      plVar3 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if (plVar3 == (long *)0x0) {
LAB_072fe504:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091852f0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_072fe428;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,4);
LAB_072fe428:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 == (long *)0x0) goto LAB_072fe504;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091852f8) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_072fe490;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f8,0);
LAB_072fe490:
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar6 & 1) != 0) goto LAB_072fe4a0;
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe504;
      if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) == 1) {
        lVar5 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if ((lVar5 != 0) && (lVar5 = FUN_039afee4(4,DAT_091852f0,lVar5), lVar5 != 0)) {
          uVar2 = FUN_039afee4(0,DAT_091852f8,lVar5);
          return uVar2;
        }
        goto LAB_072fe504;
      }
    }
    else {
      if (iVar1 == 1) {
        plVar3 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if (plVar3 == (long *)0x0) goto LAB_072fe504;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_072fe398;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,4);
LAB_072fe398:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 == (long *)0x0) goto LAB_072fe504;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fe3f4;
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
LAB_072fe3e4:
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f8,0);
LAB_072fe400:
                    /* WARNING: Could not recover jumptable at 0x072fe414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        return uVar2;
      }
      if (iVar1 == 0) goto LAB_072fe4a0;
    }
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe504;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mediation();
    if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe504;
      iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Interstitial();
      if (iVar1 != 0) {
        plVar3 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if (plVar3 == (long *)0x0) goto LAB_072fe504;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_072fe338;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,4);
LAB_072fe338:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 == (long *)0x0) goto LAB_072fe504;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fe3f4;
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        goto LAB_072fe3e4;
      }
    }
LAB_072fe4a0:
    uVar2 = 1;
  }
  return uVar2;
LAB_072fe3f4:
  puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
  goto LAB_072fe400;
}

