// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineLayout$$CanFitNewLine
// address: 0x42073a4
// body: available
// range: 0x42073a4-0x42074ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42074a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CustomerLineLayout__CanFitNewLine
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09516c17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c17 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  fVar7 = 1.0;
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = AnhPD_FoodOrder_CustomerLineView__GetBoardCount(lVar3,param_2);
    fVar7 = (float)iVar1;
  }
  fVar5 = (float)AnhPD_FoodOrder_CustomerLineLayout__CountUsedCells(param_1,1);
  fVar6 = (float)AnhPD_FoodOrder_CustomerLineLayout__PetCellsOf(param_1,param_4);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar1 = iVar1 - ((param_3 ^ 0xffffffff) & 1);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return fVar5 + fVar7 + fVar6 <= (float)iVar1 + 0.001;
}

