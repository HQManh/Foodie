// rea decompile_all
// name: CakeOrder.Home.UIItemToolUpgrade$$SetUp
// address: 0x4348a60
// body: available
// range: 0x4348a60-0x4348dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4348d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4348d98 to 0x4348e40 CakeOrder.Home.UIItemToolUpgrade$$UpdateVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4348da4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4348da8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolUpgrade__SetUp
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               byte param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_0951777e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5540);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4c90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180778);
    DAT_0951777e = 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf0),param_2);
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *puVar6 = param_3;
  thunk_FUN_03f5d7b8(puVar6,param_3);
  plVar7 = (long *)(param_1 + 0x50);
  *plVar7 = param_4;
  thunk_FUN_03f5d7b8(plVar7,param_4);
  plVar5 = (long *)(param_1 + 0x58);
  *plVar5 = param_5;
  thunk_FUN_03f5d7b8(plVar5,param_5);
  *(byte *)(param_1 + 0xd8) = param_6 & 1;
  if ((*plVar5 == 0) ||
     (lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*plVar5,0), lVar3 == 0)) {
    uVar2 = 1;
  }
  else {
    if ((*plVar5 == 0) ||
       (lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*plVar5,0), lVar3 == 0))
    goto LAB_04348d48;
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  lVar3 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if ((*plVar7 != 0) && (**(long **)(lVar3 + 0xb8) != 0)) {
    uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetToolLevel
                      (**(long **)(lVar3 + 0xb8),*puVar6,*(undefined8 *)(*plVar7 + 0x18),0);
    *(undefined4 *)(param_1 + 0xdc) = uVar2;
    if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 200) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x38);
      lVar3 = *(long *)(param_1 + 0x70);
      UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 200),uVar8,0);
      if (lVar3 != 0) {
        UnityEngine_UI_Image__set_sprite(lVar3,uVar8,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          plVar7 = *(long **)(param_1 + 0x60);
          uVar8 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName
                            (*(long *)(param_1 + 0x50),0);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x560));
            if (*plVar5 != 0) {
              lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*plVar5,0);
              if (lVar3 == 0) {
LAB_04348d4c:
                if ((*(long *)(param_1 + 0xa8) != 0) &&
                   (plVar5 = (long *)FUN_04a6a14c(*(long *)(param_1 + 0xa8),DAT_091c5540),
                   plVar5 != (long *)0x0)) {
                  (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
                  CakeOrder_Home_UIItemToolUpgrade__SetSelected(param_1,0);
                  CakeOrder_Home_UIItemToolUpgrade__UpdateVisual(param_1);
                  return;
                }
              }
              else if ((*plVar5 != 0) &&
                      (lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*plVar5,0),
                      lVar3 != 0)) {
                uVar8 = FUN_03f5c394(DAT_09180778,*(undefined4 *)(lVar3 + 0x18));
                puVar6 = (undefined8 *)(param_1 + 0xb8);
                *puVar6 = uVar8;
                thunk_FUN_03f5d7b8(puVar6,uVar8);
                lVar3 = *(long *)(param_1 + 0x58);
                if (lVar3 != 0) {
                  uVar9 = 0;
                  lVar10 = 0x20;
                  do {
                    lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(lVar3,0);
                    if (lVar3 == 0) break;
                    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar9) goto LAB_04348d4c;
                    uVar8 = *(undefined8 *)(param_1 + 0x98);
                    uVar1 = *(undefined8 *)(param_1 + 0xa0);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar3 = FUN_04c35338(uVar1,uVar8,DAT_091d4c90);
                    if (lVar3 == 0) break;
                    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar3,0);
                    CakeOrder_BaseUI_UIElementWithAnimHighlight__SetStateImmediate(lVar3,0,0);
                    plVar7 = (long *)*puVar6;
                    if (plVar7 == (long *)0x0) break;
                    lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40));
                    if (lVar4 == 0) {
                      uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar8,0);
                    }
                    if (*(uint *)(plVar7 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar7[uVar9 + 4] = lVar3;
                    thunk_FUN_03f5d7b8((long)plVar7 + lVar10,lVar3);
                    lVar3 = *plVar5;
                    uVar9 = uVar9 + 1;
                    lVar10 = lVar10 + 8;
                  } while (lVar3 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04348d48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

