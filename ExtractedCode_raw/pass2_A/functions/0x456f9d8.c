// rea decompile_all
// name: DG.Tweening.Core.Debugger$$LogSafeModeCapturedError
// address: 0x456f9d8
// body: available
// range: 0x456f9d8-0x456fbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456fb84 to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456fbc4 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456fbf4 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456fbf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_Debugger__LogSafeModeCapturedError(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_09518892 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091fa6d8);
    DAT_09518892 = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = DAT_091fa6d8;
  if (*(char *)(*(long *)(DAT_09183190 + 0xb8) + 0x39) == '\0') {
    if (param_1 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    uVar4 = System_String__Concat(uVar4,uVar2,0);
  }
  else {
    uVar2 = DG_Tweening_Core_Debugger__GetDebugDataMessage(param_2);
    uVar4 = DAT_091fa6d8;
    if (param_1 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    uVar4 = System_String__Concat(uVar4,uVar2,uVar3,0);
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_09183190 + 0xb8) + 0x30);
  if (lVar6 != 0) {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = *(long *)(*(long *)(DAT_09183190 + 0xb8) + 0x30);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    uVar5 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),3,uVar4,*(undefined8 *)(lVar6 + 0x28));
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0xc);
  if (iVar1 == 3) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar4,0);
    return;
  }
  if (iVar1 == 2) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar4,0);
  return;
}

