// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$ApplyTitleLayout
// address: 0x77fd790
// body: available
// range: 0x77fd790-0x77fda6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fda64 to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fda68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__ApplyTitleLayout
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,long param_10)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar4 = param_3;
  fVar3 = param_4;
  if ((DAT_09523175 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09523175 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_9,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (param_9 != 0) {
    UnityEngine_UI_Image__set_sprite(param_9,param_10,0);
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_9,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Equality(param_10,0,0);
    if (((((uVar1 & 1) != 0) || (param_3 <= 0.0)) || (param_4 <= 0.0)) ||
       ((param_7 <= 0.0 || (param_8 <= 0.0)))) {
      UnityEngine_UI_Image__set_preserveAspect(param_9,1,0);
      if (lVar2 != 0) {
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fStack0000000000000000,lVar2,0,0);
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fStack0000000000000004,lVar2,1,0);
LAB_077fda34:
        UnityEngine_RectTransform__set_anchoredPosition
                  (fStack0000000000000008,fStack000000000000000c,lVar2,0);
        return;
      }
    }
    else if (param_10 != 0) {
      UnityEngine_Sprite__get_rect(param_10,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Sprite__get_rect(param_10,0);
      UnityEngine_UI_Image__set_preserveAspect(param_9,0,0);
      if (lVar2 != 0) {
        fVar7 = (param_8 * fStack0000000000000004) / param_4;
        fVar3 = param_8 * fStack0000000000000004 * ((param_3 * fVar4) / (param_4 * fVar3));
        fVar4 = param_7 * fStack0000000000000000;
        if (fVar3 <= param_7 * fStack0000000000000000) {
          fVar4 = fVar3;
        }
        fVar8 = param_5 + param_7 * 0.5;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar4 / param_3,lVar2,0,0);
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar7,lVar2,1,0);
        fVar3 = (float)UnityEngine_RectTransform__get_pivot(lVar2,0);
        fStack0000000000000004 = fStack0000000000000004 * ((param_6 + param_8 * 0.5) - param_5);
        fVar6 = fStack000000000000000c + fStack0000000000000004;
        fVar5 = (float)UnityEngine_RectTransform__get_pivot
                                 (fStack000000000000000c,fStack0000000000000004,lVar2,0);
        fStack0000000000000008 =
             (fStack0000000000000008 + fStack0000000000000000 * (fVar8 - fVar3)) -
             (fVar4 / param_3) * ((param_1 + param_3 * 0.5) - fVar5);
        fStack000000000000000c =
             fVar6 - fVar7 * ((param_2 + param_4 * 0.5) - fStack0000000000000004);
        goto LAB_077fda34;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

