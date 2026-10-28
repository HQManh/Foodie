// rea decompile_all
// name: IapAdsSystem.AdsManager$$ShowVideo
// address: 0x7303670
// body: available
// range: 0x7303670-0x7303a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7303a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ShowVideo(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  int *piVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_0952046b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fd8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    FUN_03f5c2a4(&DAT_0920d340);
    FUN_03f5c2a4(&DAT_09222af0);
    DAT_0952046b = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = param_1;
  thunk_FUN_03f5d7b8(&local_48,param_1);
  local_40 = param_2;
  thunk_FUN_03f5d7b8(&local_40,param_2);
  local_38 = param_3;
  thunk_FUN_03f5d7b8(&local_38,param_3);
  uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_IsAdsDisabledByCheat(0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d340,0);
    if (local_38 == 0) {
      return;
    }
    pcVar8 = *(code **)(local_38 + 0x18);
    uVar6 = 1;
    goto LAB_07303a64;
  }
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (IapAdsSystem_AdsDataTracking__AdRewardLogicgame(uVar3,local_40),
     *(long *)(param_1 + 0x58) == 0)) goto LAB_07303a84;
  iVar2 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Reward();
  iVar1 = *(int *)(param_1 + 0x60);
  local_60 = DAT_09180fd8;
  uStack_58 = 0xffffffffffffffff;
  local_50 = iVar2;
  uVar6 = System_Enum__ToString(&local_60,0);
  uVar6 = System_String__Concat(DAT_09222af0,uVar6,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar6,0);
  if (iVar1 == 1) {
    if (iVar2 == 2) {
      plVar4 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if (plVar4 == (long *)0x0) goto LAB_07303a84;
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091852f0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_07303980;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091852f0,3);
LAB_07303980:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar4 == (long *)0x0) goto LAB_07303a84;
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091852f8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_073039e8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091852f8,0);
LAB_073039e8:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar3 & 1) != 0) {
        IapAdsSystem_AdsManager__<ShowVideo>g__ShowMax_113_1(param_1,&local_48);
        return;
      }
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_07303a84;
      if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) == 1) {
        lVar7 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
        if ((lVar7 == 0) || (lVar7 = FUN_039afee4(3,DAT_091852f0,lVar7), lVar7 == 0))
        goto LAB_07303a84;
        uVar3 = FUN_039afee4(0,DAT_091852f8,lVar7);
        goto joined_r0x07303a4c;
      }
    }
    else if (iVar2 == 1) goto LAB_07303960;
  }
  else if ((iVar1 == 2) && (iVar2 != 0)) {
    plVar4 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar4 == (long *)0x0) {
LAB_07303a84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091852f0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_073038e8;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091852f0,3);
LAB_073038e8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 == (long *)0x0) goto LAB_07303a84;
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091852f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07303950;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091852f8,0);
LAB_07303950:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
joined_r0x07303a4c:
    if ((uVar3 & 1) != 0) {
LAB_07303960:
      IapAdsSystem_AdsManager__<ShowVideo>g__ShowAdmob_113_0(param_1,&local_48);
      return;
    }
  }
  if (local_38 == 0) {
    return;
  }
  pcVar8 = *(code **)(local_38 + 0x18);
  uVar6 = 2;
LAB_07303a64:
  (*pcVar8)(*(undefined8 *)(local_38 + 0x40),local_40,uVar6,*(undefined8 *)(local_38 + 0x28));
  return;
}

