// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$HasGlyphs
// address: 0x7767340
// body: available
// range: 0x7767340-0x776744b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7767444 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7767448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte _GAME_Bridge_R1UserTextSupport__HasGlyphs(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int local_34;
  
  if ((DAT_09522c74 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184800);
    DAT_09522c74 = 1;
  }
  local_34 = 0;
  if (*(int *)(DAT_09184800 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = UnityEngine_TextCore_LowLevel_FontEngine__LoadFontFace(0x42400000,param_1,0,0);
  bVar2 = 0;
  if (iVar3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0);
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      bVar2 = 1;
    }
    else {
      uVar5 = 0;
      uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined4 *)(param_2 + 0x20 + uVar5 * 4);
        if (*(int *)(DAT_09184800 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar2 = UnityEngine_TextCore_LowLevel_FontEngine__TryGetGlyphIndex(uVar1,&local_34,0);
        bVar2 = bVar2 & local_34 != 0;
        if (bVar2 == 0) {
          return 0;
        }
        uVar4 = (ulong)*(uint *)(param_2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
    }
  }
  return bVar2;
}

