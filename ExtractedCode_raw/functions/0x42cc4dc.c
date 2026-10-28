// rea decompile_all
// name: CakeOrder.UI.InGameUITutorialControl$$GetKeyIsDoneTut
// address: 0x42cc4dc
// body: available
// range: 0x42cc4dc-0x42cc593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_InGameUITutorialControl__GetKeyIsDoneTut(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_09517372 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191650);
    FUN_03f5c2a4(&DAT_092110e8);
    DAT_09517372 = 1;
  }
  local_48 = DAT_09191650;
  uStack_40 = 0xffffffffffffffff;
  local_38 = param_1;
  uVar1 = System_Enum__ToString(&local_48,0);
  local_4c = param_2;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_4c);
  System_String__Format(DAT_092110e8,uVar1,uVar2,0);
  return;
}

