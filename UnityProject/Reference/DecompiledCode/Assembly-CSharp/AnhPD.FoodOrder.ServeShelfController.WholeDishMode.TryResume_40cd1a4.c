// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$TryResume
// address: 0x40cd1a4
// body: available
// range: 0x40cd1a4-0x40cd307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cd304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryResume
               (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 auStack_180 [80];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 auStack_118 [80];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09515fc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    DAT_09515fc0 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    AnhPD_FoodOrder_ServeShelfController__PlateHas
              (&local_60,*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),param_3,0);
    if ((char)local_60 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      FUN_05c33204(&local_c8,&local_60,DAT_091b71c8);
      local_120 = local_b8;
      uStack_128 = uStack_c0;
      local_130 = local_c8;
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__StateOf
                (auStack_118,param_1,uVar3,&local_130,param_3);
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_040cd304;
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0xb4);
      memcpy(auStack_180,auStack_118,0x50);
      uStack_198 = *(undefined8 *)(param_2 + 0x38);
      local_1a0 = *(undefined8 *)(param_2 + 0x30);
      local_190 = *(undefined8 *)(param_2 + 0x40);
      uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Plan
                        (param_1,auStack_180,&local_1a0,uVar3,uVar1,param_3,&local_b0);
      if (((uVar2 & 1) != 0) && ((param_4 & 1) == 0)) {
        uVar2 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Commit
                          (param_1,*(undefined8 *)(param_2 + 0x10),0,param_3);
      }
    }
    return uVar2 & 1;
  }
LAB_040cd304:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

