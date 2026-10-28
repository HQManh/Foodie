// rea decompile_all
// name: IapAdsSystem.AdsDataTracking$$RevenueDefault
// address: 0x72fbf28
// body: available
// range: 0x72fbf28-0x72fc33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fc304 to 0x72fbe08 IapAdsSystem.AdsDataTracking$$TrackingCustomEventsCountAdsPaid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fc328 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fc334 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fc338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsDataTracking__RevenueDefault
               (undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09520442 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09217150);
    FUN_03f5c2a4(&DAT_09217110);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09217138);
    FUN_03f5c2a4(&DAT_09219f40);
    FUN_03f5c2a4(&DAT_09217118);
    FUN_03f5c2a4(&DAT_09217130);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_09520442 = 1;
  }
  uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowAdsTracking(0);
  if ((param_3 != 2) || ((uVar1 & 1) == 0)) {
    return;
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180358,7);
  uVar3 = IapAdsSystem_AdsDataTracking__<RevenueDefault>g__GetPlatformValue_30_0(2);
  lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar4,DAT_09217130,uVar3,0);
  if (plVar2 == (long *)0x0) {
LAB_072fc338:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_072fc32c:
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
    lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar4,DAT_09217138,param_5,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_072fc32c;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar2 + 5,lVar4);
      lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar4,DAT_09217150,param_6,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
      goto LAB_072fc32c;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar4;
        thunk_FUN_03f5d7b8(plVar2 + 6,lVar4);
        lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar4,DAT_09217110,param_8,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
        goto LAB_072fc32c;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar4;
          thunk_FUN_03f5d7b8(plVar2 + 7,lVar4);
          lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(param_1,lVar4,DAT_09225370,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
          goto LAB_072fc32c;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar4;
            thunk_FUN_03f5d7b8(plVar2 + 8,lVar4);
            lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(lVar4,DAT_09219f40,param_9,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_072fc32c;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar4;
              thunk_FUN_03f5d7b8(plVar2 + 9,lVar4);
              uVar3 = DAT_09220d28;
              if (param_7 == 0) {
                param_7 = **(long **)(DAT_09535468 + 0xb8);
              }
              lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(lVar4,uVar3,param_7,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
              goto LAB_072fc32c;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar4;
                thunk_FUN_03f5d7b8(plVar2 + 10,lVar4);
                if (*(long *)(param_2 + 0x30) != 0) {
                  IapAdsSystem_DataTrackingManager__LogEvent
                            (*(long *)(param_2 + 0x30),DAT_09217118,plVar2);
                  IapAdsSystem_AdsDataTracking__TrackingCustomEventsCountAdsPaid
                            (param_1,param_2,param_4,param_9);
                  return;
                }
                goto LAB_072fc338;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

