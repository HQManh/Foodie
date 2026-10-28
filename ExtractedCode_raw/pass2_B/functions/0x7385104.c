// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadBigEndian
// address: 0x7385104
// body: available
// range: 0x7385104-0x738519b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool MessagePack_MessagePackPrimitives__TryReadBigEndian
               (undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  
  if ((DAT_09520a36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3020);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520a36 = 1;
  }
  if ((int)param_2 < 2) {
    uVar3 = 0;
  }
  else {
    puVar2 = (ushort *)FUN_04c072ac(param_1,param_2,DAT_091d3020);
    uVar1 = *puVar2;
    uVar3 = uVar1 >> 8 | uVar1 << 8;
    *param_3 = uVar1;
  }
  *param_3 = uVar3;
  return 1 < (int)param_2;
}

