// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText$$Hook
// address: 0x42e2570
// body: available
// range: 0x42e2570-0x42e27df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e2720 to 0x8677074 UnityEngine.SceneManagement.SceneManager$$add_sceneUnloaded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e27d8 to 0x8677168 UnityEngine.SceneManagement.SceneManager$$remove_sceneUnloaded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e27dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ComplexScriptText__Hook(byte param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_0951743c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174858);
    FUN_03f5c2a4(&DAT_091c52b0);
    FUN_03f5c2a4(&DAT_091c52b8);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_091a77e8);
    FUN_03f5c2a4(&DAT_091a77f8);
    FUN_03f5c2a4(&DAT_0918a650);
    FUN_03f5c2a4(&DAT_0918b838);
    FUN_03f5c2a4(&DAT_0917f6d8);
    DAT_0951743c = 1;
  }
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_09182870 + 0xb8);
  if (*(byte *)(lVar3 + 0x49) == (param_1 & 1)) {
    return;
  }
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = *(long *)(DAT_09182870 + 0xb8);
  }
  lVar2 = DAT_0918b838;
  *(byte *)(lVar3 + 0x49) = param_1 & 1;
  if ((param_1 & 1) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = DAT_0918b838;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
    uVar1 = thunk_FUN_03f9944c(DAT_09174858);
    FUN_070a8c30(uVar1,0,DAT_091c52b8,0);
    if (lVar3 != 0) {
      FUN_0523ae30(lVar3,uVar1,DAT_091a77f8);
      uVar1 = thunk_FUN_03f9944c(DAT_0917f6d8);
      FUN_06478d20(uVar1,0,DAT_091c52b0,0);
      if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded(uVar1,0);
      return;
    }
  }
  else {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = DAT_0918b838;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
    uVar1 = thunk_FUN_03f9944c(DAT_09174858);
    FUN_070a8c30(uVar1,0,DAT_091c52b8,0);
    if (lVar3 != 0) {
      FUN_0523ada8(lVar3,uVar1,DAT_091a77e8);
      uVar1 = thunk_FUN_03f9944c(DAT_0917f6d8);
      FUN_06478d20(uVar1,0,DAT_091c52b0,0);
      if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_SceneManagement_SceneManager__add_sceneUnloaded(uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

