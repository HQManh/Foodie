// rea decompile_all
// name: FUN_073b6370
// address: 0x73b6370
// body: available
// range: 0x73b6370-0x73b647f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_073b6370(byte *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (DAT_09520c10 == '\0') {
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520c10 = '\x01';
  }
  if ((int)param_2 < 1) {
    iVar2 = 0;
    uVar5 = 9;
  }
  else {
    uVar3 = 0;
    uVar4 = (ulong)param_2;
    uVar5 = 9;
    do {
      uVar3 = (uint)*param_1 + uVar3 * -0x3361d2af;
      uVar4 = uVar4 - 1;
      uVar5 = uVar3 ^ uVar5;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
    iVar2 = uVar3 * -0x3361d2af;
  }
  iVar1 = MessagePack_Internal_FarmHash__Rotate32(param_2 * -0x3361d2af,0x11,0);
  iVar1 = MessagePack_Internal_FarmHash__Rotate32(iVar1 * 0x1b873593 ^ uVar5,0x13,0);
  iVar2 = MessagePack_Internal_FarmHash__Rotate32(iVar2,0x11,0);
  iVar2 = MessagePack_Internal_FarmHash__Rotate32
                    (iVar2 * 0x1b873593 ^ iVar1 * 5 + 0xe6546b64U,0x13,0);
  uVar5 = iVar2 * 5 + 0xe6546b64;
  uVar5 = (uVar5 ^ uVar5 >> 0x10) * -0x7a143595;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
  return uVar5 ^ uVar5 >> 0x10;
}

