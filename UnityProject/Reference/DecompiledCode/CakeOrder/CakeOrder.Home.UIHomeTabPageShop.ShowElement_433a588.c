// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageShop$$ShowElement
// address: 0x433a588
// body: available
// range: 0x433a588-0x433a6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433a684 to 0x433a4f8 CakeOrder.Home.UIHomeTabPageShop$$RunPendingFocus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433a69c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a6a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageShop__ShowElement
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09517715 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517715 = 1;
  }
  CakeOrder_Home_UIHomeTabPage__ShowElement(param_1,param_2,param_3,0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(*(long *)(param_2 + 0xb8),0,0);
    if (*(long *)(param_2 + 0xb8) != 0) {
      CakeOrder_Shop_UICookOrderShop__PlayItemsIntro(*(long *)(param_2 + 0xb8),0);
      lVar5 = *(long *)(param_2 + 0xa8);
      if ((lVar5 != 0) && (uVar1 = *(uint *)(lVar5 + 0x18), 0 < (int)uVar1)) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
          if (lVar3 == 0) goto LAB_0433a69c;
          UnityEngine_GameObject__SetActive(lVar3,0,0);
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
      CakeOrder_Home_UIHomeTabPageShop__RunPendingFocus(param_2);
      return;
    }
  }
LAB_0433a69c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

