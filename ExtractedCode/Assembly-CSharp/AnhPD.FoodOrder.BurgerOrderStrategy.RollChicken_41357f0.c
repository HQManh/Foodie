// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$RollChicken
// address: 0x41357f0
// body: available
// range: 0x41357f0-0x4135a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4135a38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4135a3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__RollChicken(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_0951635d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820b0);
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_091ab630);
    FUN_03f5c2a4(&DAT_091ab638);
    FUN_03f5c2a4(&DAT_0917bd88);
    DAT_0951635d = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917bd88);
  FUN_0579924c(lVar3,DAT_091ab600);
  if (*(int *)(DAT_091820b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = **(long **)(DAT_091820b0 + 0xb8);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar2 = *(undefined4 *)(lVar7 + 0x20 + uVar8 * 4);
        uVar4 = AnhPD_FoodOrder_BurgerOrderStrategy__Has(param_1,uVar2);
        lVar6 = DAT_091ab610;
        if ((uVar4 & 1) != 0) {
          if (lVar3 == 0) goto LAB_04135a38;
          lVar5 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_04135a38;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
          }
          else {
            FUN_05799adc(lVar3,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    lVar7 = thunk_FUN_03f9944c(DAT_0917bd88);
    FUN_0579924c(lVar7,DAT_091ab600);
    if (lVar3 != 0) {
      uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar3 + 0x18),0);
      uVar2 = FUN_057997e4(lVar3,uVar2,DAT_091ab638);
      lVar3 = DAT_091ab610;
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
          }
          else {
            FUN_05799adc(lVar7,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          AnhPD_FoodOrder_BurgerOrderStrategy__AddOptional(param_1,lVar7,0xe);
          AnhPD_FoodOrder_BurgerOrderStrategy__AddOptional(param_1,lVar7,0x10);
          AnhPD_FoodOrder_BurgerOrderStrategy__AddOptional(param_1,lVar7,0xf);
          return lVar7;
        }
      }
    }
  }
LAB_04135a38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

