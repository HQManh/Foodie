// rea decompile_all
// name: Utilities.DateTime.TimeStruct$$ToString
// address: 0x453345c
// body: available
// range: 0x453345c-0x4533513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DateTime_TimeStruct__ToString(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09518657 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226728);
    DAT_09518657 = 1;
  }
  local_34 = *param_1;
  uVar1 = FUN_03f5c42c(DAT_09535420,&local_34);
  local_38 = param_1[1];
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
  local_3c = param_1[2];
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_3c);
  System_String__Format(DAT_09226728,uVar1,uVar2,uVar3,0);
  return;
}

