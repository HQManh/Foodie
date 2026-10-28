// rea decompile_all
// name: _GAME.Bridge.R1LevelWatcher$$Poll
// address: 0x77640e4
// body: available
// range: 0x77640e4-0x776421f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776421c to 0x7764520 _GAME.Bridge.R1LevelWatcher$$Raise (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelWatcher__Poll(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09522c56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522c56 = 1;
  }
  _GAME_Bridge_R1LevelWatcher__CheckLevelStart();
  bVar1 = _GAME_Bridge_CookOrderBridge__get_IsAtHome();
  lVar4 = *(long *)(DAT_09189960 + 0xb8);
  if ((bVar1 & 1) == 0) {
    pcVar5 = (char *)(lVar4 + 0x32);
    *(byte *)(lVar4 + 0x31) = bVar1 & 1;
    if (*pcVar5 == '\0') {
      return;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x31) == '\0') {
      if (DAT_09522bda == '\0') {
        FUN_03f5c2a4(&DAT_09189960);
        DAT_09522bda = '\x01';
        lVar4 = *(long *)(DAT_09189960 + 0xb8);
      }
      lVar2 = *(long *)(lVar4 + 0x28);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x2c) == '\0')) {
        _GAME_Bridge_R1LevelWatcher__EndWithLose(lVar2,1);
        lVar4 = *(long *)(DAT_09189960 + 0xb8);
      }
      *(undefined4 *)(lVar4 + 0x34) = 0;
      *(undefined1 *)(lVar4 + 0x32) = 1;
      _GAME_Bridge_R1LevelWatcher__Raise(*(undefined8 *)(lVar4 + 0x20));
    }
    pcVar5 = (char *)(*(long *)(DAT_09189960 + 0xb8) + 0x32);
    *(byte *)(*(long *)(DAT_09189960 + 0xb8) + 0x31) = bVar1 & 1;
    if (*pcVar5 == '\0') {
      return;
    }
    if ((bVar1 & 1) != 0) {
      uVar3 = _GAME_Bridge_CookOrderBridge__get_IsAnyPopupShowing();
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(*(long *)(DAT_09189960 + 0xb8) + 0x34) = 0;
        return;
      }
      fVar7 = *(float *)(*(long *)(DAT_09189960 + 0xb8) + 0x34);
      fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      fVar7 = fVar7 + fVar6;
      lVar4 = *(long *)(DAT_09189960 + 0xb8);
      *(float *)(lVar4 + 0x34) = fVar7;
      if (fVar7 < 1.5) {
        return;
      }
      *(undefined1 *)(lVar4 + 0x32) = 0;
      _GAME_Bridge_R1LevelWatcher__Raise(*(undefined8 *)(lVar4 + 0x18));
      return;
    }
  }
  *pcVar5 = '\0';
  return;
}

