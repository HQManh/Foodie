// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlRewardAds.<>c__DisplayClass47_0$$<RegisterEventHandlers>b__5
// address: 0x7314710
// body: available
// range: 0x7314710-0x7314863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731485c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7314860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlRewardAds_<>c__DisplayClass47_0__<RegisterEventHandlers>b__5
               (long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_0952052a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091f6420);
    FUN_03f5c2a4(&DAT_0920c020);
    DAT_0952052a = 1;
  }
  uVar1 = DAT_0920c020;
  uVar3 = DAT_091f6420;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
  }
  uVar3 = System_String__Concat(uVar1,uVar7,uVar3,uVar2,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogError(uVar3,0);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar4 + 0x28),
                 *(undefined8 *)(lVar6 + 0x28));
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_07314860;
    }
    lVar6 = *(long *)(lVar4 + 0x30);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar4 + 0x28),2,
                 *(undefined8 *)(lVar6 + 0x28));
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_07314860;
    }
    *(undefined8 *)(lVar4 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      *puVar5 = 0;
      thunk_FUN_03f5d7b8(puVar5,0);
      return;
    }
  }
LAB_07314860:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

