// rea decompile_all
// name: AnhPD.FoodOrder.UIFlexibleBurgerDisplay$$SetTint
// address: 0x4133cac
// body: available
// range: 0x4133cac-0x4133ee3 inclusive
// range: 0x4133f14-0x4133f67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4133f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4133f54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4133f58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4133f5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4133f64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04133ee0) */
/* WARNING: Removing unreachable block (ram,0x04133f60) */

void AnhPD_FoodOrder_UIFlexibleBurgerDisplay__SetTint
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_095163bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a16d8);
    FUN_03f5c2a4(&DAT_091a6d38);
    FUN_03f5c2a4(&DAT_091a3290);
    FUN_03f5c2a4(&DAT_091a6d40);
    FUN_03f5c2a4(&DAT_091a3298);
    FUN_03f5c2a4(&DAT_091a6d48);
    FUN_03f5c2a4(&DAT_091a32a0);
    FUN_03f5c2a4(&DAT_091ad890);
    FUN_03f5c2a4(&DAT_091beac0);
    DAT_095163bb = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  AnhPD_FoodOrder_UIFlexibleBurgerDisplay__TintImage
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x28));
  AnhPD_FoodOrder_UIFlexibleBurgerDisplay__TintImage
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x30));
  lVar4 = *(long *)(param_5 + 0x20);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
        if (lVar3 == 0) goto LAB_04133f58;
        AnhPD_FoodOrder_UIFlexibleBurgerDisplay__TintImage
                  (param_1,param_2,param_3,param_4,*(undefined8 *)(lVar3 + 0x10));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    if ((*(long *)(param_5 + 0x48) != 0) &&
       (lVar4 = FUN_06f33cf0(*(long *)(param_5 + 0x48),DAT_091a16d8), lVar4 != 0)) {
      FUN_06535274(&local_c8,lVar4,DAT_091beac0);
      local_80 = local_b8;
      puStack_88 = puStack_c0;
      local_90 = local_c8;
      while( true ) {
        uVar2 = FUN_07261de8(&local_90,DAT_091a6d40);
        if ((uVar2 & 1) == 0) {
          FUN_07261de4(&local_90,DAT_091a6d38);
          return;
        }
        if (local_80 == 0) break;
        FUN_057e185c(&local_c8,local_80,DAT_091ad890);
        local_b0 = local_c8;
        local_c8 = 0;
        puStack_a8 = puStack_c0;
        local_a0 = local_b8;
        puStack_c0 = &local_b0;
        while (uVar2 = FUN_071bd28c(&local_b0,DAT_091a3298), (uVar2 & 1) != 0) {
          AnhPD_FoodOrder_UIFlexibleBurgerDisplay__TintImage
                    (param_1,param_2,param_3,param_4,local_a0);
        }
        FUN_071bd288(&local_b0,DAT_091a3290);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_04133f58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

