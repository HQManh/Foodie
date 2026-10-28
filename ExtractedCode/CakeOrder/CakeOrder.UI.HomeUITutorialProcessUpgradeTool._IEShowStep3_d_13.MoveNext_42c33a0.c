// rea decompile_all
// name: CakeOrder.UI.HomeUITutorialProcessUpgradeTool.<IEShowStep3>d__13$$MoveNext
// address: 0x42c33a0
// body: available
// range: 0x42c33a0-0x42c369f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c369c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_UI_HomeUITutorialProcessUpgradeTool_<IEShowStep3>d__13__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  if ((DAT_09517337 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091ceb48);
    FUN_03f5c2a4(&DAT_091ceb20);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918cec0);
    FUN_03f5c2a4(&DAT_092244c0);
    DAT_09517337 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) ||
         (lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x10), lVar4 == 0)) goto LAB_042c369c;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0xa8);
      uVar2 = thunk_FUN_03f5d7b8();
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x28) + 0xd0) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      if (lVar5 != 0) {
        uVar7 = *(undefined4 *)(lVar5 + 0x40);
        uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar7,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
        uVar7 = 2;
LAB_042c3664:
        *(undefined4 *)(param_1 + 0x10) = uVar7;
        return 1;
      }
    }
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      puVar6 = (undefined8 *)(param_1 + 0x30);
      *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0);
      thunk_FUN_03f5d7b8(puVar6);
      uVar3 = *puVar6;
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092244c0,0);
      if (lVar5 != 0) {
        uVar2 = CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar5,uVar3,uVar2);
        *(undefined1 *)(lVar5 + 0x4c) = 0;
        if (*(long *)(lVar5 + 0x30) != 0) {
          lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18);
          uVar3 = thunk_FUN_03f9944c(DAT_09174e30);
          uVar2 = FUN_071cd244(uVar3,lVar5,DAT_091ceb48,0);
          if (lVar4 != 0) {
            CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onToolUpgraded
                      (lVar4,uVar3,0);
            uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
            FUN_053007d8(uVar2,lVar5,DAT_091ceb20,0);
            uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
            UnityEngine_WaitUntil___ctor(uVar3,uVar2,0);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
            uVar7 = 3;
            goto LAB_042c3664;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
      lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18);
      uVar3 = thunk_FUN_03f9944c(DAT_09174e30);
      uVar2 = FUN_071cd244(uVar3,lVar5,DAT_091ceb48,0);
      if (lVar4 != 0) {
        CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onToolUpgraded(lVar4,uVar3,0)
        ;
        CakeOrder_UI_UITutorialProcessBase__HideTutInstruct(lVar5,*(undefined8 *)(param_1 + 0x30));
        return 0;
      }
    }
  }
LAB_042c369c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar2);
}

