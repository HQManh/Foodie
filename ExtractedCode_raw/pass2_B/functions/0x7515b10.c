// rea decompile_all
// name: System.TimeZoneInfo$$ConvertToFromUtc
// address: 0x7515b10
// body: available
// range: 0x7515b10-0x7515cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__ConvertToFromUtc
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = param_2;
  if ((DAT_09521708 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521708 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_50 = 0;
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_TimeSpan__op_Addition(uVar3,param_3,0);
  local_50 = System_TimeSpan__op_Addition(uVar3,param_4,0);
  if ((param_5 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = System_TimeSpan__Negate(&local_50,0);
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_DateTime__get_Ticks(&local_48,0);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  lVar1 = local_50 + lVar1;
  lVar2 = System_DateTime__get_Ticks(*(long *)(DAT_09183548 + 0xb8) + 0x18,0);
  if (lVar2 < lVar1) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_DateTime__get_Ticks(*(long *)(DAT_09183548 + 0xb8) + 0x10,0);
    if (lVar1 < lVar2) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_38 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
    }
    else {
      local_38 = 0;
      System_DateTime___ctor(&local_38,lVar1,0);
    }
  }
  return local_38;
}

