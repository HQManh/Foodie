// rea decompile_all
// name: DG.Tweening.Plugins.RectOffsetPlugin$$SetRelativeEndValue
// address: 0x4566438
// body: available
// range: 0x4566438-0x4566547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4566540 to 0x85fe0e0 UnityEngine.RectOffset$$set_bottom (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4566544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectOffsetPlugin__SetRelativeEndValue(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x130), lVar3 != 0)) {
    iVar1 = UnityEngine_RectOffset__get_left(lVar3,0);
    if (*(long *)(param_2 + 0x128) != 0) {
      iVar2 = UnityEngine_RectOffset__get_left(*(long *)(param_2 + 0x128),0);
      UnityEngine_RectOffset__set_left(lVar3,iVar2 + iVar1,0);
      lVar3 = *(long *)(param_2 + 0x130);
      if (lVar3 != 0) {
        iVar1 = UnityEngine_RectOffset__get_right(lVar3,0);
        if (*(long *)(param_2 + 0x128) != 0) {
          iVar2 = UnityEngine_RectOffset__get_right(*(long *)(param_2 + 0x128),0);
          UnityEngine_RectOffset__set_right(lVar3,iVar2 + iVar1,0);
          lVar3 = *(long *)(param_2 + 0x130);
          if (lVar3 != 0) {
            iVar1 = UnityEngine_RectOffset__get_top(lVar3,0);
            if (*(long *)(param_2 + 0x128) != 0) {
              iVar2 = UnityEngine_RectOffset__get_top(*(long *)(param_2 + 0x128),0);
              UnityEngine_RectOffset__set_top(lVar3,iVar2 + iVar1,0);
              lVar3 = *(long *)(param_2 + 0x130);
              if (lVar3 != 0) {
                iVar1 = UnityEngine_RectOffset__get_bottom(lVar3,0);
                if (*(long *)(param_2 + 0x128) != 0) {
                  iVar2 = UnityEngine_RectOffset__get_bottom(*(long *)(param_2 + 0x128),0);
                  UnityEngine_RectOffset__set_bottom(lVar3,iVar2 + iVar1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

