// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager$$GetLong
// address: 0x7326cc4
// body: available
// range: 0x7326cc4-0x7326e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7326e78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7326e7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7326e88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_RemoteConfigManager__GetLong(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined1 local_30 [16];
  
  if ((DAT_095205db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182958);
    FUN_03f5c2a4(&DAT_0919fa08);
    FUN_03f5c2a4(&DAT_091846c8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189e88);
    FUN_03f5c2a4(&DAT_09206580);
    DAT_095205db = 1;
  }
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x58) < 2) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = FUN_06fd306c(*(long *)(param_1 + 0x20),param_2,&local_38,DAT_0919fa08);
      if ((uVar1 & 1) != 0) {
        return local_38;
      }
      if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = **(long **)(DAT_09189e88 + 0xb8);
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar2 != (long *)0x0) {
        if ((param_2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2[4] = param_2;
        thunk_FUN_03f5d7b8(plVar2 + 4,param_2);
        if (lVar5 != 0) {
          EssentialSystemR1_R1Logger__LogWarningFormat(lVar5,DAT_09206580,plVar2,0);
          return 0;
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_091846c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance(0);
    if (lVar5 != 0) {
      local_30 = Firebase_RemoteConfig_FirebaseRemoteConfig__GetValue(lVar5,param_2,0);
      if (*(int *)(DAT_09182958 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = Firebase_RemoteConfig_ConfigValue__get_LongValue(local_30,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

