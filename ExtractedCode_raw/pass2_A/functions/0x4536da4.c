// rea decompile_all
// name: DG.Tweening.DOTween$$AutoInit
// address: 0x4536da4
// body: available
// range: 0x4536da4-0x4536f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4536f00 to 0x4536774 DG.Tweening.DOTween$$Init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween__AutoInit(void)

{
  ulong uVar1;
  long *plVar2;
  
  if ((DAT_09518687 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091831c0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091ffdc8);
    DAT_09518687 = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Application__get_isPlaying(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_0951877b == '\0') {
    FUN_03f5c2a4(&DAT_09183190);
    DAT_0951877b = '\x01';
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09183190 + 0xb8) + 0x68) != '\0') {
    return;
  }
  plVar2 = (long *)UnityEngine_Resources__Load(DAT_091ffdc8,0);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183190);
  }
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(DAT_091831c0 + 0x130) <= *(byte *)(*plVar2 + 0x130)) {
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_091831c0 + 0x130) * 8 + -8) !=
          DAT_091831c0) {
        plVar2 = (long *)0x0;
      }
      goto LAB_04536eec;
    }
  }
  plVar2 = (long *)0x0;
LAB_04536eec:
  DG_Tweening_DOTween__Init(plVar2,0,0,0);
  return;
}

