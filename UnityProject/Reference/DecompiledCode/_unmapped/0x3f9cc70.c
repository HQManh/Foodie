// rea decompile_all
// name: FUN_03f9cc70
// address: 0x3f9cc70
// body: available
// range: 0x3f9cc70-0x3f9cf17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f9cc70(void)

{
  void *pvVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03f9dbb0(pvVar1);
  DAT_09534fc8 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03f9e6e4(pvVar1);
  DAT_09534fd8 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03f9f014(pvVar1);
  DAT_09535010 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03f9f944(pvVar1);
  DAT_09535020 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03fa0274(pvVar1);
  DAT_09534fe8 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03fa0ba4(pvVar1);
  DAT_09535000 = pvVar1;
  pvVar1 = operator_new(0x88);
  memset(pvVar1,0,0x88);
  FUN_03fa14d4(pvVar1);
  DAT_09535048 = pvVar1;
  pvVar1 = operator_new(0x80);
  FUN_03f9cf54();
  DAT_09535030 = pvVar1;
  pvVar1 = operator_new(0x68);
  FUN_03f9cfac(pvVar1,0,&uStack_11,&uStack_12);
  DAT_09535058 = pvVar1;
  pvVar1 = operator_new(0x68);
  FUN_03f9d018(pvVar1,0,&uStack_13,&uStack_14);
  DAT_09535060 = pvVar1;
  DAT_09534fd0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeAssembly");
  DAT_09535008 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeModule");
  DAT_09534ff0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeConstructorInfo");
  DAT_09534ff8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeMethodInfo");
  DAT_09535050 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeParameterInfo");
  DAT_09535040 = FUN_03fbe820(DAT_09535050,1);
  DAT_09534fe0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeFieldInfo");
  DAT_09535028 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeEventInfo");
  DAT_09535018 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimePropertyInfo");
  return;
}

