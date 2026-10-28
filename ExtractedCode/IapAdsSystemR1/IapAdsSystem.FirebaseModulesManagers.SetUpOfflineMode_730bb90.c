// rea decompile_all
// name: IapAdsSystem.FirebaseModulesManagers$$SetUpOfflineMode
// address: 0x730bb90
// body: available
// range: 0x730bb90-0x730bd27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730bd14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730bd18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730bd24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_FirebaseModulesManagers__SetUpOfflineMode(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_095204c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091846c0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09190a18);
    FUN_03f5c2a4(&DAT_09202b90);
    FUN_03f5c2a4(&DAT_09202b78);
    DAT_095204c3 = 1;
  }
  if ((*(uint *)(param_1 + 0x3c) & 0xfffffffe) == 2) {
    if (*(int *)(DAT_091846c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = **(long **)(DAT_091846c0 + 0xb8);
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_24 = *(undefined4 *)(param_1 + 0x3c);
    lVar2 = FUN_03f5c42c(DAT_09190a18,&local_24);
    if (plVar1 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar1[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
      if (lVar5 != 0) {
        EssentialSystemR1_R1Logger__LogErrorFormat(lVar5,DAT_09202b78,plVar1,0);
        return;
      }
    }
  }
  else {
    if (*(int *)(DAT_091846c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091846c0 + 0xb8) != 0) {
      EssentialSystemR1_R1Logger__LogWarning(**(long **)(DAT_091846c0 + 0xb8),DAT_09202b90,0);
      *(undefined4 *)(param_1 + 0x3c) = 3;
      if (*(long *)(param_1 + 0x28) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30) = 1;
        IapAdsSystem_DataTrackingManager__SetUpUserProperties();
        *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

