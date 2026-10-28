// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerDisplay$$GetCenter
// address: 0x44ca650
// body: available
// range: 0x44ca650-0x44ca84b inclusive
// range: 0x44ca87c-0x44ca90b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ca8f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ca8f8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ca8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ca900 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ca908 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044ca848) */
/* WARNING: Removing unreachable block (ram,0x044ca904) */

undefined1  [16] CookOrder_Cooking_Implement_CookingBurgerDisplay__GetCenter(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  ulong local_70 [3];
  undefined4 local_58;
  
  if ((DAT_095182a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1688);
    FUN_03f5c2a4(&DAT_091a44a8);
    FUN_03f5c2a4(&DAT_091a6d20);
    FUN_03f5c2a4(&DAT_091a44b0);
    FUN_03f5c2a4(&DAT_091a6d28);
    FUN_03f5c2a4(&DAT_091a44b8);
    FUN_03f5c2a4(&DAT_091a6d30);
    FUN_03f5c2a4(&DAT_091b0410);
    FUN_03f5c2a4(&DAT_091b6a78);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_091beab8);
    DAT_095182a5 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  local_70[0] = 0;
  local_70[1] = 0;
  local_58 = 0;
  local_70[2] = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
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
        if (lVar3 == 0) goto LAB_044ca8fc;
        CookOrder_Cooking_Implement_CookingBurgerDisplay__Encapsulate
                  (local_70,*(undefined8 *)(lVar3 + 0x10));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar4 = FUN_06f33cf0(*(long *)(param_1 + 0x60),DAT_091a1688), lVar4 != 0)) {
      FUN_06535274(&local_c8,lVar4,DAT_091beab8);
      local_80 = local_b8;
      puStack_88 = puStack_c0;
      local_90 = local_c8;
      while (uVar2 = FUN_07261de8(&local_90,DAT_091a6d28), (uVar2 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_c8,local_80,DAT_091b0410);
        local_b0 = local_c8;
        local_c8 = 0;
        puStack_a8 = puStack_c0;
        local_a0 = local_b8;
        puStack_c0 = &local_b0;
        while (uVar2 = FUN_071bd28c(&local_b0,DAT_091a44b0), (uVar2 & 1) != 0) {
          CookOrder_Cooking_Implement_CookingBurgerDisplay__Encapsulate(local_70,local_a0);
        }
        FUN_071bd288(&local_b0,DAT_091a44a8);
      }
      FUN_07261de4(&local_90,DAT_091a6d20);
      CookOrder_Cooking_Implement_CookingBurgerDisplay__Encapsulate
                (local_70,*(undefined8 *)(param_1 + 0x30));
      CookOrder_Cooking_Implement_CookingBurgerDisplay__Encapsulate
                (local_70,*(undefined8 *)(param_1 + 0x28));
      if ((char)local_70[0] == '\0') {
        lVar4 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar4 == 0) goto LAB_044ca8fc;
        auVar6 = UnityEngine_Transform__get_position(lVar4,0);
      }
      else {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_70[0] >> 0x20;
      }
      return auVar6;
    }
  }
LAB_044ca8fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

