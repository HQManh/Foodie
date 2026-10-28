// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$OnDestroy
// address: 0x40c519c
// body: available
// range: 0x40c519c-0x40c5493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c5490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__OnDestroy(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  if ((DAT_09515f8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174708);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cd580);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8be8);
    FUN_03f5c2a4(&DAT_091d8bf0);
    FUN_03f5c2a4(&DAT_091d8c00);
    DAT_09515f8b = 1;
  }
  uVar1 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091d8c00,0);
    if (lVar3 == 0) goto LAB_040c5490;
    AnhPD_FoodOrder_FCustomerLineHandle__remove_onAnyOrderShown(lVar3,uVar1,0);
    lVar3 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091d8c00,0);
    if (lVar3 == 0) goto LAB_040c5490;
    AnhPD_FoodOrder_FCustomerLineHandle__remove_onAnyMysteryRevealed(lVar3,uVar1,0);
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09174708);
  FUN_070a6b58(uVar1,param_1,DAT_091d8bf0,0);
  if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b7b4b4(uVar1,DAT_091cd580);
  lVar3 = *(long *)(DAT_091b4c28 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  uVar1 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091d8be8,0);
    if (lVar3 == 0) {
LAB_040c5490:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__remove_onBlockPlayerInteractChanged(lVar3,uVar1,0);
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  DG_Tweening_DOTween__Kill(param_1,0,0);
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar4 = 0;
    do {
      AnhPD_FoodOrder_ServeShelfController__SetSlotFocus(param_1,iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x78));
  }
  return;
}

