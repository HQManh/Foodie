// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlBanner.<>c__DisplayClass37_0$$<RegisterEventHandlers>b__0
// address: 0x7310a94
// body: available
// range: 0x7310a94-0x7310c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7310c18 to 0x7302924 IapAdsSystem.AdsManager$$SetBannerHeight (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7310c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlBanner_<>c__DisplayClass37_0__<RegisterEventHandlers>b__0
               (long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double __x;
  double local_18;
  
  if ((DAT_095204f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48b0);
    DAT_095204f9 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar2 == 0)) goto LAB_07310c1c;
  if (*(char *)(lVar2 + 0x3a) == '\0') {
    return;
  }
  lVar2 = *(long *)(DAT_091b48b0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_07310c1c;
  lVar2 = **(long **)(lVar2 + 0xb8);
  fVar3 = (float)GoogleMobileAds_Api_BannerView__GetHeightInPixels(*(long *)(param_1 + 0x18),0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar3;
  dVar4 = modf(__x,&local_18);
  if (0.0 <= fVar3) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_07310bc0;
    }
    local_18 = (double)(long)(__x + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_07310bc0:
    if (((long)local_18 & 1U) != 0) {
      local_18 = local_18 + dVar4;
    }
  }
  else {
    local_18 = (double)(long)(__x + -0.5);
  }
  if (lVar2 != 0) {
    iVar1 = -0x80000000;
    if (local_18 != INFINITY) {
      iVar1 = (int)local_18;
    }
    IapAdsSystem_AdsManager__SetBannerHeight(lVar2,iVar1,0);
    return;
  }
LAB_07310c1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

