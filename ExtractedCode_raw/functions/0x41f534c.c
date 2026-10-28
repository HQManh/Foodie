// rea decompile_all
// name: AnhPD.FoodOrder.LevelSupply$$Expand
// address: 0x41f534c
// body: available
// range: 0x41f534c-0x41f557f inclusive
// range: 0x41f5584-0x41f5587 inclusive
// range: 0x41f558c-0x41f558f inclusive
// range: 0x41f5594-0x41f5597 inclusive
// range: 0x41f559c-0x41f559f inclusive
// range: 0x41f55e4-0x41f5607 inclusive
// range: 0x41f564c-0x41f5677 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f557c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f5584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f558c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f5594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f559c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f5604 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f5670 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f5674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f5578) */
/* WARNING: Removing unreachable block (ram,0x041f566c) */

void AnhPD_FoodOrder_LevelSupply__Expand(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516b96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f98);
    FUN_03f5c2a4(&DAT_091a3f50);
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3fa0);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091a3fa8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091af668);
    FUN_03f5c2a4(&DAT_091af628);
    DAT_09516b96 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    FUN_057e185c(&local_b8,param_2,DAT_091af668);
    uVar7 = 0;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3fa0), lVar1 = local_70, (uVar3 & 1) != 0) {
      if ((local_70 != 0) && (*(long *)(local_70 + 0x18) != 0)) {
        FUN_057e185c(&local_b8,*(long *)(local_70 + 0x18),DAT_091af628);
        local_90 = local_a8;
        puStack_98 = puStack_b0;
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_a0;
        while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a3f58), lVar6 = local_90, (uVar3 & 1) != 0) {
          if (((local_90 != 0) && (*(long *)(local_90 + 0x10) != 0)) &&
             (uVar3 = AnhPD_FoodOrder_LevelSupply__HasAllIngredients(param_1), (uVar3 & 1) != 0)) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = FUN_053ec72c(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x10),
                                 DAT_091a86b8);
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar7 = uVar7 | uVar2 & 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar2) {
              uVar5 = 0;
              do {
                if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar4 = *(long *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar4 + 0x10) == 1) {
                  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = FUN_053ec72c(*(long *)(param_1 + 0x18),*(undefined8 *)(lVar4 + 0x18),
                                       DAT_091a86b8);
                  uVar7 = uVar7 | uVar2 & 1;
                }
                uVar2 = *(uint *)(lVar6 + 0x18);
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < (int)uVar2);
            }
          }
        }
        FUN_071bd288(&local_a0,DAT_091a3f50);
      }
    }
    FUN_071bd288(&local_80,DAT_091a3f98);
    if (uVar7 == 0) {
      return;
    }
  } while( true );
}

