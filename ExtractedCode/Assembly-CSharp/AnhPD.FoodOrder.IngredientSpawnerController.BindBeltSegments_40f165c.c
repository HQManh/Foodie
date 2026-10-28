// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$BindBeltSegments
// address: 0x40f165c
// body: available
// range: 0x40f165c-0x40f1a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f19f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f19f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f19fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1a00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1a10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__BindBeltSegments(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  long local_a0;
  undefined8 *puStack_98;
  long local_90;
  long local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095160ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2708);
    FUN_03f5c2a4(&DAT_091a5510);
    FUN_03f5c2a4(&DAT_091a5518);
    FUN_03f5c2a4(&DAT_091a2710);
    FUN_03f5c2a4(&DAT_091a2718);
    FUN_03f5c2a4(&DAT_091a5520);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091b30a8);
    FUN_03f5c2a4(&DAT_091abe20);
    FUN_03f5c2a4(&DAT_091b30c0);
    FUN_03f5c2a4(&DAT_091abe28);
    FUN_03f5c2a4(&DAT_091b30c8);
    FUN_03f5c2a4(&DAT_0917e1d0);
    FUN_03f5c2a4(&DAT_091eba18);
    FUN_03f5c2a4(&DAT_091917e0);
    DAT_095160ea = 1;
  }
  local_80 = 0;
  puStack_78 = (long *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x48),DAT_091b30c8);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a5518), (uVar3 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar8 = (long *)(local_70 + 0x30);
      if (*plVar8 != 0) {
        if (*(long *)(param_1 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_057e1004(*(long *)(param_1 + 0x198),*plVar8,DAT_091abe20);
        if ((uVar3 & 1) == 0) {
          *plVar8 = 0;
          thunk_FUN_03f5d7b8(plVar8,0);
        }
      }
    }
    FUN_071bd288(&local_80,DAT_091a5510);
    if (*(long *)(param_1 + 0x198) != 0) {
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0x198),DAT_091abe28);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      do {
        do {
          uVar3 = FUN_071bd28c(&local_a0,DAT_091a2710);
          lVar2 = local_90;
          lVar4 = local_b8;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(puStack_b0,DAT_091a2708);
            if (lVar4 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c548(lVar4);
          }
          lVar4 = AnhPD_FoodOrder_IngredientSpawnerController__SegmentOf(param_1,local_90);
        } while (lVar4 != 0);
        lVar4 = *(long *)(param_1 + 0x48);
        if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = *(undefined8 **)(DAT_091917e0 + 0xb8);
        lVar9 = puVar6[1];
        if (lVar9 == 0) {
          if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar6 = *(undefined8 **)(DAT_091917e0 + 0xb8);
          }
          uVar10 = *puVar6;
          lVar9 = thunk_FUN_03f9944c(DAT_0917e1d0);
          FUN_05d78cfc(lVar9,uVar10,DAT_091eba18,0);
          plVar8 = (long *)(*(long *)(DAT_091917e0 + 0xb8) + 8);
          *plVar8 = lVar9;
          thunk_FUN_03f5d7b8(plVar8,lVar9);
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = FUN_057e1328(lVar4,lVar9,DAT_091b30c0);
        if (lVar4 == 0) {
          uVar10 = AnhPD_FoodOrder_IngredientSpawnerController__CreateSegmentClone(param_1);
          if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = AnhPD_FoodOrder_IngredientSpawnerController__NewSegment(uVar10);
          lVar9 = DAT_091b30a8;
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) {
LAB_040f1a00:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_040f1a00;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar4;
            thunk_FUN_03f5d7b8(plVar8,lVar4);
          }
          else {
            FUN_057e0c68(lVar5,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        *(long *)(lVar4 + 0x30) = lVar2;
        thunk_FUN_03f5d7b8((long *)(lVar4 + 0x30),lVar2);
        *(undefined1 *)(lVar4 + 0x38) = 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

