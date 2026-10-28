// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$CollectCandidates
// address: 0x40cbdd4
// body: available
// range: 0x40cbdd4-0x40cc0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cc0d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__CollectCandidates
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09515fc5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fc5 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  AnhPD_FoodOrder_ServeShelfController_WholeDishMode__ClearCandidates(param_1);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar5 == 0) {
      return;
    }
    AnhPD_FoodOrder_LevelPieceBook__CollectGridTakeables(lVar5,*(undefined8 *)(param_1 + 0x90),0);
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_057e185c(&local_e0,*(long *)(param_1 + 0x90),DAT_091ac6b0);
      local_70 = local_d0;
      puStack_78 = puStack_d8;
      local_80 = local_e0;
      local_e0 = 0;
      puStack_d8 = &local_80;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a2a58), lVar2 = local_70, (uVar3 & 1) != 0) {
        lVar4 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(param_2,local_70,0);
        if (lVar4 != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(lVar4 + 0x10,0);
          if ((uVar3 & 1) == 0) {
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            local_90 = 0;
            uStack_a8 = 0;
            local_b0 = lVar2;
            thunk_FUN_03f5d7b8(&local_b0,lVar2);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_a0 = *(undefined8 *)(lVar2 + 0x78);
            thunk_FUN_03f5d7b8(&local_a0);
            local_f0 = *(undefined8 *)(lVar4 + 0x18);
            uStack_f8 = *(undefined8 *)(lVar4 + 0x10);
            uStack_e8 = *(undefined8 *)(lVar4 + 0x20);
            uStack_108 = uStack_a8;
            local_110 = local_b0;
            uStack_100 = local_a0;
            uStack_98 = uStack_f8;
            local_90 = local_f0;
            uStack_88 = uStack_e8;
            AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Add(param_1,&local_110);
          }
        }
      }
      FUN_071bd288(&local_80,DAT_091a2a50);
      AnhPD_FoodOrder_LevelPieceBook__CollectBagEntries(lVar5,*(undefined8 *)(param_1 + 0x98),0);
      if (*(long *)(param_1 + 0x98) != 0) {
        FUN_057e185c(&local_c8,*(long *)(param_1 + 0x98),DAT_091b05a8);
        local_e0 = 0;
        puStack_d8 = &local_c8;
        while (uVar3 = FUN_071bd28c(&local_c8,DAT_091a45a0), uVar1 = local_b8, (uVar3 & 1) != 0) {
          lVar5 = AnhPD_FoodOrder_LevelInfo__GetIdPieceOffer(param_2,local_b8,0);
          if (lVar5 != 0) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(lVar5 + 0x10,0);
            if ((uVar3 & 1) == 0) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              local_90 = 0;
              uStack_a8 = 0;
              local_b0 = 0;
              local_a0 = AnhPD_FoodOrder_FlexibleId__BaseOf(uVar1,0);
              thunk_FUN_03f5d7b8(&local_a0);
              local_120 = *(undefined8 *)(lVar5 + 0x18);
              uStack_128 = *(undefined8 *)(lVar5 + 0x10);
              uStack_118 = *(undefined8 *)(lVar5 + 0x20);
              uStack_138 = uStack_a8;
              local_140 = local_b0;
              uStack_130 = local_a0;
              uStack_98 = uStack_128;
              local_90 = local_120;
              uStack_88 = uStack_118;
              AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Add(param_1,&local_140);
            }
          }
        }
        FUN_071bd288(&local_c8,DAT_091a4598);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

