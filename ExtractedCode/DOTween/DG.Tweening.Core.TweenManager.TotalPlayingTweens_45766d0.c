// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$TotalPlayingTweens
// address: 0x45766d0
// body: available
// range: 0x45766d0-0x45767db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45767d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45767d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int DG_Tweening_Core_TweenManager__TotalPlayingTweens(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  if ((DAT_095188d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188d6 = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(DAT_0918c158 + 0xb8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    iVar3 = 0;
  }
  else {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar1 = *(long *)(DAT_0918c158 + 0xb8);
    }
    if (*(char *)(lVar1 + 0x78) != '\0') {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      DG_Tweening_Core_TweenManager__ReorganizeActiveTweens();
    }
    uVar4 = 0;
    iVar3 = 0;
    lVar1 = DAT_0918c158;
    while( true ) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar1 = DAT_0918c158;
      }
      lVar2 = *(long *)(lVar1 + 0xb8);
      if ((long)(*(int *)(lVar2 + 0x74) + 1) <= (long)uVar4) break;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(DAT_0918c158 + 0xb8);
        lVar1 = DAT_0918c158;
      }
      lVar2 = *(long *)(lVar2 + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
      if (lVar2 != 0) {
        iVar3 = iVar3 + (uint)*(byte *)(lVar2 + 0x110);
      }
      uVar4 = uVar4 + 1;
    }
  }
  return iVar3;
}

