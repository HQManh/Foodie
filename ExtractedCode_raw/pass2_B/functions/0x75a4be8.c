// rea decompile_all
// name: System.DateTimeParse$$GetDateTimeNow
// address: 0x75a4be8
// body: available
// range: 0x75a4be8-0x75a4ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__GetDateTimeNow(long param_1,byte *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_09521c6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521c6a = 1;
  }
  local_30 = 0;
  if ((*(uint *)(param_1 + 0x24) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 0x24) >> 8 & 1) != 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_30 = System_DateTime__get_UtcNow();
      lVar2 = System_DateTime__get_Ticks(&local_30);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      local_28 = 0;
      System_DateTime___ctor(&local_28,*(long *)(param_1 + 0x28) + lVar2,0);
      return local_28;
    }
    if ((*param_2 >> 6 & 1) != 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_DateTime__get_UtcNow();
      return uVar1;
    }
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTime__get_Now();
  return uVar1;
}

