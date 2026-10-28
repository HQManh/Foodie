// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderBoard$$ShowOrder
// address: 0x41324f8
// body: available
// range: 0x41324f8-0x41326f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41326e8 to 0x41327a8 AnhPD.FoodOrder.BurgerOrderBoard$$HideBurgerOrder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41326ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41326f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerOrderBoard__ShowOrder(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if ((DAT_09516348 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed50);
    DAT_09516348 = 1;
  }
  bVar1 = AnhPD_FoodOrder_BurgerOrderBoard__UsesBurgerLayout(param_1,param_2);
  *(byte *)(param_1 + 0xc0) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    AnhPD_FoodOrder_OrderBoard__ShowOrder(param_1,param_2,param_3,0);
    AnhPD_FoodOrder_BurgerOrderBoard__HideBurgerOrder(param_1);
    return;
  }
  AnhPD_FoodOrder_OrderBoard__HideOrder(param_1,0);
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar4) {
      lVar6 = 0;
      do {
        if (uVar4 <= (uint)lVar6) goto LAB_041326f0;
        lVar3 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
        if (lVar3 == 0) goto LAB_041326ec;
        AnhPD_FoodOrder_FOrderItem__HideItem(lVar3,0);
        uVar4 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar4);
    }
    AnhPD_FoodOrder_OrderBoard__SetPreviewOrders(param_1,param_2,param_3,0);
    lVar5 = *(long *)(param_1 + 0xb0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_041326f0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 != 0) {
        lVar6 = UnityEngine_Component__get_transform(lVar5,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (lVar6 != 0) {
          lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localScale
                    (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                     *(undefined4 *)(lVar3 + 0x14),lVar6,0);
          lVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
          if ((lVar6 != 0) && (UnityEngine_GameObject__SetActive(lVar6,1,0), param_2 != 0)) {
            FUN_057eeec4(auStack_88,param_2,0,DAT_091aed50);
            memcpy(auStack_d0,auStack_88,0x48);
            AnhPD_FoodOrder_FOrderItem__InitOrder(lVar5,auStack_d0,0);
            uVar2 = AnhPD_FoodOrder_OrderBoard__LookAt(param_1,0,0);
            AnhPD_FoodOrder_FOrderItem__ApplyLook(lVar5,uVar2,0,0);
            return;
          }
        }
      }
    }
  }
LAB_041326ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

