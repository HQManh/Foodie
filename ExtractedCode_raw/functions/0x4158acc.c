// rea decompile_all
// name: AnhPD.FoodOrder.JuiceResultMergeAnim$$SkinFor
// address: 0x4158acc
// body: available
// range: 0x4158acc-0x4158c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4158c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4158c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_JuiceResultMergeAnim__SkinFor(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095164e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a55a0);
    FUN_03f5c2a4(&DAT_091a55a8);
    FUN_03f5c2a4(&DAT_091a55b0);
    FUN_03f5c2a4(&DAT_091b31f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164e7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x218))(&local_90,param_2,*(undefined8 *)(*param_2 + 0x220));
    uStack_58 = puStack_88;
    local_60 = local_90;
    local_50 = local_80;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_057e185c(&local_78,*(long *)(param_1 + 0x48),DAT_091b31f0);
      local_90 = 0;
      puStack_88 = &local_78;
      do {
        do {
          uVar4 = FUN_071bd28c(&local_78,DAT_091a55a8);
          lVar2 = local_68;
          if ((uVar4 & 1) == 0) {
            uVar6 = 0;
            goto LAB_04158c58;
          }
        } while ((local_68 == 0) ||
                (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(local_68 + 0x18),0),
                (uVar5 & 1) != 0));
        uVar1 = *(undefined4 *)(lVar2 + 0x10);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_60,uVar1,0);
      } while (iVar3 < 1);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = Spine_SkeletonData__FindSkin(param_3,*(undefined8 *)(lVar2 + 0x18),0);
LAB_04158c58:
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      FUN_071bd288(&local_78,DAT_091a55a0);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

