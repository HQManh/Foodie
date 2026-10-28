// rea decompile_all
// name: IapAdsSystem.AppsFlyerBootstrap$$HandleConversionDataSuccess
// address: 0x7305acc
// body: available
// range: 0x7305acc-0x7305ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7305ca4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AppsFlyerBootstrap__HandleConversionDataSuccess(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((DAT_0952048d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0921f448);
    FUN_03f5c2a4(&DAT_09218818);
    FUN_03f5c2a4(&DAT_09217338);
    FUN_03f5c2a4(&DAT_0921a708);
    FUN_03f5c2a4(&DAT_09218828);
    FUN_03f5c2a4(&DAT_092173d0);
    DAT_0952048d = 1;
  }
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AppsFlyerSDK_AppsFlyer__AFLog(DAT_0921a708,param_2,0);
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(param_2,0);
  uVar2 = IapAdsSystem_AppsFlyerBootstrap__GetString(uVar1,DAT_092173d0);
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = uVar2;
  thunk_FUN_03f5d7b8(puVar5);
  uVar2 = IapAdsSystem_AppsFlyerBootstrap__GetString(uVar1,DAT_09218818);
  puVar7 = (undefined8 *)(param_1 + 0x28);
  *puVar7 = uVar2;
  thunk_FUN_03f5d7b8(puVar7);
  lVar3 = IapAdsSystem_AppsFlyerBootstrap__GetString(uVar1,DAT_09218828);
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = lVar3;
  thunk_FUN_03f5d7b8(plVar4);
  uVar1 = IapAdsSystem_AppsFlyerBootstrap__GetString(uVar1,DAT_0921f448);
  puVar6 = (undefined8 *)(param_1 + 0x40);
  *puVar6 = uVar1;
  thunk_FUN_03f5d7b8(puVar6);
  lVar3 = *(long *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x22) = 1;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),*puVar7,*plVar4,*puVar5,*puVar6,
               *(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x10)) {
      UnityEngine_PlayerPrefs__SetString(DAT_09217338,lVar3,0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

