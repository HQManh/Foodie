// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$CanStillComplete
// address: 0x41d8be8
// body: available
// range: 0x41d8be8-0x41d8d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_OrderStrategy__CanStillComplete
               (long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516a97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a97 = 1;
  }
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_90 = 0;
  local_70 = param_2[2];
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  do {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_a8 = param_3[2];
    local_b0 = param_3[1];
    local_a0 = *param_3;
    uStack_98 = 0xffffffff00000000;
    local_90 = 0;
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0);
    if ((uVar4 & 1) == 0) break;
    bVar1 = false;
    do {
      uVar4 = local_90;
      iVar3 = local_90._4_4_;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,uVar4 & 0xffffffff);
      if (iVar2 < iVar3) {
        uStack_58 = uStack_78;
        local_60 = local_80;
        local_50 = local_70;
        uVar5 = (**(code **)(*param_1 + 0x1f8))
                          (param_1,&local_60,uVar4 & 0xffffffff,*(undefined8 *)(*param_1 + 0x200));
        if ((uVar5 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar1 = true;
          AnhPD_FoodOrder_PieceSet__Add(&local_60,&local_80,uVar4 & 0xffffffff,1);
          uStack_78 = uStack_58;
          local_80 = local_60;
          local_70 = local_50;
        }
      }
      uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0);
    } while ((uVar4 & 1) != 0);
  } while (bVar1);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = AnhPD_FoodOrder_PieceSet__MissingFrom(param_3,&local_80);
  return iVar3 == 0;
}

