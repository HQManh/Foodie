// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<<PlayLevel>g__IEBeforeLoad|47_0>d$$MoveNext
// address: 0x439842c
// body: available
// range: 0x439842c-0x439879f inclusive
// range: 0x4398848-0x439884b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4398794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4398798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439879c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4398848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_LevelPlayLoadAndSetupControl_<<PlayLevel>g__IEBeforeLoad_47_0>d__MoveNext
          (long param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  long *local_50;
  ulong uStack_48;
  
  if ((DAT_09517a7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517a7b = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar2 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) {
LAB_04398848:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0);
    }
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__ReleaseAllLoadedAsset(lVar10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar5 = 2;
LAB_04398694:
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar4 = 1;
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 == 0) goto LAB_04398848;
      auVar12 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__SetUpBeforeLoadLevelScene(lVar10);
      *(undefined1 (*) [16])(param_1 + 0x28) = auVar12;
      thunk_FUN_03f5d7b8((undefined1 (*) [16])(param_1 + 0x28),0);
    }
    else {
      if (iVar2 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar1 = *(undefined2 *)(param_1 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_043985d8;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091868c0,0);
LAB_043985d8:
      iVar2 = (*(code *)*puVar3)(plVar11,uVar1,puVar3[1]);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar5 = 3;
        goto LAB_04398694;
      }
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = *(ulong *)(param_1 + 0x30);
    local_50 = *(long **)(param_1 + 0x28);
    thunk_FUN_03f5d7b8(&local_50,0);
    uVar7 = uStack_48;
    plVar11 = local_50;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_043986b0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091868c0,2);
LAB_043986b0:
      (*(code *)*puVar3)(plVar11,uVar7 & 0xffffffff,puVar3[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(lVar10 + 0x30);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x10);
    uVar5 = *(undefined4 *)(lVar6 + 0x1c);
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                      (uVar4,uVar5,0);
    uVar7 = FUN_05a8eda4(DAT_091b4ab0);
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar6 + 0xb8),uVar4,0);
    }
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__ProcessLevelDesignData(lVar10,uVar4);
    uVar4 = 0;
  }
  return uVar4;
}

