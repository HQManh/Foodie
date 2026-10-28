// rea decompile_all
// name: IapAdsSystem.InAppManager$$RestorePurchases
// address: 0x731ba38
// body: available
// range: 0x731ba38-0x731bd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731bb44 to 0x80eb430 UnityEngine.Purchasing.StoreController$$FetchPurchases (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731bb78 to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731bc74 to 0x80eb580 UnityEngine.Purchasing.StoreController$$RestoreTransactions (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731bd08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__RestorePurchases(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_09520569 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174c40);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918a3d0);
    FUN_03f5c2a4(&DAT_091eb488);
    FUN_03f5c2a4(&DAT_091915e8);
    FUN_03f5c2a4(&DAT_0920bf00);
    FUN_03f5c2a4(&DAT_0920bef8);
    FUN_03f5c2a4(&DAT_0920bef0);
    DAT_09520569 = 1;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(DAT_0920bef0,0);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920bef8,0);
    return;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = UnityEngine_Application__get_platform(0);
  if (iVar1 == 0xb) {
    if (*(long *)(param_1 + 0x30) != 0) {
      UnityEngine_Purchasing_StoreController__FetchPurchases(*(long *)(param_1 + 0x30),0);
      return;
    }
  }
  else {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = UnityEngine_Application__get_platform(0);
    if (iVar1 != 8) {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = UnityEngine_Application__get_platform(0);
      if (iVar1 != 1) {
        if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_38 = UnityEngine_Application__get_platform(0);
        local_48 = DAT_0918a3d0;
        uStack_40 = 0xffffffffffffffff;
        uVar6 = System_Enum__ToString(&local_48,0);
        uVar6 = System_String__Concat(DAT_0920bf00,uVar6,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__Log(uVar6,0);
        return;
      }
    }
    lVar2 = UnityEngine_Purchasing_UnityIAPServices__StoreController(0,0);
    if (*(int *)(DAT_091915e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091915e8);
    }
    puVar4 = *(undefined8 **)(DAT_091915e8 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_091915e8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091915e8);
        puVar4 = *(undefined8 **)(DAT_091915e8 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09174c40);
      FUN_071cb474(lVar5,uVar6,DAT_091eb488,0);
      plVar3 = (long *)(*(long *)(DAT_091915e8 + 0xb8) + 8);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
    }
    if (lVar2 != 0) {
      UnityEngine_Purchasing_StoreController__RestoreTransactions(lVar2,lVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

