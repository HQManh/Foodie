// rea decompile_all
// name: IapAdsSystem.InAppManager$$OnGUI
// address: 0x731ad18
// body: available
// range: 0x731ad18-0x731af47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731af24 to 0x86bb09c UnityEngine.Event$$Use (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731af44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__OnGUI(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_09520564 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091cfc58);
    FUN_03f5c2a4(&DAT_091b3030);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190cd0);
    FUN_03f5c2a4(&DAT_092027e8);
    DAT_09520564 = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xb0) + 0x18) == 0) {
      return;
    }
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_GUI__set_depth(0xfffffc18,0);
    iVar1 = UnityEngine_Screen__get_width(0);
    iVar2 = UnityEngine_Screen__get_height(0);
    uVar4 = IapAdsSystem_InAppManager__GetFakePurchaseDimTexture();
    UnityEngine_GUI__DrawTexture(0,0,(float)iVar1,(float)iVar2,uVar4,0);
    iVar1 = UnityEngine_Screen__get_width(0);
    fVar6 = (float)NEON_fminnm((float)iVar1 * 0.8,0x44020000);
    iVar1 = UnityEngine_Screen__get_width(0);
    iVar2 = UnityEngine_Screen__get_height(0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189c30);
    }
    uVar4 = thunk_FUN_03f9944c(DAT_09190cd0);
    UnityEngine_GUI_WindowFunction___ctor(uVar4,param_1,DAT_091cfc58,0);
    UnityEngine_GUI__ModalWindow
              (((float)iVar1 - fVar6) * 0.5,((float)iVar2 + -220.0) * 0.5,fVar6,0x435c0000,0xe0301,
               uVar4,DAT_092027e8,0);
    lVar5 = UnityEngine_Event__get_current(0);
    if (lVar5 != 0) {
      uVar3 = UnityEngine_Event__get_type(lVar5,0);
      if (6 < uVar3) {
        return;
      }
      if (uVar3 == 2) {
        return;
      }
      lVar5 = UnityEngine_Event__get_current(0);
      if (lVar5 != 0) {
        UnityEngine_Event__Use(lVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

