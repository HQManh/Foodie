// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$Awake
// address: 0x77fc410
// body: available
// range: 0x77fc410-0x77fc74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fc734 to 0x42dbc20 CakeOrder.Localization.CakeLocalization$$add_LocaleChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fc74c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_0952316f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6228);
    FUN_03f5c2a4(&DAT_091d6230);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0952316f = 1;
  }
  _GAME_GameUI_PopupBaseCtrl__Awake(param_5,0);
  uVar4 = *(undefined8 *)(param_5 + 0x118);
  uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
  UnityEngine_Events_UnityAction___ctor(uVar1,param_5,DAT_091d6228,0);
  _GAME_Utils_HelperButton__AddOnClickListener(uVar4,uVar1,0);
  uVar1 = *(undefined8 *)(param_5 + 0x130);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_5 + 0x130) == 0) goto LAB_077fc74c;
    uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x130) + 0xd8);
  }
  *(undefined8 *)(param_5 + 0x168) = uVar1;
  thunk_FUN_03f5d7b8(param_5 + 0x168);
  uVar1 = *(undefined8 *)(param_5 + 0x138);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_5 + 0x138) == 0) goto LAB_077fc74c;
    uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x138) + 0xd8);
  }
  *(undefined8 *)(param_5 + 0x170) = uVar1;
  thunk_FUN_03f5d7b8(param_5 + 0x170);
  uVar1 = *(undefined8 *)(param_5 + 0x130);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  uVar6 = param_3;
  uVar7 = param_4;
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_5 + 0x130) == 0) ||
       (lVar3 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_5 + 0x130),0), lVar3 == 0)
       ) goto LAB_077fc74c;
    UnityEngine_RectTransform__get_rect(lVar3,0);
    uVar6 = param_3;
    uVar7 = param_4;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined4 *)(param_5 + 0x178) = param_3;
    *(undefined4 *)(param_5 + 0x17c) = param_4;
    if ((*(long *)(param_5 + 0x130) == 0) ||
       (lVar3 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_5 + 0x130),0), lVar3 == 0)
       ) goto LAB_077fc74c;
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
    *(undefined4 *)(param_5 + 0x180) = uVar5;
    *(undefined4 *)(param_5 + 0x184) = param_2;
  }
  uVar1 = *(undefined8 *)(param_5 + 0x138);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_5 + 0x138) != 0) &&
       (lVar3 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_5 + 0x138),0), lVar3 != 0)
       ) {
      UnityEngine_RectTransform__get_rect(lVar3,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined4 *)(param_5 + 0x188) = uVar6;
      *(undefined4 *)(param_5 + 0x18c) = uVar7;
      if ((*(long *)(param_5 + 0x138) != 0) &&
         (lVar3 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_5 + 0x138),0),
         lVar3 != 0)) {
        uVar6 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
        *(undefined4 *)(param_5 + 400) = uVar6;
        *(undefined4 *)(param_5 + 0x194) = param_2;
        goto LAB_077fc688;
      }
    }
LAB_077fc74c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_077fc688:
  uVar1 = *(undefined8 *)(param_5 + 0x130);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x138);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar1,param_5,DAT_091d6230,0);
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_Localization_CakeLocalization__add_LocaleChanged(uVar1,0);
  return;
}

