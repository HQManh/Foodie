// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$HasSkippedWord
// address: 0x7767274
// body: available
// range: 0x7767274-0x776733f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7767338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776733c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_Bridge_R1UserTextSupport__HasSkippedWord(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  
  if ((DAT_09522c76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189998);
    DAT_09522c76 = 1;
  }
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 8);
  if (lVar4 != 0) {
    iVar2 = (int)*(ulong *)(lVar4 + 0x18);
    bVar5 = 0 < iVar2;
    if (0 < iVar2) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_1 == 0) goto LAB_07767338;
        iVar2 = System_String__IndexOf(param_1,*(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),5,0);
        if (-1 < iVar2) {
          return bVar5;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar3 = (ulong)uVar1;
        uVar6 = uVar6 + 1;
        bVar5 = (long)uVar6 < (long)(int)uVar1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    return bVar5;
  }
LAB_07767338:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

