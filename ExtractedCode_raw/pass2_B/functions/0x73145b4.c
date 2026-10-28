// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlRewardAds.<>c__DisplayClass47_0$$<RegisterEventHandlers>b__4
// address: 0x73145b4
// body: available
// range: 0x73145b4-0x731470f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73146f8 to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731470c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlRewardAds_<>c__DisplayClass47_0__<RegisterEventHandlers>b__4
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09520529 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f6480);
    FUN_03f5c2a4(&DAT_0920c020);
    DAT_09520529 = 1;
  }
  uVar1 = System_String__Concat(DAT_0920c020,*(undefined8 *)(param_1 + 0x10),DAT_091f6480,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar1,0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x48);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar3 + 0x28),
                 *(undefined8 *)(lVar4 + 0x28));
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) goto LAB_0731470c;
    }
    if (*(long *)(lVar3 + 0x30) == 0) {
      return;
    }
    if (*(long *)(lVar3 + 0x20) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
        lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20);
        uVar1 = IapAdsSystem_GoogleMobileAdsControlRewardAds__IEResolvePendingAsFailed
                          (lVar3,*(undefined8 *)(param_1 + 0x10));
        if (lVar4 != 0) {
          UnityEngine_MonoBehaviour__StartCoroutine(lVar4,uVar1,0);
          return;
        }
      }
    }
  }
LAB_0731470c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

