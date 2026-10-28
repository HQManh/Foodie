// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$BlockCopy32
// address: 0x73b0b30
// body: available
// range: 0x73b0b30-0x73b0bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_LZ4_LZ4Codec__BlockCopy32(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if ((DAT_09520bcf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2108);
    DAT_09520bcf = 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  uVar4 = param_3;
  if (3 < (int)param_3) {
    do {
      param_1 = puVar3 + 1;
      param_3 = uVar4 - 4;
      param_2 = puVar2 + 1;
      *puVar2 = *puVar3;
      bVar1 = 7 < uVar4;
      puVar2 = param_2;
      puVar3 = param_1;
      uVar4 = param_3;
    } while (bVar1);
  }
  puVar2 = param_2;
  puVar3 = param_1;
  if (1 < (int)param_3) {
    puVar3 = (undefined4 *)((long)param_1 + 2);
    param_3 = param_3 - 2;
    puVar2 = (undefined4 *)((long)param_2 + 2);
    *(undefined2 *)param_2 = *(undefined2 *)param_1;
  }
  if (0 < (int)param_3) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
  }
  return;
}

