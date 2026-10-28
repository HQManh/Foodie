// rea decompile_all
// name: _GAME.Profile.ProfileFIconUICtrl$$OpenPopupProfile
// address: 0x77bd4c0
// body: available
// range: 0x77bd4c0-0x77bd88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bd880 to 0x77ba9a0 _GAME.Profile.ProfilePopupRouterFacade$$OpenSelf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77bd884 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bd888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileFIconUICtrl__OpenPopupProfile(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_38 [4];
  byte local_34 [4];
  byte local_28 [4];
  byte local_24 [4];
  
  if ((DAT_09522efc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0921d1d0);
    FUN_03f5c2a4(&DAT_09225348);
    FUN_03f5c2a4(&DAT_092087b8);
    FUN_03f5c2a4(&DAT_0921c9a0);
    FUN_03f5c2a4(&DAT_0921fbe8);
    FUN_03f5c2a4(&DAT_09213d88);
    DAT_09522efc = 1;
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
  uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_03f5c394(DAT_091805f8,5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = DAT_09213d88;
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_24[0] = _GAME_BaseGame_ABIServerAPI__get_IsNetworkActive(0);
      local_24[0] = local_24[0] & 1;
      uVar4 = FUN_03f5c42c(DAT_09535400,local_24);
      uVar4 = System_String__Format(DAT_0921fbe8,uVar4,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = uVar4;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar4);
        local_28[0] = _GAME_BaseGame_ABIServerAPI__get_IsIdentityReady(0);
        local_28[0] = local_28[0] & 1;
        uVar4 = FUN_03f5c42c(DAT_09535400,local_28);
        uVar4 = System_String__Format(DAT_0921d1d0,uVar4,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar4;
          thunk_FUN_03f5d7b8();
          if (DAT_09522f09 == '\0') {
            FUN_03f5c2a4(&DAT_09180dc0);
            DAT_09522f09 = '\x01';
          }
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar1 = _GAME_Utils_HelperString__IsNullOrEmpty
                            (*(undefined8 *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x20),0);
          local_34[0] = (bVar1 ^ 0xff) & 1;
          uVar4 = FUN_03f5c42c(DAT_09535400,local_34);
          uVar4 = System_String__Format(DAT_0921c9a0,uVar4,0);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = uVar4;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38),uVar4);
            local_38[0] = _GAME_BaseGame_IdentityRecovery__get_HasIdentityConversionBarrier(0);
            local_38[0] = local_38[0] & 1;
            uVar4 = FUN_03f5c42c(DAT_09535400,local_38);
            uVar4 = System_String__Format(DAT_09225348,uVar4,0);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar4;
              thunk_FUN_03f5d7b8();
              uVar4 = System_String__Concat(lVar3,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogError(uVar4,0);
              lVar3 = DAT_091c0310;
              lVar5 = *(long *)(DAT_091c0310 + 0x38);
              if (lVar5 == 0) {
                FUN_03f95ac8(DAT_091c0310);
                lVar5 = *(long *)(lVar3 + 0x38);
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_03f95a6c();
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  _GAME_Profile_ProfilePopupRouterFacade__OpenSelf();
  return;
}

