// rea decompile_all
// name: _GAME.Levels.LevelPlayController$$OnLevelWin
// address: 0x77490e8
// body: available
// range: 0x77490e8-0x7749387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7749380 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7749384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Levels_LevelPlayController__OnLevelWin(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09522b4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c88a8);
    FUN_03f5c2a4(&DAT_091c88f0);
    FUN_03f5c2a4(&DAT_091ba440);
    FUN_03f5c2a4(&DAT_0917e730);
    FUN_03f5c2a4(&DAT_091ecab8);
    FUN_03f5c2a4(&DAT_091ecac0);
    FUN_03f5c2a4(&DAT_091ecac8);
    FUN_03f5c2a4(&DAT_091ecad0);
    FUN_03f5c2a4(&DAT_091923b0);
    FUN_03f5c2a4(&DAT_091923a8);
    DAT_09522b4c = 1;
  }
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x20) != '\0') && (*(char *)(param_1 + 0x21) == '\0')) {
      lVar1 = thunk_FUN_03f9944c(DAT_091923b0);
      System_Object___ctor(lVar1,0);
      lVar2 = DAT_091923a8;
      if (lVar1 == 0) goto LAB_07749384;
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = DAT_091923a8;
      }
      puVar4 = *(undefined8 **)(lVar2 + 0xb8);
      lVar5 = puVar4[1];
      if (lVar5 == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_091923a8 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(lVar5,uVar6,DAT_091ecab8,0);
        plVar3 = (long *)(*(long *)(DAT_091923a8 + 0xb8) + 8);
        *plVar3 = lVar5;
        thunk_FUN_03f5d7b8(plVar3,lVar5);
      }
      _GAME_Levels_LevelPlayController__Call(3,lVar5);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091c88a8,0);
      _GAME_Levels_LevelPlayController__Call(1,uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091c88f0,0);
      _GAME_Levels_LevelPlayController__Call(2,uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,lVar1,DAT_091ecac0,0);
      _GAME_Levels_LevelPlayController__Call(0,uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,lVar1,DAT_091ecac8,0);
      _GAME_Levels_LevelPlayController__Call(4,uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,lVar1,DAT_091ecad0,0);
      _GAME_Levels_LevelPlayController__Call(5,uVar6);
    }
    if (*(int *)(DAT_0917e730 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df854(DAT_091ba440);
    return;
  }
LAB_07749384:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

