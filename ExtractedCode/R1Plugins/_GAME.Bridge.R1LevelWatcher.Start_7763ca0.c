// rea decompile_all
// name: _GAME.Bridge.R1LevelWatcher$$Start
// address: 0x7763ca0
// body: available
// range: 0x7763ca0-0x7763ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7763ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelWatcher__Start(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09522c53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174588);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09189950);
    FUN_03f5c2a4(&DAT_091d6d48);
    FUN_03f5c2a4(&DAT_091d6d50);
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522c53 = 1;
  }
  if (DAT_09522cac == '\0') {
    FUN_03f5c2a4(&DAT_09189960);
    DAT_09522cac = '\x01';
  }
  lVar7 = *(long *)(DAT_09189960 + 0xb8);
  if (*(char *)(lVar7 + 0x30) == '\0') {
    if (DAT_09522cad == '\0') {
      FUN_03f5c2a4(&DAT_09189960);
      DAT_09522cad = '\x01';
      lVar7 = *(long *)(DAT_09189960 + 0xb8);
    }
    *(undefined1 *)(lVar7 + 0x30) = 1;
    _GAME_BaseGame_R1Runtime__Ensure(0);
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,0,DAT_091d6d50,0);
    _GAME_BaseGame_R1Runtime__remove_OnLateTick(uVar4,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,0,DAT_091d6d50,0);
    _GAME_BaseGame_R1Runtime__add_OnLateTick(uVar4,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09174588);
    FUN_070a8c30(uVar4,0,DAT_091d6d48,0);
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__remove_onLevelEnded(uVar4,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09174588);
    FUN_070a8c30(uVar4,0,DAT_091d6d48,0);
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__add_onLevelEnded(uVar4,0);
    lVar7 = _GAME_Bridge_R1LevelWatcher__get_CurrentInitData();
    if (lVar7 != 0) {
      uVar3 = _GAME_Bridge_CookOrderBridge__get_LevelsCompleted();
      lVar5 = thunk_FUN_03f9944c(DAT_09189950);
      _GAME_Bridge_R1LevelInfo___ctor(lVar5,lVar7,uVar3);
      cVar1 = DAT_09522cae;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar5 + 0x2c) = 1;
      if (cVar1 == '\0') {
        FUN_03f5c2a4(&DAT_09189960);
        DAT_09522cae = '\x01';
      }
      plVar6 = (long *)(*(long *)(DAT_09189960 + 0xb8) + 0x28);
      *plVar6 = lVar5;
      thunk_FUN_03f5d7b8(plVar6,lVar5);
    }
    bVar2 = _GAME_Bridge_CookOrderBridge__get_IsAtHome();
    lVar7 = *(long *)(DAT_09189960 + 0xb8);
    *(byte *)(lVar7 + 0x31) = bVar2 & 1;
    *(byte *)(lVar7 + 0x32) = bVar2 & 1;
    *(undefined4 *)(lVar7 + 0x34) = 0;
  }
  return;
}

