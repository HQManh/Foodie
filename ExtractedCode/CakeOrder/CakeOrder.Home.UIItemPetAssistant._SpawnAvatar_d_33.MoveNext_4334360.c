// rea decompile_all
// name: CakeOrder.Home.UIItemPetAssistant.<SpawnAvatar>d__33$$MoveNext
// address: 0x4334360
// body: available
// range: 0x4334360-0x43348db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43348b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43348d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemPetAssistant_<SpawnAvatar>d__33__MoveNext(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long *local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined4 local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  
  if ((DAT_095176ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_091c1df8);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091cda88);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_095176ea = 1;
  }
  lVar14 = *(long *)(param_1 + 6);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  if (*param_1 == 0) {
    local_80 = *(ulong *)(param_1 + 0xc);
    uStack_88 = *(undefined8 *)(param_1 + 10);
    local_90 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar14 + 0x50) + 0x40);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_70,uVar10,DAT_091bf638);
    local_d0 = local_60;
    uStack_d8 = uStack_68;
    local_e0 = local_70;
    *(undefined8 *)(lVar14 + 0xe0) = uStack_68;
    *(long **)(lVar14 + 0xd8) = local_70;
    *(ulong *)(lVar14 + 0xe8) = local_60;
    thunk_FUN_03f5d7b8(lVar14 + 0xd8,0);
    uStack_68 = *(undefined8 *)(lVar14 + 0xe0);
    local_70 = *(long **)(lVar14 + 0xd8);
    local_60 = *(undefined8 *)(lVar14 + 0xe8);
    FUN_04b722fc(&local_f8,&local_70,0,8,0,0,0,DAT_091bf6e8);
    uStack_68 = 0;
    local_60 = 0;
    uStack_a8 = uStack_f0;
    local_b0 = local_f8;
    local_a0 = local_e8;
    local_70 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    local_60 = local_a0;
    thunk_FUN_03f5d7b8(&local_70,0);
    uStack_88 = uStack_68;
    local_90 = local_70;
    local_80 = local_60;
    uVar3 = FUN_041e5390(&local_90,DAT_0919a5d8);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_88;
      *(long **)(param_1 + 8) = local_90;
      *(ulong *)(param_1 + 0xc) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_04341228(param_1 + 2,&local_90,param_1,DAT_091c1df8);
      return;
    }
  }
  plVar11 = local_90;
  if (local_90 != (long *)0x0) {
    uVar3 = local_80 & 0xffff;
    lVar4 = *(long *)(DAT_0919a5d0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04334644;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar11,lVar4,0);
LAB_04334644:
    (*(code *)*puVar5)(plVar11,uVar3,puVar5[1]);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar10 = FUN_0640f7ac(lVar14 + 0xd8,DAT_09197800);
  uVar12 = *(undefined8 *)(lVar14 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = FUN_04c35338(uVar10,uVar12,DAT_091d4bc0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = FUN_04b7c324(lVar4,DAT_091cda88);
  plVar11 = (long *)(lVar14 + 0xa8);
  *plVar11 = lVar4;
  thunk_FUN_03f5d7b8(plVar11);
  plVar13 = (long *)*plVar11;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(undefined1 *)(lVar14 + 0xb0);
  plVar13[9] = *(long *)(lVar14 + 0x50);
  thunk_FUN_03f5d7b8();
  *(undefined1 *)(plVar13 + 10) = uVar1;
  (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = UnityEngine_Component__get_transform(*plVar11,0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar7 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  uVar15 = *puVar7;
  uVar16 = puVar7[1];
  uVar17 = puVar7[2];
  if (DAT_09515ed5 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
  UnityEngine_Transform__SetLocalPositionAndRotation
            (uVar15,uVar16,uVar17,*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar14,0);
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = UnityEngine_Component__get_transform(*plVar11,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Transform__set_localScale
            (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
             *(undefined4 *)(lVar4 + 0x14),lVar14,0);
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04334890;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_04334890:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  return;
}

