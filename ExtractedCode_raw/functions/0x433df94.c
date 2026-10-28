// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$RefreshLanguageDropdown
// address: 0x433df94
// body: available
// range: 0x433df94-0x433e2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433e2e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433e2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__RefreshLanguageDropdown(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_09517739 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091a37d0);
    FUN_03f5c2a4(&DAT_091a37d8);
    FUN_03f5c2a4(&DAT_091a37e0);
    FUN_03f5c2a4(&DAT_091ae3e8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ae3f8);
    FUN_03f5c2a4(&DAT_091ae400);
    FUN_03f5c2a4(&DAT_091ae408);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091ae430);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517739 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1e8);
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x1f0);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      lVar8 = *(long *)(param_1 + 0x1f0);
    }
    if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_CheatManagerCakeOrder__get_IsShowCheatButtons(0);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182278);
    }
    uVar7 = CakeOrder_Localization_CakeLocalization__GetSelectableLocales(uVar4 & 1,0);
    if (lVar8 != 0) {
      FUN_057e0e78(lVar8,uVar7,DAT_091ae3e8);
      if (*(long *)(param_1 + 0x1f0) != 0) {
        uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 0x18);
        lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0478(lVar8,uVar3,DAT_091b0568);
        if (*(long *)(param_1 + 0x1f0) != 0) {
          FUN_057e185c(&local_78,*(long *)(param_1 + 0x1f0),DAT_091ae400);
          puStack_58 = puStack_70;
          local_60 = local_78;
          local_50 = local_68;
          local_78 = 0;
          puStack_70 = &local_60;
          while (uVar5 = FUN_071bd28c(&local_60,DAT_091a37d8), uVar7 = local_50, (uVar5 & 1) != 0) {
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = CakeOrder_Localization_CakeLocalization__GetDisplayName(uVar7,0);
            lVar2 = DAT_091b0570;
            if (lVar8 == 0) {
LAB_0433e2e8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_0433e2e8;
            uVar4 = *(uint *)(lVar8 + 0x18);
            if (uVar4 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20) = uVar7;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar8,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_071bd288(&local_60,DAT_091a37d0);
          if (*(long *)(param_1 + 0x1e8) != 0) {
            TMPro_TMP_Dropdown__ClearOptions(*(long *)(param_1 + 0x1e8),0);
            if (*(long *)(param_1 + 0x1e8) != 0) {
              TMPro_TMP_Dropdown__AddOptions(*(long *)(param_1 + 0x1e8),lVar8,0);
              lVar8 = *(long *)(param_1 + 0x1e8);
              lVar2 = *(long *)(param_1 + 0x1f0);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = CakeOrder_Localization_CakeLocalization__get_SelectedLocale(0);
              if ((lVar2 != 0) && (uVar4 = FUN_057e1a08(lVar2,uVar7,DAT_091ae408), lVar8 != 0)) {
                TMPro_TMP_Dropdown__SetValueWithoutNotify
                          (lVar8,uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU),0);
                if (*(long *)(param_1 + 0x1e8) != 0) {
                  TMPro_TMP_Dropdown__RefreshShownValue(*(long *)(param_1 + 0x1e8),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

