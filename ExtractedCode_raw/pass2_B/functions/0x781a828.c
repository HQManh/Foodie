// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassLevelUICtrl$$ClaimPassReward
// address: 0x781a828
// body: available
// range: 0x781a828-0x781ab03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781a904 to 0x774f140 _GAME.GameUI.DropItemController$$DropRwItemToBag (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781aae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781ab00 to 0x774fa18 _GAME.GameUI.DropItemController$$DropCloneItemToBag (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassLevelUICtrl__ClaimPassReward(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_095232c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183010);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_0918a440);
    DAT_095232c4 = 1;
  }
  _GAME_Utils_HelperButton__SetActive(*(undefined8 *)(param_1 + 0x68),0,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar4 = _GAME_DreamyPass_DreamyPassManager__ClaimPassReward
                      (*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10));
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x98);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x10) == 0) {
        if (*(int *)(DAT_09183010 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09183010 + 0xb8) != 0) {
          iVar2 = _GAME_Currency_CurrencyData__get_heart(**(long **)(DAT_09183010 + 0xb8),0);
          if (0 < 8 - iVar2) {
            uVar5 = thunk_FUN_03f9944c(DAT_0918a440);
            _GAME_GameItem_RwItemModel___ctor(uVar5,2,8 - iVar2,0);
            _GAME_GameItem_GameItemManager__ClaimReward(uVar5,0x2e,3,0);
          }
          uVar5 = thunk_FUN_03f9944c(DAT_0918a440);
          _GAME_GameItem_RwItemModel___ctor(uVar5,0x33,10,0);
          _GAME_GameItem_GameItemManager__ClaimReward(uVar5,0x2e,3,0);
          uVar5 = thunk_FUN_03f9944c(DAT_0918a440);
          _GAME_GameItem_RwItemModel___ctor(uVar5,0x34,1,0);
          _GAME_GameItem_GameItemManager__ClaimReward(uVar5,0x2e,3,0);
          lVar7 = thunk_FUN_03f9944c(DAT_0917c1f0);
          FUN_057e0400(lVar7,DAT_091acd38);
          lVar6 = *(long *)(param_1 + 0x58);
          if (lVar6 != 0) {
            iVar2 = 0;
            while (lVar6 = UnityEngine_Component__get_transform(lVar6,0), lVar6 != 0) {
              iVar3 = UnityEngine_Transform__get_childCount(lVar6,0);
              if (iVar3 <= iVar2) {
                _GAME_GameUI_DropItemController__DropCloneItemToBag(0x3dcccccd,lVar7,0);
                return;
              }
              if ((((*(long *)(param_1 + 0x58) == 0) ||
                   (lVar6 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x58),0),
                   lVar6 == 0)) ||
                  (lVar6 = UnityEngine_Transform__GetChild(lVar6,iVar2,0), lVar6 == 0)) ||
                 (uVar5 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 = DAT_091acd50,
                 lVar7 == 0)) break;
              lVar8 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 == 0) break;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar7,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *(long *)(param_1 + 0x58);
              iVar2 = iVar2 + 1;
              if (lVar6 == 0) break;
            }
          }
        }
      }
      else {
        _GAME_GameItem_GameItemManager__ClaimReward(*(undefined8 *)(lVar7 + 0x20),0x2e,3,0);
        if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x20);
          uVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x58),0);
          _GAME_GameUI_DropItemController__DropRwItemToBag(uVar9,uVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

