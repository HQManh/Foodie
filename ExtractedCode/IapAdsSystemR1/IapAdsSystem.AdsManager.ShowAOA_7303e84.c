// rea decompile_all
// name: IapAdsSystem.AdsManager$$ShowAOA
// address: 0x7303e84
// body: available
// range: 0x7303e84-0x730439f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730439c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ShowAOA(long param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  
  if ((DAT_0952046d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180df0);
    FUN_03f5c2a4(&DAT_091813a0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_09185340);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0921cb48);
    FUN_03f5c2a4(&DAT_0920d2f8);
    FUN_03f5c2a4(&DAT_0920d300);
    FUN_03f5c2a4(&DAT_09212540);
    FUN_03f5c2a4(&DAT_0920d308);
    DAT_0952046d = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d308,0);
    if (param_4 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    uVar10 = 2;
LAB_073040c0:
                    /* WARNING: Could not recover jumptable at 0x073040dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x18))(uVar3,uVar10,uVar7);
    return;
  }
  uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseAds(0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d2f8,0);
    if (param_4 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    uVar10 = 0;
    goto LAB_073040c0;
  }
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  uVar2 = System_DateTime__op_LessThan(uVar3,uVar10,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_DateTime__ToString((undefined8 *)(param_1 + 0xa0),DAT_0921cb48,0);
    uVar3 = System_String__Concat(DAT_09212540,uVar3,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar3,0);
  }
  if (param_2 == 2) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0730439c;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_AppSwitch();
  }
  else {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0730439c;
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_AppOpen();
  }
  lVar4 = thunk_FUN_03f9944c(DAT_091813a0);
  System_Object___ctor(lVar4,0);
  local_68 = DAT_09180df0;
  uStack_60 = 0xffffffffffffffff;
  local_58 = param_2;
  uVar3 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) goto LAB_0730439c;
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar4 + 0x28) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),param_3);
  *(long *)(lVar4 + 0x30) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar4 + 0x30),param_4);
  if (*(int *)(param_1 + 0x60) == 1) {
    if (iVar1 == 2) {
      lVar8 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if ((lVar8 == 0) || (lVar8 = FUN_039afee4(7,DAT_091852f0,lVar8), lVar8 == 0))
      goto LAB_0730439c;
      uVar2 = FUN_039aff78(0,DAT_09185340,lVar8,lVar4);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_0730439c;
      if (*(int *)(*(long *)(param_1 + 0x58) + 0x2c) != 1) goto LAB_07304374;
      lVar8 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
      if (lVar8 == 0) goto LAB_0730439c;
      lVar8 = FUN_039afee4(7,DAT_091852f0,lVar8);
    }
    else {
      if (iVar1 != 1) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__Log(DAT_0920d300,0);
        uVar3 = 2;
        goto LAB_07304378;
      }
      lVar8 = IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
      if (lVar8 == 0) goto LAB_0730439c;
      lVar8 = FUN_039afee4(7,DAT_091852f0,lVar8);
    }
    if (lVar8 == 0) {
LAB_0730439c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_039aff78(0,DAT_09185340,lVar8,lVar4);
joined_r0x07304224:
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x60) == 2) && (iVar1 != 0)) {
    plVar5 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar5 == (long *)0x0) goto LAB_0730439c;
    lVar8 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091852f0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_073042f8;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f0,7);
LAB_073042f8:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) goto LAB_0730439c;
    lVar8 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185340) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07304360;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185340,0);
LAB_07304360:
    uVar2 = (*(code *)*puVar6)(plVar5,lVar4,puVar6[1]);
    goto joined_r0x07304224;
  }
LAB_07304374:
  uVar3 = 3;
LAB_07304378:
  IapAdsSystem_AppOpenAdsData__TriggerFailed(lVar4,uVar3);
  return;
}

