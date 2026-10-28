// rea decompile_all
// name: _GAME.Team.TeamManager.<LoadMemberProfileDetail>d__31$$MoveNext
// address: 0x777d22c
// body: available
// range: 0x777d22c-0x777d547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<LoadMemberProfileDetail>d__31__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined4 local_88;
  long *local_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  long *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  
  if ((DAT_09522d04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199ca8);
    FUN_03f5c2a4(&DAT_09199cd0);
    FUN_03f5c2a4(&DAT_0919a6e0);
    FUN_03f5c2a4(&DAT_0919a6e8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdef8);
    DAT_09522d04 = 1;
  }
  local_88 = 0;
  plStack_78 = (long *)0x0;
  local_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  plStack_48 = (long *)0x0;
  local_50 = (long *)0x0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  if (*param_1 == 0) {
    plStack_48 = *(long **)(param_1 + 0xc);
    local_50 = *(long **)(param_1 + 10);
    uStack_38 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0xe);
    uStack_28 = *(ulong *)(param_1 + 0x14);
    local_30 = *(undefined8 *)(param_1 + 0x12);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Team_TeamManager__LoadMemberProfileDetailEnvelope(&local_c0,uVar7);
    uStack_58 = uStack_98;
    local_60 = local_a0;
    uStack_68 = uStack_a8;
    uStack_70 = local_b0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    plStack_78 = plStack_b8;
    local_80 = local_c0;
    plStack_b8 = (long *)0x0;
    local_c0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdef8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_98 = uStack_58;
    local_a0 = local_60;
    plStack_b8 = plStack_78;
    local_c0 = local_80;
    uStack_a8 = uStack_68;
    local_b0 = uStack_70;
    thunk_FUN_03f5d7b8(&local_c0,0);
    plStack_48 = plStack_b8;
    local_50 = local_c0;
    uStack_38 = uStack_a8;
    local_40 = local_b0;
    uStack_28 = uStack_98;
    local_30 = local_a0;
    uVar1 = FUN_064167ec(&local_50,DAT_0919a6e8);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(ulong *)(param_1 + 0x14) = uStack_28;
      *(undefined8 *)(param_1 + 0x12) = local_30;
      *(long **)(param_1 + 0xc) = plStack_48;
      *(long **)(param_1 + 10) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      *(undefined8 *)(param_1 + 0xe) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_04795128(param_1 + 2,&local_50,param_1,DAT_09199ca8);
      return;
    }
  }
  plVar9 = local_50;
  plVar8 = plStack_48;
  if (local_50 != (long *)0x0) {
    uVar1 = uStack_28 & 0xffff;
    lVar2 = *(long *)(DAT_0919a6e0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0777d460;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,lVar2,0);
LAB_0777d460:
    (*(code *)*puVar3)(&local_c0,plVar9,uVar1,puVar3[1]);
    plVar8 = local_c0;
  }
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(long **)(param_1 + 6) = plVar8;
    thunk_FUN_03f5d7b8(param_1 + 6,plVar8);
  }
  else {
    lVar2 = *(long *)(DAT_09199cd0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0777d528;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,lVar2,2);
LAB_0777d528:
    (*(code *)*puVar3)(plVar9,plVar8,puVar3[1]);
  }
  return;
}

