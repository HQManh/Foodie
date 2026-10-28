// rea decompile_all
// name: _GAME.Inbox.SocialLinkButtonUICtrl$$BuildDeviceInfoBody
// address: 0x77cde9c
// body: available
// range: 0x77cde9c-0x77ce2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ce2b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ce2b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_SocialLinkButtonUICtrl__BuildDeviceInfoBody(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09522fa4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_0918a3d0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918b720);
    FUN_03f5c2a4(&DAT_091f5858);
    FUN_03f5c2a4(&DAT_091f5870);
    FUN_03f5c2a4(&DAT_09203158);
    FUN_03f5c2a4(&DAT_0920b328);
    FUN_03f5c2a4(&DAT_09206918);
    FUN_03f5c2a4(&DAT_091fbc40);
    FUN_03f5c2a4(&DAT_0920c880);
    FUN_03f5c2a4(&DAT_09209398);
    FUN_03f5c2a4(&DAT_091f58d0);
    DAT_09522fa4 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0xd);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = DAT_091f5870;
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Application__get_version(0);
      local_34 = UnityEngine_Application__get_platform(0);
      uVar3 = FUN_03f5c42c(DAT_0918a3d0,&local_34);
      uVar2 = System_String__Format(DAT_091fbc40,uVar2,uVar3,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),uVar2);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = DAT_09209398;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
          uVar2 = UnityEngine_SystemInfo__GetOperatingSystem(0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38),uVar2);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = DAT_091f58d0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
              uVar2 = UnityEngine_SystemInfo__GetDeviceModel(0);
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48),uVar2);
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x50) = DAT_091f5858;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                  local_38 = UnityEngine_SystemInfo__get_systemMemorySize(0);
                  uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
                  uVar2 = System_String__Format(DAT_0920b328,uVar2,0);
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar1 + 0x58) = uVar2;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58),uVar2);
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x60) = DAT_09203158;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                      uVar2 = UnityEngine_SystemInfo__GetGraphicsDeviceName(0);
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x68) = uVar2;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68),uVar2);
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x70) = DAT_091f5858;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                          local_3c = UnityEngine_Screen__get_width(0);
                          uVar2 = FUN_03f5c42c(DAT_09535420,&local_3c);
                          local_40 = UnityEngine_Screen__get_height(0);
                          uVar3 = FUN_03f5c42c(DAT_09535420,&local_40);
                          uVar2 = System_String__Format(DAT_0920c880,uVar2,uVar3,0);
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x78) = uVar2;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78),uVar2);
                            local_44 = UnityEngine_Application__get_systemLanguage(0);
                            uVar2 = FUN_03f5c42c(DAT_0918b720,&local_44);
                            uVar2 = System_String__Format(DAT_09206918,uVar2,0);
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x80) = uVar2;
                              thunk_FUN_03f5d7b8();
                              System_String__Concat(lVar1,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

