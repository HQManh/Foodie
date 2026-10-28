// rea decompile_all
// name: CakeOrder.InGame.LevelBaseCakeOrderAbstract$$SimulatePricingOutput
// address: 0x4391330
// body: available
// range: 0x4391330-0x43914f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43914f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43914f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_LevelBaseCakeOrderAbstract__SimulatePricingOutput
               (long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_09517a31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186678);
    FUN_03f5c2a4(&DAT_09188d00);
    DAT_09517a31 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09188d00);
  CakeOrder_InGame_OrderPricingOutput___ctor(lVar4,0);
  if (param_1[7] == 0) {
LAB_043914f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar13 = *(long *)(param_1[7] + 0x98);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) &&
     (lVar5 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0)), lVar5 != 0
     )) {
    uVar3 = *(int *)(lVar13 + 0x18) - 1;
    uVar2 = param_2;
    if ((int)uVar3 <= (int)param_2) {
      uVar2 = uVar3;
    }
    uVar1 = 0;
    if (-1 < (int)param_2) {
      uVar1 = uVar2;
    }
    uVar2 = param_3;
    if ((int)uVar3 <= (int)param_3) {
      uVar2 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)param_3) {
      uVar3 = uVar2;
    }
    for (; (int)uVar1 <= (int)uVar3; uVar1 = uVar1 + 1) {
      if (*(uint *)(lVar13 + 0x18) <= uVar1) {
LAB_043914f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
      if (*plVar11 != 0) {
        plVar6 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
        if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_043914f4;
        if (plVar6 == (long *)0x0) goto LAB_043914f0;
        lVar5 = *plVar6;
        lVar12 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09186678) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0439148c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186678,1);
LAB_0439148c:
        uVar8 = (*(code *)*puVar7)(plVar6,lVar12,puVar7[1]);
        if ((param_1[9] == 0) ||
           (uVar8 = CakeOrder_InGame_OrderPricingCalculator__CalculatePrice(param_1[9],uVar8,0),
           lVar4 == 0)) goto LAB_043914f0;
        CakeOrder_InGame_OrderPricingOutput__Accumulate(lVar4,uVar8,0);
      }
    }
  }
  return lVar4;
}

