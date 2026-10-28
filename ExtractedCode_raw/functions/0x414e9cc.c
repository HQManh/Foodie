// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$SyrupCanStillLand
// address: 0x414e9cc
// body: available
// range: 0x414e9cc-0x414eb37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IceCreamPieceTable__SyrupCanStillLand(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516482 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516482 = 1;
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0x12,0);
  if (iVar1 != 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = param_2[2];
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    iVar1 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                      (&local_70,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x10));
    if (iVar1 != 0) {
      uStack_48 = param_1[1];
      local_50 = *param_1;
      local_40 = param_1[2];
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_88 = uStack_48;
      local_90 = local_50;
      local_80 = local_40;
      iVar1 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                        (&local_90,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x10));
      if (iVar1 < 1) {
        uStack_48 = param_1[1];
        local_50 = *param_1;
        local_40 = param_1[2];
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_a8 = uStack_48;
        local_b0 = local_50;
        local_a0 = local_40;
        iVar1 = AnhPD_FoodOrder_IceCreamPieceTable__ToppingCount(5,&local_b0);
        return iVar1 == 0;
      }
    }
  }
  return true;
}

