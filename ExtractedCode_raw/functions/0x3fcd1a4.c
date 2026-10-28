// rea decompile_all
// name: FUN_03fcd1a4
// address: 0x3fcd1a4
// body: available
// range: 0x3fcd1a4-0x3fcd30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcd308 to 0x3fcb048 FUN_03fcb048 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcd1a4(void)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  uVar4 = 0;
  do {
    uVar5 = (&DAT_09748128)[uVar4];
    if (uVar5 != 0) {
      FUN_03fcd30c("Free list %u (total size %lu):\n",uVar4 & 0xffffffff,(&DAT_09748310)[uVar4]);
      do {
        plVar3 = (long *)(&DAT_097440c8 + (uVar5 >> 0x16 & 0x7ff) * 8);
        do {
          lVar2 = *plVar3;
          plVar3 = (long *)(lVar2 + 0x2018);
        } while (*(ulong *)(lVar2 + 0x2010) != uVar5 >> 0x16 && lVar2 != DAT_09535c90);
        puVar7 = *(ulong **)(lVar2 + (uVar5 >> 0xc & 0x3ff) * 8);
        uVar6 = puVar7[4];
        lVar2 = FUN_03fcb7c0(uVar5,0x1000);
        pcVar1 = "start";
        if ((lVar2 == 0) && (lVar2 = FUN_03fcb7c0(uVar5,uVar6), pcVar1 = "not", lVar2 != 0)) {
          pcVar1 = "partially";
        }
        FUN_03fcd30c("\t%p size %lu %s black listed\n",uVar5,uVar6,pcVar1);
        uVar5 = *puVar7;
      } while (uVar5 != 0);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x3d);
  FUN_03fcd30c("GC_large_free_bytes: %lu\n",DAT_09535c08);
  lVar2 = FUN_03fcd120();
  if (lVar2 == DAT_09535c08) {
    return;
  }
  FUN_03fcb048("GC_large_free_bytes INCONSISTENT!! Should be: %lu\n",lVar2);
  return;
}

