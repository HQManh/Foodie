// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsConsentController$$ShowPrivacyOptionsForm
// address: 0x730c5e8
// body: available
// range: 0x730c5e8-0x730c7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730c744 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730c7a4 to 0x72f47bc GoogleMobileAds.Ump.Api.ConsentForm$$ShowPrivacyOptionsForm (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730c7a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsConsentController__ShowPrivacyOptionsForm
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_095204cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091746b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cdf38);
    FUN_03f5c2a4(&DAT_091ea568);
    FUN_03f5c2a4(&DAT_09190e28);
    FUN_03f5c2a4(&DAT_0920d130);
    DAT_095204cb = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190e28);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    plVar4 = (long *)(lVar1 + 0x18);
    *plVar4 = param_2;
    thunk_FUN_03f5d7b8(plVar4,param_2);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d130,0);
    lVar5 = *plVar4;
    lVar2 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(lVar2,param_1,DAT_091cdf38,0);
    if (lVar5 != 0) {
      lVar5 = System_Delegate__Combine(lVar5,lVar2,0);
      uVar3 = DAT_09174980;
      if (lVar5 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = thunk_FUN_03f99350(lVar5,DAT_09174980);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,uVar3);
        }
      }
    }
    *(long *)(lVar1 + 0x18) = lVar2;
    thunk_FUN_03f5d7b8(plVar4,lVar2);
    uVar3 = thunk_FUN_03f9944c(DAT_091746b0);
    FUN_070a8c30(uVar3,lVar1,DAT_091ea568,0);
    GoogleMobileAds_Ump_Api_ConsentForm__ShowPrivacyOptionsForm(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

