// rea decompile_all
// name: _GAME.Bridge.R1LevelWatcher$$ResetStatics
// address: 0x7763f80
// body: available
// range: 0x7763f80-0x77640e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelWatcher__ResetStatics(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((DAT_09522c54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174588);
    FUN_03f5c2a4(&DAT_091d6d48);
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522c54 = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09174588);
  FUN_070a8c30(uVar2,0,DAT_091d6d48,0);
  CakeOrder_InGame_LevelPlayLoadAndSetupControl__remove_onLevelEnded(uVar2,0);
  if (DAT_09522cad == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522cad = '\x01';
  }
  cVar1 = DAT_09522cae;
  lVar3 = *(long *)(DAT_09189960 + 0xb8);
  *(undefined1 *)(lVar3 + 0x30) = 0;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522cae = '\x01';
    lVar3 = *(long *)(DAT_09189960 + 0xb8);
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),0);
  **(undefined8 **)(DAT_09189960 + 0xb8) = 0;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189960 + 0xb8),0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 8);
  *puVar4 = 0;
  thunk_FUN_03f5d7b8(puVar4,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 0x10);
  *puVar4 = 0;
  thunk_FUN_03f5d7b8(puVar4,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 0x18);
  *puVar4 = 0;
  thunk_FUN_03f5d7b8(puVar4,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 0x20);
  *puVar4 = 0;
  thunk_FUN_03f5d7b8(puVar4,0);
  lVar3 = *(long *)(DAT_09189960 + 0xb8);
  *(undefined2 *)(lVar3 + 0x31) = 0;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  return;
}

