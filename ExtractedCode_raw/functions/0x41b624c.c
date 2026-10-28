// rea decompile_all
// name: Datpt.Cook_Order.LevelCreamOnBeach$$RandomeNewIngredient
// address: 0x41b624c
// body: available
// range: 0x41b624c-0x41b654f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b653c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b6548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b654c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelCreamOnBeach__RandomeNewIngredient(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516940 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919caa8);
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_0919cab8);
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a93c0);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091ac800);
    FUN_03f5c2a4(&DAT_091ac808);
    DAT_09516940 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((char)param_1[0x36] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x041b63dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
    return;
  }
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    if (param_1[0x37] != 0) {
      FUN_06f2d6f4(&local_a0,param_1[0x37],DAT_0919cab0);
      puStack_78 = puStack_98;
      local_80 = local_a0;
      uStack_68 = uStack_88;
      local_70 = uStack_90;
      local_a0 = 0;
      puStack_98 = &local_80;
      do {
        uVar6 = FUN_0726063c(&local_80,DAT_091a5da0);
        uVar4 = local_70;
        if ((uVar6 & 1) == 0) {
          FUN_07260744(&local_80,DAT_091a5d98);
          (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
          return;
        }
        if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = local_70._4_4_;
        uVar6 = FUN_06f2d508(param_1[0x38],local_70 & 0xffffffff,DAT_0919caa8);
        if ((uVar6 & 1) == 0) break;
        if (param_1[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = FUN_06f2d280(param_1[0x38],uVar4 & 0xffffffff,DAT_0919cab8);
      } while (iVar1 <= iVar3);
      lVar5 = param_1[0x3d];
      UnityEngine_Input__get_mousePosition(0);
      if (lVar5 != 0) {
        UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
        Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar4 & 0xffffffff,0);
        FUN_07260744(&local_80,DAT_091a5d98);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else if (param_1[0x3e] != 0) {
    FUN_0579a6a8(&local_58,param_1[0x3e],DAT_091ac7f8);
    local_a0 = 0;
    puStack_98 = &local_58;
    do {
      uVar4 = FUN_071aef5c(&local_58,DAT_091a2b18);
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
        goto LAB_041b64b8;
      }
      lVar5 = param_1[0x3e];
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(int *)(lVar5 + 0x18) <= (int)param_1[0x40]);
    uVar2 = FUN_057997e4(lVar5,(int)param_1[0x40],DAT_091ac808);
    *(int *)(param_1 + 0x40) = (int)param_1[0x40] + 1;
LAB_041b64b8:
    FUN_071aef58(&local_58,DAT_091a2b10);
    lVar5 = param_1[0x3d];
    UnityEngine_Input__get_mousePosition(0);
    if (lVar5 != 0) {
      UnityEngine_Camera__ScreenToWorldPoint(lVar5,0);
      Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_1,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

