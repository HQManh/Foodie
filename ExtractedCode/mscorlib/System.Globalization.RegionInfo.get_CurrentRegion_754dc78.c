// rea decompile_all
// name: System.Globalization.RegionInfo$$get_CurrentRegion
// address: 0x754dc78
// body: available
// range: 0x754dc78-0x754dd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_RegionInfo__get_CurrentRegion(void)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_09521916 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09189e28);
    DAT_09521916 = 1;
  }
  lVar2 = **(long **)(DAT_09189e28 + 0xb8);
  if (lVar2 == 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = System_Globalization_CultureInfo__get_CurrentCulture();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_03f9944c(DAT_09189e28);
      System_Globalization_RegionInfo___ctor(lVar2,lVar1);
    }
    lVar1 = FUN_03f955cc(*(undefined8 *)(DAT_09189e28 + 0xb8),lVar2,0);
    if (lVar1 != 0) {
      lVar2 = **(long **)(DAT_09189e28 + 0xb8);
    }
  }
  return lVar2;
}

