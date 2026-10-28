// rea decompile_all
// name: CakeOrder.InGame.ServeSlotConfig$$UpdateRemoteConfigValue
// address: 0x428d9d4
// body: available
// range: 0x428d9d4-0x428db1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428db0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428db10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428db1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_ServeSlotConfig__UpdateRemoteConfigValue(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09517182 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_092127b8);
    FUN_03f5c2a4(&DAT_09202540);
    DAT_09517182 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = CakeOrder_InGame_ServeSlotConfig__ImportData(uVar1,param_2);
    if (lVar2 == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09202540,0);
    }
    else {
      *(long *)(param_1 + 0x20) = lVar2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x20));
      plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((param_2 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3[4] = param_2;
      thunk_FUN_03f5d7b8(plVar3 + 4,param_2);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogFormat(DAT_092127b8,plVar3,0);
    }
  }
  return;
}

