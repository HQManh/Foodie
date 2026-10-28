// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl.<SetUp>d__25$$MoveNext
// address: 0x431d534
// body: available
// range: 0x431d534-0x431d9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431d9cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431d9d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431d9d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431d9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431d9dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431d9e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl_<SetUp>d__25__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09517636 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2010);
    FUN_03f5c2a4(&DAT_09181e18);
    FUN_03f5c2a4(&DAT_091cea88);
    FUN_03f5c2a4(&DAT_091cea98);
    FUN_03f5c2a4(&DAT_091ceaa0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517636 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = *(long *)(param_1 + 6);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar7 = (long *)(lVar6 + 0x90);
    *plVar7 = *(long *)(param_1 + 8);
    thunk_FUN_03f5d7b8(plVar7);
    puVar9 = (undefined8 *)(lVar6 + 0x30);
    uVar11 = *puVar9;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar3 & 1) == 0) {
      uVar11 = UnityEngine_Camera__get_main(0);
      *puVar9 = uVar11;
      thunk_FUN_03f5d7b8(puVar9);
    }
    lVar10 = *plVar7;
    uVar11 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar11,lVar6,DAT_091ceaa0,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeSelectionControl__add_onSelectedMapChanged(lVar10,uVar11);
    lVar10 = *plVar7;
    uVar11 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar11,lVar6,DAT_091cea98,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeSelectionControl__add_onSelectedLevelChanged(lVar10,uVar11);
    uVar11 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar11,lVar6,DAT_091cea88,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09181e18);
    Utilities_BoolModifierWithRegisteredSource___ctor(uVar4,uVar11,0);
    *(undefined8 *)(lVar6 + 0x88) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x88),uVar4);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar6 + 100) = *(undefined4 *)(*plVar7 + 0x28);
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = UnityEngine_Transform__get_position(*(long *)(lVar6 + 0x20),0);
    *(undefined4 *)(lVar6 + 0x68) = uVar12;
    *(undefined4 *)(lVar6 + 0x6c) = 0xffffffff;
    if (*(long *)(lVar6 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = CakeOrder_Home_HomeRestaurantsBuildingControl__LoadAndSetUpBuildings
                         (lVar6,*(undefined4 *)(*(long *)(lVar6 + 0x90) + 0x28));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_50,0);
    uVar4 = local_50._8_8_;
    uVar11 = local_50._0_8_;
    local_60 = local_50;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    if ((long *)uVar11 != (long *)0x0) {
      lVar6 = *(long *)uVar11;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091868c0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0431d840;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar11,DAT_091868c0,0);
LAB_0431d840:
      iVar2 = (*(code *)*puVar9)(uVar11,uVar4 & 0xffffffff,puVar9[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_04324c08(param_1 + 2,local_60,param_1,DAT_091c2010);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar11 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_60._0_8_;
    uVar8 = local_60._8_8_ & 0xffff;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091868c0) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0431d8d8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0431d8d8:
    (*(code *)*puVar9)(uVar11,uVar8,puVar9[1]);
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0431d970;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0431d970:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  return;
}

