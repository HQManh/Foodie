// rea decompile_all
// name: FUN_03fd7c04
// address: 0x3fd7c04
// body: available
// range: 0x3fd7c04-0x3fd7d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd7c9c to 0x3fd6700 thunk_FUN_03fcb048 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


pthread_t FUN_03fd7c04(void)

{
  ulong uVar1;
  uint uVar2;
  pthread_t pVar3;
  long *plVar4;
  
  pVar3 = pthread_self();
  uVar1 = DAT_09748a80;
  uVar2 = (uint)(pVar3 >> 8) ^ (uint)pVar3;
  for (plVar4 = (long *)(&DAT_09748ab0)[(ulong)(uVar2 ^ uVar2 >> 0x10) & 0xff];
      (plVar4 != (long *)0x0 && (plVar4[1] != pVar3)); plVar4 = (long *)*plVar4) {
  }
  if ((plVar4[2] & 0xfffffffffffffffeU) == DAT_09748a80) {
    if (DAT_09515900 == 0) {
      pVar3 = (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                        ("GC Warning: Duplicate suspend signal in thread %p\n");
      return pVar3;
    }
  }
  else {
    plVar4[3] = (long)&stack0xffffffffffffffc0;
    sem_post((sem_t *)&DAT_09748a90);
    plVar4[2] = uVar1;
    do {
      uVar2 = sigsuspend((sigset_t *)&DAT_09748aa0);
      pVar3 = (pthread_t)uVar2;
      if (DAT_09748a88 == 0) break;
    } while (DAT_09748a80 == uVar1);
    if (DAT_09515900 != 0) {
      uVar2 = sem_post((sem_t *)&DAT_09748a90);
      pVar3 = (pthread_t)uVar2;
      plVar4[2] = uVar1 | 1;
    }
  }
  return pVar3;
}

