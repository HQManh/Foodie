// rea decompile_all
// name: FUN_03fd80b4
// address: 0x3fd80b4
// body: available
// range: 0x3fd80b4-0x3fd82df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd824c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd8264 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd827c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd8294 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd82ac to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd82c4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd82dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x03fd81e8) */

void FUN_03fd80b4(void)

{
  int iVar1;
  char *pcVar2;
  _union_1457 local_40;
  code *local_38;
  
  if (DAT_09515904 == -1) {
    DAT_09515904 = 0x1e;
  }
  if (DAT_09515908 == -1) {
    DAT_09515908 = 0x18;
  }
  if (DAT_09515904 == DAT_09515908) {
    (*(code *)PTR_FUN_09515620)("Cannot use same signal for thread suspend and resume");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = sem_init((sem_t *)&DAT_09748a90,0,0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("sem_init failed");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40._0_4_ = 0x10000004;
  iVar1 = sigfillset((sigset_t *)&stack0xffffffffffffffd0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("sigfillset failed");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_03fd7af0(&stack0xffffffffffffffd0);
  local_38 = FUN_03fd7bb4;
  iVar1 = sigaction(DAT_09515904,(sigaction *)&local_40,(sigaction *)0x0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("Cannot set SIG_SUSPEND handler");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40._0_4_ = local_40._0_4_ & 0xfffffffb;
  local_38 = (code *)&DAT_03fd7d28;
  iVar1 = sigaction(DAT_09515908,(sigaction *)&local_40,(sigaction *)0x0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("Cannot set SIG_THR_RESTART handler");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = sigfillset((sigset_t *)&DAT_09748aa0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("sigfillset failed");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_03fd7af0(&DAT_09748aa0);
  iVar1 = sigdelset((sigset_t *)&DAT_09748aa0,DAT_09515908);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_09515620)("sigdelset failed");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = getenv("GC_RETRY_SIGNALS");
  if (pcVar2 == (char *)0x0) {
    if (DAT_09515900 == 0) goto LAB_03fd8224;
  }
  else {
    if ((*pcVar2 == '0') && (pcVar2[1] == '\0')) {
      DAT_09515900 = 0;
      goto LAB_03fd8224;
    }
    DAT_09515900 = 1;
  }
  if (DAT_09535be0 != 0) {
    FUN_03fcb51c("Will retry suspend and restart signals if necessary\n");
  }
LAB_03fd8224:
  FUN_03fd7b54();
  return;
}

