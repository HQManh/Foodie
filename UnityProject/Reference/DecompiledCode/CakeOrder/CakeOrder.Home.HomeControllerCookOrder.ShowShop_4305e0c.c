// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$ShowShop
// address: 0x4305e0c
// body: available
// range: 0x4305e0c-0x4305fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4305fd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_HomeControllerCookOrder__ShowShop
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09517585 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09517585 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_4,0);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_05a8f088(DAT_091b4b68), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_04305fd0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(**(long **)(lVar2 + 0xb8) + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x40), lVar2 == 0)) goto LAB_04305fd0;
      uVar1 = System_String__op_Equality(param_4,*(undefined8 *)(lVar2 + 0x18),0);
      if ((uVar1 & 1) != 0) {
        CakeOrder_Home_HomeControllerCookOrder__ShowShopAtGoldPacks(param_1);
        goto LAB_04305f6c;
      }
    }
  }
  CakeOrder_Home_HomeControllerCookOrder__ShowTab(param_1,0);
LAB_04305f6c:
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095175b2 == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095175b2 = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
}

