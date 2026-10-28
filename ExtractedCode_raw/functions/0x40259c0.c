// rea decompile_all
// name: FUN_040259c0
// address: 0x40259c0
// body: available
// range: 0x40259c0-0x4025ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_040259c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((bRam000000000974a588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a588), iVar1 != 0)) {
    __cxa_atexit(FUN_0402d0cc,0,&PTR_LOOP_089e1d70);
    __cxa_guard_release(0x974a588);
  }
  if ((bRam000000000974a818 & 1) == 0) {
    bRam000000000974a818 = 4;
    puVar2 = (undefined8 *)0x974a81c;
  }
  else {
    uRam000000000974a820 = 2;
    puVar2 = puRam000000000974a828;
  }
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = 0x4d00000041;
  puVar2 = puRam000000000974a840;
  if ((bRam000000000974a830 & 1) == 0) {
    bRam000000000974a830 = 4;
    uRam000000000974a834 = 0x50;
    uRam000000000974a838 = 0x4d;
    uRam000000000974a83c = 0;
    return;
  }
  uRam000000000974a838 = 2;
  uRam000000000974a83c = 0;
  *puRam000000000974a840 = 0x4d00000050;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}

