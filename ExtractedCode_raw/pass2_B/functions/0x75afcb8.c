// rea decompile_all
// name: System.Guid$$HexsToCharsHexOutput
// address: 0x75afcb8
// body: available
// range: 0x75afcb8-0x75afd53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Guid__HexsToCharsHexOutput(undefined4 *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  
  *param_1 = 0x780030;
  uVar2 = param_2 >> 4 & 0xf;
  uVar1 = (short)uVar2 + 0x57;
  if (uVar2 < 10) {
    uVar1 = (ushort)(param_2 >> 4) & 0xf | 0x30;
  }
  *(ushort *)(param_1 + 1) = uVar1;
  uVar1 = (short)(param_2 & 0xf) + 0x57;
  if ((param_2 & 0xf) < 10) {
    uVar1 = (ushort)param_2 & 0xf | 0x30;
  }
  *(ushort *)((long)param_1 + 6) = uVar1;
  uVar2 = param_3 >> 4 & 0xf;
  param_1[2] = 0x30002c;
  *(undefined2 *)(param_1 + 3) = 0x78;
  uVar1 = (short)uVar2 + 0x57;
  if (uVar2 < 10) {
    uVar1 = (ushort)(param_3 >> 4) & 0xf | 0x30;
  }
  *(ushort *)((long)param_1 + 0xe) = uVar1;
  uVar1 = (short)(param_3 & 0xf) + 0x57;
  if ((param_3 & 0xf) < 10) {
    uVar1 = (ushort)param_3 & 0xf | 0x30;
  }
  *(ushort *)(param_1 + 4) = uVar1;
  return 9;
}

