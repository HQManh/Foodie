// rea decompile_all
// name: System.DateTimeParse$$AdjustTimeZoneToUniversal
// address: 0x75a7d5c
// body: available
// range: 0x75a7d5c-0x75a7e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__AdjustTimeZoneToUniversal(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  if ((DAT_09521c59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0920ec78);
    DAT_09521c59 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_DateTime__get_Ticks(param_1 + 0x38);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar3 = lVar2 - *(long *)(param_1 + 0x28);
  uVar1 = uVar3 + 864000000000;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if (uVar1 < 0x2bca2875f4374000) {
    local_28 = 0;
    System_DateTime___ctor(&local_28,uVar1,1);
    *(undefined8 *)(param_1 + 0x38) = local_28;
  }
  else {
    System_DateTimeResult__SetFailure(param_1,4,DAT_0920ec78,0);
  }
  return uVar1 < 0x2bca2875f4374000;
}

