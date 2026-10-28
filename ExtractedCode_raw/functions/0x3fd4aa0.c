// rea decompile_all
// name: FUN_03fd4aa0
// address: 0x3fd4aa0
// body: available
// range: 0x3fd4aa0-0x3fd4b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd4b9c to 0x3fcb048 FUN_03fcb048 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd4aa0(void)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  
  if (0 < (int)DAT_0974876c) {
    lVar6 = 0;
    piVar7 = &DAT_096fc0e0;
    do {
      pcVar2 = "";
      if (*piVar7 != 0) {
        pcVar2 = " (temporary)";
      }
      FUN_03fcd30c("From %p to %p%s\n",*(undefined8 *)(piVar7 + -6),*(undefined8 *)(piVar7 + -4),
                   pcVar2);
      lVar6 = lVar6 + 1;
      piVar7 = piVar7 + 8;
    } while (lVar6 < (int)DAT_0974876c);
  }
  FUN_03fcd30c("GC_root_size: %lu\n",DAT_09748770);
  uVar4 = (ulong)DAT_0974876c;
  if ((int)DAT_0974876c < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    plVar5 = &DAT_096fc0d0;
    do {
      plVar1 = plVar5 + -1;
      lVar3 = *plVar5;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 4;
      lVar6 = (lVar6 + lVar3) - *plVar1;
    } while (uVar4 != 0);
  }
  if (lVar6 != DAT_09748770) {
    FUN_03fcb048("GC_root_size incorrect!! Should be: %lu\n");
    return;
  }
  return;
}

