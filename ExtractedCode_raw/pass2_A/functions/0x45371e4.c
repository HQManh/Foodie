// rea decompile_all
// name: DG.Tweening.DOTween$$ManualUpdate
// address: 0x45371e4
// body: available
// range: 0x45371e4-0x45372d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45372c0 to 0x4574de8 DG.Tweening.Core.TweenManager$$Update (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween__ManualUpdate(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if ((DAT_0951868e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_0951868e = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  DG_Tweening_DOTween__InitCheck();
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_0918c158 + 0xb8) + 0x14) != '\0') {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183190);
    }
    fVar1 = *(float *)(*(long *)(DAT_09183190 + 0xb8) + 0x18);
    fVar2 = *(float *)(*(long *)(DAT_09183190 + 0xb8) + 0x1c);
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Update(fVar1 * param_1,fVar1 * fVar2 * param_2,3,0);
    return;
  }
  return;
}

