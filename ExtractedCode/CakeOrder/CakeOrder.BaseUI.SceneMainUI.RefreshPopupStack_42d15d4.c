// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$RefreshPopupStack
// address: 0x42d15d4
// body: available
// range: 0x42d15d4-0x42d18df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d18d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d18dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__RefreshPopupStack(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined4 local_c0;
  undefined8 local_b4;
  undefined8 *puStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_095173a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a4a78);
    FUN_03f5c2a4(&DAT_091a4a80);
    FUN_03f5c2a4(&DAT_091a4a88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8600);
    FUN_03f5c2a4(&DAT_091bb490);
    DAT_095173a4 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_061a17cc(&local_80,*(long *)(param_1 + 0x58),DAT_091bb490);
    local_50 = CONCAT44(uStack_6c,local_70);
    puStack_58 = puStack_78;
    local_60 = local_80;
    local_80 = 0;
    lVar6 = 0;
    puStack_78 = &local_60;
    while (uVar4 = FUN_071bec70(&local_60,DAT_091a4a80), (uVar4 & 1) != 0) {
      lVar5 = FUN_071bed54(&local_60,DAT_091a4a88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar5 + 0x28) == 1) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
          lVar1 = lVar5;
          if ((uVar4 & 1) == 0) {
            lVar1 = lVar6;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar2 = UnityEngine_Object__op_Inequality(lVar5,lVar1,0);
          lVar6 = lVar1;
          if (*(byte *)(lVar5 + 0x90) != (bVar2 & 1)) {
            *(byte *)(lVar5 + 0x90) = bVar2 & 1;
            CakeOrder_BaseUI_UICakePopup__ApplyVisible(lVar5,0);
          }
        }
      }
    }
    FUN_071bec64(&local_60,DAT_091a4a78);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x78) == '\0') {
      lVar5 = *(long *)(param_1 + 0x68);
      *(undefined1 *)(param_1 + 0x78) = 1;
      uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar7,param_1,DAT_091d8600,0);
      if (lVar5 == 0) goto LAB_042d18dc;
      CakeOrder_BaseUI_UIPopupBlurBackdrop__add_onTap(lVar5,uVar7);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
    lVar5 = *(long *)(param_1 + 0x68);
    if ((uVar4 & 1) == 0) {
      uVar3 = CakeOrder_BaseUI_SceneMainUI__GetBackdropMode(param_1,lVar6);
      if (lVar6 != 0) {
        CakeOrder_BaseUI_UICakePopup__get_BlurTintOverride(&local_a0,lVar6);
        local_70 = local_90;
        puStack_78 = puStack_98;
        local_80 = local_a0;
        CakeOrder_BaseUI_UICakePopup__get_DimTintOverride(&local_b4,lVar6);
        puStack_98 = puStack_ac;
        local_a0 = local_b4;
        local_90 = local_a4;
        if (lVar5 != 0) {
          puStack_c8 = puStack_78;
          local_d0 = local_80;
          local_c0 = local_70;
          puStack_e8 = puStack_ac;
          local_f0 = local_b4;
          local_e0 = local_a4;
          CakeOrder_BaseUI_UIPopupBlurBackdrop__Apply
                    (lVar5,uVar3,&local_d0,&local_f0,*(undefined8 *)(lVar6 + 0x78),lVar6);
          return;
        }
      }
    }
    else if (lVar5 != 0) {
      CakeOrder_BaseUI_UIPopupBlurBackdrop__Clear(lVar5);
      return;
    }
  }
LAB_042d18dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

