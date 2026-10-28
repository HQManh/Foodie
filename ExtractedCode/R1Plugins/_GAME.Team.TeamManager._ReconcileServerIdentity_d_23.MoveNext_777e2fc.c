// rea decompile_all
// name: _GAME.Team.TeamManager.<ReconcileServerIdentity>d__23$$MoveNext
// address: 0x777e2fc
// body: available
// range: 0x777e2fc-0x777e5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<ReconcileServerIdentity>d__23__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09522d08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199898);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a750);
    FUN_03f5c2a4(&DAT_0919a758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf38);
    DAT_09522d08 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = _GAME_Team_TeamManager__ReconcileServerIdentityDetailed(uVar1,uVar2);
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf38 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_30 = auVar11;
    thunk_FUN_03f5d7b8(local_30,0);
    local_40 = local_30;
    uVar5 = FUN_0429cb44(local_40,DAT_0919a758);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_0478f92c(param_1 + 2,local_40,param_1,DAT_09199898);
      return;
    }
  }
  uVar1 = local_40._0_8_;
  if ((long *)local_40._0_8_ == (long *)0x0) {
    iVar4 = local_40._8_4_;
  }
  else {
    uVar3 = local_40._12_2_;
    lVar6 = *(long *)(DAT_0919a750 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *(long *)uVar1;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0777e4e0;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar1,lVar6,0);
LAB_0777e4e0:
    iVar4 = (*(code *)*puVar7)(uVar1,uVar3,puVar7[1]);
  }
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(bool *)(param_1 + 6) = iVar4 == 1;
  }
  else {
    lVar6 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0777e5a0;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar10,lVar6,2);
LAB_0777e5a0:
    (*(code *)*puVar7)(plVar10,iVar4 == 1,puVar7[1]);
  }
  return;
}

