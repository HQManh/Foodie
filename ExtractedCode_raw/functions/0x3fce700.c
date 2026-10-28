// rea decompile_all
// name: FUN_03fce700
// address: 0x3fce700
// body: available
// range: 0x3fce700-0x3fce7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fce700(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  clock_t cVar5;
  ulong uVar6;
  
  iVar3 = (*(code *)PTR_LAB_09515670)();
  if (iVar3 == 0) {
    uVar1 = uRam000000000974855c + 1;
    uVar2 = uRam000000000974855c & 3;
    uRam000000000974855c = uVar1;
    if (uVar2 == 0) {
      cVar5 = clock();
      uVar6 = (ulong)((cVar5 - DAT_09748550) * 1000000000) / 1000000;
      if (DAT_09515668 <= uVar6) {
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Abandoning stopped marking after %llu nanoseconds (attempt %d)\n",uVar6,
                       DAT_09748558);
        }
        goto LAB_03fce714;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_03fce714:
    uVar4 = 1;
  }
  return uVar4;
}

