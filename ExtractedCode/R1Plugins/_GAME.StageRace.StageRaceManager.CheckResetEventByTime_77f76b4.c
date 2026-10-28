// rea decompile_all
// name: _GAME.StageRace.StageRaceManager$$CheckResetEventByTime
// address: 0x77f76b4
// body: available
// range: 0x77f76b4-0x77f7857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceManager__CheckResetEventByTime(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09523134 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ba4d8);
    FUN_03f5c2a4(&DAT_0917e750);
    FUN_03f5c2a4(&DAT_091d9f68);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523134 = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(*(long *)(DAT_0918b158 + 0xb8) + 0x10) < 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,0,DAT_091d9f68,0);
    if (*(int *)(DAT_0917e750 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_091ba4d8;
    lVar3 = *(long *)(DAT_091ba4d8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918be20);
    }
    uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar2,uVar5,0);
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b158);
    }
    *(undefined4 *)(*(long *)(DAT_0918b158 + 0xb8) + 0x10) = uVar1;
  }
  return;
}

