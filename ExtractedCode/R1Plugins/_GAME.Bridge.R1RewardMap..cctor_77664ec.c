// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$.cctor
// address: 0x77664ec
// body: available
// range: 0x77664ec-0x776671f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7766718 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776671c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1RewardMap___cctor(void)

{
  long lVar1;
  
  if ((DAT_09522c6d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee30);
    FUN_03f5c2a4(&DAT_0919ee28);
    FUN_03f5c2a4(&DAT_091768a8);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0921c970);
    FUN_03f5c2a4(&DAT_092182c8);
    FUN_03f5c2a4(&DAT_092231f0);
    FUN_03f5c2a4(&DAT_092182e8);
    FUN_03f5c2a4(&DAT_09218310);
    FUN_03f5c2a4(&DAT_09218318);
    FUN_03f5c2a4(&DAT_09222f58);
    FUN_03f5c2a4(&DAT_0921e910);
    FUN_03f5c2a4(&DAT_092182b8);
    DAT_09522c6d = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091768a8);
  FUN_06f33130(lVar1,DAT_0919ee28);
  if (lVar1 != 0) {
    FUN_06f33eec(lVar1,1,DAT_09222f58,DAT_0919ee30);
    FUN_06f33eec(lVar1,2,DAT_0921e910,DAT_0919ee30);
    FUN_06f33eec(lVar1,4,DAT_092231f0,DAT_0919ee30);
    FUN_06f33eec(lVar1,5,DAT_0921c970,DAT_0919ee30);
    FUN_06f33eec(lVar1,0x14,DAT_092182e8,DAT_0919ee30);
    FUN_06f33eec(lVar1,0x15,DAT_092182c8,DAT_0919ee30);
    FUN_06f33eec(lVar1,0x16,DAT_09218318,DAT_0919ee30);
    FUN_06f33eec(lVar1,0x17,DAT_092182b8,DAT_0919ee30);
    FUN_06f33eec(lVar1,0x18,DAT_09218310,DAT_0919ee30);
    **(long **)(DAT_09189978 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189978 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

