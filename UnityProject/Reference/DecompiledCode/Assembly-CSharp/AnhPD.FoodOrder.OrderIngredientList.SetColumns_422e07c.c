// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SetColumns
// address: 0x422e07c
// body: available
// range: 0x422e07c-0x422e223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422e220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__SetColumns(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  
  if ((DAT_09516da2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091ae388);
    DAT_09516da2 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < param_2) {
      iVar6 = 0;
      do {
        if ((*(long *)(param_1 + 0x70) == 0) ||
           (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar6,DAT_091ae388), lVar4 == 0))
        goto LAB_0422e220;
        iVar3 = *(int *)(lVar4 + 0x40);
        lVar4 = *(long *)(param_1 + 0x98);
        if (iVar3 < *(int *)(param_1 + 0x4c)) {
          iVar3 = 1;
        }
        else {
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar7 = (float)iVar3 / (float)param_3;
          iVar3 = (int)fVar7;
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          if ((float)(int)fVar7 == INFINITY) {
            iVar3 = 1;
          }
        }
        lVar2 = DAT_091adc88;
        if (lVar4 == 0) goto LAB_0422e220;
        lVar5 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_0422e220;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar3;
        }
        else {
          FUN_057971a8(lVar4,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar6 = iVar6 + 1;
      } while (param_2 != iVar6);
    }
    return;
  }
LAB_0422e220:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

