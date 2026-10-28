// rea decompile_all
// name: _GAME.SaveGame.SaveProgressButton$$FindButton
// address: 0x77a9154
// body: available
// range: 0x77a9154-0x77a922b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a9224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a9228 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveProgressButton__FindButton(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09522e4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5808);
    FUN_03f5c2a4(&DAT_091fd020);
    DAT_09522e4b = 1;
  }
  if ((param_1 != 0) && (lVar2 = FUN_04a6ac70(param_1,1,DAT_091c5808), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar2 + 0x20 + lVar6 * 8);
        if (lVar5 == 0) goto LAB_077a9224;
        uVar3 = UnityEngine_Object__GetName(lVar5,0);
        uVar4 = System_String__op_Equality(uVar3,DAT_091fd020,0);
        if ((uVar4 & 1) != 0) {
          return lVar5;
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    return 0;
  }
LAB_077a9224:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

