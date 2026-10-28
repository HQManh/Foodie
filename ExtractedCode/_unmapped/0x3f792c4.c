// rea decompile_all
// name: FUN_03f792c4
// address: 0x3f792c4
// body: available
// range: 0x3f792c4-0x3f7933f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f79330 to 0x3f78df8 FUN_03f78df8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f792c4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_2 + 0x40);
  plVar2 = *(long **)(param_2 + 0x48);
  plVar5 = plVar1;
  if (plVar1 == plVar2) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1;
    if (((short)plVar1[1] == 0) && (plVar5 = plVar2, plVar3 = plVar1 + 2, plVar1 + 2 != plVar2)) {
      do {
        plVar6 = plVar3;
        plVar5 = plVar6;
        if ((short)plVar6[1] != 0) break;
        plVar5 = plVar2;
        plVar3 = plVar6 + 2;
      } while (plVar6 + 2 != plVar2);
      lVar4 = *plVar6;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)plVar1;
  param_1[2] = (long)plVar2;
  param_1[3] = (long)plVar5;
  param_1[4] = lVar4;
  param_1[5] = (long)plVar1;
  param_1[6] = (long)plVar2;
  param_1[7] = (long)plVar2;
  param_1[8] = 0;
  FUN_03f78df8();
  return;
}

