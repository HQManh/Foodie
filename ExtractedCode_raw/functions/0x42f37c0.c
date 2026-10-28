// rea decompile_all
// name: CakeOrder.Profile.UIPopupEditProfile$$ReloadDraftFromSave
// address: 0x42f37c0
// body: available
// range: 0x42f37c0-0x42f38cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f38c8 to 0x42f3b48 CakeOrder.Profile.UIPopupEditProfile$$RefreshSaveState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42f38cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Profile_UIPopupEditProfile__ReloadDraftFromSave(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_095174ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095174ca = 1;
  }
  lVar1 = *(long *)(DAT_091b4a80 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (lVar1 != 0) {
    uVar2 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_AvatarId(lVar1,0);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x100,uVar2);
    uVar2 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 200);
      uVar2 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_PlayerName(lVar1,0);
      if (lVar4 == 0) goto LAB_042f38cc;
      TMPro_TMP_InputField__SetTextWithoutNotify(lVar4,uVar2,0);
    }
    CakeOrder_Profile_UIPopupEditProfile__RefreshSelection(param_1);
    CakeOrder_Profile_UIPopupEditProfile__RefreshPreview(param_1);
    CakeOrder_Profile_UIPopupEditProfile__RefreshSaveState(param_1);
    return;
  }
LAB_042f38cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

