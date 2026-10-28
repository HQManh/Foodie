// rea decompile_all
// name: CakeOrder.Profile.UIPopupEditProfile$$SetUpOnCreate
// address: 0x42f2d58
// body: available
// range: 0x42f2d58-0x42f2f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f2f2c to 0x8674db4 UnityEngine.Events.UnityEvent$$AddListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42f2f84 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42f2f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Profile_UIPopupEditProfile__SetUpOnCreate(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_095174c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4a88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcf78);
    FUN_03f5c2a4(&DAT_091dcf80);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    FUN_03f5c2a4(&DAT_0920a980);
    DAT_095174c7 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  uVar1 = FUN_05a8eda4(DAT_091b4a88);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920a980,param_1,0);
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      return;
    }
    goto LAB_042f2f98;
  }
  CakeOrder_Profile_UIPopupEditProfile__BuildGrid(param_1);
  uVar2 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 200) == 0) goto LAB_042f2f98;
    TMPro_TMP_InputField__set_characterLimit(*(long *)(param_1 + 200),0x10,0);
    if (*(long *)(param_1 + 200) == 0) goto LAB_042f2f98;
    lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x1d0);
    uVar2 = thunk_FUN_03f9944c(DAT_0917f6f0);
    FUN_06478c04(uVar2,param_1,DAT_091dcf80,0);
    if (lVar3 == 0) goto LAB_042f2f98;
    FUN_0647f878(lVar3,uVar2,DAT_091be128);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xe0) + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcf78,0);
    if (lVar3 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar2,0);
      return;
    }
  }
LAB_042f2f98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

