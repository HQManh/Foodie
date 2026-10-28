// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$get_PieceToFilling
// address: 0x413924c
// body: available
// range: 0x413924c-0x413943f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4139438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413943c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerPieceTable__get_PieceToFilling(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09516373 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a1718);
    FUN_03f5c2a4(&DAT_0919c5e0);
    FUN_03f5c2a4(&DAT_0919c5f0);
    FUN_03f5c2a4(&DAT_09176060);
    FUN_03f5c2a4(&DAT_091a6d68);
    FUN_03f5c2a4(&DAT_091a6d70);
    FUN_03f5c2a4(&DAT_091a6d78);
    FUN_03f5c2a4(&DAT_091a9ac0);
    FUN_03f5c2a4(&DAT_091a9ac8);
    DAT_09516373 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_09176060);
    FUN_06f2fb54(uVar3,DAT_0919c5e0);
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = (undefined8 *)(*(long *)(DAT_091820c0 + 0xb8) + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_03f5d7b8(puVar4,uVar3);
    lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06f30cd0(&local_50,lVar6,DAT_091a1718);
    while (uVar5 = FUN_07260ed0(&local_50,DAT_091a6d70), uVar1 = local_40, (uVar5 & 1) != 0) {
      uVar2 = local_40._4_4_;
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06f308e4(lVar6,uVar2,uVar1 & 0xffffffff,DAT_0919c5f0);
    }
    FUN_07260fd8(&local_50,DAT_091a6d68);
    if (*(int *)(DAT_091820c0 + 0xe4) != 0) goto LAB_04139418;
  }
  else if (*(int *)(DAT_091820c0 + 0xe4) != 0) {
    return lVar6;
  }
  FUN_03f5c424();
LAB_04139418:
  return *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x10);
}

