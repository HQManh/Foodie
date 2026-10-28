// rea decompile_all
// name: _GAME.GameUI.PopupController$$RemoveDestroyed
// address: 0x774c570
// body: available
// range: 0x774c570-0x774c7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774c7bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774c7c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_PopupController__RemoveDestroyed(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09522b79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ecb8);
    FUN_03f5c2a4(&DAT_0919ecc8);
    FUN_03f5c2a4(&DAT_091cb288);
    FUN_03f5c2a4(&DAT_091cb560);
    FUN_03f5c2a4(&DAT_091a3d58);
    FUN_03f5c2a4(&DAT_091a3d60);
    FUN_03f5c2a4(&DAT_091a3d68);
    FUN_03f5c2a4(&DAT_09178e38);
    FUN_03f5c2a4(&DAT_091af1e8);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091ee810);
    FUN_03f5c2a4(&DAT_091935d8);
    DAT_09522b79 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_06fd811c(lVar1,DAT_0919ecc8);
    if (*(int *)(DAT_091935d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091935d8);
    }
    puVar5 = *(undefined8 **)(DAT_091935d8 + 0xb8);
    lVar1 = puVar5[3];
    if (lVar1 == 0) {
      if (*(int *)(DAT_091935d8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091935d8);
        puVar5 = *(undefined8 **)(DAT_091935d8 + 0xb8);
      }
      uVar6 = *puVar5;
      lVar1 = thunk_FUN_03f9944c(DAT_09178e38);
      FUN_05322d94(lVar1,uVar6,DAT_091ee810,0);
      plVar3 = (long *)(*(long *)(DAT_091935d8 + 0xb8) + 0x18);
      *plVar3 = lVar1;
      thunk_FUN_03f5d7b8(plVar3,lVar1);
    }
    uVar2 = FUN_04b0cafc(uVar2,lVar1,DAT_091cb560);
    lVar1 = FUN_04b08b78(uVar2,DAT_091cb288);
    if (lVar1 != 0) {
      FUN_057e185c(&local_58,lVar1,DAT_091af1e8);
      while( true ) {
        uVar4 = FUN_071bd28c(&local_58,DAT_091a3d60);
        uVar2 = local_48;
        if ((uVar4 & 1) == 0) {
          FUN_071bd288(&local_58,DAT_091a3d58);
          return;
        }
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 0x10);
        if (lVar1 == 0) break;
        FUN_06fd9970(lVar1,uVar2,DAT_0919ecb8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

