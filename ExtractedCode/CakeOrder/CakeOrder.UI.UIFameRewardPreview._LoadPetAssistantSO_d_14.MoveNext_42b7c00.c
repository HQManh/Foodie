// rea decompile_all
// name: CakeOrder.UI.UIFameRewardPreview.<LoadPetAssistantSO>d__14$$MoveNext
// address: 0x42b7c00
// body: available
// range: 0x42b7c00-0x42b7f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b7f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b7f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIFameRewardPreview_<LoadPetAssistantSO>d__14__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
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
  
  if ((DAT_095172dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf710);
    FUN_03f5c2a4(&DAT_09197948);
    FUN_03f5c2a4(&DAT_09197950);
    FUN_03f5c2a4(&DAT_09199c68);
    FUN_03f5c2a4(&DAT_09199c88);
    FUN_03f5c2a4(&DAT_0919a6c0);
    FUN_03f5c2a4(&DAT_0919a6c8);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091bdee0);
    DAT_095172dc = 1;
  }
  lVar9 = *(long *)(param_1 + 8);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0xe);
    uStack_68 = *(undefined8 *)(param_1 + 0xc);
    local_70 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar1 = FUN_05a8f088(DAT_091b4b68);
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      goto LAB_042b7ebc;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0640f598(lVar9 + 0x88,DAT_09197948);
    uStack_48 = *(undefined8 *)(lVar9 + 0x90);
    local_50 = *(long **)(lVar9 + 0x88);
    local_40 = *(undefined8 *)(lVar9 + 0x98);
    FUN_04b722fc(&local_b8,&local_50,0,8,0,0,0,DAT_091bf710);
    uStack_48 = 0;
    local_40 = 0;
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    local_80 = local_a8;
    local_50 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdee0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_48 = uStack_88;
    local_50 = local_90;
    local_40 = local_80;
    thunk_FUN_03f5d7b8(&local_50,0);
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar1 = FUN_041e5390(&local_70,DAT_0919a6c8);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_68;
      *(long **)(param_1 + 10) = local_70;
      *(ulong *)(param_1 + 0xe) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_042c5538(param_1 + 2,&local_70,param_1,DAT_09199c68);
      return;
    }
  }
  plVar8 = local_70;
  if (local_70 != (long *)0x0) {
    uVar1 = local_60 & 0xffff;
    lVar2 = *(long *)(DAT_0919a6c0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042b7e90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_042b7e90:
    (*(code *)*puVar3)(plVar8,uVar1,puVar3[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = FUN_0640f7ac(lVar9 + 0x88,DAT_09197950);
LAB_042b7ebc:
  plVar8 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar4);
  }
  else {
    lVar9 = *(long *)(DAT_09199c88 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar2 = *plVar8;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_042b7f6c;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar9,2);
LAB_042b7f6c:
    (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
  }
  return;
}

