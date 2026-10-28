// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.LevelSimpleBBQ$$RandomeNewIngredient
// address: 0x41b88e0
// body: available
// range: 0x41b88e0-0x41b8c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b8c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__RandomeNewIngredient(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  long lStack_58;
  undefined8 local_50;
  
  if ((DAT_09516955 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919caa8);
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_0919d388);
    FUN_03f5c2a4(&DAT_0919cab8);
    FUN_03f5c2a4(&DAT_091a5f00);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a5f08);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_091a5f10);
    FUN_03f5c2a4(&DAT_091a93c0);
    FUN_03f5c2a4(&DAT_091a9470);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091bb030);
    FUN_03f5c2a4(&DAT_091bb040);
    DAT_09516955 = 1;
  }
  local_50 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  lStack_58 = 0;
  local_60 = 0;
  if ((char)param_1[0x36] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x041b8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
    return;
  }
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    if (param_1[0x37] != 0) {
      FUN_06f2d6f4(&local_b8,param_1[0x37],DAT_0919cab0);
      puStack_88 = puStack_b0;
      local_90 = local_b8;
      puStack_b0 = &local_90;
      lStack_78 = lStack_a0;
      local_80 = local_a8;
      local_b8 = 0;
      do {
        uVar6 = FUN_0726063c(&local_90,DAT_091a5da0);
        uVar4 = local_80;
        if ((uVar6 & 1) == 0) {
          FUN_07260744(&local_90,DAT_091a5d98);
          (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
          return;
        }
        if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar2 = local_80._4_4_;
        uVar6 = FUN_06f2d508(param_1[0x38],local_80 & 0xffffffff,DAT_0919caa8);
        if ((uVar6 & 1) == 0) break;
        if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = FUN_06f2d280(param_1[0x38],uVar4 & 0xffffffff,DAT_0919cab8);
      } while (iVar2 <= iVar3);
      lVar5 = UnityEngine_Camera__get_main(0);
      UnityEngine_Input__get_mousePosition(0);
      if (lVar5 != 0) {
        UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
        Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar4 & 0xffffffff,0);
        FUN_07260744(&local_90,DAT_091a5d98);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else if (param_1[0x3c] != 0) {
    FUN_06ef0948(&local_b8,param_1[0x3c],DAT_0919d388);
    puStack_68 = puStack_b0;
    local_70 = local_b8;
    uVar1 = 0;
    lStack_58 = lStack_a0;
    local_60 = local_a8;
    local_50 = local_98;
    puStack_b0 = &local_70;
    local_b8 = 0;
    do {
      do {
        uVar4 = FUN_072556b0(&local_70,DAT_091a5f08);
        if ((uVar4 & 1) == 0) goto LAB_041b8ad8;
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while (*(int *)(lStack_58 + 0x18) < 1);
      uVar1 = FUN_061a05c8(lStack_58,DAT_091bb030);
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06f2d508(param_1[0x38],uVar1,DAT_0919caa8);
      if ((uVar4 & 1) == 0) break;
      if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = FUN_06f2d280(param_1[0x38],uVar1,DAT_0919cab8);
    } while (0 < iVar2);
LAB_041b8ad8:
    FUN_072557d4(&local_70,DAT_091a5f00);
    lVar5 = UnityEngine_Camera__get_main(0);
    UnityEngine_Input__get_mousePosition(0);
    if (lVar5 != 0) {
      UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
      Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

