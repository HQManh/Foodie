// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$IsMergedAs
// address: 0x40ca3a0
// body: available
// range: 0x40ca3a0-0x40ca53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ca538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsMergedAs
               (long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09515fb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fb1 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) != 0) {
    if (param_2 == 0) {
LAB_040ca538:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(param_2,0);
    if ((uVar3 & 1) == 0) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar4 == 0)) goto LAB_040ca538;
      iVar1 = AnhPD_FoodOrder_ShelfMergeQueue__IndexOfOldest(lVar4,param_2);
      if (iVar1 < 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_040ca538;
        uVar3 = AnhPD_FoodOrder_ServeShelfController__IsResultAnimPlaying
                          (*(long *)(param_1 + 0x10),param_2,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_040ca538;
          AnhPD_FoodOrder_ServeShelfController__PlateHas
                    (&local_60,*(long *)(param_1 + 0x10),param_2,param_4,0);
          if ((char)local_60 != '\0') {
            FUN_05c33204(&local_78,&local_60,DAT_091b71c8);
            uStack_88 = param_3[1];
            local_90 = *param_3;
            local_80 = param_3[2];
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_a8 = uStack_70;
            local_b0 = local_78;
            local_a0 = local_68;
            uStack_c8 = uStack_88;
            local_d0 = local_90;
            local_c0 = local_80;
            uVar2 = AnhPD_FoodOrder_PieceSet__op_Equality(&local_b0,&local_d0,0);
            goto LAB_040ca51c;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_040ca51c:
  return uVar2 & 1;
}

