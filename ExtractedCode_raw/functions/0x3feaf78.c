// rea decompile_all
// name: std::__ndk1::condition_variable::__do_timed_wait
// address: 0x3feaf78
// body: available
// range: 0x3feaf78-0x3feb017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3feb014 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
std::__ndk1::condition_variable::__do_timed_wait
          (condition_variable *this,undefined8 *param_1,long param_3)

{
  int iVar1;
  char *pcVar2;
  timespec local_20;
  
  if (*(char *)(param_1 + 1) == '\0') {
    pcVar2 = "condition_variable::timed wait: mutex not locked";
    iVar1 = 1;
  }
  else {
    if (0x59682f000000e940 < param_3) {
      param_3 = 0x59682f000000e941;
    }
    local_20.tv_sec = param_3 / 1000000000;
    local_20.tv_nsec = param_3 % 1000000000;
    iVar1 = pthread_cond_timedwait((pthread_cond_t *)this,(pthread_mutex_t *)*param_1,&local_20);
    if ((iVar1 == 0) || (iVar1 == 0x6e)) {
      return;
    }
    pcVar2 = "condition_variable timed_wait failed";
  }
  __throw_system_error(iVar1,pcVar2);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}

