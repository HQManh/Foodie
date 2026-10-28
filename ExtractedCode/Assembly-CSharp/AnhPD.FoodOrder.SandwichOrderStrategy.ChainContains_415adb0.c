// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy$$ChainContains
// address: 0x415adb0
// body: available
// range: 0x415adb0-0x415af33 inclusive
// range: 0x415af74-0x415af93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415af30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_SandwichOrderStrategy__ChainContains
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095164fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0918a568);
    DAT_095164fc = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar3 = System_String__op_Equality(param_2,param_3,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar4,DAT_091b0558);
    if (param_1 == 0) {
LAB_0415af30:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetInputsOf(param_1,param_2,param_4,lVar4,0);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (lVar4 == 0) goto LAB_0415af30;
      FUN_057e185c(&local_58,lVar4,DAT_091b05a8);
      do {
        uVar2 = FUN_071bd28c(&local_58,DAT_091a45a0);
        uVar1 = local_48;
        if ((uVar2 & 1) == 0) break;
        if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_SandwichOrderStrategy__ChainContains(param_1,uVar1,param_3,param_4);
      } while ((uVar3 & 1) == 0);
      FUN_071bd288(&local_58,DAT_091a4598);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

