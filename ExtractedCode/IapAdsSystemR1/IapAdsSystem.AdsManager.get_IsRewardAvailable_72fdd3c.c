// rea decompile_all
// name: IapAdsSystem.AdsManager$$get_IsRewardAvailable
// address: 0x72fdd3c
// body: available
// range: 0x72fdd3c-0x72fe0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fe098 to 0x39afee4 FUN_039afee4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fe0b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsManager__get_IsRewardAvailable(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_09520459 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    DAT_09520459 = 1;
  }
  uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsAdsDisabledByCheat(0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x60) == 2) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_072fe0b0;
    uVar5 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Reward();
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    plVar3 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar3 == (long *)0x0) goto LAB_072fe0b0;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_072fdee4;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,3);
LAB_072fdee4:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 == (long *)0x0) goto LAB_072fe0b0;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fdfa0;
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) != 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
LAB_072fe0b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Reward();
    if (iVar1 == 2) {
      plVar3 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091852f0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_072fdfd4;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,3);
LAB_072fdfd4:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091852f8) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_072fe03c;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f8,0);
LAB_072fe03c:
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          if (*(long *)(param_1 + 0x58) != 0) {
            if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) != 1) {
              return 0;
            }
            lVar6 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
            if ((lVar6 != 0) && (lVar6 = FUN_039afee4(3,DAT_091852f0,lVar6), lVar6 != 0)) {
              uVar5 = FUN_039afee4(0,DAT_091852f8,lVar6);
              return uVar5;
            }
          }
        }
      }
      goto LAB_072fe0b0;
    }
    if (iVar1 != 1) {
      return 0;
    }
    plVar3 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar3 == (long *)0x0) goto LAB_072fe0b0;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_072fdf44;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,3);
LAB_072fdf44:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 == (long *)0x0) goto LAB_072fe0b0;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f8) goto LAB_072fdfa0;
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f8,0);
LAB_072fdfac:
                    /* WARNING: Could not recover jumptable at 0x072fdfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar5;
LAB_072fdfa0:
  puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
  goto LAB_072fdfac;
}

