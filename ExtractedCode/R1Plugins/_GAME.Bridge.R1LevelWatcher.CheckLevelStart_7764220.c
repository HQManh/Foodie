// rea decompile_all
// name: _GAME.Bridge.R1LevelWatcher$$CheckLevelStart
// address: 0x7764220
// body: available
// range: 0x7764220-0x7764403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77643f0 to 0x4d0fec8 FUN_04d0fec8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelWatcher__CheckLevelStart(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_09522c57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09189950);
    FUN_03f5c2a4(&DAT_091d6d38);
    FUN_03f5c2a4(&DAT_09189960);
    FUN_03f5c2a4(&DAT_092140a0);
    DAT_09522c57 = 1;
  }
  lVar2 = _GAME_Bridge_R1LevelWatcher__get_CurrentInitData();
  if (lVar2 == 0) {
    return;
  }
  if (DAT_09522bda == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522bda = '\x01';
  }
  lVar3 = *(long *)(*(long *)(DAT_09189960 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    if (lVar2 == *(long *)(lVar3 + 0x30)) {
      return;
    }
    if (*(char *)(lVar3 + 0x2c) == '\0') {
      _GAME_Bridge_R1LevelWatcher__EndWithLose(lVar3,2);
    }
  }
  uVar1 = _GAME_Bridge_CookOrderBridge__get_LevelsCompleted();
  uVar4 = thunk_FUN_03f9944c(DAT_09189950);
  _GAME_Bridge_R1LevelInfo___ctor(uVar4,lVar2,uVar1);
  if (DAT_09522cae == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522cae = '\x01';
  }
  puVar5 = (undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 0x28);
  *puVar5 = uVar4;
  thunk_FUN_03f5d7b8(puVar5,uVar4);
  if (DAT_09522bda == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522bda = '\x01';
  }
  uVar4 = System_String__Format
                    (DAT_092140a0,*(undefined8 *)(*(long *)(DAT_09189960 + 0xb8) + 0x28),0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar4,0);
  puVar5 = *(undefined8 **)(DAT_09189960 + 0xb8);
  uVar4 = *puVar5;
  if (DAT_09522bda == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522bda = '\x01';
    puVar5 = *(undefined8 **)(DAT_09189960 + 0xb8);
  }
  FUN_04d0fec8(uVar4,puVar5[5],DAT_091d6d38);
  return;
}

