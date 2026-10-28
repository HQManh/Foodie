// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig.<LoadTopologyAsync>d__40$$MoveNext
// address: 0x42fde18
// body: available
// range: 0x42fde18-0x42fe2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fe2c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fe2c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_MapUpgradeConfig_<LoadTopologyAsync>d__40__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined4 local_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_09517535 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6d8);
    FUN_03f5c2a4(&DAT_091bf620);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197748);
    FUN_03f5c2a4(&DAT_09197750);
    FUN_03f5c2a4(&DAT_09197758);
    FUN_03f5c2a4(&DAT_091c1db8);
    FUN_03f5c2a4(&DAT_0919a590);
    FUN_03f5c2a4(&DAT_0919a598);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bdde0);
    FUN_03f5c2a4(&DAT_09213eb0);
    FUN_03f5c2a4(&DAT_091f74e8);
    DAT_09517535 = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0xc);
    uStack_68 = *(undefined8 *)(param_1 + 10);
    local_70 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(lVar10 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((((uVar3 & 1) != 0) || (plVar4 = *(long **)(lVar10 + 0x28), plVar4 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)),
       (uVar3 & 1) == 0)) goto LAB_042fe218;
    uVar3 = FUN_0640f598(lVar10 + 0x50,DAT_09197748);
    if ((uVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x28);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(&local_b8,uVar11,DAT_091bf620);
      uStack_48 = uStack_b0;
      local_50 = local_b8;
      local_40 = local_a8;
      *(undefined8 *)(lVar10 + 0x58) = uStack_b0;
      *(long **)(lVar10 + 0x50) = local_b8;
      *(ulong *)(lVar10 + 0x60) = local_a8;
      thunk_FUN_03f5d7b8(lVar10 + 0x50,0);
    }
    uStack_48 = *(undefined8 *)(lVar10 + 0x58);
    local_50 = *(long **)(lVar10 + 0x50);
    local_40 = *(undefined8 *)(lVar10 + 0x60);
    FUN_04b722fc(&local_b8,&local_50,0,8,0,0,0,DAT_091bf6d8);
    uStack_48 = 0;
    local_40 = 0;
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    local_80 = local_a8;
    local_50 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdde0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_48 = uStack_88;
    local_50 = local_90;
    local_40 = local_80;
    thunk_FUN_03f5d7b8(&local_50,0);
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar3 = FUN_041e5390(&local_70,DAT_0919a598);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_68;
      *(long **)(param_1 + 8) = local_70;
      *(ulong *)(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_0430cbd4(param_1 + 2,&local_70,param_1,DAT_091c1db8);
      return;
    }
  }
  plVar4 = local_70;
  if (local_70 != (long *)0x0) {
    uVar3 = local_60 & 0xffff;
    lVar5 = *(long *)(DAT_0919a590 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_042fe170;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,lVar5,0);
LAB_042fe170:
    (*(code *)*puVar6)(plVar4,uVar3,puVar6[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = FUN_0640f818(lVar10 + 0x50,DAT_09197758);
  if (iVar2 == 1) {
    uVar11 = FUN_0640f7ac(lVar10 + 0x50,DAT_09197750);
    *(undefined8 *)(lVar10 + 0x48) = uVar11;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x48));
  }
  else {
    uVar11 = System_String__Concat(DAT_09213eb0,*(undefined8 *)(lVar10 + 0x40),DAT_091f74e8,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar11,lVar10,0);
  }
LAB_042fe218:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar4 = *(long **)(param_1 + 2);
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_042fe2a0;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091866a8,2);
LAB_042fe2a0:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}

