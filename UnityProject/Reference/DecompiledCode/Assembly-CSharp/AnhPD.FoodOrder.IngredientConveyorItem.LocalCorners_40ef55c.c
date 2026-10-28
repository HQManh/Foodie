// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$LocalCorners
// address: 0x40ef55c
// body: available
// range: 0x40ef55c-0x40ef6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ef6a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ef6a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientConveyorItem__LocalCorners(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 uVar6;
  
  if ((DAT_095160da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095160da = 1;
  }
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50._0_4_ = 0.0;
  local_50._4_4_ = 0.0;
  if (*(long *)(param_1 + 0x228) != 0) {
    return *(long *)(param_1 + 0x228);
  }
  uVar3 = AnhPD_FoodOrder_IngredientConveyorItem__TryColliderLocalRect(param_1,&local_40,&local_50);
  if ((uVar3 & 1) == 0) {
    local_38 = 0;
    local_48 = 0;
    local_40._0_4_ = -(*(float *)(param_1 + 0x88) * 0.5);
    local_50._0_4_ = *(float *)(param_1 + 0x88) * 0.5;
    local_40._4_4_ = (float)local_40;
    local_50._4_4_ = (float)local_50;
  }
  else {
  }
  fVar5 = (float)local_50 + (float)*(undefined8 *)(param_1 + 0x218);
  fVar7 = local_50._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20);
  uVar6 = CONCAT44(fVar7,fVar5);
  fVar8 = (float)local_40 - *(float *)(param_1 + 0x214);
  fVar9 = local_40._4_4_ - *(float *)(param_1 + 0x220);
  local_40 = CONCAT44(fVar9,fVar8);
  local_50 = uVar6;
  lVar4 = FUN_03f5c394(DAT_091807f8,4);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 != 0) {
      *(float *)(lVar4 + 0x20) = fVar8;
      *(float *)(lVar4 + 0x24) = fVar7;
      *(undefined4 *)(lVar4 + 0x28) = 0;
      if (uVar2 != 1) {
        *(undefined8 *)(lVar4 + 0x2c) = uVar6;
        *(undefined4 *)(lVar4 + 0x34) = 0;
        if (2 < uVar2) {
          *(float *)(lVar4 + 0x38) = fVar5;
          *(float *)(lVar4 + 0x3c) = fVar9;
          *(undefined4 *)(lVar4 + 0x40) = 0;
          if (uVar2 != 3) {
            plVar1 = (long *)(param_1 + 0x228);
            *(float *)(lVar4 + 0x44) = fVar8;
            *(float *)(lVar4 + 0x48) = fVar9;
            *(undefined4 *)(lVar4 + 0x4c) = 0;
            *plVar1 = lVar4;
            thunk_FUN_03f5d7b8(plVar1);
            return *plVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

