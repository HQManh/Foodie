// rea decompile_all
// name: CakeOrder.InGame.UI.UIComboBar$$HandleComboActivated
// address: 0x42b4b5c
// body: available
// range: 0x42b4b5c-0x42b4c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b4c40 to 0x4380444 CakeOrder.InGame.InGameBackgroundsControl$$ChangeTintColorAll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b4c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b4c58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UI_UIComboBar__HandleComboActivated(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x88),0), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive(lVar2,0,0);
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x90),0), lVar2 != 0)) {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      if (*(long *)(param_1 + 0xd8) != 0) {
        Coffee_UIExtensions_UIParticle__Play(*(long *)(param_1 + 0xd8),0);
        lVar2 = *(long *)(param_1 + 0xe0);
        if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar1)) {
          lVar4 = 0;
          do {
            if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(lVar2 + 0x20 + lVar4 * 8);
            if (lVar3 == 0) goto LAB_042b4c54;
            Coffee_UIExtensions_UIParticle__Play(lVar3,0);
            Coffee_UIExtensions_UIParticle__StartEmission(lVar3,0);
            uVar1 = *(uint *)(lVar2 + 0x18);
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < (int)uVar1);
        }
        if ((*(long *)(param_1 + 0x78) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0x30);
          if (lVar2 != 0) {
            CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorAll
                      (*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),
                       *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),lVar2,0);
            return;
          }
          return;
        }
      }
    }
  }
LAB_042b4c54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

