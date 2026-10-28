// rea decompile_all
// name: AnhPD.Home.UIHomeMap$$SetUp
// address: 0x41d27f8
// body: available
// range: 0x41d27f8-0x41d2beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d2bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d2bdc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d2be8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] AnhPD_Home_UIHomeMap__SetUp(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if ((DAT_09516a42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a78);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091d4ca0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180780);
    FUN_03f5c2a4(&DAT_091dca00);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516a42 = 1;
  }
  lVar5 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar5 + 0xb8),0);
    lVar5 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar9 = **(long **)(lVar5 + 0xb8);
    lVar5 = FUN_03f5c394(DAT_09180780,uVar2);
    plVar10 = (long *)(param_1 + 0x60);
    *plVar10 = lVar5;
    thunk_FUN_03f5d7b8(plVar10,lVar5);
    if (0 < (int)uVar2) {
      uVar11 = 0;
      lVar5 = 0x20;
      do {
        uVar8 = *(undefined8 *)(param_1 + 0x58);
        plVar1 = *(long **)(param_1 + 0x60);
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = FUN_04c35338(uVar8,uVar12,DAT_091d4ca0);
        if (plVar1 == (long *)0x0) goto LAB_041d2bd8;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar7 == 0)) {
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if (*(uint *)(plVar1 + 3) <= uVar11) {
LAB_041d2bdc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(long *)((long)plVar1 + lVar5) = lVar6;
        thunk_FUN_03f5d7b8((long)plVar1 + lVar5,lVar6);
        lVar6 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if ((**(long **)(lVar6 + 0xb8) == 0) ||
           (uVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                              (**(long **)(lVar6 + 0xb8),uVar11,0), lVar9 == 0)) goto LAB_041d2bd8;
        uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlocked(lVar9,uVar8,0)
        ;
        lVar6 = *plVar10;
        if (lVar6 == 0) goto LAB_041d2bd8;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_041d2bdc;
        if (*(long *)(lVar6 + lVar5) == 0) goto LAB_041d2bd8;
        AnhPD_Home_UIHomeMapSection__Setup(*(long *)(lVar6 + lVar5),lVar9,uVar11,uVar3 & 1,10);
        lVar6 = *plVar10;
        if (lVar6 == 0) goto LAB_041d2bd8;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_041d2bdc;
        if (*(long *)(lVar6 + lVar5) == 0) goto LAB_041d2bd8;
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar6 + lVar5),0);
        lVar6 = *plVar10;
        if (lVar6 == 0) goto LAB_041d2bd8;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_041d2bdc;
        if ((*(long *)(lVar6 + lVar5) == 0) ||
           (lVar6 = *(long *)(*(long *)(lVar6 + lVar5) + 0x68), lVar6 == 0)) goto LAB_041d2bd8;
        UnityEngine_Behaviour__set_enabled(lVar6,0,0);
        lVar6 = *plVar10;
        if (lVar6 == 0) goto LAB_041d2bd8;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_041d2bdc;
        lVar6 = *(long *)(lVar6 + lVar5);
        uVar8 = thunk_FUN_03f9944c(DAT_09174a78);
        FUN_070a8c30(uVar8,param_1,DAT_091dca00,0);
        if (lVar6 == 0) goto LAB_041d2bd8;
        AnhPD_Home_UIHomeMapSection__add_onSelected(lVar6,uVar8);
        uVar11 = uVar11 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar2 != uVar11);
    }
    *(undefined8 *)(param_1 + 0x68) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),param_2);
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      uVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                        (**(long **)(lVar5 + 0xb8),param_2,0);
      lVar5 = DAT_0918c610;
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424(lVar5);
        lVar5 = DAT_0918c610;
      }
      return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 0x10);
    }
  }
LAB_041d2bd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

