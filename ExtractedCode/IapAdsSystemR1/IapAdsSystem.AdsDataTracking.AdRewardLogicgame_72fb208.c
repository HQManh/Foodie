// rea decompile_all
// name: IapAdsSystem.AdsDataTracking$$AdRewardLogicgame
// address: 0x72fb208
// body: available
// range: 0x72fb208-0x72fb57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fb568 to 0x72fabb0 IapAdsSystem.DataTrackingManager$$LogEvent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fb56c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fb570 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fb57c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsDataTracking__AdRewardLogicgame(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  if ((DAT_0952043a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092186b8);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092172b0);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_0952043a = 1;
  }
  uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowAdsTracking(0);
  if (((((uVar3 & 1) == 0) || (uVar3 = FUN_05a8eda4(DAT_091b4930), param_2 == 0)) ||
      ((uVar3 & 1) == 0)) ||
     ((*(char *)(param_2 + 0x4c) != '\0' && (*(char *)(param_2 + 0x4d) == '\0')))) {
    return;
  }
  lVar4 = *(long *)(DAT_091b4928 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_072fb56c;
  lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x20);
  *(undefined2 *)(param_2 + 0x4c) = 1;
  if (lVar4 == 0) goto LAB_072fb56c;
  plVar9 = (long *)(param_2 + 0x50);
  *plVar9 = *(long *)(lVar4 + 0x18);
  thunk_FUN_03f5d7b8(plVar9);
  if (*(char *)(lVar4 + 0x38) == '\0') {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined4 *)(lVar4 + 0x3c);
  }
  *(undefined4 *)(param_2 + 0x58) = uVar8;
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x38),0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
  }
  else {
    uVar5 = IapAdsSystem_AdsDataTracking__PlacementOf(*(undefined4 *)(param_2 + 0x28));
  }
  lVar4 = *(long *)(DAT_091b4928 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  plVar6 = (long *)FUN_03f5c394(DAT_09180358,3);
  uVar2 = DAT_0921e6b0;
  uVar1 = DAT_092172b0;
  lVar10 = *plVar9;
  if (lVar10 == 0) {
    lVar10 = **(long **)(DAT_09535468 + 0xb8);
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar7,uVar2,lVar10,0);
  if (plVar6 == (long *)0x0) goto LAB_072fb56c;
  if ((lVar7 != 0) &&
     (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
  goto LAB_072fb574;
  if ((int)plVar6[3] == 0) goto LAB_072fb570;
  plVar6[4] = lVar7;
  thunk_FUN_03f5d7b8(plVar6 + 4,lVar7);
  puVar11 = (undefined8 *)(param_2 + 0x30);
  uVar3 = System_String__IsNullOrEmpty(*puVar11,0);
  uVar2 = DAT_092186b8;
  if ((uVar3 & 1) == 0) {
LAB_072fb498:
    uVar12 = *puVar11;
  }
  else {
    puVar11 = (undefined8 *)(param_2 + 0x10);
    uVar3 = System_String__IsNullOrEmpty(*puVar11,0);
    uVar12 = uVar5;
    if ((uVar3 & 1) == 0) goto LAB_072fb498;
  }
  lVar10 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar10,uVar2,uVar12,0);
  if ((lVar10 != 0) &&
     (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_072fb574:
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
    plVar6[5] = lVar10;
    thunk_FUN_03f5d7b8(plVar6 + 5,lVar10);
    lVar10 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar10,DAT_09220d28,uVar5,0);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_072fb574;
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar10;
      thunk_FUN_03f5d7b8(plVar6 + 6,lVar10);
      if (lVar4 != 0) {
        IapAdsSystem_DataTrackingManager__LogEvent(lVar4,uVar1,plVar6);
        return;
      }
LAB_072fb56c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_072fb570:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

