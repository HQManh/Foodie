// rea decompile_all
// name: _GAME.Profile.ProfilePopupRouter$$Open
// address: 0x77ba5c0
// body: available
// range: 0x77ba5c0-0x77ba8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ba748 to 0x774d01c _GAME.GameUI.ToastController$$ShowLocalizeMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ba8bc to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ba8ec to 0x77ad210 _GAME.Profile.PopupProfilePreviewCtrl$$Open (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ba8f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfilePopupRouter__Open(uint *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09522ed1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5fb8);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091b8650);
    FUN_03f5c2a4(&DAT_091896d0);
    FUN_03f5c2a4(&DAT_09213fe8);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522ed1 = 1;
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522cb0 == '\0') {
    FUN_03f5c2a4(&DAT_09180dc0);
    DAT_09522cb0 = '\x01';
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
  uVar2 = _GAME_Profile_ProfileOpenRequest__get_IsValid(param_1);
  if (((uVar2 & 1) == 0) || (uVar2 = System_String__IsNullOrEmpty(uVar5,0), (uVar2 & 1) != 0)) {
    lVar3 = DAT_091c0310;
    lVar4 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar4 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar4 = *(long *)(lVar3 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_092087b8,**(undefined8 **)(lVar3 + 0xb8),0);
    return;
  }
  lVar3 = *(long *)(DAT_091b8650 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) goto LAB_077ba8f0;
    uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(lVar3 + 400) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar3 + 400) + 0x10), lVar3 == 0)) {
        lVar3 = **(long **)(DAT_09535468 + 0xb8);
      }
      uVar2 = System_String__Equals(lVar3,*(undefined8 *)(param_1 + 2),4,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
  }
  iVar1 = *(int *)(DAT_09189468 + 0xe4);
  **(int **)(DAT_091896d0 + 0xb8) = **(int **)(DAT_091896d0 + 0xb8) + 1;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  lVar3 = FUN_04ca5cb8(DAT_091d5fb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09213fe8,0);
    return;
  }
  if (lVar3 != 0) {
    _GAME_Profile_PopupProfilePreviewCtrl__Open
              (lVar3,*(undefined8 *)(param_1 + 4),(ulong)*param_1 << 0x20,
               **(undefined4 **)(DAT_091896d0 + 0xb8));
    return;
  }
LAB_077ba8f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

