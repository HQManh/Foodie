// rea decompile_all
// name: AnhPD.FoodOrder.IngredientCombineLookup$$BuildLookup
// address: 0x40b4a50
// body: available
// range: 0x40b4a50-0x40b4d8f inclusive
// range: 0x40b4d94-0x40b4d97 inclusive
// range: 0x40b4d9c-0x40b4d9f inclusive
// range: 0x40b4da4-0x40b4da7 inclusive
// range: 0x40b4e04-0x40b4e5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b4d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4e4c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4e58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040b4d88) */
/* WARNING: Removing unreachable block (ram,0x040b4e54) */

void AnhPD_FoodOrder_IngredientCombineLookup__BuildLookup(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09515f06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919c720);
    FUN_03f5c2a4(&DAT_0919c728);
    FUN_03f5c2a4(&DAT_0919c718);
    FUN_03f5c2a4(&DAT_091760a0);
    FUN_03f5c2a4(&DAT_091a3f98);
    FUN_03f5c2a4(&DAT_091a3f50);
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3fa0);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091a3fa8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091af668);
    FUN_03f5c2a4(&DAT_091af628);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09200e58);
    DAT_09515f06 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_091760a0);
  FUN_06e7a480(lVar1,DAT_0919c718);
  plVar5 = (long *)(param_1 + 0x10);
  *plVar5 = lVar1;
  thunk_FUN_03f5d7b8(plVar5,lVar1);
  lVar1 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(lVar1,DAT_091a8698);
  plVar4 = (long *)(param_1 + 0x18);
  *plVar4 = lVar1;
  thunk_FUN_03f5d7b8(plVar4,lVar1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_d8,param_2,DAT_091af668);
  local_70 = local_c8;
  puStack_78 = puStack_d0;
  local_80 = local_d8;
  do {
    uVar2 = FUN_071bd28c(&local_80,DAT_091a3fa0);
    if ((uVar2 & 1) == 0) {
      FUN_071bd288(&local_80,DAT_091a3f98);
      return;
    }
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(undefined8 *)(local_70 + 0x10);
    FUN_057e185c(&local_d8,*(long *)(local_70 + 0x18),DAT_091af628);
    local_90 = local_c8;
    puStack_98 = puStack_d0;
    local_a0 = local_d8;
    local_d8 = 0;
    puStack_d0 = &local_a0;
    while (uVar2 = FUN_071bd28c(&local_a0,DAT_091a3f58), (uVar2 & 1) != 0) {
      uVar2 = AnhPD_FoodOrder_IngredientCombineLookup__TryGetIngredientPair
                        (uVar2,local_90,&local_a8,&local_b0);
      if ((uVar2 & 1) != 0) {
        AnhPD_FoodOrder_CombineKey___ctor(&local_c0,local_a8,local_b0);
        if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(*plVar4,local_a8,DAT_091a86b8);
        if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(*plVar4,local_b0,DAT_091a86b8);
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_06e7b44c(*plVar5,local_c0,uStack_b8,DAT_0919c728);
        if ((uVar2 & 1) == 0) {
          if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06e7b240(*plVar5,local_c0,uStack_b8,uVar6,DAT_0919c720);
        }
        else {
          uVar3 = System_String__Concat(DAT_09200e58,local_a8,DAT_091f5a98,local_b0,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(uVar3,0);
        }
      }
    }
    FUN_071bd288(&local_a0,DAT_091a3f50);
  } while( true );
}

