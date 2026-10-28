// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain$$ChangeMode
// address: 0x431fdbc
// body: available
// range: 0x431fdbc-0x43200ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43200ec to 0x4257b24 CakeOrder.AudioManagerCakeOrder$$PlaySfxAndHaptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43200fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain__ChangeMode(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_0951764b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    DAT_0951764b = 1;
  }
  CakeOrder_Home_UIHomeTabPageMain__CancelFullUpgradeTransition(param_1);
  iVar1 = *(int *)(param_1 + 0xe8);
  *(int *)(param_1 + 0xe8) = param_2;
  CakeOrder_Home_UIHomeTabPageMain__ApplyHideInDetailsMode(param_1,param_2);
  if (param_2 < 2) {
    if (param_2 == 0) {
      if ((*(long *)(param_1 + 0xb0) == 0) ||
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xb0),0), lVar2 == 0))
      goto LAB_043200fc;
      UnityEngine_Transform__SetAsLastSibling(lVar2,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0xb0),0,0,0);
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb8),0,0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa0),0,0);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa8),0,0);
      lVar2 = *(long *)(param_1 + 0xb0);
      goto joined_r0x0431ff3c;
    }
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0xb8) == 0) ||
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xb8),0), lVar2 == 0))
      goto LAB_043200fc;
      UnityEngine_Transform__SetAsLastSibling(lVar2,0);
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0xb8),0,0,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb0),0,0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa0),0,0);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa8),0,0);
      lVar2 = *(long *)(param_1 + 0xb8);
      goto joined_r0x0431ff3c;
    }
  }
  else {
    if (param_2 == 2) {
      if ((*(long *)(param_1 + 0xa0) == 0) ||
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xa0),0), lVar2 == 0))
      goto LAB_043200fc;
      UnityEngine_Transform__SetAsLastSibling(lVar2,0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0xa0),0,0,0);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa8),0,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb0),0,0);
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb8),0,0);
      lVar2 = *(long *)(param_1 + 0xa0);
    }
    else {
      if (param_2 != 3) goto LAB_0432006c;
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xa8),0), lVar2 == 0))
      goto LAB_043200fc;
      UnityEngine_Transform__SetAsLastSibling(lVar2,0);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0xa8),0,0,0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xa0),0,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb0),0,0);
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_043200fc;
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xb8),0,0);
      lVar2 = *(long *)(param_1 + 0xa8);
    }
joined_r0x0431ff3c:
    if ((lVar2 == 0) || (*(long *)(param_1 + 200) == 0)) goto LAB_043200fc;
    CakeOrder_Home_HomeRestaurantsBuildingControl__SetCameraFraming
              (*(undefined4 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x5c),
               *(undefined4 *)(lVar2 + 0x60));
  }
LAB_0432006c:
  uVar3 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
  if ((uVar3 & 1) != 0) {
    CakeOrder_Home_UIHomeTabPageMain__UpdateMapNavButtons(param_1);
  }
  if ((param_2 != 3) || (iVar1 == 3)) {
    return;
  }
  lVar2 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
              (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x110),3,0);
    return;
  }
LAB_043200fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

