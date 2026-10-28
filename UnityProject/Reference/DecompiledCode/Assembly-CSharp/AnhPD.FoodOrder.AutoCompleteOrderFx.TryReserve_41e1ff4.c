// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$TryReserve
// address: 0x41e1ff4
// body: available
// range: 0x41e1ff4-0x41e2243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e2240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_AutoCompleteOrderFx__TryReserve
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,long param_5,
               int param_6)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09516add & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b20e8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516add = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_6 < 9) {
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__PickById(param_4,param_2);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x44) = *(int *)(lVar4 + 0x44) + -1;
      lVar1 = DAT_091b20e8;
      if (param_5 == 0) {
LAB_041e2240:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(param_5 + 0x10);
      *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_041e2240;
      uVar3 = *(uint *)(param_5 + 0x18);
      if (uVar3 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(param_5 + 0x18) = uVar3 + 1;
        *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) = lVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(param_5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar3 = 1;
      goto LAB_041e2220;
    }
    lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar4,DAT_091b0558);
    if (param_1 == 0) goto LAB_041e2240;
    uVar5 = AnhPD_FoodOrder_RecipeConfigSO__TryGetInputsOf(param_1,param_2,param_3,lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 != 0) {
        FUN_057e185c(&local_68,lVar4,DAT_091b05a8);
        do {
          uVar3 = FUN_071bd28c(&local_68,DAT_091a45a0);
          uVar2 = local_58;
          if ((uVar3 & 1) == 0) break;
          if (*(int *)(DAT_09181918 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__TryReserve
                            (param_1,uVar2,param_3,param_4,param_5,param_6 + 1);
        } while ((uVar5 & 1) != 0);
        uVar3 = uVar3 ^ 1;
        FUN_071bd288(&local_68,DAT_091a4598);
        goto LAB_041e2220;
      }
      goto LAB_041e2240;
    }
  }
  uVar3 = 0;
LAB_041e2220:
  return uVar3 & 1;
}

