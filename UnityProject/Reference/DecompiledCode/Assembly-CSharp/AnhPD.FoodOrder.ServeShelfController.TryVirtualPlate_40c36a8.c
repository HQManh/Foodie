// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$TryVirtualPlate
// address: 0x40c36a8
// body: available
// range: 0x40c36a8-0x40c38ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c38a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__TryVirtualPlate
               (long param_1,int param_2,undefined8 param_3,undefined8 *param_4,int param_5,
               int param_6,long param_7,int *param_8,int *param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_78 = param_4[1];
  local_80 = *param_4;
  local_70 = param_4[2];
  lVar8 = *(long *)(param_1 + 0xa8);
  if (param_7 != 0) {
    uVar7 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_7,param_3,0);
    if (lVar8 != 0) {
      uStack_98 = uStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      uVar1 = AnhPD_FoodOrder_ShelfSnapshot__PushVirtualPlate(lVar8,&local_a0,param_2,uVar7,0);
      if (*(long *)(param_1 + 0xa8) != 0) {
        iVar2 = AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
        if (*(long *)(param_1 + 0xa8) != 0) {
          iVar3 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf(*(long *)(param_1 + 0xa8),uVar1,0);
          if (iVar3 < 0) {
            uVar6 = 0;
            iVar4 = -1;
          }
          else {
            if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c38a8;
            iVar4 = AnhPD_FoodOrder_ShelfSnapshot__OrderDishKey(*(long *)(param_1 + 0xa8),iVar3,0);
            if (iVar4 < 0) {
              uVar5 = 0;
            }
            else {
              uStack_b8 = param_4[1];
              local_c0 = *param_4;
              local_b0 = param_4[2];
              uVar5 = AnhPD_FoodOrder_LevelInfo__CanOpenDish(param_7,iVar4,param_3,&local_c0,0);
              uVar5 = uVar5 ^ 1;
            }
            uVar6 = 0;
            if ((param_6 < iVar2) && ((uVar5 & 1) == 0)) {
              uStack_78 = param_4[1];
              local_80 = *param_4;
              local_70 = param_4[2];
              if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c38a8;
              AnhPD_FoodOrder_ShelfSnapshot__OrderPieces
                        (&local_d8,*(long *)(param_1 + 0xa8),iVar3,0);
              uStack_e8 = uStack_78;
              local_f0 = local_80;
              local_e0 = local_70;
              uStack_108 = uStack_d0;
              local_110 = local_d8;
              local_100 = local_c8;
              uVar6 = AnhPD_FoodOrder_LevelInfo__CanStillComplete(param_7,&local_f0,&local_110,0);
            }
          }
          if (*(long *)(param_1 + 0xa8) != 0) {
            AnhPD_FoodOrder_ShelfSnapshot__PopVirtualPlate(*(long *)(param_1 + 0xa8),0);
            if (-1 < param_2) {
              param_5 = param_2;
            }
            if (-1 < iVar4) {
              param_5 = iVar4;
            }
            if ((-1 < param_5 && ((uVar6 ^ 0xffffffff) & 1) == 0) && (*param_8 < iVar2)) {
              *param_8 = iVar2;
              *param_9 = param_5;
            }
            return;
          }
        }
      }
    }
  }
LAB_040c38a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

