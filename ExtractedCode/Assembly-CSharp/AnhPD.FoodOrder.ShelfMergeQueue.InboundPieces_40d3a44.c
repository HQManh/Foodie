// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$InboundPieces
// address: 0x40d3a44
// body: available
// range: 0x40d3a44-0x40d3cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d3cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ShelfMergeQueue__InboundPieces
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515ff1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a58a0);
    FUN_03f5c2a4(&DAT_091a58a8);
    FUN_03f5c2a4(&DAT_091a58b0);
    FUN_03f5c2a4(&DAT_091b3a30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515ff1 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_78 = puVar3[1];
  local_80 = *puVar3;
  local_70 = puVar3[2];
  if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_c0,*(long *)(param_2 + 0x10),DAT_091b3a30);
  local_90 = local_b0;
  puStack_c8 = &local_a0;
  uStack_98 = uStack_b8;
  local_a0 = local_c0;
  local_d0 = 0;
LAB_040d3b58:
  do {
    uVar1 = FUN_071bd28c(&local_a0,DAT_091a58a8);
    lVar2 = local_90;
    if ((uVar1 & 1) == 0) {
      FUN_071bd288(&local_a0,DAT_091a58a0);
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(local_90 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,param_3,0);
  } while ((uVar1 & 1) != 0);
  if (*(char *)(lVar2 + 0x36) == '\0') goto LAB_040d3bf8;
  uStack_b8 = *(undefined8 *)(lVar2 + 0x48);
  local_c0 = *(undefined8 *)(lVar2 + 0x40);
  local_b0 = *(long *)(lVar2 + 0x50);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_f8 = uStack_b8;
  local_100 = local_c0;
  local_f0 = local_b0;
  AnhPD_FoodOrder_PieceSet__Add(&local_e8,&local_80,&local_100,0);
  goto LAB_040d3be4;
LAB_040d3bf8:
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(param_4,*(undefined8 *)(lVar2 + 0x18),0);
    if (lVar2 != 0) {
      uStack_b8 = *(undefined8 *)(lVar2 + 0x18);
      local_c0 = *(undefined8 *)(lVar2 + 0x10);
      local_b0 = *(long *)(lVar2 + 0x20);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189158);
      }
      uStack_118 = uStack_b8;
      local_120 = local_c0;
      local_110 = local_b0;
      AnhPD_FoodOrder_PieceSet__Add(&local_e8,&local_80,&local_120,0);
LAB_040d3be4:
      uStack_78 = uStack_e0;
      local_80 = local_e8;
      local_70 = local_d8;
    }
  }
  goto LAB_040d3b58;
}

