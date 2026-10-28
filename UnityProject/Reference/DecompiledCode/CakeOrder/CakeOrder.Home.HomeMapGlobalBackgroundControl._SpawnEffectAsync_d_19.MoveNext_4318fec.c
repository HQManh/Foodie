// rea decompile_all
// name: CakeOrder.Home.HomeMapGlobalBackgroundControl.<SpawnEffectAsync>d__19$$MoveNext
// address: 0x4318fec
// body: available
// range: 0x4318fec-0x431947b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4319474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapGlobalBackgroundControl_<SpawnEffectAsync>d__19__MoveNext(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *local_c8;
  long lStack_c0;
  ulong local_b8;
  undefined4 local_a8;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  long *local_80;
  long lStack_78;
  ulong local_70;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long *local_40;
  long lStack_38;
  ulong local_30;
  
  if ((DAT_09517614 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091c1de0);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091cd8a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dbce0);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_09517614 = 1;
  }
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  local_80 = (long *)0x0;
  lStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  lStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0x12);
    lStack_78 = *(long *)(param_1 + 0x10);
    local_80 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    plVar3 = *(long **)(param_1 + 6);
    if ((plVar3 == (long *)0x0) ||
       (uVar4 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250)),
       (uVar4 & 1) == 0)) goto LAB_043193d0;
    uVar6 = *(undefined8 *)(param_1 + 6);
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_AddressableAssets_Addressables__InstantiateAsync(&local_40,uVar6,uVar1,0,1,0);
    lVar7 = *(long *)(param_1 + 10);
    local_50 = local_30;
    lStack_58 = lStack_38;
    local_60 = local_40;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar7 + 0x18))
              (*(undefined8 *)(lVar7 + 0x40),&local_40,*(undefined8 *)(lVar7 + 0x28));
    lStack_38 = lStack_58;
    local_40 = local_60;
    local_30 = local_50;
    FUN_04b722fc(&local_c8,&local_40,0,8,*(undefined8 *)(param_1 + 0xc),0,0,DAT_091bf6e8);
    lStack_38 = 0;
    local_30 = 0;
    lStack_98 = lStack_c0;
    local_a0 = local_c8;
    local_90 = local_b8;
    local_40 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_38 = lStack_98;
    local_40 = local_a0;
    local_30 = local_90;
    thunk_FUN_03f5d7b8(&local_40,0);
    lStack_78 = lStack_38;
    local_80 = local_40;
    local_70 = local_30;
    uVar4 = FUN_041e5390(&local_80,DAT_0919a5d8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0x10) = lStack_78;
      *(long **)(param_1 + 0xe) = local_80;
      *(ulong *)(param_1 + 0x12) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_043245c0(param_1 + 2,&local_80,param_1,DAT_091c1de0);
      return;
    }
  }
  plVar3 = local_80;
  lVar7 = lStack_78;
  if (local_80 != (long *)0x0) {
    uVar4 = local_70 & 0xffff;
    lVar7 = *(long *)(DAT_0919a5d0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_043192fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,lVar7,0);
LAB_043192fc:
    lVar7 = (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = FUN_04b7c324(lVar7,DAT_091cd8a0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      uVar6 = DG_Tweening_DOTweenModuleUI__DOFade(0x3f800000,0x3e800000,uVar6,0);
      uVar6 = FUN_04d95504(0,uVar6,1,0,DAT_091dbce0);
      uVar6 = FUN_04d9656c(uVar6,1,DAT_091dc008);
      FUN_04d8dd74(uVar6,DAT_091dbc98);
    }
  }
LAB_043193d0:
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar3 = *(long **)(param_1 + 2);
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_04319458;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091866a8,2);
LAB_04319458:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  return;
}

