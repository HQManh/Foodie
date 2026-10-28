// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$MaybeAdd
// address: 0x415fab0
// body: available
// range: 0x415fab0-0x415fba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichPieceTable__MaybeAdd
               (undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  float fVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516526 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_09516526 = 1;
  }
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(param_2,param_4,param_5);
  if (((uVar1 & 1) == 0) || (fVar2 = (float)UnityEngine_Random__get_value(0), 0.5 <= fVar2)) {
    uStack_50 = param_3[1];
    local_58 = *param_3;
    local_48 = param_3[2];
  }
  else {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__Add(&local_58,param_3,param_4,1,0);
  }
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}

