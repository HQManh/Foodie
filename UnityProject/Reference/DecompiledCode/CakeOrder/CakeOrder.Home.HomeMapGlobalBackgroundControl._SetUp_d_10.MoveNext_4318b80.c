// rea decompile_all
// name: CakeOrder.Home.HomeMapGlobalBackgroundControl.<SetUp>d__10$$MoveNext
// address: 0x4318b80
// body: available
// range: 0x4318b80-0x4318f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4318f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4318f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4318f14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapGlobalBackgroundControl_<SetUp>d__10__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09517613 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c1ff8);
    FUN_03f5c2a4(&DAT_091cea60);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517613 = 1;
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
    lVar8 = *(long *)(param_1 + 6);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar9 = (long *)(lVar8 + 0x48);
    *plVar9 = *(long *)(param_1 + 8);
    thunk_FUN_03f5d7b8(plVar9);
    lVar11 = *plVar9;
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,lVar8,DAT_091cea60,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeSelectionControl__add_onSelectedMapChanged(lVar11,uVar4);
    lVar11 = *plVar9;
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,lVar8,DAT_091cea60,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeSelectionControl__add_onSelectedLevelChanged(lVar11,uVar4);
    local_50 = CakeOrder_Home_HomeMapGlobalBackgroundControl__SyncWeatherAsync(lVar8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_50,0);
    uVar2 = local_50._8_8_;
    uVar4 = local_50._0_8_;
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
    if ((long *)uVar4 != (long *)0x0) {
      lVar8 = *(long *)uVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04318d80;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar4,DAT_091868c0,0);
LAB_04318d80:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar2 & 0xffffffff,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_043244b4(param_1 + 2,local_60,param_1,DAT_091c1ff8);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar4 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar8 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04318e18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_04318e18:
    (*(code *)*puVar5)(uVar4,uVar10,puVar5[1]);
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04318eb0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_04318eb0:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}

