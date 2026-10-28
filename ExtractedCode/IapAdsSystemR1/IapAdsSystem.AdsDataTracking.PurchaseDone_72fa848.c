// rea decompile_all
// name: IapAdsSystem.AdsDataTracking$$PurchaseDone
// address: 0x72fa848
// body: available
// range: 0x72fa848-0x72fabaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fab98 to 0x72fabb0 IapAdsSystem.DataTrackingManager$$LogEvent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fab9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72faba0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72fabac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsDataTracking__PurchaseDone(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09520435 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092208b0);
    FUN_03f5c2a4(&DAT_09222a60);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092208a8);
    FUN_03f5c2a4(&DAT_0921d0d8);
    FUN_03f5c2a4(&DAT_0921d0a8);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_09520435 = 1;
  }
  uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowIapTracking(0);
  uVar5 = DAT_0921d0a8;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x20);
    plVar3 = (long *)FUN_03f5c394(DAT_09180358,5);
    uVar1 = DAT_0921e6b0;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
        lVar6 = **(long **)(DAT_09535468 + 0xb8);
      }
      lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar4,uVar1,lVar6,0);
      if (plVar3 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_072faba4:
          uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar4;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
          lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar6,DAT_092208a8,param_2,0);
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_072faba4;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar6;
            thunk_FUN_03f5d7b8(plVar3 + 5,lVar6);
            uVar1 = DAT_092208b0;
            if (param_3 != 0) {
              param_2 = param_3;
            }
            lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(lVar6,uVar1,param_2,0);
            if ((lVar6 != 0) &&
               (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_072faba4;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar6;
              thunk_FUN_03f5d7b8(plVar3 + 6,lVar6);
              uVar1 = DAT_09220d28;
              lVar6 = DAT_09222a60;
              if (param_4 != 0) {
                lVar6 = param_4;
              }
              lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(lVar4,uVar1,lVar6,0);
              if ((lVar4 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
              goto LAB_072faba4;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar4;
                thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
                uVar1 = DAT_0921d0d8;
                if (*(long *)(param_1 + 0x30) != 0) {
                  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                  if (lVar6 == 0) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = (long)*(int *)(lVar6 + 0x98);
                  }
                  lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
                  Firebase_Analytics_Parameter___ctor(lVar4,uVar1,lVar6,0);
                  if ((lVar4 != 0) &&
                     (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)
                     ) goto LAB_072faba4;
                  if (*(uint *)(plVar3 + 3) < 5) goto LAB_072faba0;
                  plVar3[8] = lVar4;
                  thunk_FUN_03f5d7b8(plVar3 + 8,lVar4);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    IapAdsSystem_DataTrackingManager__LogEvent
                              (*(long *)(param_1 + 0x30),uVar5,plVar3);
                    return;
                  }
                }
                goto LAB_072fab9c;
              }
            }
          }
        }
LAB_072faba0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_072fab9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

