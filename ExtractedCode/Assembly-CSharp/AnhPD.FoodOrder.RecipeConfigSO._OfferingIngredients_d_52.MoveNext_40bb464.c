// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO.<OfferingIngredients>d__52$$MoveNext
// address: 0x40bb464
// body: available
// range: 0x40bb464-0x40bb65f inclusive
// range: 0x40bb6ac-0x40bb6bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bb654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bb658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bb65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bb6bc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_RecipeConfigSO_<OfferingIngredients>d__52__MoveNext(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long *plStack_30;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_09515f4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fcf0);
    FUN_03f5c2a4(&DAT_091a6848);
    FUN_03f5c2a4(&DAT_091a6850);
    FUN_03f5c2a4(&DAT_091a98c0);
    FUN_03f5c2a4(&DAT_091a98c8);
    FUN_03f5c2a4(&DAT_091bed38);
    DAT_09515f4f = 1;
  }
  plStack_30 = &local_28;
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = 0;
      goto LAB_040bb63c;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    AnhPD_FoodOrder_RecipeConfigSO__BuildPieceIndex(lVar3);
    if (*(long *)(lVar3 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8888(&local_90,*(long *)(lVar3 + 0x78),DAT_0919fcf0);
    local_40 = local_70;
    uStack_58 = uStack_88;
    local_60 = local_90;
    uStack_48 = uStack_78;
    local_50 = local_80;
    *(undefined8 *)(local_28 + 0x50) = uStack_88;
    *(undefined8 *)(local_28 + 0x48) = local_90;
    *(undefined8 *)(local_28 + 0x60) = uStack_78;
    *(undefined8 *)(local_28 + 0x58) = local_80;
    *(undefined8 *)(local_28 + 0x68) = local_70;
    thunk_FUN_03f5d7b8(local_28 + 0x48,0);
    param_1 = local_28;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    uVar1 = FUN_072753d4(param_1 + 0x48,DAT_091a6848);
    if ((uVar1 & 1) == 0) {
      AnhPD_FoodOrder_RecipeConfigSO_<OfferingIngredients>d__52__<>m__Finally1();
      uVar2 = 0;
      *(undefined8 *)(local_28 + 0x68) = 0;
      *(undefined8 *)(local_28 + 0x50) = 0;
      *(undefined8 *)(local_28 + 0x48) = 0;
      *(undefined8 *)(local_28 + 0x60) = 0;
      *(undefined8 *)(local_28 + 0x58) = 0;
      goto LAB_040bb63c;
    }
    lVar3 = *(long *)(local_28 + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined8 *)(local_28 + 0x58);
    uVar1 = AnhPD_FoodOrder_RcPieceConfig__get_HasPiece(lVar3);
    param_1 = local_28;
  } while (((uVar1 & 1) == 0) || ((*(int *)(lVar3 + 0x10) != 2 && (*(int *)(lVar3 + 0x10) != 4))));
  AnhPD_FoodOrder_RecipeConfigSO__SetOf(&local_60,*(undefined8 *)(lVar3 + 0x18));
  uStack_88 = uStack_58;
  local_90 = local_60;
  local_80 = local_50;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  FUN_066cfb20(&local_60,uVar2,&local_90,DAT_091bed38);
  *(undefined8 *)(local_28 + 0x20) = uStack_58;
  *(undefined8 *)(local_28 + 0x18) = local_60;
  *(undefined8 *)(local_28 + 0x30) = uStack_48;
  *(undefined8 *)(local_28 + 0x28) = local_50;
  thunk_FUN_03f5d7b8(local_28 + 0x18,0);
  uVar2 = 1;
  *(undefined4 *)(local_28 + 0x10) = 1;
LAB_040bb63c:
  lVar3 = local_38;
  if (local_38 != 0) {
    FUN_039b071c(&plStack_30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(lVar3);
  }
  return uVar2;
}

