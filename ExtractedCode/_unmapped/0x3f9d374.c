// rea decompile_all
// name: FUN_03f9d374
// address: 0x3f9d374
// body: available
// range: 0x3f9d374-0x3f9d537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f9d374(void)

{
  void *pvVar1;
  long local_28;
  
  pvVar1 = DAT_09534fc8;
  if (DAT_09534fc8 != (void *)0x0) {
    FUN_03f9d538(DAT_09534fc8);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09534fd8;
  DAT_09534fc8 = (void *)0x0;
  if (DAT_09534fd8 != (void *)0x0) {
    FUN_03f9d578(DAT_09534fd8);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535010;
  DAT_09534fd8 = (void *)0x0;
  if (DAT_09535010 != (void *)0x0) {
    FUN_03f9d5b8(DAT_09535010);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535020;
  DAT_09535010 = (void *)0x0;
  if (DAT_09535020 != (void *)0x0) {
    FUN_03f9d5f8(DAT_09535020);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09534fe8;
  DAT_09535020 = (void *)0x0;
  if (DAT_09534fe8 != (void *)0x0) {
    FUN_03f9d638(DAT_09534fe8);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535000;
  DAT_09534fe8 = (void *)0x0;
  if (DAT_09535000 != (void *)0x0) {
    FUN_03f9d678(DAT_09535000);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535048;
  DAT_09535000 = (void *)0x0;
  if (DAT_09535048 != (void *)0x0) {
    FUN_03f9d6b8(DAT_09535048);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535030;
  DAT_09535048 = (void *)0x0;
  if (DAT_09535030 != (void *)0x0) {
    FUN_03f9d6f8(DAT_09535030);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535058;
  DAT_09535030 = (void *)0x0;
  if (DAT_09535058 != (void *)0x0) {
    local_28 = (long)DAT_09535058 + 0x40;
    FUN_03f5efa4(&local_28);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_09535060;
  DAT_09535058 = (void *)0x0;
  if (DAT_09535060 != (void *)0x0) {
    local_28 = (long)DAT_09535060 + 0x40;
    FUN_03f5efa4(&local_28);
    operator_delete(pvVar1);
  }
  DAT_09535060 = (void *)0x0;
  DAT_09534fd0 = 0;
  DAT_09534fe0 = 0;
  DAT_09535008 = 0;
  DAT_09535018 = 0;
  DAT_09535028 = 0;
  DAT_09535038 = 0;
  DAT_09535068 = 0;
  DAT_09535050 = 0;
  DAT_09535040 = 0;
  DAT_09534ff8 = 0;
  DAT_09534ff0 = 0;
  return;
}

