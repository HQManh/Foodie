// rea decompile_all
// name: IapAdsSystem.FirebaseModulesManagers$$<Init>b__22_0
// address: 0x730c158
// body: available
// range: 0x730c158-0x730c2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730c2d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730c2d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730c2e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_FirebaseModulesManagers__<Init>b__22_0(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_34;
  
  if ((DAT_095204c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183a10);
    FUN_03f5c2a4(&DAT_091846c0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091bcbf8);
    FUN_03f5c2a4(&DAT_091ff6b8);
    DAT_095204c5 = 1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_062ec7c0(param_2,DAT_091bcbf8);
    if (iVar1 == 0) {
      IapAdsSystem_FirebaseModulesManagers__OnDoneInitFirebase(param_1);
LAB_0730c2a0:
      if (*(int *)(DAT_091846c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined1 *)(*(long *)(DAT_091846c0 + 0xb8) + 8) = 1;
      return;
    }
    if (*(int *)(DAT_091846c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = **(long **)(DAT_091846c0 + 0xb8);
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_34 = iVar1;
    lVar3 = FUN_03f5c42c(DAT_09183a10,&local_34);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
      if (lVar6 != 0) {
        EssentialSystemR1_R1Logger__LogErrorFormat(lVar6,DAT_091ff6b8,plVar2,0);
        IapAdsSystem_FirebaseModulesManagers__SetUpOfflineMode(param_1);
        goto LAB_0730c2a0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

