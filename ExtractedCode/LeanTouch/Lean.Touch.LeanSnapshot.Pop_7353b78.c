// rea decompile_all
// name: Lean.Touch.LeanSnapshot$$Pop
// address: 0x7353b78
// body: available
// range: 0x7353b78-0x7353c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7353c84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lean_Touch_LeanSnapshot__Pop(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_095207bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187720);
    FUN_03f5c2a4(&DAT_091ae1f0);
    FUN_03f5c2a4(&DAT_091ae200);
    FUN_03f5c2a4(&DAT_091ae208);
    DAT_095207bc = 1;
  }
  if (*(int *)(DAT_09187720 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_09187720 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      uVar2 = thunk_FUN_03f9944c();
      System_Object___ctor(uVar2,0);
    }
    else {
      if (*(int *)(DAT_09187720 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = **(long **)(DAT_09187720 + 0xb8);
        if (lVar3 == 0) goto LAB_07353c84;
      }
      iVar1 = *(int *)(lVar3 + 0x18) + -1;
      uVar2 = FUN_057e0998(lVar3,iVar1,DAT_091ae208);
      if (**(long **)(DAT_09187720 + 0xb8) == 0) goto LAB_07353c84;
      FUN_057e251c(**(long **)(DAT_09187720 + 0xb8),iVar1,DAT_091ae1f0);
    }
    return uVar2;
  }
LAB_07353c84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

