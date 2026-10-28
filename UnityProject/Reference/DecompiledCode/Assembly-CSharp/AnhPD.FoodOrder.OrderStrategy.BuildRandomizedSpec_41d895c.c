// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$BuildRandomizedSpec
// address: 0x41d895c
// body: available
// range: 0x41d895c-0x41d8b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d8b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderStrategy__BuildRandomizedSpec
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [72];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516a95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a95 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar1 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_3);
    if ((uVar1 & 1) == 0) {
      if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar2,param_3,0);
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
            DAT_09184728)) {
          uVar4 = (**(code **)(*param_2 + 0x1c8))
                            (param_2,plVar3,param_4,*(undefined8 *)(*param_2 + 0x1d0));
          lVar2 = (**(code **)(*param_2 + 600))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x260));
          if ((lVar2 == 0) &&
             (lVar2 = (**(code **)(*param_2 + 600))
                                (param_2,param_3,*(undefined8 *)(*param_2 + 0x260)), lVar2 == 0)) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
            uVar5 = 0;
          }
          else {
            puVar6 = (undefined8 *)(lVar2 + 0x10);
            uVar5 = 1;
          }
          uStack_a8 = puVar6[1];
          local_b0 = *puVar6;
          local_a0 = puVar6[2];
          param_1[1] = 0;
          *param_1 = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          param_1[8] = 0;
          local_50 = local_b0;
          uStack_48 = uStack_a8;
          local_40 = local_a0;
          AnhPD_FoodOrder_OrderSpec___ctor
                    (param_1,uVar4,param_3,&local_b0,uVar5,0,0xffffffff,0xffffffff,0);
          return;
        }
      }
    }
    AnhPD_FoodOrder_OrderStrategy__BuildSpec(auStack_98,param_2,param_3);
    memcpy(param_1,auStack_98,0x48);
    return;
  }
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}

