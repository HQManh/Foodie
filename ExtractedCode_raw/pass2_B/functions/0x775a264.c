// rea decompile_all
// name: _GAME.GameUI.RwBoxUICtrl$$ShowReward
// address: 0x775a264
// body: available
// range: 0x775a264-0x775a5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775a348 to 0x89a1808 UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775a50c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775a5c0 to 0x8990ac0 UnityEngine.Canvas$$set_sortingOrder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_RwBoxUICtrl__ShowReward(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  
  if ((DAT_09522bec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091afa78);
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afaa0);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_091d4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522bec = 1;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x28),1,0);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09187680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar9,0);
    return;
  }
  iVar3 = 0;
  while( true ) {
    iVar10 = *(int *)(lVar6 + 0x18);
    lVar6 = *(long *)(param_1 + 0x30);
    if (iVar10 <= iVar3) break;
    if (lVar6 == 0) goto LAB_0775a50c;
    if (iVar3 < *(int *)(lVar6 + 0x18)) {
      lVar6 = FUN_057e0998(lVar6,iVar3,DAT_091afaa0);
    }
    else {
      uVar9 = FUN_057e0998(lVar6,0,DAT_091afaa0);
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091afaa0), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_transform(lVar6,0), lVar6 == 0)) goto LAB_0775a50c;
      uVar4 = UnityEngine_Transform__GetParent(lVar6,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar6 = FUN_04c35338(uVar9,uVar4,DAT_091d4c48);
    }
    lVar11 = DAT_091afa78;
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) goto LAB_0775a50c;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 <= iVar3) {
      lVar8 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0775a50c;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_03f5d7b8(plVar7,lVar6);
      }
      else {
        FUN_057e0c68(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    _GAME_Utils_HelperMonoBehaviour__SetActive(lVar6,1,0);
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (uVar9 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar3,DAT_091afa68), lVar6 == 0))
    goto LAB_0775a50c;
    _GAME_GameUI_RwItemUICtrl__SetData(lVar6,uVar9);
    lVar6 = *(long *)(param_1 + 0x38);
    iVar3 = iVar3 + 1;
    if (lVar6 == 0) goto LAB_0775a50c;
  }
  if (lVar6 != 0) goto LAB_0775a4dc;
  goto LAB_0775a50c;
  while( true ) {
    uVar9 = FUN_057e0998(lVar6,iVar10,DAT_091afaa0);
    _GAME_Utils_HelperMonoBehaviour__SetActive(uVar9,0,0);
    lVar6 = *(long *)(param_1 + 0x30);
    iVar10 = iVar10 + 1;
    if (lVar6 == 0) break;
LAB_0775a4dc:
    if (*(int *)(lVar6 + 0x18) <= iVar10) {
      _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x28),1,0);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar9,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_Canvas__set_overrideSorting(*(long *)(param_1 + 0x20),1,0);
        lVar6 = _GAME_GameUI_RwBoxUICtrl__GetSortingCanvas(param_1);
        if (lVar6 != 0) {
          lVar11 = *(long *)(param_1 + 0x20);
          uVar2 = UnityEngine_Canvas__get_sortingLayerID(lVar6,0);
          if (lVar11 != 0) {
            UnityEngine_Canvas__set_sortingLayerID(lVar11,uVar2,0);
            lVar11 = *(long *)(param_1 + 0x20);
            iVar3 = UnityEngine_Canvas__get_sortingOrder(lVar6,0);
            if (lVar11 != 0) {
              UnityEngine_Canvas__set_sortingOrder(lVar11,iVar3 + 0xde,0);
              return;
            }
          }
        }
      }
      break;
    }
  }
LAB_0775a50c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

