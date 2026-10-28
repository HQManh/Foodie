// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$CanStartPlate
// address: 0x40c3314
// body: available
// range: 0x40c3314-0x40c34bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c3498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_ServeShelfController__CanStartPlate
               (long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09515f72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f72 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    iVar2 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount(*(long *)(param_1 + 0xa8),0);
    if (iVar2 == 0) {
      return false;
    }
    lVar5 = *(long *)(param_1 + 0xa8);
    if (lVar5 != 0) {
      iVar2 = 0;
      do {
        iVar3 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount(lVar5,0);
        bVar1 = iVar2 < iVar3;
        if (iVar3 <= iVar2) {
          return bVar1;
        }
        if (*(long *)(param_1 + 0xa8) == 0) break;
        uVar4 = AnhPD_FoodOrder_ShelfSnapshot__OrderDishKey(*(long *)(param_1 + 0xa8),iVar2,0);
        if ((uVar4 == param_4) || ((int)(uVar4 | param_4) < 0)) {
          if (*(long *)(param_1 + 0xa8) == 0) break;
          AnhPD_FoodOrder_ShelfSnapshot__OrderPieces(&local_90,*(long *)(param_1 + 0xa8),iVar2,0);
          uStack_68 = uStack_88;
          local_70 = local_90;
          local_60 = local_80;
          if ((int)uVar4 < 0) {
            uStack_88 = param_3[1];
            local_90 = *param_3;
            local_80 = param_3[2];
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_c8 = uStack_88;
            local_d0 = local_90;
            local_c0 = local_80;
            uVar6 = AnhPD_FoodOrder_PieceSet__Covers(&local_70,&local_d0,0);
            if ((uVar6 & 1) != 0) {
              if ((int)param_4 < 0) {
                return bVar1;
              }
              if (*(long *)(param_1 + 0xa8) == 0) break;
              uVar6 = AnhPD_FoodOrder_ShelfSnapshot__IsDishNeeded
                                (*(long *)(param_1 + 0xa8),param_4,0);
              if ((uVar6 & 1) == 0) {
                return bVar1;
              }
            }
          }
          else {
            if (param_5 == 0) break;
            uStack_a8 = param_3[1];
            local_b0 = *param_3;
            local_a0 = param_3[2];
            uVar6 = AnhPD_FoodOrder_LevelInfo__CanOpenDish(param_5,uVar4,param_2,&local_b0,0);
            if ((uVar6 & 1) != 0) {
              return bVar1;
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0xa8);
        iVar2 = iVar2 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

