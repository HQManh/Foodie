// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$Open
// address: 0x77fc750
// body: available
// range: 0x77fc750-0x77fcae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fc8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fcae4 to 0x77dd95c _GAME.BaseGame.TrackingManager$$LogEventIAPShow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__Open(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  if ((DAT_09523170 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_091ac948);
    FUN_03f5c2a4(&DAT_091ac950);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6238);
    FUN_03f5c2a4(&DAT_091d6240);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_091ba3e0);
    FUN_03f5c2a4(&DAT_091ba3f8);
    FUN_03f5c2a4(&DAT_0917e718);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0920aa78);
    DAT_09523170 = 1;
  }
  _GAME_EventSale_PopupEventSaleCtrl__UpdateTitleSprites(param_1);
  iVar5 = *(int *)(DAT_0918a4d0 + 0xe4);
  *(undefined1 *)(*(long *)(DAT_09184268 + 0xb8) + 8) = 0;
  if (iVar5 == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_BaseGame_SOIAPConfig__GetPack(0x35,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x1a0,uVar2);
  lVar3 = *(long *)(param_1 + 0x100);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        if (*(long *)(param_1 + 0xe8) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xe8),1,0);
          if (*(long *)(param_1 + 0xf0) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xf0),0,0);
            uVar1 = *(undefined4 *)(param_1 + 0x1a8);
            if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            _GAME_BaseGame_TimerManager__RemoveCallbackTick(uVar1,0);
            uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar2,param_1,DAT_091d6240,0);
            uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar2,param_1,0);
            lVar3 = DAT_0917e718;
            *(undefined4 *)(param_1 + 0x1a8) = uVar1;
            uVar1 = *(undefined4 *)(param_1 + 0x1ac);
            if (*(int *)(lVar3 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_060df6f8(uVar1,DAT_091ba3f8);
            uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar2,param_1,DAT_091d6238,0);
            uVar1 = FUN_060df21c(uVar2,1,param_1,DAT_091ba3e0);
            *(undefined4 *)(param_1 + 0x1ac) = uVar1;
            _GAME_EventSale_PopupEventSaleCtrl__UpdateUITime(param_1);
            _GAME_GameUI_PopupBaseCtrl__Open(param_1,5,0);
            uVar2 = *(undefined8 *)(param_1 + 0x130);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if ((uVar4 & 1) == 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x138);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
              if ((uVar4 & 1) == 0) goto LAB_077fcaa0;
            }
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = CakeOrder_Localization_CakeLocalization__get_IsReady(0);
            if ((((uVar4 & 1) == 0) &&
                (uVar4 = UnityEngine_Localization_Settings_LocalizationSettings__get_HasSettings(0),
                (uVar4 & 1) != 0)) && (*(long *)(param_1 + 0x198) == 0)) {
              uVar2 = _GAME_EventSale_PopupEventSaleCtrl__UpdateTitlesAfterInitialization(param_1);
              uVar2 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar2,0);
              *(undefined8 *)(param_1 + 0x198) = uVar2;
              thunk_FUN_03f5d7b8(param_1 + 0x198,uVar2);
            }
LAB_077fcaa0:
            if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = _GAME_BaseGame_SOIAPConfig__ConvertSku(0x35,0);
            _GAME_BaseGame_TrackingManager__LogEventIAPShow(uVar2,DAT_0920aa78,0);
            return;
          }
        }
        break;
      }
      lVar3 = FUN_057e0998(lVar3,iVar5,DAT_091ac950);
      if (lVar3 == 0) break;
      _GAME_EventSale_EventSalePackUICtrl__Setup(lVar3,iVar5);
      lVar3 = *(long *)(param_1 + 0x100);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

