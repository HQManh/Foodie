// rea decompile_all
// name: AppsFlyerSDK.UnityPurchaseRevenueBridgeProxy$$getAdditionalParameters
// address: 0x4068c14
// body: available
// range: 0x4068c14-0x4068fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4068fd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4068fdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_UnityPurchaseRevenueBridgeProxy__getAdditionalParameters
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09515c0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091a8448);
    FUN_03f5c2a4(&DAT_091a8430);
    FUN_03f5c2a4(&DAT_091a8438);
    FUN_03f5c2a4(&DAT_09179e60);
    FUN_03f5c2a4(&DAT_0917c7e0);
    FUN_03f5c2a4(&DAT_0921b278);
    DAT_09515c0e = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09179e60);
  FUN_053eb530(lVar2,DAT_091a8430);
  lVar3 = thunk_FUN_03f9944c(DAT_09179e60);
  FUN_053eb530(lVar3,DAT_091a8430);
  uVar1 = System_String__IsNullOrEmpty(param_2,0);
  if ((param_2 != 0 && (uVar1 & 1) == 0) &&
     (plVar4 = (long *)AFMiniJSON_Json_Parser__Parse(param_2), plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_0917c7e0 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_0917c7e0 + 0x130) * 8 + -8) !=
        DAT_0917c7e0)) {
      if ((*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) ==
          DAT_09176b80)) {
        uVar5 = FUN_06fd8648(plVar4,DAT_0921b278,DAT_0919fb80);
        if (((uVar5 & 1) != 0) &&
           (plVar6 = (long *)FUN_06fd83d4(plVar4,DAT_0921b278,DAT_0919fbb0), plVar6 != (long *)0x0))
        {
          if ((*(byte *)(DAT_0917c7e0 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0917c7e0 + 0x130) * 8 + -8)
              == DAT_0917c7e0)) {
            lVar2 = thunk_FUN_03f9944c(DAT_09179e60);
            FUN_053eb620(lVar2,plVar6,DAT_091a8438);
            goto LAB_04068e04;
          }
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(lVar2,plVar4,DAT_091a8448);
      }
    }
    else {
      lVar2 = thunk_FUN_03f9944c(DAT_09179e60);
      FUN_053eb620(lVar2,plVar4,DAT_091a8438);
    }
  }
LAB_04068e04:
  uVar1 = System_String__IsNullOrEmpty(param_3,0);
  if ((param_3 != 0 && (uVar1 & 1) == 0) &&
     (plVar4 = (long *)AFMiniJSON_Json_Parser__Parse(param_3), plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_0917c7e0 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_0917c7e0 + 0x130) * 8 + -8) !=
        DAT_0917c7e0)) {
      if ((*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) ==
          DAT_09176b80)) {
        uVar5 = FUN_06fd8648(plVar4,DAT_0921b278,DAT_0919fb80);
        if (((uVar5 & 1) != 0) &&
           (plVar6 = (long *)FUN_06fd83d4(plVar4,DAT_0921b278,DAT_0919fbb0), plVar6 != (long *)0x0))
        {
          if ((*(byte *)(DAT_0917c7e0 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0917c7e0 + 0x130) * 8 + -8)
              == DAT_0917c7e0)) {
            lVar3 = thunk_FUN_03f9944c(DAT_09179e60);
            FUN_053eb620(lVar3,plVar6,DAT_091a8438);
            goto LAB_04068f20;
          }
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(lVar3,plVar4,DAT_091a8448);
      }
    }
    else {
      lVar3 = thunk_FUN_03f9944c(DAT_09179e60);
      FUN_053eb620(lVar3,plVar4,DAT_091a8438);
    }
  }
LAB_04068f20:
  AppsFlyerSDK_AppsFlyerPurchaseRevenueBridge__GetAdditionalParametersForAndroid(lVar2,lVar3);
  AFMiniJSON_Json_Serializer__Serialize();
  return;
}

