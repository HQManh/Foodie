// rea decompile_all
// name: std::__ndk1::recursive_timed_mutex::lock
// address: 0x3feb4d8
// body: available
// range: 0x3feb4d8-0x3feb5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3feb5ac to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::recursive_timed_mutex::lock() */

ulong __thiscall std::__ndk1::recursive_timed_mutex::lock(recursive_timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  pthread_t pVar4;
  ulong uVar5;
  undefined8 uVar6;
  pthread_mutex_t *local_30;
  char local_28;
  
  pVar4 = pthread_self();
  local_28 = '\x01';
  local_30 = (pthread_mutex_t *)this;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 == 0) {
    lVar1 = *(long *)(this + 0x58);
    if (*(pthread_t *)(this + 0x60) == pVar4) {
      if (lVar1 == -1) goto LAB_03feb58c;
      *(long *)(this + 0x58) = lVar1 + 1;
    }
    else if (lVar1 == 0) {
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = pVar4;
    }
    else {
      do {
        uVar5 = condition_variable::wait
                          ((condition_variable *)(this + 0x28),(unique_lock *)&local_30);
      } while (*(long *)(this + 0x58) != 0);
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = pVar4;
      if (local_28 == '\0') {
        return uVar5;
      }
    }
    uVar3 = pthread_mutex_unlock(local_30);
    return (ulong)uVar3;
  }
  __throw_system_error(iVar2,"mutex lock failed");
LAB_03feb58c:
  uVar6 = __throw_system_error(0xb,"recursive_timed_mutex lock limit reached");
  FUN_03feb378(&local_30);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar6);
}

