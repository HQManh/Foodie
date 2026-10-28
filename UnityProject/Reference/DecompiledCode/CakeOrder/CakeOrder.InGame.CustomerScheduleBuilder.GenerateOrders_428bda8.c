// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$GenerateOrders
// address: 0x428bda8
// body: available
// range: 0x428bda8-0x428bfa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428bf84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_CustomerScheduleBuilder__GenerateOrders(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  if ((DAT_09517178 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183110);
    FUN_03f5c2a4(&DAT_091ac240);
    FUN_03f5c2a4(&DAT_091ac230);
    FUN_03f5c2a4(&DAT_091ac610);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_0917bfd8);
    DAT_09517178 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917bfd8);
  FUN_057e0400(lVar4,DAT_091ac230);
  if ((param_2 == 0) || (lVar5 = *(long *)(param_2 + 0x20), lVar5 == 0)) {
    return lVar4;
  }
  iVar11 = 0;
  do {
    if (*(int *)(lVar5 + 0x18) <= iVar11) {
      return lVar4;
    }
    uVar6 = FUN_057e0998(lVar5,iVar11,DAT_091ac618);
    lVar5 = CakeOrder_InGame_CustomerScheduleBuilder__CollectRecipePieces(param_1,uVar6);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) != 0) {
      lVar7 = thunk_FUN_03f9944c(DAT_09183110);
      *(undefined4 *)(lVar7 + 0x1c) = 0xffffffff;
      System_Object___ctor(lVar7,0);
      uVar8 = CakeOrder_InGame_CustomerScheduleBuilder__DishOf(param_1,uVar6);
      uVar8 = CakeOrder_InGame_OrderRecipeCodec__Encode(uVar8,lVar5);
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      thunk_FUN_03f5d7b8();
      uVar3 = CakeOrder_InGame_CustomerScheduleBuilder__GetPriceOfPieces(param_1,lVar5);
      *(undefined4 *)(lVar7 + 0x18) = uVar3;
      *(int *)(lVar7 + 0x1c) = iVar11;
      bVar2 = CakeOrder_InGame_CustomerScheduleBuilder__HasEffect(uVar6,1);
      *(byte *)(lVar7 + 0x20) = bVar2 & 1;
      lVar5 = DAT_091ac240;
      if (lVar4 == 0) break;
      lVar10 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar7;
        thunk_FUN_03f5d7b8(plVar9,lVar7);
      }
      else {
        FUN_057e0c68(lVar4,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar5 = *(long *)(param_2 + 0x20);
    iVar11 = iVar11 + 1;
  } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

