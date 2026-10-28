// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$TrackLiveOpsInteraction
// address: 0x42607e4
// body: available
// range: 0x42607e4-0x4260b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4260b50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4260b5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4260b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__TrackLiveOpsInteraction
               (long param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_64;
  
  if ((DAT_09516f69 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921e928);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_09221b38);
    FUN_03f5c2a4(&DAT_092264c8);
    FUN_03f5c2a4(&DAT_0921e930);
    FUN_03f5c2a4(&DAT_0921f650);
    FUN_03f5c2a4(&DAT_09217090);
    DAT_09516f69 = 1;
  }
  uVar2 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4928 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar8 = **(long **)(lVar3 + 0xb8);
  plVar4 = (long *)FUN_03f5c394(DAT_09180358,4);
  uVar1 = DAT_0921e930;
  uVar6 = DAT_0921e928;
  lVar3 = DAT_09224f00;
  if (param_1 != 0) {
    lVar3 = param_1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar5,uVar1,lVar3,0);
  if (plVar4 == (long *)0x0) {
LAB_04260b60:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
LAB_04260b54:
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
    uVar1 = DAT_09217090;
    lVar3 = DAT_09224f00;
    if (param_2 != 0) {
      lVar3 = param_2;
    }
    lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar5,uVar1,lVar3,0);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_04260b54;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar4 + 5,lVar5);
      lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar3,DAT_0921f650,(long)param_3,0);
      if ((lVar3 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_04260b54;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar3;
        thunk_FUN_03f5d7b8(plVar4 + 6,lVar3);
        uVar2 = System_String__IsNullOrEmpty(param_4,0);
        uVar1 = DAT_09221b38;
        if ((uVar2 & 1) == 0) {
          local_64 = param_5;
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_64);
          uVar7 = System_String__Format(DAT_092264c8,param_4,uVar7,0);
        }
        else {
          uVar7 = **(undefined8 **)(DAT_09535468 + 0xb8);
        }
        lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar3,uVar1,uVar7,0);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_04260b54;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar3;
          thunk_FUN_03f5d7b8(plVar4 + 7,lVar3);
          if (lVar8 != 0) {
            IapAdsSystem_DataTrackingManager__LogEvent(lVar8,uVar6,plVar4,0);
            return;
          }
          goto LAB_04260b60;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

