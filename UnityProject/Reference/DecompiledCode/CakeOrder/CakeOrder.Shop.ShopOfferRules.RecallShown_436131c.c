// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$RecallShown
// address: 0x436131c
// body: available
// range: 0x436131c-0x43614cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43614c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43614cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_ShopOfferRules__RecallShown(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if ((DAT_09517850 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_091b4908);
    FUN_03f5c2a4(&DAT_09222a78);
    DAT_09517850 = 1;
  }
  uVar2 = FUN_05a8eda4(DAT_091b4908);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(DAT_091b4900 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (param_2 != 0) {
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar4 = System_String__Concat(DAT_09222a78,*(undefined8 *)(param_2 + 0x10),0);
    if (lVar3 != 0) {
      uVar4 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__GetString
                        (lVar3,uVar4,**(undefined8 **)(DAT_09535468 + 0xb8),0);
      uVar2 = System_String__IsNullOrEmpty(uVar4,0);
      uVar5 = 0;
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      lVar3 = *(long *)(param_2 + 0x18);
      if (lVar3 != 0) {
        if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
          return 0;
        }
        uVar7 = 0;
        uVar2 = 0;
        uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar5);
          }
          lVar8 = *(long *)(lVar3 + 0x20 + uVar2 * 8);
          if (((lVar8 != 0) && (*(char *)(lVar8 + 0x18) == '\0')) &&
             (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar8 + 0x10),0),
             (uVar5 & 1) == 0)) {
            if (*(long *)(param_1 + 0x18) == 0) break;
            iVar1 = CakeOrder_Shop_ShopPlayerFacts__GetPurchaseCount
                              (uVar5,*(undefined8 *)(lVar8 + 0x10));
            if (0 < iVar1) {
              return 0;
            }
            uVar5 = System_String__op_Equality(*(undefined8 *)(lVar8 + 0x10),uVar4,0);
            uVar7 = (uint)uVar5 | uVar7;
          }
          uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar2 = uVar2 + 1;
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar2) {
            if ((uVar7 & 1) == 0) {
              return 0;
            }
            return uVar4;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

