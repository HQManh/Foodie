// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$CompareHierarchyOrder
// address: 0x4365f98
// body: available
// range: 0x4365f98-0x43660b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43660b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__CompareHierarchyOrder(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint local_34;
  
  if ((DAT_0951786f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_0951786f = 1;
  }
  local_34 = 0;
  lVar5 = CakeOrder_Shop_UICookOrderShop__GetSiblingPath(param_1);
  lVar6 = CakeOrder_Shop_UICookOrderShop__GetSiblingPath(param_2);
  if ((lVar5 == 0) || (lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = *(uint *)(lVar5 + 0x18);
  uVar4 = *(uint *)(lVar6 + 0x18);
  uVar1 = uVar7;
  if ((int)uVar4 <= (int)uVar7) {
    uVar1 = uVar4;
  }
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      iVar2 = FUN_05796eb0(lVar5,uVar7,DAT_091add20);
      iVar3 = FUN_05796eb0(lVar6,uVar7,DAT_091add20);
      if (iVar2 != iVar3) {
        local_34 = FUN_05796eb0(lVar5,uVar7,DAT_091add20);
        uVar4 = FUN_05796eb0(lVar6,uVar7,DAT_091add20);
        uVar7 = local_34;
        goto LAB_04366094;
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
    uVar4 = *(uint *)(lVar6 + 0x18);
    uVar7 = *(uint *)(lVar5 + 0x18);
  }
LAB_04366094:
  local_34 = uVar7;
  System_Int32__CompareTo(&local_34,uVar4,0);
  return;
}

