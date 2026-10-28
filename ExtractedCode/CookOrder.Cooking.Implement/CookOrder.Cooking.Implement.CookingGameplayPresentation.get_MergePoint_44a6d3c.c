// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$get_MergePoint
// address: 0x44a6d3c
// body: available
// range: 0x44a6d3c-0x44a6e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a6e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  char local_3c [4];
  undefined4 local_38;
  
  if ((DAT_0951820b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6a78);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951820b = 1;
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__GridBounds(local_3c,param_4);
  if (local_3c[0] == '\0') {
    uVar6 = *(undefined8 *)(param_4 + 0x1e0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) == 0) {
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      local_38 = **(undefined4 **)(DAT_0918cbd0 + 0xb8);
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      lVar3 = *(long *)(param_4 + 0x1e0);
      if ((lVar3 == 0) || (lVar2 = UnityEngine_Component__get_transform(lVar3,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_position(lVar2,0);
      UnityEngine_Camera__ViewportToWorldPoint(0x3f000000,0x3f000000,ABS(param_3),lVar3,0);
      local_38 = extraout_s0;
      uVar5 = extraout_var;
      uVar6 = extraout_var_00;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = local_38;
  auVar4._8_8_ = uVar6;
  return auVar4;
}

