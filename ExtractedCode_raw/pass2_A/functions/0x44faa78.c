// rea decompile_all
// name: Utilities.SceneExtension$$IsSceneExist
// address: 0x44faa78
// body: available
// range: 0x44faa78-0x44faba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44faba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Utilities_SceneExtension__IsSceneExist(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  
  if ((DAT_09518463 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a650);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09518463 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar3 & 1) == 0) {
    iVar6 = 0;
    do {
      if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = UnityEngine_SceneManagement_SceneManager__get_sceneCountInBuildSettings(0);
      bVar7 = iVar6 < iVar1;
      if (iVar1 <= iVar6) {
        return bVar7;
      }
      lVar4 = UnityEngine_SceneManagement_SceneUtility__GetScenePathByBuildIndex(iVar6,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = System_String__LastIndexOf(lVar4,DAT_091f9400,0);
      iVar1 = System_String__LastIndexOf(lVar4,DAT_091f8f68,0);
      uVar5 = System_String__Substring(lVar4,uVar2 + 1,iVar1 + ~uVar2,0);
      iVar1 = System_String__Compare(param_1,uVar5,1,0);
      iVar6 = iVar6 + 1;
    } while (iVar1 != 0);
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

