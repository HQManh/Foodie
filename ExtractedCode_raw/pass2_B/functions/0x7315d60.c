// rea decompile_all
// name: IapAdsSystem.IapAdsSystemInitializer.<IEInitializationSequence>d__36$$MoveNext
// address: 0x7315d60
// body: available
// range: 0x7315d60-0x7315fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7315fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IapAdsSystem_IapAdsSystemInitializer_<IEInitializationSequence>d__36__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_0952053c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921ea28);
    FUN_03f5c2a4(&DAT_0921ea18);
    DAT_0952053c = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_07315fa4;
    if (*(char *)(lVar5 + 0x20) == '\0') {
      uVar2 = 0;
      if (*(long *)(lVar5 + 0x28) == 0) goto LAB_07315fa4;
      IapAdsSystem_FirebaseModulesManagers__InitOfflineMode(*(long *)(lVar5 + 0x28),0);
LAB_07315f6c:
      lVar4 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(lVar5 + 0xc0) = 0x3f800000;
      *(undefined1 *)(lVar5 + 0xc4) = 1;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      return 0;
    }
    if (*(long *)(lVar5 + 0x40) != 0) {
      IapAdsSystem_LastestVersionCheck__SetUp();
    }
    uVar2 = 0;
    if (*(long *)(lVar5 + 0x38) == 0) goto LAB_07315fa4;
    IapAdsSystem_InAppManager__SetUp(*(long *)(lVar5 + 0x38),*(undefined8 *)(param_1 + 0x28));
    uVar2 = 0;
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_07315fa4;
    IapAdsSystem_FirebaseModulesManagers__Init(*(long *)(lVar5 + 0x28),0);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar5 == 0) goto LAB_07315fa4;
        uVar2 = 0;
        if (*(long *)(lVar5 + 0x48) == 0) goto LAB_07315fa4;
        IapAdsSystem_AdsDataTracking__Initialize
                  (*(long *)(lVar5 + 0x48),*(undefined8 *)(param_1 + 0x30),0);
        uVar2 = 0;
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_07315fa4;
        uVar2 = IapAdsSystem_AdsManager__SetUp
                          (*(long *)(lVar5 + 0x30),*(undefined8 *)(param_1 + 0x30),0);
      }
      else {
        if (iVar1 != 4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar5 == 0) goto LAB_07315fa4;
      }
      lVar4 = *(long *)(lVar5 + 0x30);
      if (lVar4 == 0) goto LAB_07315fa4;
      if (*(char *)(lVar4 + 0xcc) != '\0') {
        IapAdsSystem_CrashlyticStateControl__SetBootStep(DAT_0921ea18,0);
        goto LAB_07315f6c;
      }
      fVar6 = *(float *)(lVar4 + 200);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(lVar5 + 0xc0) = fVar6 * 0.4 + 0.5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar3 = 4;
      goto LAB_07315f50;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_07315fa4;
  }
  uVar2 = 0;
  if (*(long *)(lVar5 + 0x28) != 0) {
    uVar2 = IapAdsSystem_FirebaseModulesManagers__get_IsInitialized(*(long *)(lVar5 + 0x28),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar5 + 0x28) == 0) goto LAB_07315fa4;
      fVar6 = *(float *)(*(long *)(lVar5 + 0x28) + 0x40);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(lVar5 + 0xc0) = fVar6 * 0.5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar3 = 2;
    }
    else {
      IapAdsSystem_CrashlyticStateControl__SetBootStep(DAT_0921ea28,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar3 = 3;
    }
LAB_07315f50:
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    return 1;
  }
LAB_07315fa4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar2);
}

