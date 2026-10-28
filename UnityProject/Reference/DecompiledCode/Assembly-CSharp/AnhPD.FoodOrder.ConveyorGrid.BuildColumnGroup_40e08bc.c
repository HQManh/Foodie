// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$BuildColumnGroup
// address: 0x40e08bc
// body: available
// range: 0x40e08bc-0x40e0ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e0ab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__BuildColumnGroup
               (undefined8 param_1,undefined4 param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_0951605f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_0951605f = 1;
  }
  lVar3 = DAT_091adc88;
  if (param_4 != 0) {
    lVar7 = *(long *)(param_4 + 0x10);
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
        FUN_057971a8(param_4,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(param_4 + 0x18) = 1;
        *(undefined4 *)(lVar7 + 0x20) = param_2;
      }
      iVar5 = *(int *)(param_4 + 0x18);
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (-1 < param_3) {
            iVar5 = 0;
            do {
              uVar2 = FUN_05796eb0(param_4,iVar9,DAT_091add20);
              lVar3 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(param_1,uVar2,iVar5);
              if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x28))) {
                iVar10 = *(int *)(lVar3 + 0x20);
                iVar6 = iVar10 + *(int *)(lVar3 + 0x28);
                for (; iVar10 <= iVar6 + -1; iVar10 = iVar10 + 1) {
                  uVar4 = FUN_05797528(param_4,iVar10,DAT_091adcb0);
                  lVar7 = DAT_091adc88;
                  if ((uVar4 & 1) == 0) {
                    lVar8 = *(long *)(param_4 + 0x10);
                    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                    if (lVar8 == 0) goto LAB_040e0ab0;
                    uVar1 = *(uint *)(param_4 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(param_4 + 0x18) = uVar1 + 1;
                      *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
                    }
                    else {
                      FUN_057971a8(param_4,iVar10,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                  iVar6 = *(int *)(lVar3 + 0x20) + *(int *)(lVar3 + 0x28);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= param_3);
            iVar5 = *(int *)(param_4 + 0x18);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      return;
    }
  }
LAB_040e0ab0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

