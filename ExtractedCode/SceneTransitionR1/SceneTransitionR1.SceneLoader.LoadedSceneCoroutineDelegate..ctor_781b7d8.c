// rea decompile_all
// name: SceneTransitionR1.SceneLoader.LoadedSceneCoroutineDelegate$$.ctor
// address: 0x781b7d8
// body: available
// range: 0x781b7d8-0x781b873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781b870 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03f5d7b8();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_03f5c3ac(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_03fa673c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(param_1 + 0x18) = &LAB_03ec00e4;
    goto LAB_0781b840;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
LAB_0781b840:
  *(code **)(param_1 + 0x38) = FUN_03ec009c;
  return;
}

