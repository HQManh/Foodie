// rea decompile_all
// name: IapAdsSystem.AdsManager$$OnDestroy
// address: 0x72ff71c
// body: available
// range: 0x72ff71c-0x73001a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7300184 to 0x72fa274 IapAdsSystem.AppsFlyerBootstrap$$remove_OnConversionDataSuccess (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73001a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__OnDestroy(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((DAT_0952045e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174fd0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf808);
    FUN_03f5c2a4(&DAT_091bf810);
    FUN_03f5c2a4(&DAT_091bf818);
    FUN_03f5c2a4(&DAT_091bf820);
    FUN_03f5c2a4(&DAT_091bf828);
    FUN_03f5c2a4(&DAT_091bf830);
    FUN_03f5c2a4(&DAT_091839a8);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_09185c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0952045e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ff878;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,3);
LAB_072ff878:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf828);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_072ff910;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,1);
LAB_072ff910:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ff980;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,3);
LAB_072ff980:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf828);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffa00;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,3);
LAB_072ffa00:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_072ffa70;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,4);
LAB_072ffa70:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf820);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_072ffaf8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,1);
LAB_072ffaf8:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_072ffb68;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,4);
LAB_072ffb68:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf820);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffbe8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,3);
LAB_072ffbe8:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffc84;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,3);
LAB_072ffc84:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf828);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_072ffd1c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,1);
LAB_072ffd1c:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffd8c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,3);
LAB_072ffd8c:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf828);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffe0c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,3);
LAB_072ffe0c:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_072ffe7c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,4);
LAB_072ffe7c:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf820);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_072fff04;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,1);
LAB_072fff04:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
    plVar2 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091852f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_072fff74;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091852f0,4);
LAB_072fff74:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar6 = thunk_FUN_03f9944c(DAT_091839a8);
    IapAdsSystem_DelegateAdsEvent___ctor(uVar6,param_1,DAT_091bf820);
    if (plVar2 == (long *)0x0) goto LAB_073001a0;
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185c40) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072ffff4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185c40,3);
LAB_072ffff4:
    (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    uVar6 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar6,param_1,DAT_091bf808,0);
    if (lVar4 == 0) goto LAB_073001a0;
    IapAdsSystem_InAppManager__remove_onPurchaseBegin(lVar4,uVar6,0);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar6 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar6,param_1,DAT_091bf818,0);
    if (lVar4 == 0) goto LAB_073001a0;
    IapAdsSystem_InAppManager__remove_onPurchaseSuccess(lVar4,uVar6,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar6,param_1,DAT_091bf830,0);
    if (lVar4 == 0) goto LAB_073001a0;
    IapAdsSystem_RemoteConfigManager__remove_onRemoteValueAvailable(lVar4,uVar6,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  uVar6 = thunk_FUN_03f9944c(DAT_09174fd0);
  FUN_071d0d08(uVar6,param_1,DAT_091bf810,0);
  if (lVar4 != 0) {
    IapAdsSystem_AppsFlyerBootstrap__remove_OnConversionDataSuccess(lVar4,uVar6);
    return;
  }
LAB_073001a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

