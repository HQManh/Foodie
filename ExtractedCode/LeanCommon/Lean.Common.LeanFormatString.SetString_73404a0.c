// rea decompile_all
// name: Lean.Common.LeanFormatString$$SetString
// address: 0x73404a0
// body: available
// range: 0x73404a0-0x7340563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanFormatString__SetString
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_09520697 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918cc38);
    DAT_09520697 = 1;
  }
  local_70 = param_1;
  uStack_6c = param_2;
  local_68 = param_3;
  uStack_64 = param_4;
  uVar1 = FUN_03f5c42c(DAT_0918cc38,&local_70);
  local_80 = param_5;
  uStack_7c = param_6;
  local_78 = param_7;
  uStack_74 = param_8;
  uVar2 = FUN_03f5c42c(DAT_0918cc38,&local_80);
  Lean_Common_LeanFormatString__SendString(param_9,uVar1,uVar2);
  return;
}

