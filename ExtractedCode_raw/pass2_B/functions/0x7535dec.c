// rea decompile_all
// name: System.Globalization.NumberFormatInfo$$OnSerializing
// address: 0x7535dec
// body: available
// range: 0x7535dec-0x7535e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_NumberFormatInfo__OnSerializing(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  bVar1 = System_String__op_Inequality
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
  *(byte *)(param_1 + 0xd3) = bVar1 & 1;
  uVar2 = System_String__op_Inequality
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
  if (((((uVar2 & 1) == 0) ||
       (uVar2 = System_String__op_Inequality
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),0),
       (uVar2 & 1) == 0)) ||
      (uVar2 = System_String__op_Inequality
                         (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),0),
      (uVar2 & 1) == 0)) ||
     (uVar2 = System_String__op_Inequality
                        (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),0),
     (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xd4) = uVar3;
  return;
}

