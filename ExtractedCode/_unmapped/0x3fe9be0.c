// rea decompile_all
// name: std::__ndk1::thread::join
// address: 0x3fe9be0
// body: available
// range: 0x3fe9be0-0x3fe9c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::thread::join() */

uint __thiscall std::__ndk1::thread::join(thread *this)

{
  int iVar1;
  pthread_t *ppVar2;
  long lVar3;
  
  if (*(pthread_t *)this == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_join(*(pthread_t *)this,(void **)0x0);
    if (iVar1 == 0) {
      *(undefined8 *)this = 0;
      return 0;
    }
  }
  ppVar2 = (pthread_t *)__throw_system_error(iVar1,"thread::join failed");
  if (*ppVar2 == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_detach(*ppVar2);
    if (iVar1 == 0) {
      *ppVar2 = 0;
      return 0;
    }
  }
  __throw_system_error(iVar1,"thread::detach failed");
  lVar3 = sysconf(0x61);
  return (uint)lVar3 & ((uint)(lVar3 >> 0x3f) ^ 0xffffffff);
}

