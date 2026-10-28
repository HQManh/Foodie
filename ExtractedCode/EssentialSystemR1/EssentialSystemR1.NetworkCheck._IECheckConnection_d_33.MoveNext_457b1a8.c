// rea decompile_all
// name: EssentialSystemR1.NetworkCheck.<IECheckConnection>d__33$$MoveNext
// address: 0x457b1a8
// body: available
// range: 0x457b1a8-0x457b3c7 inclusive
// range: 0x457b420-0x457b433 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457b3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457b3c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 EssentialSystemR1_NetworkCheck_<IECheckConnection>d__33__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if ((DAT_09518902 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0921ce00);
    FUN_03f5c2a4(&DAT_092087a8);
    FUN_03f5c2a4(&DAT_092087b0);
    DAT_09518902 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(param_1 + 0x28),0);
    if (iVar1 == 1) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(DAT_092087b0,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      EssentialSystemR1_NetworkCheck__SetStatusAfterCheck(lVar4,1);
      puVar3 = (undefined4 *)(lVar4 + 0x24);
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(param_1 + 0x28),0);
      uVar2 = System_String__Concat(DAT_092087a8,uVar2,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar2,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      EssentialSystemR1_NetworkCheck__SetStatusAfterCheck(lVar4,2);
      puVar3 = (undefined4 *)(lVar4 + 0x28);
    }
    *(undefined4 *)(lVar4 + 0x34) = *puVar3;
    EssentialSystemR1_NetworkCheck_<IECheckConnection>d__33__<>m__Finally1(param_1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined1 *)(lVar4 + 0x58) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x60),0);
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar4 + 0x58) = 1;
    uVar2 = UnityEngine_Networking_UnityWebRequest__Get(DAT_0921ce00,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(*(long *)(param_1 + 0x28),5,0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*(long *)(param_1 + 0x28),0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

