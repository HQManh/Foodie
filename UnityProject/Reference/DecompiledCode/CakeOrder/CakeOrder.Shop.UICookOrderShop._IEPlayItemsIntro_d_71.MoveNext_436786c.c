// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop.<IEPlayItemsIntro>d__71$$MoveNext
// address: 0x436786c
// body: available
// range: 0x436786c-0x4367abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4367ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4367ab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4367abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_UICookOrderShop_<IEPlayItemsIntro>d__71__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 *puStack_38;
  long local_30;
  
  if ((DAT_09517883 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517883 = 1;
  }
  local_40 = 0;
  puStack_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x180) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(long *)(lVar2 + 0x108) != 0) {
      if (*(char *)(*(long *)(lVar2 + 0x108) + 0x58) == '\0') {
LAB_04367a6c:
        CakeOrder_Shop_UICookOrderShop__ShowVisibleCards(lVar2);
        *(undefined8 *)(lVar2 + 0x1d0) = 0;
        thunk_FUN_03f5d7b8(lVar2 + 0x1d0,0);
        return 0;
      }
      uVar1 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
      if ((uVar1 & 1) == 0) {
        if (*(long *)(lVar2 + 0x140) == 0) goto LAB_04367abc;
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar2 + 0x140),0);
        uVar3 = *(undefined8 *)(lVar2 + 0x148);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(lVar2 + 0x148) == 0) goto LAB_04367abc;
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar2 + 0x148),0);
        }
      }
      if (*(long *)(lVar2 + 0x168) != 0) {
        FUN_057e185c(&local_70,*(long *)(lVar2 + 0x168),DAT_091b16d0);
        puStack_38 = puStack_68;
        local_40 = local_70;
        local_30 = local_60;
        local_70 = 0;
        puStack_68 = &local_40;
        while (uVar1 = FUN_071bd28c(&local_40,DAT_091a4c18), (uVar1 & 1) != 0) {
          if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(local_30,0);
        }
        FUN_071bd288(&local_40,DAT_091a4c10);
        if (*(long *)(lVar2 + 0x170) != 0) {
          FUN_057e185c(&local_58,*(long *)(lVar2 + 0x170),DAT_091b16b8);
          local_70 = 0;
          puStack_68 = &local_58;
          while (uVar1 = FUN_071bd28c(&local_58,DAT_091a4c00), (uVar1 & 1) != 0) {
            if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_BaseUI_UIElementAbstract__HideImmediate(local_48,0);
          }
          FUN_071bd288(&local_58,DAT_091a4bf8);
          goto LAB_04367a6c;
        }
      }
    }
  }
LAB_04367abc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

