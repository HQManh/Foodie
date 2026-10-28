// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$BuildPieceIndex
// address: 0x40b7708
// body: available
// range: 0x40b7708-0x40b7b37 inclusive
// range: 0x40b7b3c-0x40b7b3f inclusive
// range: 0x40b7b44-0x40b7b47 inclusive
// range: 0x40b7b4c-0x40b7b4f inclusive
// range: 0x40b7b54-0x40b7b57 inclusive
// range: 0x40b7ba8-0x40b7bff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b7b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7bf0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7bf8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b7bfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040b7ab8) */
/* WARNING: Removing unreachable block (ram,0x040b7bec) */

void AnhPD_FoodOrder_RecipeConfigSO__BuildPieceIndex(long param_1)

{
  undefined8 **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09515f2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ec90);
    FUN_03f5c2a4(&DAT_0919dbb8);
    FUN_03f5c2a4(&DAT_0919ec88);
    FUN_03f5c2a4(&DAT_0919fce8);
    FUN_03f5c2a4(&DAT_0919dbb0);
    FUN_03f5c2a4(&DAT_0919fd00);
    FUN_03f5c2a4(&DAT_0919dbc0);
    FUN_03f5c2a4(&DAT_09176bc8);
    FUN_03f5c2a4(&DAT_09176850);
    FUN_03f5c2a4(&DAT_09176510);
    FUN_03f5c2a4(&DAT_091a3f80);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a3f88);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a3f90);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091af658);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091add18);
    DAT_09515f2b = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  plVar9 = (long *)(param_1 + 0x78);
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_c8 = 0;
  if (*plVar9 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_09176bc8);
    FUN_06fd76bc(uVar3,DAT_0919fce8);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    thunk_FUN_03f5d7b8(plVar9,uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_09176510);
    FUN_06eef750(uVar3,DAT_0919dbb0);
    local_f8 = (undefined8 *)(param_1 + 0x80);
    *local_f8 = uVar3;
    thunk_FUN_03f5d7b8(local_f8,uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_09176510);
    FUN_06eef750(uVar3,DAT_0919dbb0);
    local_100 = (undefined8 *)(param_1 + 0x88);
    *local_100 = uVar3;
    thunk_FUN_03f5d7b8(local_100,uVar3);
    lVar4 = thunk_FUN_03f9944c(DAT_09176850);
    FUN_0702f898(lVar4,DAT_0919ec88);
    plVar8 = (long *)(param_1 + 0x90);
    *plVar8 = lVar4;
    thunk_FUN_03f5d7b8(plVar8,lVar4);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_057e185c(&local_80,*(long *)(param_1 + 0x18),DAT_091af658);
      puStack_98 = puStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      local_d0 = &local_a0;
      local_d8 = 0;
LAB_040b7964:
      while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a3f88), uVar2 = local_90, lVar4 = local_d8,
            (uVar5 & 1) != 0) {
        if (((local_90 != 0) && (lVar4 = *(long *)(local_90 + 0x38), lVar4 != 0)) &&
           (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(local_90 + 0x10),0),
           (uVar5 & 1) == 0)) {
          if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd8440(*plVar9,*(undefined8 *)(uVar2 + 0x10),lVar4,DAT_0919fd00);
          uVar5 = AnhPD_FoodOrder_RcPieceConfig__get_HasPiece(lVar4);
          if (((uVar5 & 1) != 0) && (1 < *(int *)(lVar4 + 0x10) - 3U)) {
            ppuVar1 = &local_f8;
            if (*(int *)(lVar4 + 0x10) != 1) {
              ppuVar1 = &local_100;
            }
            if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = **ppuVar1;
            FUN_05797d74(&local_80,*(long *)(lVar4 + 0x18),DAT_091adcc0);
            local_b0 = local_70;
            puStack_b8 = puStack_78;
            local_c0 = local_80;
            local_80 = 0;
            puStack_78 = &local_c0;
LAB_040b7a10:
            do {
              uVar6 = FUN_071ad7a4(&local_c0,DAT_091a34d8);
              uVar5 = local_b0;
              if ((uVar6 & 1) == 0) goto LAB_040b7a8c;
              if (-1 < (int)local_b0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar6 = FUN_06ef1fe8(lVar10,local_b0 & 0xffffffff,&local_c8,DAT_0919dbb8);
                if ((uVar6 & 1) != 0) {
                  if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(local_c8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar7 = *(long *)(*(long *)(local_c8 + 0x38) + 0x18);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(int *)(lVar7 + 0x18) <= *(int *)(*(long *)(lVar4 + 0x18) + 0x18))
                  goto LAB_040b7a10;
                }
                FUN_06ef04f8(lVar10,uVar5 & 0xffffffff,uVar2,DAT_0919dbc0);
              }
            } while( true );
          }
        }
      }
      FUN_071bd288(local_d0,DAT_091a3f80);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar4);
      }
    }
  }
  return;
LAB_040b7a8c:
  FUN_071ad7a0(&local_c0,DAT_091a34d0);
  uVar5 = AnhPD_FoodOrder_RcPieceConfig__get_HasPiece(lVar4);
  if (((uVar5 & 1) != 0) && ((*(int *)(lVar4 + 0x10) == 2 || (*(int *)(lVar4 + 0x10) == 4)))) {
    lVar10 = *plVar8;
    AnhPD_FoodOrder_RecipeConfigSO__SetOf(&local_80,*(undefined8 *)(lVar4 + 0x18));
    puStack_e8 = puStack_78;
    local_f0 = local_80;
    local_e0 = local_70;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_070326d0(lVar10,&local_80,*(undefined8 *)(uVar2 + 0x10),DAT_0919ec90);
  }
  goto LAB_040b7964;
}

