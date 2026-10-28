// rea decompile_all
// name: AnhPD.FoodOrder.IngCell$$GetSlotPosition
// address: 0x423ff44
// body: available
// range: 0x423ff44-0x423ffeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
AnhPD_FoodOrder_IngCell__GetSlotPosition(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float extraout_s0;
  float extraout_s0_00;
  float fVar2;
  float extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar4;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 uVar5;
  undefined8 extraout_var_04;
  undefined1 auVar3 [16];
  
  if (param_3 < 2) {
    AnhPD_FoodOrder_IngCell__get_CurrentAnchor(param_1);
    fVar2 = extraout_s0_00;
    uVar4 = extraout_var_00;
    uVar5 = extraout_var_03;
  }
  else {
    iVar1 = AnhPD_FoodOrder_IngCell__get_Layout(param_1);
    if (iVar1 == 2) {
      fVar2 = (float)AnhPD_FoodOrder_IngCell__get_CurrentAnchor(param_1);
      fVar2 = fVar2 + 0.0;
      uVar4 = 0;
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      AnhPD_FoodOrder_IngCell__GetAroundCenterPosition(param_1,param_2,param_3);
      fVar2 = extraout_s0;
      uVar4 = extraout_var;
      uVar5 = extraout_var_02;
    }
    else {
      AnhPD_FoodOrder_IngCell__GetDiagonalPosition(param_1,param_2,param_3);
      fVar2 = extraout_s0_01;
      uVar4 = extraout_var_01;
      uVar5 = extraout_var_04;
    }
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = fVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}

