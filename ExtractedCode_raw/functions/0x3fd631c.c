// rea decompile_all
// name: FUN_03fd631c
// address: 0x3fd631c
// body: available
// range: 0x3fd631c-0x3fd647b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd6388 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd6460 to 0x3fcb51c FUN_03fcb51c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fd6478 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd631c(void)

{
  pthread_t pVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  pthread_t pVar5;
  long lVar6;
  char *__nptr;
  
  if (DAT_09748aa8 == 0) {
    DAT_09748aa8 = 1;
    if (DAT_09748a20 != 0) {
      iVar4 = FUN_039aee00(&LAB_03fd85b4,&LAB_03fd85e8,FUN_03fd8604);
      if (iVar4 == 0) {
        DAT_09748a20 = 1;
      }
      else if (DAT_09748a20 != -1) {
        (*(code *)PTR_FUN_09515620)("pthread_atfork failed");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    pVar5 = pthread_self();
    lVar6 = FUN_03fd82e0();
    pVar1 = DAT_09749318;
    if (lVar6 == 0) {
      (*(code *)PTR_FUN_09515620)("Failed to allocate memory for the initial thread");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 **)(lVar6 + 0x18) = &stack0xffffffffffffffe0;
    *(undefined1 *)(lVar6 + 0x20) = 6;
    uVar3 = DAT_09749330;
    uVar2 = DAT_09749328;
    if (pVar5 == pVar1) {
      *(undefined8 *)(lVar6 + 0x40) = DAT_09749320;
      *(undefined8 *)(lVar6 + 0x48) = uVar2;
      uVar2 = DAT_09749338;
      *(undefined8 *)(lVar6 + 0x30) = uVar3;
      *(undefined8 *)(lVar6 + 0x38) = uVar2;
    }
    FUN_03fd80b4();
    __nptr = getenv("GC_NPROCS");
    DAT_0951590c = -1;
    if ((__nptr == (char *)0x0) || (DAT_0951590c = atoi(__nptr), DAT_0951590c < 1)) {
      lVar6 = sysconf(0x61);
      DAT_0951590c = (int)lVar6;
      if (DAT_0951590c < 2) {
        DAT_0951590c = 1;
      }
    }
    if (DAT_09535be0 != 0) {
      FUN_03fcb51c("Number of processors = %d\n",DAT_0951590c);
      return;
    }
  }
  return;
}

