// rea decompile_all
// name: _GAME.BaseGame.R1Runtime$$Ensure
// address: 0x77dbe84
// body: available
// range: 0x77dbe84-0x77dc007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77dbff4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77dc004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_R1Runtime__Ensure(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_0952301c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091cd740);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189980);
    FUN_03f5c2a4(&DAT_09214018);
    DAT_0952301c = 1;
  }
  uVar4 = *(undefined8 *)(*(long *)(DAT_09189980 + 0xb8) + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    if (DAT_09522bd5 == '\0') {
      FUN_03f5c2a4(&DAT_09189980);
      DAT_09522bd5 = '\x01';
    }
    if (*(char *)(*(long *)(DAT_09189980 + 0xb8) + 0x20) == '\0') {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Application__get_isPlaying(0);
      if ((uVar1 & 1) != 0) {
        lVar2 = thunk_FUN_03f9944c(DAT_09184b68);
        UnityEngine_GameObject___ctor(lVar2,DAT_09214018,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__DontDestroyOnLoad(lVar2,0);
        if (lVar2 != 0) {
          uVar4 = FUN_04b7c294(lVar2,DAT_091cd740);
          puVar3 = (undefined8 *)(*(long *)(DAT_09189980 + 0xb8) + 0x28);
          *puVar3 = uVar4;
          thunk_FUN_03f5d7b8(puVar3,uVar4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

