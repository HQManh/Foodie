// rea decompile_all
// name: IapAdsSystem.MaxAdsManager$$.ctor
// address: 0x73231dc
// body: available
// range: 0x73231dc-0x732338b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7323388 to 0x72f5ecc IapAdsSystem.AdsMediationController$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsManager___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_095205b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091926f0);
    FUN_03f5c2a4(&DAT_09187ed8);
    FUN_03f5c2a4(&DAT_09187ee0);
    FUN_03f5c2a4(&DAT_09187ee8);
    FUN_03f5c2a4(&DAT_09187ef0);
    FUN_03f5c2a4(&DAT_09187ef8);
    DAT_095205b7 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_091926f0);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = DAT_09187ef8;
  *(undefined4 *)(param_1 + 0x40) = 0x40900000;
  *(undefined8 *)(param_1 + 0x30) = 0x4040000040200000;
  *(undefined8 *)(param_1 + 0x28) = 0x400000003f800000;
  *(undefined8 *)(param_1 + 0x38) = 0x4080000040600000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  IapAdsSystem_MaxAdsControlRewardAds___ctor();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09187ee8);
  IapAdsSystem_MaxAdsControlInterstitial___ctor();
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09187ee0);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09187ed8);
  IapAdsSystem_MaxAdsControlAppOpen___ctor();
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09187ef0);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar1);
  IapAdsSystem_AdsMediationController___ctor(param_1,0);
  return;
}

