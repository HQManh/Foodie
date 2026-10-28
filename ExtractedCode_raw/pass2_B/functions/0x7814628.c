// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassListLevel$$NormalizeRow
// address: 0x7814628
// body: available
// range: 0x7814628-0x7814777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7814768 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781476c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7814774 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassListLevel__NormalizeRow(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_09523285 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09523285 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((param_1 != 0) &&
     (plVar2 = (long *)UnityEngine_Component__get_transform(param_1,0), plVar2 != (long *)0x0)) {
    if (*plVar2 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f800000,plVar2,0);
    UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f800000,plVar2,0);
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar2,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
               *(undefined4 *)(lVar3 + 0x14),plVar2,0);
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

