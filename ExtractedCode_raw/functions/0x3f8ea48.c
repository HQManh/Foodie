// rea decompile_all
// name: FUN_03f8ea48
// address: 0x3f8ea48
// body: available
// range: 0x3f8ea48-0x3f8eaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8ea48(undefined8 *param_1)

{
  ulong uVar1;
  byte local_40 [16];
  void *local_30;
  byte local_28;
  undefined7 uStack_27;
  ulong uStack_20;
  void *local_18;
  
  FUN_03f6321c(local_40,&DAT_01a7578d);
  FUN_03f8eb1c(&local_28,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  uVar1 = (ulong)(local_28 >> 1);
  if ((local_28 & 1) != 0) {
    uVar1 = uStack_20;
  }
  if (uVar1 == 0) {
    FUN_03f6321c(param_1,"Unknown");
  }
  else if ((local_28 & 1) == 0) {
    param_1[1] = uStack_20;
    *param_1 = CONCAT71(uStack_27,local_28);
    param_1[2] = local_18;
  }
  else {
    FUN_03f5d0a4(param_1,local_18);
  }
  if ((local_28 & 1) != 0) {
    operator_delete(local_18);
  }
  return;
}

