// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager.<>c__DisplayClass22_0$$<FetchComplete>b__0
// address: 0x7327c9c
// body: available
// range: 0x7327c9c-0x7327de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7327dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7327dd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7327de4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_RemoteConfigManager_<>c__DisplayClass22_0__<FetchComplete>b__0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_28;
  
  if ((DAT_095205e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189e88);
    FUN_03f5c2a4(&DAT_0920b9e0);
    DAT_095205e6 = 1;
  }
  lVar6 = DAT_09189e88;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(DAT_09189e88 + 0xe4);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x58) = 3;
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar6 = DAT_09189e88;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (*(long *)(param_1 + 0x18) != 0) {
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
      lVar3 = FUN_03f5c42c(DAT_09183548,&local_28);
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
          EssentialSystemR1_R1Logger__LogFormat(lVar6,DAT_0920b9e0,plVar2,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            IapAdsSystem_RemoteConfigManager__TriggerRemoteValueAvailable();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

