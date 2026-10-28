// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge.<>c__DisplayClass66_0$$<PurchaseIap>b__0
// address: 0x7761718
// body: available
// range: 0x7761718-0x7761a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7761a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761a7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761a8c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077619ec) */
/* WARNING: Removing unreachable block (ram,0x07761a88) */

void _GAME_Bridge_CookOrderBridge_<>c__DisplayClass66_0__<PurchaseIap>b__0
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09522c39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a570);
    FUN_03f5c2a4(&DAT_0917ac20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b4d00);
    DAT_09522c39 = 1;
  }
  uVar1 = System_String__op_Inequality(param_2,*(undefined8 *)(param_1 + 0x10),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07761a84;
  CakeOrder_Shop_InAppShopDataAccess__remove_onBuyPack
            (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),0);
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a570) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07761860;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a570,0);
LAB_07761860:
    plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_077618dc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_077618dc:
      uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        if (plVar6 == (long *)0x0) break;
        lVar2 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 == 0) goto LAB_077619b8;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_077619a0;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917ac20) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_07761940;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac20,0);
LAB_07761940:
      uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      CakeOrder_UI_RewardListData__AddReward(param_3,uVar4,1,0,0);
    } while( true );
  }
  goto LAB_077619f0;
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar5 = piVar5 + 4;
    if (uVar1 == 0) break;
LAB_077619a0:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_077619d4;
    }
  }
LAB_077619b8:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_077619d4:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
LAB_077619f0:
  uVar1 = FUN_05a8f088(DAT_091b4d00);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(DAT_091b4cf8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_07761a84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(**(long **)(lVar2 + 0xb8),param_3,0,0,0);
    Utilities_AsyncExtension__RunWithLogException(uVar4,0);
  }
  return;
}

