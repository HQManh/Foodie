// rea decompile_all
// name: FUN_03fd6c88
// address: 0x3fd6c88
// body: available
// range: 0x3fd6c88-0x3fd6dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fd6c88(void)

{
  bool bVar1;
  int __fd;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = FUN_03fd6be8();
  if (uVar2 != 0) {
    while( true ) {
      while (DAT_095158f8 <= uVar2) {
        FUN_03fd3e3c(DAT_09748a40);
        uVar4 = DAT_095158f8;
        while (uVar4 <= uVar2) {
          uVar4 = DAT_095158f8 << 1;
          DAT_095158f8 = DAT_095158f8 << 1;
        }
        DAT_09748a40 = FUN_03fcb1c4();
        uVar2 = FUN_03fd6be8();
        if (uVar2 == 0) {
          return 0;
        }
        if (DAT_09748a40 == 0) {
          return 0;
        }
      }
      __fd = open("/proc/self/maps",0);
      if (__fd == -1) break;
      uVar4 = 0;
      do {
        lVar3 = FUN_03fd6b70(__fd,DAT_09748a40,DAT_095158f8 - 1);
        if (lVar3 < 1) {
          close(__fd);
          return 0;
        }
        uVar4 = lVar3 + uVar4;
      } while (lVar3 == DAT_095158f8 - 1);
      close(__fd);
      if (uVar2 < uVar4) {
        (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                  ("GC Warning: Unexpected asynchronous /proc/self/maps growth (to %ld bytes)\n",
                   uVar4);
      }
      lVar3 = DAT_09748a40;
      bVar1 = uVar2 <= uVar4;
      uVar2 = uVar4;
      if ((bVar1) && (uVar4 < DAT_095158f8)) {
        *(undefined1 *)(DAT_09748a40 + uVar4) = 0;
        return lVar3;
      }
    }
  }
  return 0;
}

