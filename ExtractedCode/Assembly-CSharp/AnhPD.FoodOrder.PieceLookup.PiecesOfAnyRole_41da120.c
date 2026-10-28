// rea decompile_all
// name: AnhPD.FoodOrder.PieceLookup$$PiecesOfAnyRole
// address: 0x41da120
// body: available
// range: 0x41da120-0x41da30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41da308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLookup__PiecesOfAnyRole(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516aa6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516aa6 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  lVar3 = AnhPD_FoodOrder_PieceLookup__get_Config();
  if (((lVar3 == 0) ||
      (lVar3 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(lVar3,param_2,0), lVar3 == 0)) ||
     (lVar4 = *(long *)(lVar3 + 0x18), lVar4 == 0)) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_48 = puVar6[1];
    local_50 = *puVar6;
    local_40 = puVar6[2];
  }
  else {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189158);
      lVar4 = *(long *)(lVar3 + 0x18);
      puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uStack_48 = puVar6[1];
      local_50 = *puVar6;
      local_40 = puVar6[2];
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uStack_48 = puVar6[1];
      local_50 = *puVar6;
      local_40 = puVar6[2];
    }
    FUN_05797d74(&local_68,lVar4,DAT_091adcc0);
    local_78 = 0;
    puStack_70 = &local_68;
    while (uVar5 = FUN_071ad7a4(&local_68,DAT_091a34d8), uVar1 = local_58, (uVar5 & 1) != 0) {
      if ((uint)local_58 < 0x30) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&local_50,uVar1 & 0xffffffff);
        if (iVar2 == 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__Add(&local_90,&local_50,uVar1 & 0xffffffff,1);
          uStack_48 = uStack_88;
          local_50 = local_90;
          local_40 = local_80;
        }
      }
    }
    FUN_071ad7a0(&local_68,DAT_091a34d0);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}

