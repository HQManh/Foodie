// rea decompile_all
// name: FUN_03fb5718
// address: 0x3fb5718
// body: available
// range: 0x3fb5718-0x3fb57fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb5718(undefined8 *param_1,undefined8 param_2)

{
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09535358);
  uStack_58 = *param_1;
  if ((param_1[1] & 1) == 0) {
    uStack_70 = param_1[2];
    local_78 = param_1[1];
    local_68 = (void *)param_1[3];
  }
  else {
    FUN_03f5d0a4(&local_78,param_1[3],param_1[2]);
  }
  local_60 = param_1[4];
  if ((local_78 & 1) == 0) {
    uStack_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
  }
  else {
    FUN_03f5d0a4(&local_50,local_68,uStack_70);
  }
  local_38 = local_60;
  uStack_30 = param_2;
  FUN_03fb5840(&DAT_095353a8,&uStack_58);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_03f5d920(auStack_28);
  return;
}

