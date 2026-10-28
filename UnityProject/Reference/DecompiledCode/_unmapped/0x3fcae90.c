// rea decompile_all
// name: FUN_03fcae90
// address: 0x3fcae90
// body: available
// range: 0x3fcae90-0x3fcaf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcaf40 to 0x3fcb048 FUN_03fcb048 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcae90(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = FUN_03fcaf44();
  plVar5 = (long *)(&DAT_097440c8 + (uVar4 >> 0x16 & 0x7ff) * 8);
  plVar6 = plVar5;
  do {
    lVar8 = *plVar6;
    plVar6 = (long *)(lVar8 + 0x2018);
  } while (*(ulong *)(lVar8 + 0x2010) != uVar4 >> 0x16 && lVar8 != DAT_09535c90);
  uVar7 = uVar4 >> 0xc & 0x3ff;
  cVar3 = *(char *)(*(long *)(lVar8 + uVar7 * 8) + 0x18);
  do {
    lVar8 = *plVar5;
    plVar5 = (long *)(lVar8 + 0x2018);
  } while (*(ulong *)(lVar8 + 0x2010) != uVar4 >> 0x16 && lVar8 != DAT_09535c90);
  pcVar1 = "uncollectable";
  if (cVar3 != '\x02') {
    pcVar1 = "composite";
  }
  pcVar2 = "atomic";
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
  }
  FUN_03fcb048("object at %p of appr. %lu bytes (%s)\n",uVar4,
               *(undefined8 *)(*(long *)(lVar8 + uVar7 * 8) + 0x20),pcVar2);
  return;
}

