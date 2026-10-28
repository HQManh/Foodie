// rea decompile_all
// name: FUN_0404c1a8
// address: 0x404c1a8
// body: available
// range: 0x404c1a8-0x404c2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404c290 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0404c1a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0404c520(param_2,param_1);
  iVar1 = FUN_0404c744(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if (iVar1 < 0) break;
    FUN_0404c5c8(param_2,0xfffffffe,&local_38);
    iVar1 = FUN_0404c758(param_2,auStack_80);
    if (iVar1 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar2 = 6;
      if (local_38 != param_3[3]) {
        uVar2 = 2;
      }
      iVar1 = (*local_68)(1,uVar2,*param_3,param_3,param_2);
      if (iVar1 != 8) {
        if (iVar1 != 7) {
          return 2;
        }
        FUN_0404c798(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar1 = FUN_0404c744(param_2);
  }
  return 2;
}

