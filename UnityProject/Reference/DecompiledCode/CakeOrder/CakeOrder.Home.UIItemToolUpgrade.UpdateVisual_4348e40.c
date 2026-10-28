// rea decompile_all
// name: CakeOrder.Home.UIItemToolUpgrade$$UpdateVisual
// address: 0x4348e40
// body: available
// range: 0x4348e40-0x434920b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43491e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43491fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4349208 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolUpgrade__UpdateVisual(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  long *plVar11;
  int local_28;
  int local_24;
  
  if ((DAT_09517784 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091c5540);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0921eca0);
    FUN_03f5c2a4(&DAT_0921eca8);
    DAT_09517784 = 1;
  }
  local_24 = 0;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    return;
  }
  plVar11 = *(long **)(param_1 + 0x80);
  if (*(int *)(param_1 + 0xdc) + 1 < *(int *)(param_1 + 0xe0)) {
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_28 = *(int *)(param_1 + 0xdc) + 1;
    lVar3 = FUN_03f5c42c(DAT_09535420,&local_28);
    if (plVar2 == (long *)0x0) goto LAB_043491e8;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_043491fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921eca8,plVar2,0);
    if (plVar11 == (long *)0x0) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x558))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x560));
    if ((*(long *)(param_1 + 0xa8) == 0) ||
       (plVar11 = (long *)FUN_04a6a14c(*(long *)(param_1 + 0xa8),DAT_091c5540),
       plVar11 == (long *)0x0)) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x188))(0,plVar11,0,*(undefined8 *)(*plVar11 + 400));
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*(long *)(param_1 + 0x58),0),
       lVar3 == 0)) goto LAB_043491e8;
    uVar10 = *(int *)(param_1 + 0xdc) + 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_043491fc;
    plVar11 = *(long **)(param_1 + 0xb0);
    local_24 = *(int *)(lVar3 + (long)(int)uVar10 * 4 + 0x20);
    uVar5 = System_Int32__ToString(&local_24,0);
    if (plVar11 == (long *)0x0) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x558))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x560));
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_043491e8;
    lVar4 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48);
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if ((lVar4 == 0) || (**(long **)(lVar3 + 0xb8) == 0)) goto LAB_043491e8;
    iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar4 + 0x18),0);
    plVar11 = *(long **)(param_1 + 0xb0);
    if (iVar1 < local_24) {
      puVar6 = (undefined4 *)(lVar4 + 0x50);
      puVar7 = (undefined4 *)(lVar4 + 0x54);
      puVar8 = (undefined4 *)(lVar4 + 0x58);
      puVar9 = (undefined4 *)(lVar4 + 0x5c);
    }
    else {
      puVar6 = (undefined4 *)(lVar4 + 0x40);
      puVar7 = (undefined4 *)(lVar4 + 0x44);
      puVar8 = (undefined4 *)(lVar4 + 0x48);
      puVar9 = (undefined4 *)(lVar4 + 0x4c);
    }
    if (plVar11 == (long *)0x0) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x2a8))
              (*puVar6,*puVar7,*puVar8,*puVar9,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
  }
  else {
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921eca0,0);
    if (plVar11 == (long *)0x0) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x558))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x560));
    if ((*(long *)(param_1 + 0xa8) == 0) ||
       (plVar11 = (long *)FUN_04a6a14c(*(long *)(param_1 + 0xa8),DAT_091c5540),
       plVar11 == (long *)0x0)) goto LAB_043491e8;
    (**(code **)(*plVar11 + 0x1b8))(0,plVar11,0,*(undefined8 *)(*plVar11 + 0x1c0));
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      uVar10 = (uint)lVar4;
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar10) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_043491fc;
      lVar3 = *(long *)(lVar3 + lVar4 * 8 + 0x20);
      if (lVar3 == 0) break;
      CakeOrder_BaseUI_UIElementWithAnimHighlight__UpdateState
                (0,lVar3,(int)uVar10 <= *(int *)(param_1 + 0xdc),0);
      lVar3 = *(long *)(param_1 + 0xb8);
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
LAB_043491e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

