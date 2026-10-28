// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$TryGetChickenPiece
// address: 0x41396d8
// body: available
// range: 0x41396d8-0x41398f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41398f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41398f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenPiece(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0951637b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_0919c5b0);
    FUN_03f5c2a4(&DAT_0919d4f8);
    FUN_03f5c2a4(&DAT_0919d4f0);
    FUN_03f5c2a4(&DAT_0919d500);
    FUN_03f5c2a4(&DAT_091763c0);
    FUN_03f5c2a4(&DAT_091a5ca8);
    FUN_03f5c2a4(&DAT_091a5cb0);
    FUN_03f5c2a4(&DAT_091a5cb8);
    FUN_03f5c2a4(&DAT_091a9318);
    FUN_03f5c2a4(&DAT_091a9320);
    DAT_0951637b = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x20) == 0) {
    uVar4 = thunk_FUN_03f9944c(DAT_091763c0);
    FUN_06ee8a64(uVar4,DAT_0919d4f0);
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = (undefined8 *)(*(long *)(DAT_091820c0 + 0xb8) + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
    lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x18);
    if (lVar6 == 0) goto LAB_041398f4;
    FUN_06f2d6f4(&local_60,lVar6,DAT_0919c5b0);
    while (uVar7 = FUN_0726063c(&local_60,DAT_091a5cb0), uVar1 = local_50, (uVar7 & 1) != 0) {
      uVar2 = local_50._4_4_;
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06ee97f4(lVar6,uVar2,uVar1 & 0xffffffff,DAT_0919d500);
    }
    FUN_07260744(&local_60,DAT_091a5ca8);
  }
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x20);
  if (lVar6 != 0) {
    uVar3 = FUN_06eeb174(lVar6,param_1,param_2,DAT_0919d4f8);
    return uVar3 & 1;
  }
LAB_041398f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

