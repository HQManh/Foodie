// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$CustomerPosition
// address: 0x44bb398
// body: available
// range: 0x44bb398-0x44bb423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bb420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CookOrder_Cooking_Implement_CookingGameplayPresentation__CustomerPosition
          (long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined4 local_28;
  
  if ((DAT_0951823e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dee0);
    DAT_0951823e = 1;
  }
  local_28 = 0;
  local_30 = 0;
  if (*(long *)(param_1 + 0x340) != 0) {
    uVar1 = FUN_06f0dde4(*(long *)(param_1 + 0x340),param_2,&local_30,DAT_0919dee0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x128) == 0) goto LAB_044bb420;
      UnityEngine_Transform__get_position(*(long *)(param_1 + 0x128),0);
      local_30._0_4_ = extraout_s0;
      uVar3 = extraout_var;
      uVar4 = extraout_var_00;
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
    }
    auVar2._4_4_ = uVar3;
    auVar2._0_4_ = (undefined4)local_30;
    auVar2._8_8_ = uVar4;
    return auVar2;
  }
LAB_044bb420:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

