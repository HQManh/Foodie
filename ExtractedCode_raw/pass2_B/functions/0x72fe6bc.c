// rea decompile_all
// name: IapAdsSystem.AdsManager$$get_IsBannerAvailable
// address: 0x72fe6bc
// body: available
// range: 0x72fe6bc-0x72fea43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fea28 to 0x39afee4 FUN_039afee4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fea40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsManager__get_IsBannerAvailable(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0952045b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    DAT_0952045b = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fea40;
  iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mediation();
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x58) == 0) {
LAB_072fea40:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Banner();
    if (iVar1 == 2) {
      plVar2 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f0) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_072fe95c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,5);
LAB_072fe95c:
        plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar2 != (long *)0x0) {
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091852f8) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_072fe9c4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f8,0);
LAB_072fe9c4:
          uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          if (*(long *)(param_1 + 0x58) != 0) {
            if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) != 1) {
              return 0;
            }
            lVar5 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
            if ((lVar5 != 0) && (lVar5 = FUN_039afee4(5,DAT_091852f0,lVar5), lVar5 != 0)) {
              uVar4 = FUN_039afee4(0,DAT_091852f8,lVar5);
              return uVar4;
            }
          }
        }
      }
      goto LAB_072fea40;
    }
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        return 1;
      }
      return 0;
    }
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_072fea40;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_072fe8cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,5);
LAB_072fe8cc:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 == (long *)0x0) goto LAB_072fea40;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fe928;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fea40;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mediation();
    if (iVar1 != 2) {
      return 0;
    }
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fea40;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Banner();
    if (iVar1 == 0) {
      return 1;
    }
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_072fea40;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_072fe86c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,5);
LAB_072fe86c:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 == (long *)0x0) goto LAB_072fea40;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fe928;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f8,0);
LAB_072fe934:
                    /* WARNING: Could not recover jumptable at 0x072fe948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar4;
LAB_072fe928:
  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
  goto LAB_072fe934;
}

