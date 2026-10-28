// rea decompile_all
// name: System.Guid$$GetHashCode
// address: 0x75af854
// body: available
// range: 0x75af854-0x75af86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Guid__GetHashCode(undefined1 (*param_1) [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)*param_1;
  auVar3 = NEON_ext(*param_1,*param_1,8,1);
  uVar1 = CONCAT13((byte)((ulong)uVar2 >> 0x18) ^ auVar3[3],
                   CONCAT12((byte)((ulong)uVar2 >> 0x10) ^ auVar3[2],
                            CONCAT11((byte)((ulong)uVar2 >> 8) ^ auVar3[1],(byte)uVar2 ^ auVar3[0]))
                  );
  return uVar1 ^ (uint)(CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ auVar3[7],
                                 CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ auVar3[6],
                                          CONCAT15((byte)((ulong)uVar2 >> 0x28) ^ auVar3[5],
                                                   CONCAT14((byte)((ulong)uVar2 >> 0x20) ^ auVar3[4]
                                                            ,uVar1)))) >> 0x20);
}

