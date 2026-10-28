// rea decompile_all
// name: CakeOrder.PopupMinigame.UIPopupMinigameCookOrder$$ShowResult
// address: 0x437665c
// body: available
// range: 0x437665c-0x437682f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4376824 to 0x42cb6f8 CakeOrder.BaseUI.UIElementAbstract$$Show (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4376828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437682c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__ShowResult
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09517935 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091dbc90);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_091dcfc8);
    DAT_09517935 = 1;
  }
  *(undefined8 *)(param_1 + 0x128) = param_4;
  thunk_FUN_03f5d7b8(param_1 + 0x128,param_4);
  if (*(long *)(param_1 + 0xe8) != 0) {
    UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0xe8),0,0);
    DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_1 + 0x130),0,0);
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 != 0) {
      uVar2 = DG_Tweening_DOTweenModuleUI__DOColor
                        (*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x18),
                         *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),
                         *(undefined4 *)(lVar4 + 0x24),*(undefined8 *)(param_1 + 0xe0),0);
      uVar2 = FUN_04d95e8c(uVar2,3,DAT_091dbe70);
      uVar2 = FUN_04d9656c(uVar2,1,DAT_091dbff0);
      uVar2 = FUN_04d8dd74(uVar2,DAT_091dbc90);
      *(undefined8 *)(param_1 + 0x130) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x130,uVar2);
      lVar4 = *(long *)(param_1 + 0x118);
      if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
          if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
          goto LAB_04376828;
          UnityEngine_GameObject__SetActive(lVar3,1,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
      if ((param_3 & 1) == 0) {
        lVar4 = *(long *)(param_1 + 0x110);
        if (lVar4 != 0) {
          uVar2 = 0;
          goto LAB_04376814;
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x108);
        uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
        FUN_070a8c30(uVar2,param_1,DAT_091dcfc8,0);
        if (lVar4 != 0) {
LAB_04376814:
          CakeOrder_BaseUI_UIElementAbstract__Show(0,lVar4,0,uVar2,0);
          return;
        }
      }
    }
  }
LAB_04376828:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

