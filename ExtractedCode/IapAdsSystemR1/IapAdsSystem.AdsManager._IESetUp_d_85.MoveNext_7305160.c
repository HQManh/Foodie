// rea decompile_all
// name: IapAdsSystem.AdsManager.<IESetUp>d__85$$MoveNext
// address: 0x7305160
// body: available
// range: 0x7305160-0x73052c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73052c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsManager_<IESetUp>d__85__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09520485 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf830);
    DAT_09520485 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar4 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar2 == 0) goto LAB_073052c4;
    lVar3 = *(long *)(lVar2 + 0x40);
    *(float *)(param_1 + 0x28) = fVar4 + *(float *)(lVar2 + 0x20);
    if (lVar3 == 0) goto LAB_073052c4;
    if (*(char *)(lVar3 + 0x5c) != '\0') goto LAB_073052a4;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,lVar2,DAT_091bf830,0);
    IapAdsSystem_RemoteConfigManager__add_onRemoteValueAvailable(lVar3,uVar1,0);
  }
  fVar4 = (float)UnityEngine_Time__get_unscaledTime(0);
  fVar6 = *(float *)(param_1 + 0x28);
  if (fVar4 < fVar6) {
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar2 + 0x40) + 0x5c) != '\0') {
        return 0;
      }
      fVar4 = (float)UnityEngine_Time__get_unscaledTime(0);
      fVar6 = fVar6 - fVar4;
      *(undefined8 *)(param_1 + 0x18) = 0;
      fVar4 = 1.0;
      if (fVar6 <= 1.0) {
        fVar4 = fVar6;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar4;
      }
      *(float *)(lVar2 + 200) = fVar5 / *(float *)(lVar2 + 0x20);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar2 != 0) {
LAB_073052a4:
    IapAdsSystem_AdsManager__UpdateRemoteConfig(lVar2);
    return 0;
  }
LAB_073052c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

