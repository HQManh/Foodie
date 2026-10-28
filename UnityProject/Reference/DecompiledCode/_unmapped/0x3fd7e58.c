// rea decompile_all
// name: FUN_03fd7e58
// address: 0x3fd7e58
// body: available
// range: 0x3fd7e58-0x3fd7f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd7f28 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd7e58(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  timespec tStack_40;
  
  iVar1 = clock_gettime(0,&tStack_40);
  if (iVar1 == -1) {
LAB_03fd7ef0:
    FUN_03fd88ac(param_1,param_2);
    FUN_03fd7f2c();
  }
  else {
    tStack_40.tv_nsec = tStack_40.tv_nsec + 10000000;
    if (0 < param_1) {
      iVar1 = 0;
      do {
        while (iVar2 = sem_timedwait((sem_t *)&DAT_09748a90,&tStack_40), iVar2 != 0) {
          piVar3 = (int *)__errno();
          iVar2 = *piVar3;
          if (iVar2 != 4) {
            if ((iVar2 != 0x6e) && (iVar2 != 0x16)) {
              (*(code *)PTR_FUN_09515620)("sem_wait failed");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            param_1 = param_1 - iVar1;
            goto LAB_03fd7ef0;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != param_1);
    }
  }
  return;
}

