// rea decompile_all
// name: IapAdsSystem.InAppManager$$OnDestroy
// address: 0x731bf3c
// body: available
// range: 0x731bf3c-0x731c22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731c218 to 0x80ea168 UnityEngine.Purchasing.StoreController$$remove_OnPurchasePending (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731c22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__OnDestroy(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_0952056c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091744a0);
    FUN_03f5c2a4(&DAT_091748a0);
    FUN_03f5c2a4(&DAT_091748d8);
    FUN_03f5c2a4(&DAT_09174880);
    FUN_03f5c2a4(&DAT_091748e8);
    FUN_03f5c2a4(&DAT_09174970);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091cfc68);
    FUN_03f5c2a4(&DAT_091cfc70);
    FUN_03f5c2a4(&DAT_091cfc80);
    FUN_03f5c2a4(&DAT_091cfc88);
    FUN_03f5c2a4(&DAT_091cfc90);
    FUN_03f5c2a4(&DAT_091cfc98);
    FUN_03f5c2a4(&DAT_091cfca0);
    FUN_03f5c2a4(&DAT_091b49a0);
    DAT_0952056c = 1;
  }
  FUN_05a8ef8c(param_1,DAT_091b49a0);
  IapAdsSystem_InAppManager__SetFakePurchaseInteractionBlocked(param_1,0);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = thunk_FUN_03f9944c(DAT_09174970);
    FUN_070a8c30(uVar1,param_1,DAT_091cfca0,0);
    UnityEngine_Purchasing_StoreController__remove_OnStoreDisconnected(lVar2,uVar1,0);
    lVar2 = *(long *)(param_1 + 0x30);
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091cfc98,0);
    if (lVar2 != 0) {
      UnityEngine_Purchasing_StoreController__remove_OnStoreConnected(lVar2,uVar1,0);
      lVar2 = *(long *)(param_1 + 0x30);
      uVar1 = thunk_FUN_03f9944c(DAT_091744a0);
      FUN_070a8c30(uVar1,param_1,DAT_091cfc70,0);
      if (lVar2 != 0) {
        UnityEngine_Purchasing_StoreController__remove_OnProductsFetched(lVar2,uVar1,0);
        lVar2 = *(long *)(param_1 + 0x30);
        uVar1 = thunk_FUN_03f9944c(DAT_091748d8);
        FUN_070a8c30(uVar1,param_1,DAT_091cfc68,0);
        if (lVar2 != 0) {
          UnityEngine_Purchasing_StoreController__remove_OnProductsFetchFailed(lVar2,uVar1,0);
          lVar2 = *(long *)(param_1 + 0x30);
          uVar1 = thunk_FUN_03f9944c(DAT_091748e8);
          FUN_070a8c30(uVar1,param_1,DAT_091cfc88,0);
          if (lVar2 != 0) {
            UnityEngine_Purchasing_StoreController__remove_OnPurchasesFetchFailed(lVar2,uVar1,0);
            lVar2 = *(long *)(param_1 + 0x30);
            uVar1 = thunk_FUN_03f9944c(DAT_09174880);
            FUN_070a8c30(uVar1,param_1,DAT_091cfc90,0);
            if (lVar2 != 0) {
              UnityEngine_Purchasing_StoreController__remove_OnPurchasesFetched(lVar2,uVar1,0);
              lVar2 = *(long *)(param_1 + 0x30);
              uVar1 = thunk_FUN_03f9944c(DAT_091748a0);
              FUN_070a8c30(uVar1,param_1,DAT_091cfc80,0);
              if (lVar2 != 0) {
                UnityEngine_Purchasing_StoreController__remove_OnPurchasePending(lVar2,uVar1,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

