// rea decompile_all
// name: FUN_03fd08fc
// address: 0x3fd08fc
// body: available
// range: 0x3fd08fc-0x3fd09e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd08fc(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  FUN_03fcd30c("Total heap size: %lu (%lu unmapped)\n",DAT_09535be8,DAT_09535c88);
  if (DAT_097484f8 != 0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = (&DAT_095bc0c8)[uVar4 * 2];
      uVar2 = (&DAT_095bc0d0)[uVar4 * 2];
      uVar4 = uVar1 + uVar2;
      if (uVar1 < uVar4) {
        iVar6 = 0;
        uVar7 = uVar1;
        do {
          lVar3 = FUN_03fcb7c0(uVar7,0x1000);
          uVar7 = uVar7 + 0x1000;
          if (lVar3 != 0) {
            iVar6 = iVar6 + 1;
          }
        } while (uVar7 < uVar4);
      }
      else {
        iVar6 = 0;
      }
      FUN_03fcd30c("Section %d from %p to %p %u/%lu blacklisted\n",uVar5,uVar1,uVar4,iVar6,
                   uVar2 >> 0xc);
      uVar5 = uVar5 + 1;
      uVar4 = (ulong)uVar5;
    } while (uVar4 < DAT_097484f8);
  }
  return;
}

