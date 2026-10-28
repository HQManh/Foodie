// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$GetItemOrderSpecs
// address: 0x4135db8
// body: available
// range: 0x4135db8-0x413601b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4135eb4 to 0x41d8754 AnhPD.FoodOrder.OrderStrategy$$GetItemOrderSpecs (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4136014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4136018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__GetItemOrderSpecs(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [72];
  
  if ((DAT_09516361 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09184738);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091aed18);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917c850);
    DAT_09516361 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_09184738 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09184738 + 0x130) * 8 + -8) ==
        DAT_09184738)) {
      lVar3 = AnhPD_FoodOrder_FlexibleKFCCombo__GetSubOrderIds(param_2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x18);
      lVar4 = thunk_FUN_03f9944c(DAT_0917c850);
      FUN_057ee9a4(lVar4,uVar1,DAT_091aed18);
      FUN_057e185c(&local_a0,lVar3,DAT_091b05a8);
      local_b0 = 0;
      puStack_a8 = &local_a0;
      while( true ) {
        uVar5 = FUN_071bd28c(&local_a0,DAT_091a45a0);
        if ((uVar5 & 1) == 0) {
          FUN_071bd288(&local_a0,DAT_091a4598);
          return lVar4;
        }
        AnhPD_FoodOrder_OrderStrategy__BuildSpec(auStack_88,param_1,local_90,0);
        memcpy(auStack_f8,auStack_88,0x48);
        lVar3 = DAT_091aed20;
        if (lVar4 == 0) break;
        lVar6 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) break;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar2 * 0x48;
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          memcpy((void *)(lVar6 + 0x20),auStack_f8,0x48);
          thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_88,auStack_f8,0x48);
          FUN_057ef254(lVar4,auStack_88,uVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar3 = AnhPD_FoodOrder_OrderStrategy__GetItemOrderSpecs(param_1,param_2,0);
  return lVar3;
}

