// rea decompile_all
// name: FUN_03fa36bc
// address: 0x3fa36bc
// body: available
// range: 0x3fa36bc-0x3fa372f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa36bc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *local_40;
  long *plStack_38;
  long *plStack_30;
  long local_28;
  
  local_28 = 0;
  plVar1 = *(long **)(param_2 + 0x40);
  plStack_38 = *(long **)(param_2 + 0x48);
  plVar2 = plVar1;
  local_40 = plVar1;
  plStack_30 = plVar1;
  if (plVar1 != plStack_38) {
    local_28 = *plVar1;
    FUN_03f5ff78(&local_40);
    plVar1 = *(long **)(param_2 + 0x40);
    plVar2 = *(long **)(param_2 + 0x48);
  }
  *param_1 = param_2;
  param_1[5] = (long)plVar1;
  param_1[6] = (long)plVar2;
  param_1[2] = (long)plStack_38;
  param_1[1] = (long)local_40;
  param_1[4] = local_28;
  param_1[3] = (long)plStack_30;
  param_1[7] = (long)plVar2;
  param_1[8] = 0;
  FUN_03fa387c(param_1);
  return;
}

