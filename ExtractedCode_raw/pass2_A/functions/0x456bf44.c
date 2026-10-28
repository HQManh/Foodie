// rea decompile_all
// name: DG.Tweening.Plugins.Options.PathOptions$$Reset
// address: 0x456bf44
// body: available
// range: 0x456bf44-0x456c053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Options_PathOptions__Reset(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = DAT_09515ce6;
  *(undefined1 *)(param_1 + 2) = 0;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  uVar2 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  uVar4 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
  thunk_FUN_03f5d7b8(param_1 + 4,0);
  *(undefined4 *)(param_1 + 5) = 0;
  cVar1 = DAT_09515ed5;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  uVar3 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
  uVar2 = **(undefined8 **)(DAT_091898c0 + 0xb8);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 9,0);
  cVar1 = DAT_09515ed5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  uVar3 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
  uVar2 = **(undefined8 **)(DAT_091898c0 + 0xb8);
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x54) = uVar2;
  return;
}

