// rea decompile_all
// name: CakeOrder.InGame.InGameBackgroundsControl.BackgroundConfigByWeather.<ShowEffectsAsync>d__8$$MoveNext
// address: 0x4380be4
// body: available
// range: 0x4380be4-0x438109b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4381088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438108c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381090 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameBackgroundsControl_BackgroundConfigByWeather_<ShowEffectsAsync>d__8__MoveNext
               (int *param_1)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_f0;
  long lStack_e8;
  ulong local_e0;
  long *local_d8;
  long lStack_d0;
  ulong local_c8;
  long *local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined4 local_98;
  long *local_90;
  long lStack_88;
  ulong local_80;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  
  if ((DAT_09517970 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091c1e18);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091cd980);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_09517970 = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  lStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0x16);
    lStack_68 = *(long *)(param_1 + 0x14);
    local_70 = *(long **)(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar11 + 0x68) != '\0') goto LAB_04380fe0;
    plVar2 = *(long **)(lVar11 + 0x20);
    *(undefined1 *)(lVar11 + 0x68) = 1;
    if ((plVar2 == (long *)0x0) ||
       (uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250)),
       (uVar3 & 1) == 0)) goto LAB_04380fe0;
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_AddressableAssets_Addressables__InstantiateAsync(&local_50,uVar9,uVar10,0,1,0);
    lStack_b8 = lStack_48;
    local_c0 = local_50;
    local_b0 = local_40;
    *(long *)(lVar11 + 0x50) = lStack_48;
    *(long **)(lVar11 + 0x48) = local_50;
    *(ulong *)(lVar11 + 0x58) = local_40;
    thunk_FUN_03f5d7b8(lVar11 + 0x48,0);
    lStack_48 = *(undefined8 *)(lVar11 + 0x50);
    local_50 = *(long **)(lVar11 + 0x48);
    local_40 = *(undefined8 *)(lVar11 + 0x58);
    FUN_04b722fc(&local_d8,&local_50,0,8,*(undefined8 *)(param_1 + 10),0,0,DAT_091bf6e8);
    lStack_48 = 0;
    local_40 = 0;
    lStack_88 = lStack_d0;
    local_90 = local_d8;
    local_80 = local_c8;
    local_50 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_48 = lStack_88;
    local_50 = local_90;
    local_40 = local_80;
    thunk_FUN_03f5d7b8(&local_50,0);
    lStack_68 = lStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar3 = FUN_041e5390(&local_70,DAT_0919a5d8);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0x14) = lStack_68;
      *(long **)(param_1 + 0x12) = local_70;
      *(ulong *)(param_1 + 0x16) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_04384cfc(param_1 + 2,&local_70,param_1,DAT_091c1e18);
      return;
    }
  }
  plVar2 = local_70;
  lVar4 = lStack_68;
  if (local_70 != (long *)0x0) {
    uVar3 = local_60 & 0xffff;
    lVar4 = *(long *)(DAT_0919a5d0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04380ed8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar2,lVar4,0);
LAB_04380ed8:
    lVar4 = (*(code *)*puVar5)(plVar2,uVar3,puVar5[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar11 + 0x68) == '\0') {
    uVar3 = FUN_0640f598(lVar11 + 0x48,DAT_091977b8);
    if ((uVar3 & 1) != 0) {
      lStack_48 = *(long *)(lVar11 + 0x50);
      local_50 = *(long **)(lVar11 + 0x48);
      local_40 = *(ulong *)(lVar11 + 0x58);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lStack_e8 = lStack_48;
      local_f0 = local_50;
      local_e0 = local_40;
      UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_f0,0);
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined8 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x58) = 0;
    }
  }
  else {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = FUN_04b7c324(lVar4,DAT_091cd980);
      plVar2 = (long *)(lVar11 + 0x60);
      *plVar2 = lVar4;
      thunk_FUN_03f5d7b8(plVar2);
      if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_InGameSingleBackground__Initialize
                (param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],*plVar2,
                 *(undefined8 *)(param_1 + 0xc));
      if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_InGameSingleBackground__Show(*plVar2,0);
    }
  }
LAB_04380fe0:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar2 = *(long **)(param_1 + 2);
  if (plVar2 != (long *)0x0) {
    lVar11 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_04381068;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091866a8,2);
LAB_04381068:
    (*(code *)*puVar5)(plVar2,puVar5[1]);
  }
  return;
}

