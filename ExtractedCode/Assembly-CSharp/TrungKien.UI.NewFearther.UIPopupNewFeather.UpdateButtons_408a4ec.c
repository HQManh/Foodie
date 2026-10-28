// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$UpdateButtons
// address: 0x408a4ec
// body: available
// range: 0x408a4ec-0x408a5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408a5e4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408a5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKien_UI_NewFearther_UIPopupNewFeather__UpdateButtons(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09515cbd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae9d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515cbd = 1;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    iVar1 = *(int *)(param_1 + 0x120);
    iVar2 = *(int *)(*(long *)(param_1 + 0x118) + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = iVar1 + 1;
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0xe0) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xe0),0), lVar4 == 0))
      goto LAB_0408a5f8;
      UnityEngine_GameObject__SetActive(lVar4,iVar1 < iVar2,0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0xe8) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xe8),0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,iVar2 <= iVar1,0);
      return;
    }
  }
LAB_0408a5f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

