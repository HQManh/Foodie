// rea decompile_all
// name: System.String$$GetLegacyNonRandomizedHashCode
// address: 0x742e574
// body: available
// range: 0x742e574-0x742e577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_String__GetLegacyNonRandomizedHashCode(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x14);
  if (*(ushort *)(param_1 + 0x14) == 0) {
    return 0x162a16fe;
  }
  puVar3 = (ushort *)(param_1 + 0x16);
  uVar2 = 0x1505;
  uVar5 = 0x1505;
  do {
    uVar1 = *puVar3;
    uVar2 = uVar2 * 0x21 ^ uVar4;
    if (uVar1 == 0) break;
    uVar4 = (uint)puVar3[1];
    puVar3 = puVar3 + 2;
    uVar5 = uVar5 * 0x21 ^ (uint)uVar1;
  } while (uVar4 != 0);
  return uVar2 + uVar5 * 0x5d588b65;
}

