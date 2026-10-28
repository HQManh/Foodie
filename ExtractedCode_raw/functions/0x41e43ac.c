// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$ReturnSpent
// address: 0x41e43ac
// body: available
// range: 0x41e43ac-0x41e46cf inclusive
// range: 0x41e46d4-0x41e46d7 inclusive
// range: 0x41e4718-0x41e478f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e46cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e46d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4780 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4788 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e478c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041e467c) */
/* WARNING: Removing unreachable block (ram,0x041e4784) */
/* WARNING: Removing unreachable block (ram,0x041e4740) */

void AnhPD_FoodOrder_AutoCompleteOrderFx__ReturnSpent(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516af6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09217c20);
    DAT_09516af6 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_84[0] = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917c4d0);
  FUN_057e0400(lVar2,DAT_091adad8);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a0,param_2,DAT_091b05a8);
  local_70 = local_90;
  uStack_78 = puStack_98;
  local_80 = local_a0;
  local_a0 = 0;
  puStack_98 = &local_80;
  while( true ) {
    while( true ) {
      do {
        uVar3 = FUN_071bd28c(&local_80,DAT_091a45a0);
        uVar6 = local_70;
        lVar9 = local_a0;
        if ((uVar3 & 1) == 0) {
          FUN_071bd288(puStack_98,DAT_091a4598);
          if (lVar9 == 0) {
            AnhPD_FoodOrder_AutoCompleteOrderFx__FlushLeftovers(param_1,lVar2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar9);
        }
        uVar3 = System_String__IsNullOrEmpty(local_70,0);
      } while ((uVar3 & 1) != 0);
      uVar3 = AnhPD_FoodOrder_FlexibleId__IsFlexible(uVar6);
      if ((uVar3 & 1) == 0) break;
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_84[0] = AnhPD_FoodOrder_PieceLedger__From(7,DAT_09217c20,0,0);
      lVar9 = **(long **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181918);
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *(long *)(lVar9 + 0x138);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar8 = *(undefined4 **)(DAT_09181918 + 0xb8);
      uVar6 = AnhPD_FoodOrder_SpawnService__SpawnAndGetDragItem
                        (*puVar8,puVar8[1],puVar8[2],lVar9,uVar6,0,0,0,0);
      AnhPD_FoodOrder_PieceLedger_Scope__Dispose(local_84,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar3 & 1) != 0) {
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_DragInteractionSystem__HandleDropFallback
                  (*(undefined8 *)(**(long **)(DAT_091881a0 + 0xb8) + 0x148),uVar6,0);
      }
    }
    uVar4 = thunk_FUN_03f9944c(DAT_09186c48);
    AnhPD_FoodOrder_IngredientState___ctor(uVar4,uVar6,1,0);
    lVar9 = DAT_091adae8;
    if (lVar2 == 0) break;
    lVar7 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar5 = uVar4;
      thunk_FUN_03f5d7b8(puVar5,uVar4);
    }
    else {
      FUN_057e0c68(lVar2,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

