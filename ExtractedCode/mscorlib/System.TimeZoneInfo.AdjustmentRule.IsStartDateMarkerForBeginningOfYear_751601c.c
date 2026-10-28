// rea decompile_all
// name: System.TimeZoneInfo.AdjustmentRule$$IsStartDateMarkerForBeginningOfYear
// address: 0x751601c
// body: available
// range: 0x751601c-0x7516133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  
  if ((DAT_09521727 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521727 = 1;
  }
  if (((*(char *)(param_1 + 0x60) == '\0') && (*(char *)(param_1 + 0x30) == '\x01')) &&
     (*(char *)(param_1 + 0x32) == '\x01')) {
    local_18 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_DateTime__get_Hour(&local_18,0);
    if (iVar1 == 0) {
      local_18 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Minute(&local_18,0);
      if (iVar1 == 0) {
        local_18 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = System_DateTime__get_Second(&local_18,0);
        if (iVar1 == 0) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = System_DateTime__get_Year(param_1 + 0x10,0);
          iVar2 = System_DateTime__get_Year(param_1 + 0x18,0);
          return iVar1 == iVar2;
        }
      }
    }
  }
  return false;
}

