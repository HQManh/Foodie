// rea decompile_all
// name: RenderPipelineChecker$$RefreshData
// address: 0x40503dc
// body: available
// range: 0x40503dc-0x405052f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void RenderPipelineChecker__RefreshData(void)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  
  if ((DAT_09515b06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_092122f0);
    FUN_03f5c2a4(&DAT_09203ae0);
    DAT_09515b06 = 1;
  }
  bVar3 = RenderPipelineChecker__DoesTypeExist(DAT_09203ae0);
  if (DAT_09515b25 == '\0') {
    FUN_03f5c2a4(&DAT_09189fa0);
    DAT_09515b25 = '\x01';
  }
  uVar1 = DAT_092122f0;
  **(byte **)(DAT_09189fa0 + 0xb8) = bVar3 & 1;
  bVar3 = RenderPipelineChecker__DoesTypeExist(uVar1);
  if (DAT_09515b26 == '\0') {
    FUN_03f5c2a4(&DAT_09189fa0);
    DAT_09515b26 = '\x01';
  }
  cVar2 = DAT_09515b27;
  pcVar4 = *(char **)(DAT_09189fa0 + 0xb8);
  pcVar4[1] = bVar3 & 1;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_09189fa0);
    DAT_09515b27 = '\x01';
    pcVar4 = *(char **)(DAT_09189fa0 + 0xb8);
  }
  if (*pcVar4 == '\0') {
    if (DAT_09515b28 == '\0') {
      FUN_03f5c2a4(&DAT_09189fa0);
      DAT_09515b28 = '\x01';
      pcVar4 = *(char **)(DAT_09189fa0 + 0xb8);
    }
    if (pcVar4[1] == '\0') {
      if (DAT_09515b29 == '\0') {
        FUN_03f5c2a4(&DAT_09189fa0);
        DAT_09515b29 = '\x01';
        pcVar4 = *(char **)(DAT_09189fa0 + 0xb8);
      }
      pcVar4[2] = '\x01';
    }
  }
  return;
}

