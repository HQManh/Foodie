// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurgerDisplay$$TryGetBounds
// address: 0x413c130
// body: available
// range: 0x413c130-0x413c333 inclusive
// range: 0x413c364-0x413c3df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413c3c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413c3cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413c3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413c3d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413c3dc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0413c330) */
/* WARNING: Removing unreachable block (ram,0x0413c3d8) */

undefined1 AnhPD_FoodOrder_FlexibleBurgerDisplay__TryGetBounds(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if ((DAT_095163a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a16f8);
    FUN_03f5c2a4(&DAT_091a6d50);
    FUN_03f5c2a4(&DAT_091a44a8);
    FUN_03f5c2a4(&DAT_091a44b0);
    FUN_03f5c2a4(&DAT_091a6d58);
    FUN_03f5c2a4(&DAT_091a6d60);
    FUN_03f5c2a4(&DAT_091a44b8);
    FUN_03f5c2a4(&DAT_091b0410);
    FUN_03f5c2a4(&DAT_091b6a78);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_091beac8);
    DAT_095163a1 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
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
        if (lVar3 == 0) goto LAB_0413c3d0;
        AnhPD_FoodOrder_FlexibleBurgerDisplay__Encapsulate(&local_80,*(undefined8 *)(lVar3 + 0x10));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar4 = FUN_06f33cf0(*(long *)(param_1 + 0x60),DAT_091a16f8), lVar4 != 0)) {
      FUN_06535274(&local_d8,lVar4,DAT_091beac8);
      local_90 = local_c8;
      puStack_98 = puStack_d0;
      local_a0 = local_d8;
      while( true ) {
        uVar2 = FUN_07261de8(&local_a0,DAT_091a6d58);
        if ((uVar2 & 1) == 0) {
          FUN_07261de4(&local_a0,DAT_091a6d50);
          AnhPD_FoodOrder_FlexibleBurgerDisplay__Encapsulate
                    (&local_80,*(undefined8 *)(param_1 + 0x30));
          AnhPD_FoodOrder_FlexibleBurgerDisplay__Encapsulate
                    (&local_80,*(undefined8 *)(param_1 + 0x28));
          param_2[1] = CONCAT44(uStack_70,uStack_74);
          *param_2 = CONCAT44(uStack_78,uStack_7c);
          param_2[2] = CONCAT44(uStack_68,uStack_6c);
          return (undefined1)local_80;
        }
        if (local_90 == 0) break;
        FUN_057e185c(&local_d8,local_90,DAT_091b0410);
        local_c0 = local_d8;
        local_d8 = 0;
        puStack_b8 = puStack_d0;
        local_b0 = local_c8;
        puStack_d0 = &local_c0;
        while (uVar2 = FUN_071bd28c(&local_c0,DAT_091a44b0), (uVar2 & 1) != 0) {
          AnhPD_FoodOrder_FlexibleBurgerDisplay__Encapsulate(&local_80,local_b0);
        }
        FUN_071bd288(&local_c0,DAT_091a44a8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0413c3d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

