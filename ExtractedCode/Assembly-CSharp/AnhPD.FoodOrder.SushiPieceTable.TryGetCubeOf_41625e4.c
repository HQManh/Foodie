// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$TryGetCubeOf
// address: 0x41625e4
// body: available
// range: 0x41625e4-0x41627af inclusive
// range: 0x4162804-0x4162827 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_SushiPieceTable__TryGetCubeOf(undefined4 param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_095165bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f80);
    FUN_03f5c2a4(&DAT_091a3f88);
    FUN_03f5c2a4(&DAT_091a3f90);
    FUN_03f5c2a4(&DAT_091af658);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_095165bf = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = AnhPD_FoodOrder_PieceLookup__get_Config(0);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_057e185c(&local_a8,*(long *)(lVar2 + 0x18),DAT_091af658);
    puStack_b0 = &local_70;
    uStack_68 = uStack_a0;
    local_70 = local_a8;
    local_60 = local_98;
    local_b8 = 0;
    do {
      do {
        do {
          uVar1 = FUN_071bd28c(&local_70,DAT_091a3f88);
          lVar2 = local_60;
          if ((uVar1 & 1) == 0) goto LAB_04162798;
        } while (local_60 == 0);
        uVar4 = *(undefined8 *)(local_60 + 0x10);
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_SushiPieceTable__IsCube(uVar4);
      } while ((uVar3 & 1) == 0);
      AnhPD_FoodOrder_PieceLookup__PiecesOf(&local_a8,*(undefined8 *)(lVar2 + 0x10),0);
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_a8,param_1,0);
      uStack_c8 = uStack_a0;
      local_d0 = local_a8;
      local_c0 = local_98;
      uVar3 = AnhPD_FoodOrder_PieceSet__Equals(&local_90,&local_d0,0);
    } while ((uVar3 & 1) == 0);
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
    thunk_FUN_03f5d7b8(param_2);
LAB_04162798:
    FUN_071bd288(&local_70,DAT_091a3f80);
  }
  return uVar1 & 1;
}

