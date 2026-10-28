// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$IsWorthANewPlate
// address: 0x40c3538
// body: available
// range: 0x40c3538-0x40c36a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c36a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController__IsWorthANewPlate
               (long param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined4 param_5,
               long param_6,uint *param_7,undefined4 *param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  *param_7 = 0xffffffff;
  *param_8 = 0x80000000;
  uStack_78 = param_3[1];
  local_80 = *param_3;
  local_70 = param_3[2];
  AnhPD_FoodOrder_ServeShelfController__TryVirtualPlate
            (param_1,param_4,param_2,&local_80,param_4,param_5,param_6,param_8,param_7);
  if (-1 < param_4) {
LAB_040c35b8:
    return ~*param_7 >> 0x1f;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      iVar1 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount(lVar2,0);
      if (iVar1 <= iVar4) goto LAB_040c35b8;
      if (*(long *)(param_1 + 0xa8) == 0) break;
      iVar1 = AnhPD_FoodOrder_ShelfSnapshot__OrderDishKey(*(long *)(param_1 + 0xa8),iVar4,0);
      if (-1 < iVar1) {
        uVar3 = AnhPD_FoodOrder_ServeShelfController__IsDishSeenBefore(param_1,iVar4,iVar1);
        if ((uVar3 & 1) == 0) {
          if (param_6 == 0) break;
          uStack_98 = param_3[1];
          local_a0 = *param_3;
          local_90 = param_3[2];
          uVar3 = AnhPD_FoodOrder_LevelInfo__CanOpenDish(param_6,iVar1,param_2,&local_a0,0);
          if ((uVar3 & 1) != 0) {
            uStack_b8 = param_3[1];
            local_c0 = *param_3;
            local_b0 = param_3[2];
            AnhPD_FoodOrder_ServeShelfController__TryVirtualPlate
                      (param_1,iVar1,param_2,&local_c0,param_4,param_5,param_6,param_8,param_7);
          }
        }
      }
      lVar2 = *(long *)(param_1 + 0xa8);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

