// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$OnDestroy
// address: 0x42c8180
// body: available
// range: 0x42c8180-0x42c8533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c8528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c852c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__OnDestroy(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09517358 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_091a2810);
    FUN_03f5c2a4(&DAT_091a3fe0);
    FUN_03f5c2a4(&DAT_091a3fe8);
    FUN_03f5c2a4(&DAT_091a2818);
    FUN_03f5c2a4(&DAT_091a3ff0);
    FUN_03f5c2a4(&DAT_091a2820);
    FUN_03f5c2a4(&DAT_091af748);
    FUN_03f5c2a4(&DAT_091ac160);
    FUN_03f5c2a4(&DAT_091af750);
    FUN_03f5c2a4(&DAT_091ac168);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcdf0);
    FUN_03f5c2a4(&DAT_091dce00);
    DAT_09517358 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  CakeOrder_UI_UIListUpgradeBuildingOptionCards__CompletePendingReveal(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_042c8530;
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x140),DAT_091ac168);
    puStack_48 = puStack_80;
    local_50 = local_88;
    local_40 = local_78;
    local_88 = 0;
    puStack_80 = &local_50;
    while (uVar2 = FUN_071bd28c(&local_50,DAT_091a2818), (uVar2 & 1) != 0) {
      if (local_40 != 0) {
        if (*(long *)(param_1 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_MonoBehaviour__StopCoroutine(*(long *)(param_1 + 0x148),local_40,0);
      }
    }
    FUN_071bd288(&local_50,DAT_091a2810);
  }
  lVar3 = *(long *)(param_1 + 0x140);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x138),DAT_091af750);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar2 = FUN_071bd28c(&local_70,DAT_091a3fe8), lVar3 = local_60, (uVar2 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = UnityEngine_Component__get_gameObject(lVar3,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(uVar4,0);
        }
      }
      FUN_071bd288(&local_70,DAT_091a3fe0);
      lVar3 = *(long *)(param_1 + 0x138);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
        CakeOrder_UI_UIListUpgradeBuildingOptionCards__SetUpgradeInputBlocked(param_1,0);
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(param_1 + 0x68);
          uVar4 = thunk_FUN_03f9944c(DAT_09174948);
          FUN_071c30b0(uVar4,param_1,DAT_091dcdf0,0);
          if (lVar3 == 0) goto LAB_042c8530;
          Utilities_UI_UICardFlowLayoutControl__remove_onContentHeightChanged(lVar3,uVar4,0);
        }
        uVar4 = *(undefined8 *)(param_1 + 0xf0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(param_1 + 0xf0);
          uVar4 = thunk_FUN_03f9944c(DAT_09174e30);
          FUN_071cd244(uVar4,param_1,DAT_091dce00,0);
          if (lVar3 == 0) goto LAB_042c8530;
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onHomeBuildingItemBought
                    (lVar3,uVar4,0);
        }
        return;
      }
    }
  }
LAB_042c8530:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

