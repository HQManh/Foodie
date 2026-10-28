// rea decompile_all
// name: Lofelt.NiceVibrations.HapticController.<>c__DisplayClass29_0$$<Init>b__0
// address: 0x7365a5c
// body: available
// range: 0x7365a5c-0x7365b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7365b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticController_<>c__DisplayClass29_0__<Init>b__0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09520895 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a860);
    FUN_03f5c2a4(&DAT_091eb070);
    FUN_03f5c2a4(&DAT_09191230);
    DAT_09520895 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (*(int *)(DAT_09191230 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09191230 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09191230 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09191230 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_0918a860);
    System_Threading_SendOrPostCallback___ctor(lVar4,uVar5,DAT_091eb070,0);
    plVar1 = (long *)(*(long *)(DAT_09191230 + 0xb8) + 8);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07365b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x188))(plVar3,lVar4,0,*(undefined8 *)(*plVar3 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

