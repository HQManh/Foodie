// rea decompile_all
// name: FUN_03f9a560
// address: 0x3f9a560
// body: available
// range: 0x3f9a560-0x3f9a65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f9a63c to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f9a658 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f9a560(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_48 [16];
  ulong local_38;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_03fbf41c(param_2,DAT_09535480);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_03fa673c(&DAT_01a86bc6,"Type must derive from Delegate.");
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar2,0);
    }
    if ((*(long **)(param_2 + 0x70) == (long *)0x0) ||
       (lVar5 = **(long **)(param_2 + 0x70), lVar5 == 0)) {
      uVar2 = FUN_03f9adb4(param_2);
      uVar4 = FUN_03f9adbc(param_2);
      FUN_03f92510(local_48,"Cannot marshal P/Invoke call through delegate of type \'%s.%s\'",uVar2,
                   uVar4);
      uVar1 = (ulong)local_48 | 1;
      if ((local_48[0] & 1) != 0) {
        uVar1 = local_38;
      }
      uVar2 = FUN_03fa7078(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar2,0);
    }
    uVar2 = FUN_03fbcb54(param_2);
    lVar3 = FUN_03f9944c(param_2);
    FUN_03fb8770(lVar3,lVar3,lVar5,uVar2);
    *(long *)(lVar3 + 0x30) = param_1;
  }
  return lVar3;
}

