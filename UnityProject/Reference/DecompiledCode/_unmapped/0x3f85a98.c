// rea decompile_all
// name: FUN_03f85a98
// address: 0x3f85a98
// body: available
// range: 0x3f85a98-0x3f85b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f85a98(undefined8 param_1,undefined8 param_2,basic_string *param_3)

{
  ulong uVar1;
  void *pvVar2;
  byte local_48 [8];
  ulong uStack_40;
  void *local_38;
  char local_30 [8];
  ulong uStack_28;
  void *local_20;
  
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  uStack_28 = 0;
  local_20 = (void *)0x0;
  FUN_03f87c30(local_48);
  uStack_28 = uStack_40;
  local_20 = local_38;
  uVar1 = (ulong)(local_48[0] >> 1);
  if ((local_48[0] & 1) != 0) {
    uVar1 = uStack_40;
  }
  if (uVar1 != 0) goto LAB_03f85ae8;
  FUN_03f917fc(
              "No native stack trace exists. Make sure this is platform supports native stack traces."
              );
  do {
    FUN_03f897dc();
LAB_03f85ae8:
    std::__ndk1::operator+((__ndk1 *)"Native stack trace:\n",local_30,param_3);
    pvVar2 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      pvVar2 = local_38;
    }
    FUN_03f917fc(pvVar2);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  } while( true );
}

