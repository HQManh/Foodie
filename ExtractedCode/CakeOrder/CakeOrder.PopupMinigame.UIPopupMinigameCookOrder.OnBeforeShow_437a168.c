// rea decompile_all
// name: CakeOrder.PopupMinigame.UIPopupMinigameCookOrder$$OnBeforeShow
// address: 0x437a168
// body: available
// range: 0x437a168-0x437a323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437a318 to 0x437a324 CakeOrder.PopupMinigame.UIPopupMinigameCookOrder$$ShowViewCoverImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437a31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437a320 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__OnBeforeShow(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float in_s3;
  int iVar7;
  float fVar8;
  
  if ((DAT_09517932 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517932 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__OnBeforeShow(param_1,0);
  lVar3 = *(long *)(param_1 + 0x118);
  if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar1)) {
    lVar4 = 0;
    do {
      if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
      if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
      goto LAB_0437a31c;
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      uVar1 = *(uint *)(lVar3 + 0x18);
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)uVar1);
  }
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10), lVar3 != 0)) {
    fVar5 = (float)*(int *)(lVar3 + 0x18);
    fVar6 = (float)*(int *)(lVar3 + 0x1c);
    if (*(int *)(lVar3 + 0x18) < 1) {
      fVar5 = 2048.0;
    }
    fVar8 = fVar6;
    if (*(int *)(lVar3 + 0x1c) < 1) {
      fVar8 = 2048.0;
    }
    if (*(long *)(param_1 + 200) != 0) {
      UnityEngine_RectTransform__get_rect(*(long *)(param_1 + 200),0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar6 = fVar6 - (*(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xd8));
      in_s3 = in_s3 - (*(float *)(param_1 + 0xdc) + *(float *)(param_1 + 0xdc));
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
      if (fVar8 <= in_s3) {
        in_s3 = fVar8;
      }
      if ((*(long *)(param_1 + 0xc0) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10), lVar3 != 0)) {
        iVar7 = *(int *)(lVar3 + 0x14);
        fVar6 = fVar6 / (float)*(int *)(lVar3 + 0x10);
        in_s3 = in_s3 / (float)iVar7;
        if (in_s3 <= fVar6) {
          fVar6 = in_s3;
        }
        if (*(long *)(param_1 + 0xd0) != 0) {
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                    (fVar6 * (float)*(int *)(lVar3 + 0x10),*(long *)(param_1 + 0xd0),0,0);
          if (*(long *)(param_1 + 0xd0) != 0) {
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                      (fVar6 * (float)iVar7,*(long *)(param_1 + 0xd0),1,0);
            if (*(long *)(param_1 + 0x108) != 0) {
              CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x108),0);
              if (*(long *)(param_1 + 0x110) != 0) {
                CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x110),0);
                CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__ShowViewCoverImmediate(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0437a31c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

