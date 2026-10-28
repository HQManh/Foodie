// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsConsentController$$GatherConsent
// address: 0x72f7dfc
// body: available
// range: 0x72f7dfc-0x72f7f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f7f94 to 0x72f52f8 GoogleMobileAds.Ump.Api.ConsentInformation$$Update (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72f7f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsConsentController__GatherConsent(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095204ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091746b0);
    FUN_03f5c2a4(&DAT_091829e8);
    FUN_03f5c2a4(&DAT_09182a10);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091ea558);
    FUN_03f5c2a4(&DAT_09190e20);
    FUN_03f5c2a4(&DAT_092033b0);
    DAT_095204ca = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09190e20);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_2);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_092033b0,0);
    lVar3 = thunk_FUN_03f9944c(DAT_09182a10);
    GoogleMobileAds_Ump_Api_ConsentRequestParameters___ctor(lVar3,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x10) = 0;
      lVar4 = thunk_FUN_03f9944c(DAT_091829e8);
      GoogleMobileAds_Ump_Api_ConsentDebugSettings___ctor(lVar4,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar1 = IapAdsSystem_ConsentConfig__GetDebugGeography(), lVar4 != 0)) {
        *(undefined4 *)(lVar4 + 0x10) = uVar1;
        *(long *)(lVar3 + 0x20) = lVar4;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),lVar4);
        uVar5 = thunk_FUN_03f9944c(DAT_091746b0);
        FUN_070a8c30(uVar5,lVar2,DAT_091ea558,0);
        GoogleMobileAds_Ump_Api_ConsentInformation__Update(lVar3,uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

